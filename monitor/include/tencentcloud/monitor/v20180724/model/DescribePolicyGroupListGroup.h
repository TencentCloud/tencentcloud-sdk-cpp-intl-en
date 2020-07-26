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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTGROUP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoCondition.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoEventCondition.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoReceiverInfo.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoConditionTpl.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListGroupInstanceGroup.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyGroupList.Group
                */
                class DescribePolicyGroupListGroup : public AbstractModel
                {
                public:
                    DescribePolicyGroupListGroup();
                    ~DescribePolicyGroupListGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Whether it is enabled.
                     * @return IsOpen Whether it is enabled.
                     */
                    bool GetIsOpen() const;

                    /**
                     * 设置Whether it is enabled.
                     * @param IsOpen Whether it is enabled.
                     */
                    void SetIsOpen(const bool& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     */
                    bool IsOpenHasBeenSet() const;

                    /**
                     * 获取Policy view name.
                     * @return ViewName Policy view name.
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置Policy view name.
                     * @param ViewName Policy view name.
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取Uin that was last edited.
                     * @return LastEditUin Uin that was last edited.
                     */
                    std::string GetLastEditUin() const;

                    /**
                     * 设置Uin that was last edited.
                     * @param LastEditUin Uin that was last edited.
                     */
                    void SetLastEditUin(const std::string& _lastEditUin);

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取Last modified time.
                     * @return UpdateTime Last modified time.
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Last modified time.
                     * @param UpdateTime Last modified time.
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return InsertTime Creation time.
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置Creation time.
                     * @param InsertTime Creation time.
                     */
                    void SetInsertTime(const int64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取Number of instances that are bound to the policy group.
                     * @return UseSum Number of instances that are bound to the policy group.
                     */
                    int64_t GetUseSum() const;

                    /**
                     * 设置Number of instances that are bound to the policy group.
                     * @param UseSum Number of instances that are bound to the policy group.
                     */
                    void SetUseSum(const int64_t& _useSum);

                    /**
                     * 判断参数 UseSum 是否已赋值
                     * @return UseSum 是否已赋值
                     */
                    bool UseSumHasBeenSet() const;

                    /**
                     * 获取Number of unshielded instances that are bound to the policy group.
                     * @return NoShieldedSum Number of unshielded instances that are bound to the policy group.
                     */
                    int64_t GetNoShieldedSum() const;

                    /**
                     * 设置Number of unshielded instances that are bound to the policy group.
                     * @param NoShieldedSum Number of unshielded instances that are bound to the policy group.
                     */
                    void SetNoShieldedSum(const int64_t& _noShieldedSum);

                    /**
                     * 判断参数 NoShieldedSum 是否已赋值
                     * @return NoShieldedSum 是否已赋值
                     */
                    bool NoShieldedSumHasBeenSet() const;

                    /**
                     * 获取Whether it is the default policy. The value 0 indicates that it is not the default policy. The value 1 indicates that it is the default policy.
                     * @return IsDefault Whether it is the default policy. The value 0 indicates that it is not the default policy. The value 1 indicates that it is the default policy.
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置Whether it is the default policy. The value 0 indicates that it is not the default policy. The value 1 indicates that it is the default policy.
                     * @param IsDefault Whether it is the default policy. The value 0 indicates that it is not the default policy. The value 1 indicates that it is the default policy.
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Whether the policy can be configured as the default policy.
                     * @return CanSetDefault Whether the policy can be configured as the default policy.
                     */
                    bool GetCanSetDefault() const;

                    /**
                     * 设置Whether the policy can be configured as the default policy.
                     * @param CanSetDefault Whether the policy can be configured as the default policy.
                     */
                    void SetCanSetDefault(const bool& _canSetDefault);

                    /**
                     * 判断参数 CanSetDefault 是否已赋值
                     * @return CanSetDefault 是否已赋值
                     */
                    bool CanSetDefaultHasBeenSet() const;

                    /**
                     * 获取Parent policy group ID.
                     * @return ParentGroupId Parent policy group ID.
                     */
                    int64_t GetParentGroupId() const;

                    /**
                     * 设置Parent policy group ID.
                     * @param ParentGroupId Parent policy group ID.
                     */
                    void SetParentGroupId(const int64_t& _parentGroupId);

                    /**
                     * 判断参数 ParentGroupId 是否已赋值
                     * @return ParentGroupId 是否已赋值
                     */
                    bool ParentGroupIdHasBeenSet() const;

                    /**
                     * 获取Remarks of the policy group.
                     * @return Remark Remarks of the policy group.
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks of the policy group.
                     * @param Remark Remarks of the policy group.
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取ID of the project to which the policy group belongs.
                     * @return ProjectId ID of the project to which the policy group belongs.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which the policy group belongs.
                     * @param ProjectId ID of the project to which the policy group belongs.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Threshold rule list.
Note: This field may return null, indicating that no valid value was found.
                     * @return Conditions Threshold rule list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyGroupInfoCondition> GetConditions() const;

                    /**
                     * 设置Threshold rule list.
Note: This field may return null, indicating that no valid value was found.
                     * @param Conditions Threshold rule list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetConditions(const std::vector<DescribePolicyGroupInfoCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取Product event rule list.
Note: This field may return null, indicating that no valid value was found.
                     * @return EventConditions Product event rule list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyGroupInfoEventCondition> GetEventConditions() const;

                    /**
                     * 设置Product event rule list.
Note: This field may return null, indicating that no valid value was found.
                     * @param EventConditions Product event rule list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetEventConditions(const std::vector<DescribePolicyGroupInfoEventCondition>& _eventConditions);

                    /**
                     * 判断参数 EventConditions 是否已赋值
                     * @return EventConditions 是否已赋值
                     */
                    bool EventConditionsHasBeenSet() const;

                    /**
                     * 获取Recipient list.
Note: This field may return null, indicating that no valid value was found.
                     * @return ReceiverInfos Recipient list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyGroupInfoReceiverInfo> GetReceiverInfos() const;

                    /**
                     * 设置Recipient list.
Note: This field may return null, indicating that no valid value was found.
                     * @param ReceiverInfos Recipient list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetReceiverInfos(const std::vector<DescribePolicyGroupInfoReceiverInfo>& _receiverInfos);

                    /**
                     * 判断参数 ReceiverInfos 是否已赋值
                     * @return ReceiverInfos 是否已赋值
                     */
                    bool ReceiverInfosHasBeenSet() const;

                    /**
                     * 获取Template-based policy group.
Note: This field may return null, indicating that no valid value was found.
                     * @return ConditionsTemp Template-based policy group.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyGroupInfoConditionTpl GetConditionsTemp() const;

                    /**
                     * 设置Template-based policy group.
Note: This field may return null, indicating that no valid value was found.
                     * @param ConditionsTemp Template-based policy group.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetConditionsTemp(const DescribePolicyGroupInfoConditionTpl& _conditionsTemp);

                    /**
                     * 判断参数 ConditionsTemp 是否已赋值
                     * @return ConditionsTemp 是否已赋值
                     */
                    bool ConditionsTempHasBeenSet() const;

                    /**
                     * 获取Instance group that is bound to the policy group.
Note: This field may return null, indicating that no valid value was found.
                     * @return InstanceGroup Instance group that is bound to the policy group.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyGroupListGroupInstanceGroup GetInstanceGroup() const;

                    /**
                     * 设置Instance group that is bound to the policy group.
Note: This field may return null, indicating that no valid value was found.
                     * @param InstanceGroup Instance group that is bound to the policy group.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetInstanceGroup(const DescribePolicyGroupListGroupInstanceGroup& _instanceGroup);

                    /**
                     * 判断参数 InstanceGroup 是否已赋值
                     * @return InstanceGroup 是否已赋值
                     */
                    bool InstanceGroupHasBeenSet() const;

                    /**
                     * 获取The “AND” or “OR” rule. The value 0 indicates the “OR” rule (indicating that an alarm will be triggered if any rule meets the threshold condition). The value 1 indicates the “AND” rule (indicating that an alarm will be triggered when all rules meet the threshold conditions).
Note: This field may return null, indicating that no valid value was found.
                     * @return IsUnionRule The “AND” or “OR” rule. The value 0 indicates the “OR” rule (indicating that an alarm will be triggered if any rule meets the threshold condition). The value 1 indicates the “AND” rule (indicating that an alarm will be triggered when all rules meet the threshold conditions).
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置The “AND” or “OR” rule. The value 0 indicates the “OR” rule (indicating that an alarm will be triggered if any rule meets the threshold condition). The value 1 indicates the “AND” rule (indicating that an alarm will be triggered when all rules meet the threshold conditions).
Note: This field may return null, indicating that no valid value was found.
                     * @param IsUnionRule The “AND” or “OR” rule. The value 0 indicates the “OR” rule (indicating that an alarm will be triggered if any rule meets the threshold condition). The value 1 indicates the “AND” rule (indicating that an alarm will be triggered when all rules meet the threshold conditions).
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetIsUnionRule(const int64_t& _isUnionRule);

                    /**
                     * 判断参数 IsUnionRule 是否已赋值
                     * @return IsUnionRule 是否已赋值
                     */
                    bool IsUnionRuleHasBeenSet() const;

                private:

                    /**
                     * Policy group ID.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Policy group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Whether it is enabled.
                     */
                    bool m_isOpen;
                    bool m_isOpenHasBeenSet;

                    /**
                     * Policy view name.
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * Uin that was last edited.
                     */
                    std::string m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * Last modified time.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Creation time.
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * Number of instances that are bound to the policy group.
                     */
                    int64_t m_useSum;
                    bool m_useSumHasBeenSet;

                    /**
                     * Number of unshielded instances that are bound to the policy group.
                     */
                    int64_t m_noShieldedSum;
                    bool m_noShieldedSumHasBeenSet;

                    /**
                     * Whether it is the default policy. The value 0 indicates that it is not the default policy. The value 1 indicates that it is the default policy.
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Whether the policy can be configured as the default policy.
                     */
                    bool m_canSetDefault;
                    bool m_canSetDefaultHasBeenSet;

                    /**
                     * Parent policy group ID.
                     */
                    int64_t m_parentGroupId;
                    bool m_parentGroupIdHasBeenSet;

                    /**
                     * Remarks of the policy group.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * ID of the project to which the policy group belongs.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Threshold rule list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyGroupInfoCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * Product event rule list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyGroupInfoEventCondition> m_eventConditions;
                    bool m_eventConditionsHasBeenSet;

                    /**
                     * Recipient list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyGroupInfoReceiverInfo> m_receiverInfos;
                    bool m_receiverInfosHasBeenSet;

                    /**
                     * Template-based policy group.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyGroupInfoConditionTpl m_conditionsTemp;
                    bool m_conditionsTempHasBeenSet;

                    /**
                     * Instance group that is bound to the policy group.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyGroupListGroupInstanceGroup m_instanceGroup;
                    bool m_instanceGroupHasBeenSet;

                    /**
                     * The “AND” or “OR” rule. The value 0 indicates the “OR” rule (indicating that an alarm will be triggered if any rule meets the threshold condition). The value 1 indicates the “AND” rule (indicating that an alarm will be triggered when all rules meet the threshold conditions).
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTGROUP_H_
