/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_STEPDETAILINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_STEPDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/ProcessStepTip.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Step information
                */
                class StepDetailInfo : public AbstractModel
                {
                public:
                    StepDetailInfo();
                    ~StepDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepNo Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStepNo() const;

                    /**
                     * 设置Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepNo Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepNo(const uint64_t& _stepNo);

                    /**
                     * 判断参数 StepNo 是否已赋值
                     * @return StepNo 是否已赋值
                     * 
                     */
                    bool StepNoHasBeenSet() const;

                    /**
                     * 获取Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepName Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepName Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepName(const std::string& _stepName);

                    /**
                     * 判断参数 StepName 是否已赋值
                     * @return StepName 是否已赋值
                     * 
                     */
                    bool StepNameHasBeenSet() const;

                    /**
                     * 获取Step ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepId Step ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStepId() const;

                    /**
                     * 设置Step ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepId Step ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepId(const std::string& _stepId);

                    /**
                     * 判断参数 StepId 是否已赋值
                     * @return StepId 是否已赋值
                     * 
                     */
                    bool StepIdHasBeenSet() const;

                    /**
                     * 获取Step status. Valid values: `success`, `failed`, `running`, `notStarted`. Default value: `notStarted`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Step status. Valid values: `success`, `failed`, `running`, `notStarted`. Default value: `notStarted`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Step status. Valid values: `success`, `failed`, `running`, `notStarted`. Default value: `notStarted`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Step status. Valid values: `success`, `failed`, `running`, `notStarted`. Default value: `notStarted`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Start time of the current step in the format of "yyyy-mm-dd hh:mm:ss". If this field does not exist or is empty, it is meaningless.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start time of the current step in the format of "yyyy-mm-dd hh:mm:ss". If this field does not exist or is empty, it is meaningless.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the current step in the format of "yyyy-mm-dd hh:mm:ss". If this field does not exist or is empty, it is meaningless.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Start time of the current step in the format of "yyyy-mm-dd hh:mm:ss". If this field does not exist or is empty, it is meaningless.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Step error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepMessage Step error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStepMessage() const;

                    /**
                     * 设置Step error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepMessage Step error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepMessage(const std::string& _stepMessage);

                    /**
                     * 判断参数 StepMessage 是否已赋值
                     * @return StepMessage 是否已赋值
                     * 
                     */
                    bool StepMessageHasBeenSet() const;

                    /**
                     * 获取Execution progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Percent Execution progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置Execution progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _percent Execution progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Errors Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ProcessStepTip> GetErrors() const;

                    /**
                     * 设置Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errors Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrors(const std::vector<ProcessStepTip>& _errors);

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

                    /**
                     * 获取Warning
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Warnings Warning
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ProcessStepTip> GetWarnings() const;

                    /**
                     * 设置Warning
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _warnings Warning
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWarnings(const std::vector<ProcessStepTip>& _warnings);

                    /**
                     * 判断参数 Warnings 是否已赋值
                     * @return Warnings 是否已赋值
                     * 
                     */
                    bool WarningsHasBeenSet() const;

                private:

                    /**
                     * Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * Step ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stepId;
                    bool m_stepIdHasBeenSet;

                    /**
                     * Step status. Valid values: `success`, `failed`, `running`, `notStarted`. Default value: `notStarted`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Start time of the current step in the format of "yyyy-mm-dd hh:mm:ss". If this field does not exist or is empty, it is meaningless.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Step error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stepMessage;
                    bool m_stepMessageHasBeenSet;

                    /**
                     * Execution progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ProcessStepTip> m_errors;
                    bool m_errorsHasBeenSet;

                    /**
                     * Warning
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ProcessStepTip> m_warnings;
                    bool m_warningsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_STEPDETAILINFO_H_
