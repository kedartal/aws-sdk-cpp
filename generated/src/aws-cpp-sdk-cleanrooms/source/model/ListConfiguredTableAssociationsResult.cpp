﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListConfiguredTableAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConfiguredTableAssociationsResult::ListConfiguredTableAssociationsResult()
{
}

ListConfiguredTableAssociationsResult::ListConfiguredTableAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConfiguredTableAssociationsResult& ListConfiguredTableAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("configuredTableAssociationSummaries"))
  {
    Aws::Utils::Array<JsonView> configuredTableAssociationSummariesJsonList = jsonValue.GetArray("configuredTableAssociationSummaries");
    for(unsigned configuredTableAssociationSummariesIndex = 0; configuredTableAssociationSummariesIndex < configuredTableAssociationSummariesJsonList.GetLength(); ++configuredTableAssociationSummariesIndex)
    {
      m_configuredTableAssociationSummaries.push_back(configuredTableAssociationSummariesJsonList[configuredTableAssociationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
