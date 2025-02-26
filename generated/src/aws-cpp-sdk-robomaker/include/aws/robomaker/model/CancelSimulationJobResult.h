﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RoboMaker
{
namespace Model
{
  class CancelSimulationJobResult
  {
  public:
    AWS_ROBOMAKER_API CancelSimulationJobResult();
    AWS_ROBOMAKER_API CancelSimulationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API CancelSimulationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
