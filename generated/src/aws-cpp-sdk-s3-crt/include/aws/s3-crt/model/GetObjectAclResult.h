﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/Owner.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3-crt/model/RequestCharged.h>
#include <aws/s3-crt/model/Grant.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{
  class GetObjectAclResult
  {
  public:
    AWS_S3CRT_API GetObjectAclResult();
    AWS_S3CRT_API GetObjectAclResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CRT_API GetObjectAclResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> Container for the bucket owner's display name and ID.</p>
     */
    inline const Owner& GetOwner() const{ return m_owner; }

    /**
     * <p> Container for the bucket owner's display name and ID.</p>
     */
    inline void SetOwner(const Owner& value) { m_owner = value; }

    /**
     * <p> Container for the bucket owner's display name and ID.</p>
     */
    inline void SetOwner(Owner&& value) { m_owner = std::move(value); }

    /**
     * <p> Container for the bucket owner's display name and ID.</p>
     */
    inline GetObjectAclResult& WithOwner(const Owner& value) { SetOwner(value); return *this;}

    /**
     * <p> Container for the bucket owner's display name and ID.</p>
     */
    inline GetObjectAclResult& WithOwner(Owner&& value) { SetOwner(std::move(value)); return *this;}


    /**
     * <p>A list of grants.</p>
     */
    inline const Aws::Vector<Grant>& GetGrants() const{ return m_grants; }

    /**
     * <p>A list of grants.</p>
     */
    inline void SetGrants(const Aws::Vector<Grant>& value) { m_grants = value; }

    /**
     * <p>A list of grants.</p>
     */
    inline void SetGrants(Aws::Vector<Grant>&& value) { m_grants = std::move(value); }

    /**
     * <p>A list of grants.</p>
     */
    inline GetObjectAclResult& WithGrants(const Aws::Vector<Grant>& value) { SetGrants(value); return *this;}

    /**
     * <p>A list of grants.</p>
     */
    inline GetObjectAclResult& WithGrants(Aws::Vector<Grant>&& value) { SetGrants(std::move(value)); return *this;}

    /**
     * <p>A list of grants.</p>
     */
    inline GetObjectAclResult& AddGrants(const Grant& value) { m_grants.push_back(value); return *this; }

    /**
     * <p>A list of grants.</p>
     */
    inline GetObjectAclResult& AddGrants(Grant&& value) { m_grants.push_back(std::move(value)); return *this; }


    
    inline const RequestCharged& GetRequestCharged() const{ return m_requestCharged; }

    
    inline void SetRequestCharged(const RequestCharged& value) { m_requestCharged = value; }

    
    inline void SetRequestCharged(RequestCharged&& value) { m_requestCharged = std::move(value); }

    
    inline GetObjectAclResult& WithRequestCharged(const RequestCharged& value) { SetRequestCharged(value); return *this;}

    
    inline GetObjectAclResult& WithRequestCharged(RequestCharged&& value) { SetRequestCharged(std::move(value)); return *this;}

  private:

    Owner m_owner;

    Aws::Vector<Grant> m_grants;

    RequestCharged m_requestCharged;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
