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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPOLICYGROUPREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPOLICYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupCondition.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupEventCondition.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyPolicyGroup request structure.
                */
                class ModifyPolicyGroupRequest : public AbstractModel
                {
                public:
                    ModifyPolicyGroupRequest();
                    ~ModifyPolicyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The value is fixed to monitor.
                     * @return Module The value is fixed to monitor.
                     */
                    std::string GetModule() const;

                    /**
                     * 设置The value is fixed to monitor.
                     * @param Module The value is fixed to monitor.
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Policy group ID.
                     * @return GroupId Policy group ID.
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置Policy group ID.
                     * @param GroupId Policy group ID.
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Alarm type.
                     * @return ViewName Alarm type.
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置Alarm type.
                     * @param ViewName Alarm type.
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取Policy group name.
                     * @return GroupName Policy group name.
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Policy group name.
                     * @param GroupName Policy group name.
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取The 'AND' and 'OR' rules for metric alarms. The value 1 indicates 'AND', which means that an alarm will be triggered only when all rules are met. The value 0 indicates 'OR', which means that an alarm will be triggered when any rule is met.
                     * @return IsUnionRule The 'AND' and 'OR' rules for metric alarms. The value 1 indicates 'AND', which means that an alarm will be triggered only when all rules are met. The value 0 indicates 'OR', which means that an alarm will be triggered when any rule is met.
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置The 'AND' and 'OR' rules for metric alarms. The value 1 indicates 'AND', which means that an alarm will be triggered only when all rules are met. The value 0 indicates 'OR', which means that an alarm will be triggered when any rule is met.
                     * @param IsUnionRule The 'AND' and 'OR' rules for metric alarms. The value 1 indicates 'AND', which means that an alarm will be triggered only when all rules are met. The value 0 indicates 'OR', which means that an alarm will be triggered when any rule is met.
                     */
                    void SetIsUnionRule(const int64_t& _isUnionRule);

                    /**
                     * 判断参数 IsUnionRule 是否已赋值
                     * @return IsUnionRule 是否已赋值
                     */
                    bool IsUnionRuleHasBeenSet() const;

                    /**
                     * 获取Metric alarm condition rules. No filling indicates that all existing metric alarm condition rules will be deleted.
                     * @return Conditions Metric alarm condition rules. No filling indicates that all existing metric alarm condition rules will be deleted.
                     */
                    std::vector<ModifyPolicyGroupCondition> GetConditions() const;

                    /**
                     * 设置Metric alarm condition rules. No filling indicates that all existing metric alarm condition rules will be deleted.
                     * @param Conditions Metric alarm condition rules. No filling indicates that all existing metric alarm condition rules will be deleted.
                     */
                    void SetConditions(const std::vector<ModifyPolicyGroupCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取Event alarm conditions. No filling indicates that all existing event alarm conditions will be deleted.
                     * @return EventConditions Event alarm conditions. No filling indicates that all existing event alarm conditions will be deleted.
                     */
                    std::vector<ModifyPolicyGroupEventCondition> GetEventConditions() const;

                    /**
                     * 设置Event alarm conditions. No filling indicates that all existing event alarm conditions will be deleted.
                     * @param EventConditions Event alarm conditions. No filling indicates that all existing event alarm conditions will be deleted.
                     */
                    void SetEventConditions(const std::vector<ModifyPolicyGroupEventCondition>& _eventConditions);

                    /**
                     * 判断参数 EventConditions 是否已赋值
                     * @return EventConditions 是否已赋值
                     */
                    bool EventConditionsHasBeenSet() const;

                    /**
                     * 获取Template-based policy group ID.
                     * @return ConditionTempGroupId Template-based policy group ID.
                     */
                    int64_t GetConditionTempGroupId() const;

                    /**
                     * 设置Template-based policy group ID.
                     * @param ConditionTempGroupId Template-based policy group ID.
                     */
                    void SetConditionTempGroupId(const int64_t& _conditionTempGroupId);

                    /**
                     * 判断参数 ConditionTempGroupId 是否已赋值
                     * @return ConditionTempGroupId 是否已赋值
                     */
                    bool ConditionTempGroupIdHasBeenSet() const;

                private:

                    /**
                     * The value is fixed to monitor.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Policy group ID.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Alarm type.
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * Policy group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * The 'AND' and 'OR' rules for metric alarms. The value 1 indicates 'AND', which means that an alarm will be triggered only when all rules are met. The value 0 indicates 'OR', which means that an alarm will be triggered when any rule is met.
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                    /**
                     * Metric alarm condition rules. No filling indicates that all existing metric alarm condition rules will be deleted.
                     */
                    std::vector<ModifyPolicyGroupCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * Event alarm conditions. No filling indicates that all existing event alarm conditions will be deleted.
                     */
                    std::vector<ModifyPolicyGroupEventCondition> m_eventConditions;
                    bool m_eventConditionsHasBeenSet;

                    /**
                     * Template-based policy group ID.
                     */
                    int64_t m_conditionTempGroupId;
                    bool m_conditionTempGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPOLICYGROUPREQUEST_H_
