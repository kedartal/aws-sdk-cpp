﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>The parameters for the STEP_FUNCTION execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowStepFunctionsParameters">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API MaintenanceWindowStepFunctionsParameters
  {
  public:
    MaintenanceWindowStepFunctionsParameters();
    MaintenanceWindowStepFunctionsParameters(const Aws::Utils::Json::JsonValue& jsonValue);
    MaintenanceWindowStepFunctionsParameters& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline MaintenanceWindowStepFunctionsParameters& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline MaintenanceWindowStepFunctionsParameters& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline MaintenanceWindowStepFunctionsParameters& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline MaintenanceWindowStepFunctionsParameters& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline MaintenanceWindowStepFunctionsParameters& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline MaintenanceWindowStepFunctionsParameters& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_input;
    bool m_inputHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
