﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/marketplace-catalog/MarketplaceCatalogClient.h>
#include <aws/marketplace-catalog/MarketplaceCatalogErrorMarshaller.h>
#include <aws/marketplace-catalog/MarketplaceCatalogEndpointProvider.h>
#include <aws/marketplace-catalog/model/CancelChangeSetRequest.h>
#include <aws/marketplace-catalog/model/DescribeChangeSetRequest.h>
#include <aws/marketplace-catalog/model/DescribeEntityRequest.h>
#include <aws/marketplace-catalog/model/ListChangeSetsRequest.h>
#include <aws/marketplace-catalog/model/ListEntitiesRequest.h>
#include <aws/marketplace-catalog/model/ListTagsForResourceRequest.h>
#include <aws/marketplace-catalog/model/StartChangeSetRequest.h>
#include <aws/marketplace-catalog/model/TagResourceRequest.h>
#include <aws/marketplace-catalog/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MarketplaceCatalog;
using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* MarketplaceCatalogClient::SERVICE_NAME = "aws-marketplace";
const char* MarketplaceCatalogClient::ALLOCATION_TAG = "MarketplaceCatalogClient";

MarketplaceCatalogClient::MarketplaceCatalogClient(const MarketplaceCatalog::MarketplaceCatalogClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<MarketplaceCatalogEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MarketplaceCatalogClient::MarketplaceCatalogClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<MarketplaceCatalogEndpointProviderBase> endpointProvider,
                                                   const MarketplaceCatalog::MarketplaceCatalogClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MarketplaceCatalogClient::MarketplaceCatalogClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<MarketplaceCatalogEndpointProviderBase> endpointProvider,
                                                   const MarketplaceCatalog::MarketplaceCatalogClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MarketplaceCatalogClient::MarketplaceCatalogClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MarketplaceCatalogClient::MarketplaceCatalogClient(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MarketplaceCatalogClient::MarketplaceCatalogClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MarketplaceCatalogClient::~MarketplaceCatalogClient()
{
}

std::shared_ptr<MarketplaceCatalogEndpointProviderBase>& MarketplaceCatalogClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MarketplaceCatalogClient::init(const MarketplaceCatalog::MarketplaceCatalogClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Marketplace Catalog");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MarketplaceCatalogClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelChangeSetOutcome MarketplaceCatalogClient::CancelChangeSet(const CancelChangeSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CatalogHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelChangeSet", "Required field: Catalog, is not set");
    return CancelChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Catalog]", false));
  }
  if (!request.ChangeSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelChangeSet", "Required field: ChangeSetId, is not set");
    return CancelChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangeSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CancelChangeSet");
  return CancelChangeSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

DescribeChangeSetOutcome MarketplaceCatalogClient::DescribeChangeSet(const DescribeChangeSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CatalogHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChangeSet", "Required field: Catalog, is not set");
    return DescribeChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Catalog]", false));
  }
  if (!request.ChangeSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChangeSet", "Required field: ChangeSetId, is not set");
    return DescribeChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangeSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeChangeSet");
  return DescribeChangeSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeEntityOutcome MarketplaceCatalogClient::DescribeEntity(const DescribeEntityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CatalogHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeEntity", "Required field: Catalog, is not set");
    return DescribeEntityOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Catalog]", false));
  }
  if (!request.EntityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeEntity", "Required field: EntityId, is not set");
    return DescribeEntityOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeEntity");
  return DescribeEntityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChangeSetsOutcome MarketplaceCatalogClient::ListChangeSets(const ListChangeSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChangeSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChangeSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListChangeSets");
  return ListChangeSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntitiesOutcome MarketplaceCatalogClient::ListEntities(const ListEntitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEntities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEntities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListEntities");
  return ListEntitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome MarketplaceCatalogClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListTagsForResource");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartChangeSetOutcome MarketplaceCatalogClient::StartChangeSet(const StartChangeSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/StartChangeSet");
  return StartChangeSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome MarketplaceCatalogClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/TagResource");
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome MarketplaceCatalogClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UntagResource");
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

