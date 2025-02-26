﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/EventType.h>
#include <aws/iot/model/Configuration.h>
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
namespace IoT
{
namespace Model
{
  class DescribeEventConfigurationsResult
  {
  public:
    AWS_IOT_API DescribeEventConfigurationsResult();
    AWS_IOT_API DescribeEventConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeEventConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The event configurations.</p>
     */
    inline const Aws::Map<EventType, Configuration>& GetEventConfigurations() const{ return m_eventConfigurations; }

    /**
     * <p>The event configurations.</p>
     */
    inline void SetEventConfigurations(const Aws::Map<EventType, Configuration>& value) { m_eventConfigurations = value; }

    /**
     * <p>The event configurations.</p>
     */
    inline void SetEventConfigurations(Aws::Map<EventType, Configuration>&& value) { m_eventConfigurations = std::move(value); }

    /**
     * <p>The event configurations.</p>
     */
    inline DescribeEventConfigurationsResult& WithEventConfigurations(const Aws::Map<EventType, Configuration>& value) { SetEventConfigurations(value); return *this;}

    /**
     * <p>The event configurations.</p>
     */
    inline DescribeEventConfigurationsResult& WithEventConfigurations(Aws::Map<EventType, Configuration>&& value) { SetEventConfigurations(std::move(value)); return *this;}

    /**
     * <p>The event configurations.</p>
     */
    inline DescribeEventConfigurationsResult& AddEventConfigurations(const EventType& key, const Configuration& value) { m_eventConfigurations.emplace(key, value); return *this; }

    /**
     * <p>The event configurations.</p>
     */
    inline DescribeEventConfigurationsResult& AddEventConfigurations(EventType&& key, const Configuration& value) { m_eventConfigurations.emplace(std::move(key), value); return *this; }

    /**
     * <p>The event configurations.</p>
     */
    inline DescribeEventConfigurationsResult& AddEventConfigurations(const EventType& key, Configuration&& value) { m_eventConfigurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The event configurations.</p>
     */
    inline DescribeEventConfigurationsResult& AddEventConfigurations(EventType&& key, Configuration&& value) { m_eventConfigurations.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The creation date of the event configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date of the event configuration.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The creation date of the event configuration.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The creation date of the event configuration.</p>
     */
    inline DescribeEventConfigurationsResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date of the event configuration.</p>
     */
    inline DescribeEventConfigurationsResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the event configurations were last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date the event configurations were last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>The date the event configurations were last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date the event configurations were last modified.</p>
     */
    inline DescribeEventConfigurationsResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date the event configurations were last modified.</p>
     */
    inline DescribeEventConfigurationsResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:

    Aws::Map<EventType, Configuration> m_eventConfigurations;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
