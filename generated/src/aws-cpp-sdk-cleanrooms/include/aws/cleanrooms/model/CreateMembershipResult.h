﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/Membership.h>
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
namespace CleanRooms
{
namespace Model
{
  class CreateMembershipResult
  {
  public:
    AWS_CLEANROOMS_API CreateMembershipResult();
    AWS_CLEANROOMS_API CreateMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API CreateMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The membership that was created.</p>
     */
    inline const Membership& GetMembership() const{ return m_membership; }

    /**
     * <p>The membership that was created.</p>
     */
    inline void SetMembership(const Membership& value) { m_membership = value; }

    /**
     * <p>The membership that was created.</p>
     */
    inline void SetMembership(Membership&& value) { m_membership = std::move(value); }

    /**
     * <p>The membership that was created.</p>
     */
    inline CreateMembershipResult& WithMembership(const Membership& value) { SetMembership(value); return *this;}

    /**
     * <p>The membership that was created.</p>
     */
    inline CreateMembershipResult& WithMembership(Membership&& value) { SetMembership(std::move(value)); return *this;}

  private:

    Membership m_membership;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
