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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFORESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoCondition.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoEventCondition.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoReceiverInfo.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoCallback.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoConditionTpl.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyGroupInfo response structure.
                */
                class DescribePolicyGroupInfoResponse : public AbstractModel
                {
                public:
                    DescribePolicyGroupInfoResponse();
                    ~DescribePolicyGroupInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy group name.
                     * @return GroupName Policy group name.
                     */
                    std::string GetGroupName() const;

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取ID of the project to which the policy group belongs.
                     * @return ProjectId ID of the project to which the policy group belongs.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Whether it is the default policy. The value 0 indicates that it is not the default policy. The value 1 indicates that it is the default policy.
                     * @return IsDefault Whether it is the default policy. The value 0 indicates that it is not the default policy. The value 1 indicates that it is the default policy.
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Policy type.
                     * @return ViewName Policy type.
                     */
                    std::string GetViewName() const;

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取Policy description
                     * @return Remark Policy description
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Policy type name.
                     * @return ShowName Policy type name.
                     */
                    std::string GetShowName() const;

                    /**
                     * 判断参数 ShowName 是否已赋值
                     * @return ShowName 是否已赋值
                     */
                    bool ShowNameHasBeenSet() const;

                    /**
                     * 获取Uin that was last edited.
                     * @return LastEditUin Uin that was last edited.
                     */
                    std::string GetLastEditUin() const;

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取Last edited time.
                     * @return UpdateTime Last edited time.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Regions supported by this policy.
                     * @return Region Regions supported by this policy.
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取List of policy type dimensions.
                     * @return DimensionGroup List of policy type dimensions.
                     */
                    std::vector<std::string> GetDimensionGroup() const;

                    /**
                     * 判断参数 DimensionGroup 是否已赋值
                     * @return DimensionGroup 是否已赋值
                     */
                    bool DimensionGroupHasBeenSet() const;

                    /**
                     * 获取Threshold rule list.
Note: This field may return null, indicating that no valid value was found.
                     * @return ConditionsConfig Threshold rule list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyGroupInfoCondition> GetConditionsConfig() const;

                    /**
                     * 判断参数 ConditionsConfig 是否已赋值
                     * @return ConditionsConfig 是否已赋值
                     */
                    bool ConditionsConfigHasBeenSet() const;

                    /**
                     * 获取Product event rule list.
Note: This field may return null, indicating that no valid value was found.
                     * @return EventConfig Product event rule list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyGroupInfoEventCondition> GetEventConfig() const;

                    /**
                     * 判断参数 EventConfig 是否已赋值
                     * @return EventConfig 是否已赋值
                     */
                    bool EventConfigHasBeenSet() const;

                    /**
                     * 获取Recipient list.
Note: This field may return null, indicating that no valid value was found.
                     * @return ReceiverInfos Recipient list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyGroupInfoReceiverInfo> GetReceiverInfos() const;

                    /**
                     * 判断参数 ReceiverInfos 是否已赋值
                     * @return ReceiverInfos 是否已赋值
                     */
                    bool ReceiverInfosHasBeenSet() const;

                    /**
                     * 获取User callback information.
Note: This field may return null, indicating that no valid value was found.
                     * @return Callback User callback information.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyGroupInfoCallback GetCallback() const;

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取Template-based policy group.
Note: This field may return null, indicating that no valid value was found.
                     * @return ConditionsTemp Template-based policy group.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyGroupInfoConditionTpl GetConditionsTemp() const;

                    /**
                     * 判断参数 ConditionsTemp 是否已赋值
                     * @return ConditionsTemp 是否已赋值
                     */
                    bool ConditionsTempHasBeenSet() const;

                    /**
                     * 获取Whether the policy can be configured as the default policy.
                     * @return CanSetDefault Whether the policy can be configured as the default policy.
                     */
                    bool GetCanSetDefault() const;

                    /**
                     * 判断参数 CanSetDefault 是否已赋值
                     * @return CanSetDefault 是否已赋值
                     */
                    bool CanSetDefaultHasBeenSet() const;

                    /**
                     * 获取Whether the 'AND' rule is used.
Note: This field may return null, indicating that no valid value was found.
                     * @return IsUnionRule Whether the 'AND' rule is used.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 判断参数 IsUnionRule 是否已赋值
                     * @return IsUnionRule 是否已赋值
                     */
                    bool IsUnionRuleHasBeenSet() const;

                private:

                    /**
                     * Policy group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * ID of the project to which the policy group belongs.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether it is the default policy. The value 0 indicates that it is not the default policy. The value 1 indicates that it is the default policy.
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Policy type.
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * Policy description
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Policy type name.
                     */
                    std::string m_showName;
                    bool m_showNameHasBeenSet;

                    /**
                     * Uin that was last edited.
                     */
                    std::string m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * Last edited time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Regions supported by this policy.
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * List of policy type dimensions.
                     */
                    std::vector<std::string> m_dimensionGroup;
                    bool m_dimensionGroupHasBeenSet;

                    /**
                     * Threshold rule list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyGroupInfoCondition> m_conditionsConfig;
                    bool m_conditionsConfigHasBeenSet;

                    /**
                     * Product event rule list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyGroupInfoEventCondition> m_eventConfig;
                    bool m_eventConfigHasBeenSet;

                    /**
                     * Recipient list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyGroupInfoReceiverInfo> m_receiverInfos;
                    bool m_receiverInfosHasBeenSet;

                    /**
                     * User callback information.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyGroupInfoCallback m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * Template-based policy group.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyGroupInfoConditionTpl m_conditionsTemp;
                    bool m_conditionsTempHasBeenSet;

                    /**
                     * Whether the policy can be configured as the default policy.
                     */
                    bool m_canSetDefault;
                    bool m_canSetDefaultHasBeenSet;

                    /**
                     * Whether the 'AND' rule is used.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFORESPONSE_H_
