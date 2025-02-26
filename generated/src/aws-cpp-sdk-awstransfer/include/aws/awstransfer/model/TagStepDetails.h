﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/S3Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{

  /**
   * <p>Each step type has its own <code>StepDetails</code> structure.</p> <p>The
   * key/value pairs used to tag a file during the execution of a workflow
   * step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/TagStepDetails">AWS
   * API Reference</a></p>
   */
  class TagStepDetails
  {
  public:
    AWS_TRANSFER_API TagStepDetails();
    AWS_TRANSFER_API TagStepDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API TagStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline TagStepDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline TagStepDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline TagStepDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Array that contains from 1 to 10 key/value pairs.</p>
     */
    inline const Aws::Vector<S3Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Array that contains from 1 to 10 key/value pairs.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Array that contains from 1 to 10 key/value pairs.</p>
     */
    inline void SetTags(const Aws::Vector<S3Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Array that contains from 1 to 10 key/value pairs.</p>
     */
    inline void SetTags(Aws::Vector<S3Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Array that contains from 1 to 10 key/value pairs.</p>
     */
    inline TagStepDetails& WithTags(const Aws::Vector<S3Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Array that contains from 1 to 10 key/value pairs.</p>
     */
    inline TagStepDetails& WithTags(Aws::Vector<S3Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Array that contains from 1 to 10 key/value pairs.</p>
     */
    inline TagStepDetails& AddTags(const S3Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Array that contains from 1 to 10 key/value pairs.</p>
     */
    inline TagStepDetails& AddTags(S3Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceFileLocation() const{ return m_sourceFileLocation; }

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline bool SourceFileLocationHasBeenSet() const { return m_sourceFileLocationHasBeenSet; }

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline void SetSourceFileLocation(const Aws::String& value) { m_sourceFileLocationHasBeenSet = true; m_sourceFileLocation = value; }

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline void SetSourceFileLocation(Aws::String&& value) { m_sourceFileLocationHasBeenSet = true; m_sourceFileLocation = std::move(value); }

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline void SetSourceFileLocation(const char* value) { m_sourceFileLocationHasBeenSet = true; m_sourceFileLocation.assign(value); }

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline TagStepDetails& WithSourceFileLocation(const Aws::String& value) { SetSourceFileLocation(value); return *this;}

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline TagStepDetails& WithSourceFileLocation(Aws::String&& value) { SetSourceFileLocation(std::move(value)); return *this;}

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline TagStepDetails& WithSourceFileLocation(const char* value) { SetSourceFileLocation(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<S3Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_sourceFileLocation;
    bool m_sourceFileLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
