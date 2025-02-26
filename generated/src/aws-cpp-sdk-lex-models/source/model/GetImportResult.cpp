﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetImportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetImportResult::GetImportResult() : 
    m_resourceType(ResourceType::NOT_SET),
    m_mergeStrategy(MergeStrategy::NOT_SET),
    m_importStatus(ImportStatus::NOT_SET)
{
}

GetImportResult::GetImportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_resourceType(ResourceType::NOT_SET),
    m_mergeStrategy(MergeStrategy::NOT_SET),
    m_importStatus(ImportStatus::NOT_SET)
{
  *this = result;
}

GetImportResult& GetImportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

  }

  if(jsonValue.ValueExists("mergeStrategy"))
  {
    m_mergeStrategy = MergeStrategyMapper::GetMergeStrategyForName(jsonValue.GetString("mergeStrategy"));

  }

  if(jsonValue.ValueExists("importId"))
  {
    m_importId = jsonValue.GetString("importId");

  }

  if(jsonValue.ValueExists("importStatus"))
  {
    m_importStatus = ImportStatusMapper::GetImportStatusForName(jsonValue.GetString("importStatus"));

  }

  if(jsonValue.ValueExists("failureReason"))
  {
    Aws::Utils::Array<JsonView> failureReasonJsonList = jsonValue.GetArray("failureReason");
    for(unsigned failureReasonIndex = 0; failureReasonIndex < failureReasonJsonList.GetLength(); ++failureReasonIndex)
    {
      m_failureReason.push_back(failureReasonJsonList[failureReasonIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

  }



  return *this;
}
