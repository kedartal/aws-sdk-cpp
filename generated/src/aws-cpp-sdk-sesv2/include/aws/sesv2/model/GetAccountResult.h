﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/SendQuota.h>
#include <aws/sesv2/model/SuppressionAttributes.h>
#include <aws/sesv2/model/AccountDetails.h>
#include <aws/sesv2/model/VdmAttributes.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>A list of details about the email-sending capabilities of your Amazon SES
   * account in the current Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetAccountResponse">AWS
   * API Reference</a></p>
   */
  class GetAccountResult
  {
  public:
    AWS_SESV2_API GetAccountResult();
    AWS_SESV2_API GetAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether or not the automatic warm-up feature is enabled for
     * dedicated IP addresses that are associated with your account.</p>
     */
    inline bool GetDedicatedIpAutoWarmupEnabled() const{ return m_dedicatedIpAutoWarmupEnabled; }

    /**
     * <p>Indicates whether or not the automatic warm-up feature is enabled for
     * dedicated IP addresses that are associated with your account.</p>
     */
    inline void SetDedicatedIpAutoWarmupEnabled(bool value) { m_dedicatedIpAutoWarmupEnabled = value; }

    /**
     * <p>Indicates whether or not the automatic warm-up feature is enabled for
     * dedicated IP addresses that are associated with your account.</p>
     */
    inline GetAccountResult& WithDedicatedIpAutoWarmupEnabled(bool value) { SetDedicatedIpAutoWarmupEnabled(value); return *this;}


    /**
     * <p>The reputation status of your Amazon SES account. The status can be one of
     * the following:</p> <ul> <li> <p> <code>HEALTHY</code> – There are no
     * reputation-related issues that currently impact your account.</p> </li> <li> <p>
     * <code>PROBATION</code> – We've identified potential issues with your Amazon SES
     * account. We're placing your account under review while you work on correcting
     * these issues.</p> </li> <li> <p> <code>SHUTDOWN</code> – Your account's ability
     * to send email is currently paused because of an issue with the email sent from
     * your account. When you correct the issue, you can contact us and request that
     * your account's ability to send email is resumed.</p> </li> </ul>
     */
    inline const Aws::String& GetEnforcementStatus() const{ return m_enforcementStatus; }

    /**
     * <p>The reputation status of your Amazon SES account. The status can be one of
     * the following:</p> <ul> <li> <p> <code>HEALTHY</code> – There are no
     * reputation-related issues that currently impact your account.</p> </li> <li> <p>
     * <code>PROBATION</code> – We've identified potential issues with your Amazon SES
     * account. We're placing your account under review while you work on correcting
     * these issues.</p> </li> <li> <p> <code>SHUTDOWN</code> – Your account's ability
     * to send email is currently paused because of an issue with the email sent from
     * your account. When you correct the issue, you can contact us and request that
     * your account's ability to send email is resumed.</p> </li> </ul>
     */
    inline void SetEnforcementStatus(const Aws::String& value) { m_enforcementStatus = value; }

    /**
     * <p>The reputation status of your Amazon SES account. The status can be one of
     * the following:</p> <ul> <li> <p> <code>HEALTHY</code> – There are no
     * reputation-related issues that currently impact your account.</p> </li> <li> <p>
     * <code>PROBATION</code> – We've identified potential issues with your Amazon SES
     * account. We're placing your account under review while you work on correcting
     * these issues.</p> </li> <li> <p> <code>SHUTDOWN</code> – Your account's ability
     * to send email is currently paused because of an issue with the email sent from
     * your account. When you correct the issue, you can contact us and request that
     * your account's ability to send email is resumed.</p> </li> </ul>
     */
    inline void SetEnforcementStatus(Aws::String&& value) { m_enforcementStatus = std::move(value); }

    /**
     * <p>The reputation status of your Amazon SES account. The status can be one of
     * the following:</p> <ul> <li> <p> <code>HEALTHY</code> – There are no
     * reputation-related issues that currently impact your account.</p> </li> <li> <p>
     * <code>PROBATION</code> – We've identified potential issues with your Amazon SES
     * account. We're placing your account under review while you work on correcting
     * these issues.</p> </li> <li> <p> <code>SHUTDOWN</code> – Your account's ability
     * to send email is currently paused because of an issue with the email sent from
     * your account. When you correct the issue, you can contact us and request that
     * your account's ability to send email is resumed.</p> </li> </ul>
     */
    inline void SetEnforcementStatus(const char* value) { m_enforcementStatus.assign(value); }

    /**
     * <p>The reputation status of your Amazon SES account. The status can be one of
     * the following:</p> <ul> <li> <p> <code>HEALTHY</code> – There are no
     * reputation-related issues that currently impact your account.</p> </li> <li> <p>
     * <code>PROBATION</code> – We've identified potential issues with your Amazon SES
     * account. We're placing your account under review while you work on correcting
     * these issues.</p> </li> <li> <p> <code>SHUTDOWN</code> – Your account's ability
     * to send email is currently paused because of an issue with the email sent from
     * your account. When you correct the issue, you can contact us and request that
     * your account's ability to send email is resumed.</p> </li> </ul>
     */
    inline GetAccountResult& WithEnforcementStatus(const Aws::String& value) { SetEnforcementStatus(value); return *this;}

    /**
     * <p>The reputation status of your Amazon SES account. The status can be one of
     * the following:</p> <ul> <li> <p> <code>HEALTHY</code> – There are no
     * reputation-related issues that currently impact your account.</p> </li> <li> <p>
     * <code>PROBATION</code> – We've identified potential issues with your Amazon SES
     * account. We're placing your account under review while you work on correcting
     * these issues.</p> </li> <li> <p> <code>SHUTDOWN</code> – Your account's ability
     * to send email is currently paused because of an issue with the email sent from
     * your account. When you correct the issue, you can contact us and request that
     * your account's ability to send email is resumed.</p> </li> </ul>
     */
    inline GetAccountResult& WithEnforcementStatus(Aws::String&& value) { SetEnforcementStatus(std::move(value)); return *this;}

    /**
     * <p>The reputation status of your Amazon SES account. The status can be one of
     * the following:</p> <ul> <li> <p> <code>HEALTHY</code> – There are no
     * reputation-related issues that currently impact your account.</p> </li> <li> <p>
     * <code>PROBATION</code> – We've identified potential issues with your Amazon SES
     * account. We're placing your account under review while you work on correcting
     * these issues.</p> </li> <li> <p> <code>SHUTDOWN</code> – Your account's ability
     * to send email is currently paused because of an issue with the email sent from
     * your account. When you correct the issue, you can contact us and request that
     * your account's ability to send email is resumed.</p> </li> </ul>
     */
    inline GetAccountResult& WithEnforcementStatus(const char* value) { SetEnforcementStatus(value); return *this;}


    /**
     * <p>Indicates whether or not your account has production access in the current
     * Amazon Web Services Region.</p> <p>If the value is <code>false</code>, then your
     * account is in the <i>sandbox</i>. When your account is in the sandbox, you can
     * only send email to verified identities. Additionally, the maximum number of
     * emails you can send in a 24-hour period (your sending quota) is 200, and the
     * maximum number of emails you can send per second (your maximum sending rate) is
     * 1.</p> <p>If the value is <code>true</code>, then your account has production
     * access. When your account has production access, you can send email to any
     * address. The sending quota and maximum sending rate for your account vary based
     * on your specific use case.</p>
     */
    inline bool GetProductionAccessEnabled() const{ return m_productionAccessEnabled; }

    /**
     * <p>Indicates whether or not your account has production access in the current
     * Amazon Web Services Region.</p> <p>If the value is <code>false</code>, then your
     * account is in the <i>sandbox</i>. When your account is in the sandbox, you can
     * only send email to verified identities. Additionally, the maximum number of
     * emails you can send in a 24-hour period (your sending quota) is 200, and the
     * maximum number of emails you can send per second (your maximum sending rate) is
     * 1.</p> <p>If the value is <code>true</code>, then your account has production
     * access. When your account has production access, you can send email to any
     * address. The sending quota and maximum sending rate for your account vary based
     * on your specific use case.</p>
     */
    inline void SetProductionAccessEnabled(bool value) { m_productionAccessEnabled = value; }

    /**
     * <p>Indicates whether or not your account has production access in the current
     * Amazon Web Services Region.</p> <p>If the value is <code>false</code>, then your
     * account is in the <i>sandbox</i>. When your account is in the sandbox, you can
     * only send email to verified identities. Additionally, the maximum number of
     * emails you can send in a 24-hour period (your sending quota) is 200, and the
     * maximum number of emails you can send per second (your maximum sending rate) is
     * 1.</p> <p>If the value is <code>true</code>, then your account has production
     * access. When your account has production access, you can send email to any
     * address. The sending quota and maximum sending rate for your account vary based
     * on your specific use case.</p>
     */
    inline GetAccountResult& WithProductionAccessEnabled(bool value) { SetProductionAccessEnabled(value); return *this;}


    /**
     * <p>An object that contains information about the per-day and per-second sending
     * limits for your Amazon SES account in the current Amazon Web Services
     * Region.</p>
     */
    inline const SendQuota& GetSendQuota() const{ return m_sendQuota; }

    /**
     * <p>An object that contains information about the per-day and per-second sending
     * limits for your Amazon SES account in the current Amazon Web Services
     * Region.</p>
     */
    inline void SetSendQuota(const SendQuota& value) { m_sendQuota = value; }

    /**
     * <p>An object that contains information about the per-day and per-second sending
     * limits for your Amazon SES account in the current Amazon Web Services
     * Region.</p>
     */
    inline void SetSendQuota(SendQuota&& value) { m_sendQuota = std::move(value); }

    /**
     * <p>An object that contains information about the per-day and per-second sending
     * limits for your Amazon SES account in the current Amazon Web Services
     * Region.</p>
     */
    inline GetAccountResult& WithSendQuota(const SendQuota& value) { SetSendQuota(value); return *this;}

    /**
     * <p>An object that contains information about the per-day and per-second sending
     * limits for your Amazon SES account in the current Amazon Web Services
     * Region.</p>
     */
    inline GetAccountResult& WithSendQuota(SendQuota&& value) { SetSendQuota(std::move(value)); return *this;}


    /**
     * <p>Indicates whether or not email sending is enabled for your Amazon SES account
     * in the current Amazon Web Services Region.</p>
     */
    inline bool GetSendingEnabled() const{ return m_sendingEnabled; }

    /**
     * <p>Indicates whether or not email sending is enabled for your Amazon SES account
     * in the current Amazon Web Services Region.</p>
     */
    inline void SetSendingEnabled(bool value) { m_sendingEnabled = value; }

    /**
     * <p>Indicates whether or not email sending is enabled for your Amazon SES account
     * in the current Amazon Web Services Region.</p>
     */
    inline GetAccountResult& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}


    /**
     * <p>An object that contains information about the email address suppression
     * preferences for your account in the current Amazon Web Services Region.</p>
     */
    inline const SuppressionAttributes& GetSuppressionAttributes() const{ return m_suppressionAttributes; }

    /**
     * <p>An object that contains information about the email address suppression
     * preferences for your account in the current Amazon Web Services Region.</p>
     */
    inline void SetSuppressionAttributes(const SuppressionAttributes& value) { m_suppressionAttributes = value; }

    /**
     * <p>An object that contains information about the email address suppression
     * preferences for your account in the current Amazon Web Services Region.</p>
     */
    inline void SetSuppressionAttributes(SuppressionAttributes&& value) { m_suppressionAttributes = std::move(value); }

    /**
     * <p>An object that contains information about the email address suppression
     * preferences for your account in the current Amazon Web Services Region.</p>
     */
    inline GetAccountResult& WithSuppressionAttributes(const SuppressionAttributes& value) { SetSuppressionAttributes(value); return *this;}

    /**
     * <p>An object that contains information about the email address suppression
     * preferences for your account in the current Amazon Web Services Region.</p>
     */
    inline GetAccountResult& WithSuppressionAttributes(SuppressionAttributes&& value) { SetSuppressionAttributes(std::move(value)); return *this;}


    /**
     * <p>An object that defines your account details.</p>
     */
    inline const AccountDetails& GetDetails() const{ return m_details; }

    /**
     * <p>An object that defines your account details.</p>
     */
    inline void SetDetails(const AccountDetails& value) { m_details = value; }

    /**
     * <p>An object that defines your account details.</p>
     */
    inline void SetDetails(AccountDetails&& value) { m_details = std::move(value); }

    /**
     * <p>An object that defines your account details.</p>
     */
    inline GetAccountResult& WithDetails(const AccountDetails& value) { SetDetails(value); return *this;}

    /**
     * <p>An object that defines your account details.</p>
     */
    inline GetAccountResult& WithDetails(AccountDetails&& value) { SetDetails(std::move(value)); return *this;}


    /**
     * <p>The VDM attributes that apply to your Amazon SES account.</p>
     */
    inline const VdmAttributes& GetVdmAttributes() const{ return m_vdmAttributes; }

    /**
     * <p>The VDM attributes that apply to your Amazon SES account.</p>
     */
    inline void SetVdmAttributes(const VdmAttributes& value) { m_vdmAttributes = value; }

    /**
     * <p>The VDM attributes that apply to your Amazon SES account.</p>
     */
    inline void SetVdmAttributes(VdmAttributes&& value) { m_vdmAttributes = std::move(value); }

    /**
     * <p>The VDM attributes that apply to your Amazon SES account.</p>
     */
    inline GetAccountResult& WithVdmAttributes(const VdmAttributes& value) { SetVdmAttributes(value); return *this;}

    /**
     * <p>The VDM attributes that apply to your Amazon SES account.</p>
     */
    inline GetAccountResult& WithVdmAttributes(VdmAttributes&& value) { SetVdmAttributes(std::move(value)); return *this;}

  private:

    bool m_dedicatedIpAutoWarmupEnabled;

    Aws::String m_enforcementStatus;

    bool m_productionAccessEnabled;

    SendQuota m_sendQuota;

    bool m_sendingEnabled;

    SuppressionAttributes m_suppressionAttributes;

    AccountDetails m_details;

    VdmAttributes m_vdmAttributes;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
