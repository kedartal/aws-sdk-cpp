﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/UpdateDomainConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDomainConfigResult::UpdateDomainConfigResult()
{
}

UpdateDomainConfigResult::UpdateDomainConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateDomainConfigResult& UpdateDomainConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainConfig"))
  {
    m_domainConfig = jsonValue.GetObject("DomainConfig");

  }

  if(jsonValue.ValueExists("DryRunResults"))
  {
    m_dryRunResults = jsonValue.GetObject("DryRunResults");

  }

  if(jsonValue.ValueExists("DryRunProgressStatus"))
  {
    m_dryRunProgressStatus = jsonValue.GetObject("DryRunProgressStatus");

  }



  return *this;
}
