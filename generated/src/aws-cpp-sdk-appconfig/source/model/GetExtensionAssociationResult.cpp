﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/GetExtensionAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExtensionAssociationResult::GetExtensionAssociationResult() : 
    m_extensionVersionNumber(0)
{
}

GetExtensionAssociationResult::GetExtensionAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_extensionVersionNumber(0)
{
  *this = result;
}

GetExtensionAssociationResult& GetExtensionAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("ExtensionArn"))
  {
    m_extensionArn = jsonValue.GetString("ExtensionArn");

  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("ExtensionVersionNumber"))
  {
    m_extensionVersionNumber = jsonValue.GetInteger("ExtensionVersionNumber");

  }



  return *this;
}
