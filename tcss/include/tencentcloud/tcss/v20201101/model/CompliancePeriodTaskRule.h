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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPERIODTASKRULE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPERIODTASKRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Cycle of a scheduled task
                */
                class CompliancePeriodTaskRule : public AbstractModel
                {
                public:
                    CompliancePeriodTaskRule();
                    ~CompliancePeriodTaskRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execution frequency (days). Valid values: `1`, `3`, `7`.
                     * @return Frequency Execution frequency (days). Valid values: `1`, `3`, `7`.
                     * 
                     */
                    uint64_t GetFrequency() const;

                    /**
                     * 设置Execution frequency (days). Valid values: `1`, `3`, `7`.
                     * @param _frequency Execution frequency (days). Valid values: `1`, `3`, `7`.
                     * 
                     */
                    void SetFrequency(const uint64_t& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取Execution time in the format of "HH:mm:SS"
                     * @return ExecutionTime Execution time in the format of "HH:mm:SS"
                     * 
                     */
                    std::string GetExecutionTime() const;

                    /**
                     * 设置Execution time in the format of "HH:mm:SS"
                     * @param _executionTime Execution time in the format of "HH:mm:SS"
                     * 
                     */
                    void SetExecutionTime(const std::string& _executionTime);

                    /**
                     * 判断参数 ExecutionTime 是否已赋值
                     * @return ExecutionTime 是否已赋值
                     * 
                     */
                    bool ExecutionTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enable Whether to enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Whether to enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enable Whether to enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * Execution frequency (days). Valid values: `1`, `3`, `7`.
                     */
                    uint64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * Execution time in the format of "HH:mm:SS"
                     */
                    std::string m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * Whether to enable
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPERIODTASKRULE_H_
