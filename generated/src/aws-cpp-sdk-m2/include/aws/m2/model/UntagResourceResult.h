﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>

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
namespace MainframeModernization
{
namespace Model
{
  class UntagResourceResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API UntagResourceResult();
    AWS_MAINFRAMEMODERNIZATION_API UntagResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API UntagResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
