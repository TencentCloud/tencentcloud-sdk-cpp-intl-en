/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYCONDITIONREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYCONDITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyEventCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyFilter.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyAlarmPolicyCondition request structure.
                */
                class ModifyAlarmPolicyConditionRequest : public AbstractModel
                {
                public:
                    ModifyAlarmPolicyConditionRequest();
                    ~ModifyAlarmPolicyConditionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module name, which is fixed at "monitor"
                     * @return Module Module name, which is fixed at "monitor"
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Module name, which is fixed at "monitor"
                     * @param Module Module name, which is fixed at "monitor"
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Alarm policy ID
                     * @return PolicyId Alarm policy ID
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Alarm policy ID
                     * @param PolicyId Alarm policy ID
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取ID of trigger condition template. This parameter can be left empty.
                     * @return ConditionTemplateId ID of trigger condition template. This parameter can be left empty.
                     */
                    int64_t GetConditionTemplateId() const;

                    /**
                     * 设置ID of trigger condition template. This parameter can be left empty.
                     * @param ConditionTemplateId ID of trigger condition template. This parameter can be left empty.
                     */
                    void SetConditionTemplateId(const int64_t& _conditionTemplateId);

                    /**
                     * 判断参数 ConditionTemplateId 是否已赋值
                     * @return ConditionTemplateId 是否已赋值
                     */
                    bool ConditionTemplateIdHasBeenSet() const;

                    /**
                     * 获取Metric trigger condition
                     * @return Condition Metric trigger condition
                     */
                    AlarmPolicyCondition GetCondition() const;

                    /**
                     * 设置Metric trigger condition
                     * @param Condition Metric trigger condition
                     */
                    void SetCondition(const AlarmPolicyCondition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取Event trigger condition
                     * @return EventCondition Event trigger condition
                     */
                    AlarmPolicyEventCondition GetEventCondition() const;

                    /**
                     * 设置Event trigger condition
                     * @param EventCondition Event trigger condition
                     */
                    void SetEventCondition(const AlarmPolicyEventCondition& _eventCondition);

                    /**
                     * 判断参数 EventCondition 是否已赋值
                     * @return EventCondition 是否已赋值
                     */
                    bool EventConditionHasBeenSet() const;

                    /**
                     * 获取Global filter.
                     * @return Filter Global filter.
                     */
                    AlarmPolicyFilter GetFilter() const;

                    /**
                     * 设置Global filter.
                     * @param Filter Global filter.
                     */
                    void SetFilter(const AlarmPolicyFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Aggregation dimension list, which is used to specify which dimension keys data is grouped by.
                     * @return GroupBy Aggregation dimension list, which is used to specify which dimension keys data is grouped by.
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置Aggregation dimension list, which is used to specify which dimension keys data is grouped by.
                     * @param GroupBy Aggregation dimension list, which is used to specify which dimension keys data is grouped by.
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     */
                    bool GroupByHasBeenSet() const;

                private:

                    /**
                     * Module name, which is fixed at "monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Alarm policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * ID of trigger condition template. This parameter can be left empty.
                     */
                    int64_t m_conditionTemplateId;
                    bool m_conditionTemplateIdHasBeenSet;

                    /**
                     * Metric trigger condition
                     */
                    AlarmPolicyCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Event trigger condition
                     */
                    AlarmPolicyEventCondition m_eventCondition;
                    bool m_eventConditionHasBeenSet;

                    /**
                     * Global filter.
                     */
                    AlarmPolicyFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Aggregation dimension list, which is used to specify which dimension keys data is grouped by.
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYCONDITIONREQUEST_H_
