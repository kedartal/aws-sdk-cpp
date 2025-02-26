﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/SubscriberResource.h>
#include <utility>

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
namespace SecurityLake
{
namespace Model
{
  class GetSubscriberResult
  {
  public:
    AWS_SECURITYLAKE_API GetSubscriberResult();
    AWS_SECURITYLAKE_API GetSubscriberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API GetSubscriberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The subscription information for the specified subscription ID.</p>
     */
    inline const SubscriberResource& GetSubscriber() const{ return m_subscriber; }

    /**
     * <p>The subscription information for the specified subscription ID.</p>
     */
    inline void SetSubscriber(const SubscriberResource& value) { m_subscriber = value; }

    /**
     * <p>The subscription information for the specified subscription ID.</p>
     */
    inline void SetSubscriber(SubscriberResource&& value) { m_subscriber = std::move(value); }

    /**
     * <p>The subscription information for the specified subscription ID.</p>
     */
    inline GetSubscriberResult& WithSubscriber(const SubscriberResource& value) { SetSubscriber(value); return *this;}

    /**
     * <p>The subscription information for the specified subscription ID.</p>
     */
    inline GetSubscriberResult& WithSubscriber(SubscriberResource&& value) { SetSubscriber(std::move(value)); return *this;}

  private:

    SubscriberResource m_subscriber;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
