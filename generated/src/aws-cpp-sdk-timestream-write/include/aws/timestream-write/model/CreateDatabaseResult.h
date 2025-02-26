﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/Database.h>
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
namespace TimestreamWrite
{
namespace Model
{
  class CreateDatabaseResult
  {
  public:
    AWS_TIMESTREAMWRITE_API CreateDatabaseResult();
    AWS_TIMESTREAMWRITE_API CreateDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMWRITE_API CreateDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The newly created Timestream database.</p>
     */
    inline const Database& GetDatabase() const{ return m_database; }

    /**
     * <p>The newly created Timestream database.</p>
     */
    inline void SetDatabase(const Database& value) { m_database = value; }

    /**
     * <p>The newly created Timestream database.</p>
     */
    inline void SetDatabase(Database&& value) { m_database = std::move(value); }

    /**
     * <p>The newly created Timestream database.</p>
     */
    inline CreateDatabaseResult& WithDatabase(const Database& value) { SetDatabase(value); return *this;}

    /**
     * <p>The newly created Timestream database.</p>
     */
    inline CreateDatabaseResult& WithDatabase(Database&& value) { SetDatabase(std::move(value)); return *this;}

  private:

    Database m_database;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
