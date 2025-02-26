﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/RuleGroupSummary.h>
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
namespace WAFRegional
{
namespace Model
{
  class ListRuleGroupsResult
  {
  public:
    AWS_WAFREGIONAL_API ListRuleGroupsResult();
    AWS_WAFREGIONAL_API ListRuleGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API ListRuleGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If you have more <code>RuleGroups</code> than the number that you specified
     * for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RuleGroups</code>, submit
     * another <code>ListRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you have more <code>RuleGroups</code> than the number that you specified
     * for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RuleGroups</code>, submit
     * another <code>ListRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If you have more <code>RuleGroups</code> than the number that you specified
     * for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RuleGroups</code>, submit
     * another <code>ListRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If you have more <code>RuleGroups</code> than the number that you specified
     * for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RuleGroups</code>, submit
     * another <code>ListRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If you have more <code>RuleGroups</code> than the number that you specified
     * for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RuleGroups</code>, submit
     * another <code>ListRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListRuleGroupsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more <code>RuleGroups</code> than the number that you specified
     * for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RuleGroups</code>, submit
     * another <code>ListRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListRuleGroupsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you have more <code>RuleGroups</code> than the number that you specified
     * for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RuleGroups</code>, submit
     * another <code>ListRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListRuleGroupsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline const Aws::Vector<RuleGroupSummary>& GetRuleGroups() const{ return m_ruleGroups; }

    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline void SetRuleGroups(const Aws::Vector<RuleGroupSummary>& value) { m_ruleGroups = value; }

    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline void SetRuleGroups(Aws::Vector<RuleGroupSummary>&& value) { m_ruleGroups = std::move(value); }

    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline ListRuleGroupsResult& WithRuleGroups(const Aws::Vector<RuleGroupSummary>& value) { SetRuleGroups(value); return *this;}

    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline ListRuleGroupsResult& WithRuleGroups(Aws::Vector<RuleGroupSummary>&& value) { SetRuleGroups(std::move(value)); return *this;}

    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline ListRuleGroupsResult& AddRuleGroups(const RuleGroupSummary& value) { m_ruleGroups.push_back(value); return *this; }

    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline ListRuleGroupsResult& AddRuleGroups(RuleGroupSummary&& value) { m_ruleGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<RuleGroupSummary> m_ruleGroups;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
