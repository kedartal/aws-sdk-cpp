﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TransformJobSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListTransformJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListTransformJobsResult();
    AWS_SAGEMAKER_API ListTransformJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListTransformJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>TransformJobSummary</code> objects.</p>
     */
    inline const Aws::Vector<TransformJobSummary>& GetTransformJobSummaries() const{ return m_transformJobSummaries; }

    /**
     * <p>An array of <code>TransformJobSummary</code> objects.</p>
     */
    inline void SetTransformJobSummaries(const Aws::Vector<TransformJobSummary>& value) { m_transformJobSummaries = value; }

    /**
     * <p>An array of <code>TransformJobSummary</code> objects.</p>
     */
    inline void SetTransformJobSummaries(Aws::Vector<TransformJobSummary>&& value) { m_transformJobSummaries = std::move(value); }

    /**
     * <p>An array of <code>TransformJobSummary</code> objects.</p>
     */
    inline ListTransformJobsResult& WithTransformJobSummaries(const Aws::Vector<TransformJobSummary>& value) { SetTransformJobSummaries(value); return *this;}

    /**
     * <p>An array of <code>TransformJobSummary</code> objects.</p>
     */
    inline ListTransformJobsResult& WithTransformJobSummaries(Aws::Vector<TransformJobSummary>&& value) { SetTransformJobSummaries(std::move(value)); return *this;}

    /**
     * <p>An array of <code>TransformJobSummary</code> objects.</p>
     */
    inline ListTransformJobsResult& AddTransformJobSummaries(const TransformJobSummary& value) { m_transformJobSummaries.push_back(value); return *this; }

    /**
     * <p>An array of <code>TransformJobSummary</code> objects.</p>
     */
    inline ListTransformJobsResult& AddTransformJobSummaries(TransformJobSummary&& value) { m_transformJobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of transform jobs, use it in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of transform jobs, use it in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of transform jobs, use it in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of transform jobs, use it in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of transform jobs, use it in the next request.</p>
     */
    inline ListTransformJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of transform jobs, use it in the next request.</p>
     */
    inline ListTransformJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of transform jobs, use it in the next request.</p>
     */
    inline ListTransformJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TransformJobSummary> m_transformJobSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
