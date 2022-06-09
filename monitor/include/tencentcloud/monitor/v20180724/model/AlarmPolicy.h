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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICY_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyEventCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmNotice.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyTriggerTask.h>
#include <tencentcloud/monitor/v20180724/model/ConditionsTemp.h>
#include <tencentcloud/monitor/v20180724/model/TagInstance.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Alarm policy details
                */
                class AlarmPolicy : public AbstractModel
                {
                public:
                    AlarmPolicy();
                    ~AlarmPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm policy ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PolicyId Alarm policy ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Alarm policy ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PolicyId Alarm policy ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Alarm policy name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PolicyName Alarm policy name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Alarm policy name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PolicyName Alarm policy name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Remark Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MonitorType Monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置Monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MonitorType Monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取Status. Valid values: 0 (disabled), 1 (enabled)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Enable Status. Valid values: 0 (disabled), 1 (enabled)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Status. Valid values: 0 (disabled), 1 (enabled)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Enable Status. Valid values: 0 (disabled), 1 (enabled)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Number of instances bound to policy group
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UseSum Number of instances bound to policy group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetUseSum() const;

                    /**
                     * 设置Number of instances bound to policy group
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UseSum Number of instances bound to policy group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUseSum(const int64_t& _useSum);

                    /**
                     * 判断参数 UseSum 是否已赋值
                     * @return UseSum 是否已赋值
                     */
                    bool UseSumHasBeenSet() const;

                    /**
                     * 获取Project ID. Valid values: -1 (no project), 0 (default project)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID. Valid values: -1 (no project), 0 (default project)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. Valid values: -1 (no project), 0 (default project)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ProjectId Project ID. Valid values: -1 (no project), 0 (default project)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Project name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectName Project name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ProjectName Project name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Alarm policy type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Namespace Alarm policy type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Alarm policy type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Namespace Alarm policy type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Trigger condition template ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ConditionTemplateId Trigger condition template ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetConditionTemplateId() const;

                    /**
                     * 设置Trigger condition template ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ConditionTemplateId Trigger condition template ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConditionTemplateId(const std::string& _conditionTemplateId);

                    /**
                     * 判断参数 ConditionTemplateId 是否已赋值
                     * @return ConditionTemplateId 是否已赋值
                     */
                    bool ConditionTemplateIdHasBeenSet() const;

                    /**
                     * 获取Metric trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Condition Metric trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AlarmPolicyCondition GetCondition() const;

                    /**
                     * 设置Metric trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Condition Metric trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCondition(const AlarmPolicyCondition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取Event trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EventCondition Event trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AlarmPolicyEventCondition GetEventCondition() const;

                    /**
                     * 设置Event trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EventCondition Event trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEventCondition(const AlarmPolicyEventCondition& _eventCondition);

                    /**
                     * 判断参数 EventCondition 是否已赋值
                     * @return EventCondition 是否已赋值
                     */
                    bool EventConditionHasBeenSet() const;

                    /**
                     * 获取Notification rule ID list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NoticeIds Notification rule ID list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置Notification rule ID list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param NoticeIds Notification rule ID list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNoticeIds(const std::vector<std::string>& _noticeIds);

                    /**
                     * 判断参数 NoticeIds 是否已赋值
                     * @return NoticeIds 是否已赋值
                     */
                    bool NoticeIdsHasBeenSet() const;

                    /**
                     * 获取Notification rule list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Notices Notification rule list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AlarmNotice> GetNotices() const;

                    /**
                     * 设置Notification rule list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Notices Notification rule list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNotices(const std::vector<AlarmNotice>& _notices);

                    /**
                     * 判断参数 Notices 是否已赋值
                     * @return Notices 是否已赋值
                     */
                    bool NoticesHasBeenSet() const;

                    /**
                     * 获取Triggered task list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TriggerTasks Triggered task list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AlarmPolicyTriggerTask> GetTriggerTasks() const;

                    /**
                     * 设置Triggered task list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TriggerTasks Triggered task list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTriggerTasks(const std::vector<AlarmPolicyTriggerTask>& _triggerTasks);

                    /**
                     * 判断参数 TriggerTasks 是否已赋值
                     * @return TriggerTasks 是否已赋值
                     */
                    bool TriggerTasksHasBeenSet() const;

                    /**
                     * 获取Template policy group
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ConditionsTemp Template policy group
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ConditionsTemp GetConditionsTemp() const;

                    /**
                     * 设置Template policy group
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ConditionsTemp Template policy group
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConditionsTemp(const ConditionsTemp& _conditionsTemp);

                    /**
                     * 判断参数 ConditionsTemp 是否已赋值
                     * @return ConditionsTemp 是否已赋值
                     */
                    bool ConditionsTempHasBeenSet() const;

                    /**
                     * 获取`Uin` of the last modifying user
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastEditUin `Uin` of the last modifying user
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLastEditUin() const;

                    /**
                     * 设置`Uin` of the last modifying user
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LastEditUin `Uin` of the last modifying user
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastEditUin(const std::string& _lastEditUin);

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取Update time
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UpdateTime Update time
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InsertTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置Creation time
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InsertTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInsertTime(const int64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取Region
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Region Region
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置Region
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Region Region
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRegion(const std::vector<std::string>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Namespace display name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NamespaceShowName Namespace display name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNamespaceShowName() const;

                    /**
                     * 设置Namespace display name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param NamespaceShowName Namespace display name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNamespaceShowName(const std::string& _namespaceShowName);

                    /**
                     * 判断参数 NamespaceShowName 是否已赋值
                     * @return NamespaceShowName 是否已赋值
                     */
                    bool NamespaceShowNameHasBeenSet() const;

                    /**
                     * 获取Whether it is the default policy. Valid values: 1 (yes), 0 (no)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsDefault Whether it is the default policy. Valid values: 1 (yes), 0 (no)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置Whether it is the default policy. Valid values: 1 (yes), 0 (no)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsDefault Whether it is the default policy. Valid values: 1 (yes), 0 (no)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Whether the default policy can be set. Valid values: 1 (yes), 0 (no)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CanSetDefault Whether the default policy can be set. Valid values: 1 (yes), 0 (no)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetCanSetDefault() const;

                    /**
                     * 设置Whether the default policy can be set. Valid values: 1 (yes), 0 (no)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CanSetDefault Whether the default policy can be set. Valid values: 1 (yes), 0 (no)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCanSetDefault(const int64_t& _canSetDefault);

                    /**
                     * 判断参数 CanSetDefault 是否已赋值
                     * @return CanSetDefault 是否已赋值
                     */
                    bool CanSetDefaultHasBeenSet() const;

                    /**
                     * 获取Instance group ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceGroupId Instance group ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置Instance group ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InstanceGroupId Instance group ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取Total number of instances in instance group
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceSum Total number of instances in instance group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetInstanceSum() const;

                    /**
                     * 设置Total number of instances in instance group
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InstanceSum Total number of instances in instance group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceSum(const int64_t& _instanceSum);

                    /**
                     * 判断参数 InstanceSum 是否已赋值
                     * @return InstanceSum 是否已赋值
                     */
                    bool InstanceSumHasBeenSet() const;

                    /**
                     * 获取Instance group name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceGroupName Instance group name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceGroupName() const;

                    /**
                     * 设置Instance group name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InstanceGroupName Instance group name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceGroupName(const std::string& _instanceGroupName);

                    /**
                     * 判断参数 InstanceGroupName 是否已赋值
                     * @return InstanceGroupName 是否已赋值
                     */
                    bool InstanceGroupNameHasBeenSet() const;

                    /**
                     * 获取Trigger condition type. Valid values: STATIC (static threshold), DYNAMIC (dynamic)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RuleType Trigger condition type. Valid values: STATIC (static threshold), DYNAMIC (dynamic)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Trigger condition type. Valid values: STATIC (static threshold), DYNAMIC (dynamic)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RuleType Trigger condition type. Valid values: STATIC (static threshold), DYNAMIC (dynamic)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Policy ID for instance/instance group binding and unbinding APIs (BindingPolicyObject, UnBindingAllPolicyObject, UnBindingPolicyObject)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OriginId Policy ID for instance/instance group binding and unbinding APIs (BindingPolicyObject, UnBindingAllPolicyObject, UnBindingPolicyObject)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置Policy ID for instance/instance group binding and unbinding APIs (BindingPolicyObject, UnBindingAllPolicyObject, UnBindingPolicyObject)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OriginId Policy ID for instance/instance group binding and unbinding APIs (BindingPolicyObject, UnBindingAllPolicyObject, UnBindingPolicyObject)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取Tag
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TagInstances Tag
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<TagInstance> GetTagInstances() const;

                    /**
                     * 设置Tag
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param TagInstances Tag
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTagInstances(const std::vector<TagInstance>& _tagInstances);

                    /**
                     * 判断参数 TagInstances 是否已赋值
                     * @return TagInstances 是否已赋值
                     */
                    bool TagInstancesHasBeenSet() const;

                    /**
                     * 获取Information on the filter dimension associated with a policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return FilterDimensionsParam Information on the filter dimension associated with a policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetFilterDimensionsParam() const;

                    /**
                     * 设置Information on the filter dimension associated with a policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param FilterDimensionsParam Information on the filter dimension associated with a policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFilterDimensionsParam(const std::string& _filterDimensionsParam);

                    /**
                     * 判断参数 FilterDimensionsParam 是否已赋值
                     * @return FilterDimensionsParam 是否已赋值
                     */
                    bool FilterDimensionsParamHasBeenSet() const;

                    /**
                     * 获取Whether it is a quick alarm policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return IsOneClick Whether it is a quick alarm policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsOneClick() const;

                    /**
                     * 设置Whether it is a quick alarm policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param IsOneClick Whether it is a quick alarm policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetIsOneClick(const int64_t& _isOneClick);

                    /**
                     * 判断参数 IsOneClick 是否已赋值
                     * @return IsOneClick 是否已赋值
                     */
                    bool IsOneClickHasBeenSet() const;

                    /**
                     * 获取Whether the quick alarm policy is enabled.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return OneClickStatus Whether the quick alarm policy is enabled.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetOneClickStatus() const;

                    /**
                     * 设置Whether the quick alarm policy is enabled.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param OneClickStatus Whether the quick alarm policy is enabled.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetOneClickStatus(const int64_t& _oneClickStatus);

                    /**
                     * 判断参数 OneClickStatus 是否已赋值
                     * @return OneClickStatus 是否已赋值
                     */
                    bool OneClickStatusHasBeenSet() const;

                    /**
                     * 获取The number of advanced metrics.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AdvancedMetricNumber The number of advanced metrics.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetAdvancedMetricNumber() const;

                    /**
                     * 设置The number of advanced metrics.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param AdvancedMetricNumber The number of advanced metrics.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAdvancedMetricNumber(const int64_t& _advancedMetricNumber);

                    /**
                     * 判断参数 AdvancedMetricNumber 是否已赋值
                     * @return AdvancedMetricNumber 是否已赋值
                     */
                    bool AdvancedMetricNumberHasBeenSet() const;

                private:

                    /**
                     * Alarm policy ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Alarm policy name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * Status. Valid values: 0 (disabled), 1 (enabled)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Number of instances bound to policy group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_useSum;
                    bool m_useSumHasBeenSet;

                    /**
                     * Project ID. Valid values: -1 (no project), 0 (default project)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Alarm policy type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Trigger condition template ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_conditionTemplateId;
                    bool m_conditionTemplateIdHasBeenSet;

                    /**
                     * Metric trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AlarmPolicyCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Event trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AlarmPolicyEventCondition m_eventCondition;
                    bool m_eventConditionHasBeenSet;

                    /**
                     * Notification rule ID list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * Notification rule list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AlarmNotice> m_notices;
                    bool m_noticesHasBeenSet;

                    /**
                     * Triggered task list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AlarmPolicyTriggerTask> m_triggerTasks;
                    bool m_triggerTasksHasBeenSet;

                    /**
                     * Template policy group
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ConditionsTemp m_conditionsTemp;
                    bool m_conditionsTempHasBeenSet;

                    /**
                     * `Uin` of the last modifying user
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * Update time
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Creation time
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * Region
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Namespace display name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespaceShowName;
                    bool m_namespaceShowNameHasBeenSet;

                    /**
                     * Whether it is the default policy. Valid values: 1 (yes), 0 (no)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Whether the default policy can be set. Valid values: 1 (yes), 0 (no)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_canSetDefault;
                    bool m_canSetDefaultHasBeenSet;

                    /**
                     * Instance group ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * Total number of instances in instance group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_instanceSum;
                    bool m_instanceSumHasBeenSet;

                    /**
                     * Instance group name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceGroupName;
                    bool m_instanceGroupNameHasBeenSet;

                    /**
                     * Trigger condition type. Valid values: STATIC (static threshold), DYNAMIC (dynamic)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Policy ID for instance/instance group binding and unbinding APIs (BindingPolicyObject, UnBindingAllPolicyObject, UnBindingPolicyObject)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * Tag
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<TagInstance> m_tagInstances;
                    bool m_tagInstancesHasBeenSet;

                    /**
                     * Information on the filter dimension associated with a policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_filterDimensionsParam;
                    bool m_filterDimensionsParamHasBeenSet;

                    /**
                     * Whether it is a quick alarm policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_isOneClick;
                    bool m_isOneClickHasBeenSet;

                    /**
                     * Whether the quick alarm policy is enabled.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_oneClickStatus;
                    bool m_oneClickStatusHasBeenSet;

                    /**
                     * The number of advanced metrics.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_advancedMetricNumber;
                    bool m_advancedMetricNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICY_H_
