﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EMR
{
namespace Model
{
  /**
   * <p>Output from an AddInstanceGroups call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceGroupsOutput">AWS
   * API Reference</a></p>
   */
  class AddInstanceGroupsResult
  {
  public:
    AWS_EMR_API AddInstanceGroupsResult();
    AWS_EMR_API AddInstanceGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API AddInstanceGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline const Aws::String& GetJobFlowId() const{ return m_jobFlowId; }

    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline void SetJobFlowId(const Aws::String& value) { m_jobFlowId = value; }

    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline void SetJobFlowId(Aws::String&& value) { m_jobFlowId = std::move(value); }

    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline void SetJobFlowId(const char* value) { m_jobFlowId.assign(value); }

    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline AddInstanceGroupsResult& WithJobFlowId(const Aws::String& value) { SetJobFlowId(value); return *this;}

    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline AddInstanceGroupsResult& WithJobFlowId(Aws::String&& value) { SetJobFlowId(std::move(value)); return *this;}

    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline AddInstanceGroupsResult& WithJobFlowId(const char* value) { SetJobFlowId(value); return *this;}


    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceGroupIds() const{ return m_instanceGroupIds; }

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline void SetInstanceGroupIds(const Aws::Vector<Aws::String>& value) { m_instanceGroupIds = value; }

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline void SetInstanceGroupIds(Aws::Vector<Aws::String>&& value) { m_instanceGroupIds = std::move(value); }

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline AddInstanceGroupsResult& WithInstanceGroupIds(const Aws::Vector<Aws::String>& value) { SetInstanceGroupIds(value); return *this;}

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline AddInstanceGroupsResult& WithInstanceGroupIds(Aws::Vector<Aws::String>&& value) { SetInstanceGroupIds(std::move(value)); return *this;}

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline AddInstanceGroupsResult& AddInstanceGroupIds(const Aws::String& value) { m_instanceGroupIds.push_back(value); return *this; }

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline AddInstanceGroupsResult& AddInstanceGroupIds(Aws::String&& value) { m_instanceGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline AddInstanceGroupsResult& AddInstanceGroupIds(const char* value) { m_instanceGroupIds.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline AddInstanceGroupsResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline AddInstanceGroupsResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline AddInstanceGroupsResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}

  private:

    Aws::String m_jobFlowId;

    Aws::Vector<Aws::String> m_instanceGroupIds;

    Aws::String m_clusterArn;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
