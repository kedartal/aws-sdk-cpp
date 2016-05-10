/*
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
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class AWS_SQS_API ChangeMessageVisibilityRequest : public SQSRequest
  {
  public:
    ChangeMessageVisibilityRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline ChangeMessageVisibilityRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline ChangeMessageVisibilityRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline ChangeMessageVisibilityRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The receipt handle associated with the message whose visibility timeout
     * should be changed. This parameter is returned by the <a>ReceiveMessage</a>
     * action.</p>
     */
    inline const Aws::String& GetReceiptHandle() const{ return m_receiptHandle; }

    /**
     * <p>The receipt handle associated with the message whose visibility timeout
     * should be changed. This parameter is returned by the <a>ReceiveMessage</a>
     * action.</p>
     */
    inline void SetReceiptHandle(const Aws::String& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = value; }

    /**
     * <p>The receipt handle associated with the message whose visibility timeout
     * should be changed. This parameter is returned by the <a>ReceiveMessage</a>
     * action.</p>
     */
    inline void SetReceiptHandle(Aws::String&& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = value; }

    /**
     * <p>The receipt handle associated with the message whose visibility timeout
     * should be changed. This parameter is returned by the <a>ReceiveMessage</a>
     * action.</p>
     */
    inline void SetReceiptHandle(const char* value) { m_receiptHandleHasBeenSet = true; m_receiptHandle.assign(value); }

    /**
     * <p>The receipt handle associated with the message whose visibility timeout
     * should be changed. This parameter is returned by the <a>ReceiveMessage</a>
     * action.</p>
     */
    inline ChangeMessageVisibilityRequest& WithReceiptHandle(const Aws::String& value) { SetReceiptHandle(value); return *this;}

    /**
     * <p>The receipt handle associated with the message whose visibility timeout
     * should be changed. This parameter is returned by the <a>ReceiveMessage</a>
     * action.</p>
     */
    inline ChangeMessageVisibilityRequest& WithReceiptHandle(Aws::String&& value) { SetReceiptHandle(value); return *this;}

    /**
     * <p>The receipt handle associated with the message whose visibility timeout
     * should be changed. This parameter is returned by the <a>ReceiveMessage</a>
     * action.</p>
     */
    inline ChangeMessageVisibilityRequest& WithReceiptHandle(const char* value) { SetReceiptHandle(value); return *this;}

    /**
     * <p>The new value (in seconds - from 0 to 43200 - maximum 12 hours) for the
     * message's visibility timeout.</p>
     */
    inline long GetVisibilityTimeout() const{ return m_visibilityTimeout; }

    /**
     * <p>The new value (in seconds - from 0 to 43200 - maximum 12 hours) for the
     * message's visibility timeout.</p>
     */
    inline void SetVisibilityTimeout(long value) { m_visibilityTimeoutHasBeenSet = true; m_visibilityTimeout = value; }

    /**
     * <p>The new value (in seconds - from 0 to 43200 - maximum 12 hours) for the
     * message's visibility timeout.</p>
     */
    inline ChangeMessageVisibilityRequest& WithVisibilityTimeout(long value) { SetVisibilityTimeout(value); return *this;}

  private:
    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;
    Aws::String m_receiptHandle;
    bool m_receiptHandleHasBeenSet;
    long m_visibilityTimeout;
    bool m_visibilityTimeoutHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
