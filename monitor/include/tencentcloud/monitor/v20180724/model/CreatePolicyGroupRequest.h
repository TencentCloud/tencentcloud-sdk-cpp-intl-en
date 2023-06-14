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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupCondition.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupEventCondition.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreatePolicyGroup request structure.
                */
                class CreatePolicyGroupRequest : public AbstractModel
                {
                public:
                    CreatePolicyGroupRequest();
                    ~CreatePolicyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy group name.
                     * @return GroupName Policy group name.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Policy group name.
                     * @param _groupName Policy group name.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取The value is fixed to monitor.
                     * @return Module The value is fixed to monitor.
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置The value is fixed to monitor.
                     * @param _module The value is fixed to monitor.
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Name of the view to which the policy group belongs. If the policy group is created based on a template, this parameter is optional.
                     * @return ViewName Name of the view to which the policy group belongs. If the policy group is created based on a template, this parameter is optional.
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置Name of the view to which the policy group belongs. If the policy group is created based on a template, this parameter is optional.
                     * @param _viewName Name of the view to which the policy group belongs. If the policy group is created based on a template, this parameter is optional.
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取ID of the project to which the policy group belongs, which will be used for authentication.
                     * @return ProjectId ID of the project to which the policy group belongs, which will be used for authentication.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which the policy group belongs, which will be used for authentication.
                     * @param _projectId ID of the project to which the policy group belongs, which will be used for authentication.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取ID of a template-based policy group. This parameter is required only when the policy group is created based on a template.
                     * @return ConditionTempGroupId ID of a template-based policy group. This parameter is required only when the policy group is created based on a template.
                     * 
                     */
                    int64_t GetConditionTempGroupId() const;

                    /**
                     * 设置ID of a template-based policy group. This parameter is required only when the policy group is created based on a template.
                     * @param _conditionTempGroupId ID of a template-based policy group. This parameter is required only when the policy group is created based on a template.
                     * 
                     */
                    void SetConditionTempGroupId(const int64_t& _conditionTempGroupId);

                    /**
                     * 判断参数 ConditionTempGroupId 是否已赋值
                     * @return ConditionTempGroupId 是否已赋值
                     * 
                     */
                    bool ConditionTempGroupIdHasBeenSet() const;

                    /**
                     * 获取Whether the policy group is shielded. The value 0 indicates that the policy group is not shielded. The value 1 indicates that the policy group is shielded. The default value is 0.
                     * @return IsShielded Whether the policy group is shielded. The value 0 indicates that the policy group is not shielded. The value 1 indicates that the policy group is shielded. The default value is 0.
                     * 
                     */
                    int64_t GetIsShielded() const;

                    /**
                     * 设置Whether the policy group is shielded. The value 0 indicates that the policy group is not shielded. The value 1 indicates that the policy group is shielded. The default value is 0.
                     * @param _isShielded Whether the policy group is shielded. The value 0 indicates that the policy group is not shielded. The value 1 indicates that the policy group is shielded. The default value is 0.
                     * 
                     */
                    void SetIsShielded(const int64_t& _isShielded);

                    /**
                     * 判断参数 IsShielded 是否已赋值
                     * @return IsShielded 是否已赋值
                     * 
                     */
                    bool IsShieldedHasBeenSet() const;

                    /**
                     * 获取Remarks of the policy group.
                     * @return Remark Remarks of the policy group.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks of the policy group.
                     * @param _remark Remarks of the policy group.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Insertion time in the format of Unix timestamp. If this parameter is not configured, the backend processing time is used.
                     * @return InsertTime Insertion time in the format of Unix timestamp. If this parameter is not configured, the backend processing time is used.
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置Insertion time in the format of Unix timestamp. If this parameter is not configured, the backend processing time is used.
                     * @param _insertTime Insertion time in the format of Unix timestamp. If this parameter is not configured, the backend processing time is used.
                     * 
                     */
                    void SetInsertTime(const int64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取Alarm threshold rules in the policy group.
                     * @return Conditions Alarm threshold rules in the policy group.
                     * 
                     */
                    std::vector<CreatePolicyGroupCondition> GetConditions() const;

                    /**
                     * 设置Alarm threshold rules in the policy group.
                     * @param _conditions Alarm threshold rules in the policy group.
                     * 
                     */
                    void SetConditions(const std::vector<CreatePolicyGroupCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取Event alarm rules in the policy group.
                     * @return EventConditions Event alarm rules in the policy group.
                     * 
                     */
                    std::vector<CreatePolicyGroupEventCondition> GetEventConditions() const;

                    /**
                     * 设置Event alarm rules in the policy group.
                     * @param _eventConditions Event alarm rules in the policy group.
                     * 
                     */
                    void SetEventConditions(const std::vector<CreatePolicyGroupEventCondition>& _eventConditions);

                    /**
                     * 判断参数 EventConditions 是否已赋值
                     * @return EventConditions 是否已赋值
                     * 
                     */
                    bool EventConditionsHasBeenSet() const;

                    /**
                     * 获取Whether it is a backend call. Rules pulled from the policy template will be used to fill in the `Conditions` and `EventConditions` fields only when the value of this parameter is `1`.
                     * @return BackEndCall Whether it is a backend call. Rules pulled from the policy template will be used to fill in the `Conditions` and `EventConditions` fields only when the value of this parameter is `1`.
                     * 
                     */
                    int64_t GetBackEndCall() const;

                    /**
                     * 设置Whether it is a backend call. Rules pulled from the policy template will be used to fill in the `Conditions` and `EventConditions` fields only when the value of this parameter is `1`.
                     * @param _backEndCall Whether it is a backend call. Rules pulled from the policy template will be used to fill in the `Conditions` and `EventConditions` fields only when the value of this parameter is `1`.
                     * 
                     */
                    void SetBackEndCall(const int64_t& _backEndCall);

                    /**
                     * 判断参数 BackEndCall 是否已赋值
                     * @return BackEndCall 是否已赋值
                     * 
                     */
                    bool BackEndCallHasBeenSet() const;

                    /**
                     * 获取The 'AND' and 'OR' rules for alarm metrics. The value 0 indicates 'OR', which means that an alarm will be triggered when any rule is met. The value 1 indicates 'AND', which means that an alarm will be triggered only when all rules are met.
                     * @return IsUnionRule The 'AND' and 'OR' rules for alarm metrics. The value 0 indicates 'OR', which means that an alarm will be triggered when any rule is met. The value 1 indicates 'AND', which means that an alarm will be triggered only when all rules are met.
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置The 'AND' and 'OR' rules for alarm metrics. The value 0 indicates 'OR', which means that an alarm will be triggered when any rule is met. The value 1 indicates 'AND', which means that an alarm will be triggered only when all rules are met.
                     * @param _isUnionRule The 'AND' and 'OR' rules for alarm metrics. The value 0 indicates 'OR', which means that an alarm will be triggered when any rule is met. The value 1 indicates 'AND', which means that an alarm will be triggered only when all rules are met.
                     * 
                     */
                    void SetIsUnionRule(const int64_t& _isUnionRule);

                    /**
                     * 判断参数 IsUnionRule 是否已赋值
                     * @return IsUnionRule 是否已赋值
                     * 
                     */
                    bool IsUnionRuleHasBeenSet() const;

                private:

                    /**
                     * Policy group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * The value is fixed to monitor.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Name of the view to which the policy group belongs. If the policy group is created based on a template, this parameter is optional.
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * ID of the project to which the policy group belongs, which will be used for authentication.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * ID of a template-based policy group. This parameter is required only when the policy group is created based on a template.
                     */
                    int64_t m_conditionTempGroupId;
                    bool m_conditionTempGroupIdHasBeenSet;

                    /**
                     * Whether the policy group is shielded. The value 0 indicates that the policy group is not shielded. The value 1 indicates that the policy group is shielded. The default value is 0.
                     */
                    int64_t m_isShielded;
                    bool m_isShieldedHasBeenSet;

                    /**
                     * Remarks of the policy group.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Insertion time in the format of Unix timestamp. If this parameter is not configured, the backend processing time is used.
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * Alarm threshold rules in the policy group.
                     */
                    std::vector<CreatePolicyGroupCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * Event alarm rules in the policy group.
                     */
                    std::vector<CreatePolicyGroupEventCondition> m_eventConditions;
                    bool m_eventConditionsHasBeenSet;

                    /**
                     * Whether it is a backend call. Rules pulled from the policy template will be used to fill in the `Conditions` and `EventConditions` fields only when the value of this parameter is `1`.
                     */
                    int64_t m_backEndCall;
                    bool m_backEndCallHasBeenSet;

                    /**
                     * The 'AND' and 'OR' rules for alarm metrics. The value 0 indicates 'OR', which means that an alarm will be triggered when any rule is met. The value 1 indicates 'AND', which means that an alarm will be triggered only when all rules are met.
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPREQUEST_H_
