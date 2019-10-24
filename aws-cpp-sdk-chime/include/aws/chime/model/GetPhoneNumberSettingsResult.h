﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API GetPhoneNumberSettingsResult
  {
  public:
    GetPhoneNumberSettingsResult();
    GetPhoneNumberSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPhoneNumberSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline const Aws::String& GetCallingName() const{ return m_callingName; }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline void SetCallingName(const Aws::String& value) { m_callingName = value; }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline void SetCallingName(Aws::String&& value) { m_callingName = std::move(value); }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline void SetCallingName(const char* value) { m_callingName.assign(value); }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline GetPhoneNumberSettingsResult& WithCallingName(const Aws::String& value) { SetCallingName(value); return *this;}

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline GetPhoneNumberSettingsResult& WithCallingName(Aws::String&& value) { SetCallingName(std::move(value)); return *this;}

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline GetPhoneNumberSettingsResult& WithCallingName(const char* value) { SetCallingName(value); return *this;}


    /**
     * <p>The updated outbound calling name timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCallingNameUpdatedTimestamp() const{ return m_callingNameUpdatedTimestamp; }

    /**
     * <p>The updated outbound calling name timestamp, in ISO 8601 format.</p>
     */
    inline void SetCallingNameUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_callingNameUpdatedTimestamp = value; }

    /**
     * <p>The updated outbound calling name timestamp, in ISO 8601 format.</p>
     */
    inline void SetCallingNameUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_callingNameUpdatedTimestamp = std::move(value); }

    /**
     * <p>The updated outbound calling name timestamp, in ISO 8601 format.</p>
     */
    inline GetPhoneNumberSettingsResult& WithCallingNameUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetCallingNameUpdatedTimestamp(value); return *this;}

    /**
     * <p>The updated outbound calling name timestamp, in ISO 8601 format.</p>
     */
    inline GetPhoneNumberSettingsResult& WithCallingNameUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetCallingNameUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_callingName;

    Aws::Utils::DateTime m_callingNameUpdatedTimestamp;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
