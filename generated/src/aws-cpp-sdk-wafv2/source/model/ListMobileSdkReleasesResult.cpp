﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ListMobileSdkReleasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMobileSdkReleasesResult::ListMobileSdkReleasesResult()
{
}

ListMobileSdkReleasesResult::ListMobileSdkReleasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMobileSdkReleasesResult& ListMobileSdkReleasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReleaseSummaries"))
  {
    Aws::Utils::Array<JsonView> releaseSummariesJsonList = jsonValue.GetArray("ReleaseSummaries");
    for(unsigned releaseSummariesIndex = 0; releaseSummariesIndex < releaseSummariesJsonList.GetLength(); ++releaseSummariesIndex)
    {
      m_releaseSummaries.push_back(releaseSummariesJsonList[releaseSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }



  return *this;
}
