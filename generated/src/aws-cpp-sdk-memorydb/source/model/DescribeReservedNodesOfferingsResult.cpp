﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/DescribeReservedNodesOfferingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReservedNodesOfferingsResult::DescribeReservedNodesOfferingsResult()
{
}

DescribeReservedNodesOfferingsResult::DescribeReservedNodesOfferingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReservedNodesOfferingsResult& DescribeReservedNodesOfferingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ReservedNodesOfferings"))
  {
    Aws::Utils::Array<JsonView> reservedNodesOfferingsJsonList = jsonValue.GetArray("ReservedNodesOfferings");
    for(unsigned reservedNodesOfferingsIndex = 0; reservedNodesOfferingsIndex < reservedNodesOfferingsJsonList.GetLength(); ++reservedNodesOfferingsIndex)
    {
      m_reservedNodesOfferings.push_back(reservedNodesOfferingsJsonList[reservedNodesOfferingsIndex].AsObject());
    }
  }



  return *this;
}
