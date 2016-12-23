﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/StatusType.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains the details of a service specific credential.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ServiceSpecificCredential">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API ServiceSpecificCredential
  {
  public:
    ServiceSpecificCredential();
    ServiceSpecificCredential(const Aws::Utils::Xml::XmlNode& xmlNode);
    ServiceSpecificCredential& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the service-specific credential were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the service-specific credential were created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the service-specific credential were created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the service-specific credential were created.</p>
     */
    inline ServiceSpecificCredential& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the service-specific credential were created.</p>
     */
    inline ServiceSpecificCredential& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline ServiceSpecificCredential& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline ServiceSpecificCredential& WithServiceName(Aws::String&& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline ServiceSpecificCredential& WithServiceName(const char* value) { SetServiceName(value); return *this;}

    /**
     * <p>The generated user name for the service-specific credential. This value is
     * generated by combining the IAM user's name combined with the ID number of the
     * AWS account, as in <code>jane-at-123456789012</code>, for example. This value
     * cannot be configured by the user.</p>
     */
    inline const Aws::String& GetServiceUserName() const{ return m_serviceUserName; }

    /**
     * <p>The generated user name for the service-specific credential. This value is
     * generated by combining the IAM user's name combined with the ID number of the
     * AWS account, as in <code>jane-at-123456789012</code>, for example. This value
     * cannot be configured by the user.</p>
     */
    inline void SetServiceUserName(const Aws::String& value) { m_serviceUserNameHasBeenSet = true; m_serviceUserName = value; }

    /**
     * <p>The generated user name for the service-specific credential. This value is
     * generated by combining the IAM user's name combined with the ID number of the
     * AWS account, as in <code>jane-at-123456789012</code>, for example. This value
     * cannot be configured by the user.</p>
     */
    inline void SetServiceUserName(Aws::String&& value) { m_serviceUserNameHasBeenSet = true; m_serviceUserName = value; }

    /**
     * <p>The generated user name for the service-specific credential. This value is
     * generated by combining the IAM user's name combined with the ID number of the
     * AWS account, as in <code>jane-at-123456789012</code>, for example. This value
     * cannot be configured by the user.</p>
     */
    inline void SetServiceUserName(const char* value) { m_serviceUserNameHasBeenSet = true; m_serviceUserName.assign(value); }

    /**
     * <p>The generated user name for the service-specific credential. This value is
     * generated by combining the IAM user's name combined with the ID number of the
     * AWS account, as in <code>jane-at-123456789012</code>, for example. This value
     * cannot be configured by the user.</p>
     */
    inline ServiceSpecificCredential& WithServiceUserName(const Aws::String& value) { SetServiceUserName(value); return *this;}

    /**
     * <p>The generated user name for the service-specific credential. This value is
     * generated by combining the IAM user's name combined with the ID number of the
     * AWS account, as in <code>jane-at-123456789012</code>, for example. This value
     * cannot be configured by the user.</p>
     */
    inline ServiceSpecificCredential& WithServiceUserName(Aws::String&& value) { SetServiceUserName(value); return *this;}

    /**
     * <p>The generated user name for the service-specific credential. This value is
     * generated by combining the IAM user's name combined with the ID number of the
     * AWS account, as in <code>jane-at-123456789012</code>, for example. This value
     * cannot be configured by the user.</p>
     */
    inline ServiceSpecificCredential& WithServiceUserName(const char* value) { SetServiceUserName(value); return *this;}

    /**
     * <p>The generated password for the service-specific credential.</p>
     */
    inline const Aws::String& GetServicePassword() const{ return m_servicePassword; }

    /**
     * <p>The generated password for the service-specific credential.</p>
     */
    inline void SetServicePassword(const Aws::String& value) { m_servicePasswordHasBeenSet = true; m_servicePassword = value; }

    /**
     * <p>The generated password for the service-specific credential.</p>
     */
    inline void SetServicePassword(Aws::String&& value) { m_servicePasswordHasBeenSet = true; m_servicePassword = value; }

    /**
     * <p>The generated password for the service-specific credential.</p>
     */
    inline void SetServicePassword(const char* value) { m_servicePasswordHasBeenSet = true; m_servicePassword.assign(value); }

    /**
     * <p>The generated password for the service-specific credential.</p>
     */
    inline ServiceSpecificCredential& WithServicePassword(const Aws::String& value) { SetServicePassword(value); return *this;}

    /**
     * <p>The generated password for the service-specific credential.</p>
     */
    inline ServiceSpecificCredential& WithServicePassword(Aws::String&& value) { SetServicePassword(value); return *this;}

    /**
     * <p>The generated password for the service-specific credential.</p>
     */
    inline ServiceSpecificCredential& WithServicePassword(const char* value) { SetServicePassword(value); return *this;}

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline const Aws::String& GetServiceSpecificCredentialId() const{ return m_serviceSpecificCredentialId; }

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline void SetServiceSpecificCredentialId(const Aws::String& value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId = value; }

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline void SetServiceSpecificCredentialId(Aws::String&& value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId = value; }

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline void SetServiceSpecificCredentialId(const char* value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId.assign(value); }

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline ServiceSpecificCredential& WithServiceSpecificCredentialId(const Aws::String& value) { SetServiceSpecificCredentialId(value); return *this;}

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline ServiceSpecificCredential& WithServiceSpecificCredentialId(Aws::String&& value) { SetServiceSpecificCredentialId(value); return *this;}

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline ServiceSpecificCredential& WithServiceSpecificCredentialId(const char* value) { SetServiceSpecificCredentialId(value); return *this;}

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline ServiceSpecificCredential& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline ServiceSpecificCredential& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline ServiceSpecificCredential& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The status of the service-specific credential. <code>Active</code> means the
     * key is valid for API calls, while <code>Inactive</code> means it is not.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the service-specific credential. <code>Active</code> means the
     * key is valid for API calls, while <code>Inactive</code> means it is not.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the service-specific credential. <code>Active</code> means the
     * key is valid for API calls, while <code>Inactive</code> means it is not.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the service-specific credential. <code>Active</code> means the
     * key is valid for API calls, while <code>Inactive</code> means it is not.</p>
     */
    inline ServiceSpecificCredential& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the service-specific credential. <code>Active</code> means the
     * key is valid for API calls, while <code>Inactive</code> means it is not.</p>
     */
    inline ServiceSpecificCredential& WithStatus(StatusType&& value) { SetStatus(value); return *this;}

  private:
    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;
    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;
    Aws::String m_serviceUserName;
    bool m_serviceUserNameHasBeenSet;
    Aws::String m_servicePassword;
    bool m_servicePasswordHasBeenSet;
    Aws::String m_serviceSpecificCredentialId;
    bool m_serviceSpecificCredentialIdHasBeenSet;
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    StatusType m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
