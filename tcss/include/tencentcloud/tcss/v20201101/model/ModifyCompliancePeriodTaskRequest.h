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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYCOMPLIANCEPERIODTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYCOMPLIANCEPERIODTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/CompliancePeriodTaskRule.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceBenchmarkStandardEnable.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyCompliancePeriodTask request structure.
                */
                class ModifyCompliancePeriodTaskRequest : public AbstractModel
                {
                public:
                    ModifyCompliancePeriodTaskRequest();
                    ~ModifyCompliancePeriodTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the scheduled task to be modified, which is returned by the `DescribeCompliancePeriodTaskList` API.
                     * @return PeriodTaskId ID of the scheduled task to be modified, which is returned by the `DescribeCompliancePeriodTaskList` API.
                     * 
                     */
                    uint64_t GetPeriodTaskId() const;

                    /**
                     * 设置ID of the scheduled task to be modified, which is returned by the `DescribeCompliancePeriodTaskList` API.
                     * @param _periodTaskId ID of the scheduled task to be modified, which is returned by the `DescribeCompliancePeriodTaskList` API.
                     * 
                     */
                    void SetPeriodTaskId(const uint64_t& _periodTaskId);

                    /**
                     * 判断参数 PeriodTaskId 是否已赋值
                     * @return PeriodTaskId 是否已赋值
                     * 
                     */
                    bool PeriodTaskIdHasBeenSet() const;

                    /**
                     * 获取Cycle rule of the scheduled task, which indicates no modification if the field is not specified.
                     * @return PeriodRule Cycle rule of the scheduled task, which indicates no modification if the field is not specified.
                     * 
                     */
                    CompliancePeriodTaskRule GetPeriodRule() const;

                    /**
                     * 设置Cycle rule of the scheduled task, which indicates no modification if the field is not specified.
                     * @param _periodRule Cycle rule of the scheduled task, which indicates no modification if the field is not specified.
                     * 
                     */
                    void SetPeriodRule(const CompliancePeriodTaskRule& _periodRule);

                    /**
                     * 判断参数 PeriodRule 是否已赋值
                     * @return PeriodRule 是否已赋值
                     * 
                     */
                    bool PeriodRuleHasBeenSet() const;

                    /**
                     * 获取Compliance standard, which indicates no modification if the field is not specified.
                     * @return StandardSettings Compliance standard, which indicates no modification if the field is not specified.
                     * 
                     */
                    std::vector<ComplianceBenchmarkStandardEnable> GetStandardSettings() const;

                    /**
                     * 设置Compliance standard, which indicates no modification if the field is not specified.
                     * @param _standardSettings Compliance standard, which indicates no modification if the field is not specified.
                     * 
                     */
                    void SetStandardSettings(const std::vector<ComplianceBenchmarkStandardEnable>& _standardSettings);

                    /**
                     * 判断参数 StandardSettings 是否已赋值
                     * @return StandardSettings 是否已赋值
                     * 
                     */
                    bool StandardSettingsHasBeenSet() const;

                private:

                    /**
                     * ID of the scheduled task to be modified, which is returned by the `DescribeCompliancePeriodTaskList` API.
                     */
                    uint64_t m_periodTaskId;
                    bool m_periodTaskIdHasBeenSet;

                    /**
                     * Cycle rule of the scheduled task, which indicates no modification if the field is not specified.
                     */
                    CompliancePeriodTaskRule m_periodRule;
                    bool m_periodRuleHasBeenSet;

                    /**
                     * Compliance standard, which indicates no modification if the field is not specified.
                     */
                    std::vector<ComplianceBenchmarkStandardEnable> m_standardSettings;
                    bool m_standardSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYCOMPLIANCEPERIODTASKREQUEST_H_
