﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{
  class DeleteSessionResult
  {
  public:
    AWS_GLUE_API DeleteSessionResult();
    AWS_GLUE_API DeleteSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DeleteSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the ID of the deleted session.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Returns the ID of the deleted session.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>Returns the ID of the deleted session.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>Returns the ID of the deleted session.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>Returns the ID of the deleted session.</p>
     */
    inline DeleteSessionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Returns the ID of the deleted session.</p>
     */
    inline DeleteSessionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Returns the ID of the deleted session.</p>
     */
    inline DeleteSessionResult& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
