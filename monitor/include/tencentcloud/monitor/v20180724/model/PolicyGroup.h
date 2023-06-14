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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_POLICYGROUP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_POLICYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PolicyGroupReceiverInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Policy group information
                */
                class PolicyGroup : public AbstractModel
                {
                public:
                    PolicyGroup();
                    ~PolicyGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the alarm policy can be set to default.
                     * @return CanSetDefault Whether the alarm policy can be set to default.
                     * 
                     */
                    bool GetCanSetDefault() const;

                    /**
                     * 设置Whether the alarm policy can be set to default.
                     * @param _canSetDefault Whether the alarm policy can be set to default.
                     * 
                     */
                    void SetCanSetDefault(const bool& _canSetDefault);

                    /**
                     * 判断参数 CanSetDefault 是否已赋值
                     * @return CanSetDefault 是否已赋值
                     * 
                     */
                    bool CanSetDefaultHasBeenSet() const;

                    /**
                     * 获取Alarm policy group ID.
                     * @return GroupID Alarm policy group ID.
                     * 
                     */
                    int64_t GetGroupID() const;

                    /**
                     * 设置Alarm policy group ID.
                     * @param _groupID Alarm policy group ID.
                     * 
                     */
                    void SetGroupID(const int64_t& _groupID);

                    /**
                     * 判断参数 GroupID 是否已赋值
                     * @return GroupID 是否已赋值
                     * 
                     */
                    bool GroupIDHasBeenSet() const;

                    /**
                     * 获取Alarm policy group name.
                     * @return GroupName Alarm policy group name.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Alarm policy group name.
                     * @param _groupName Alarm policy group name.
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
                     * 获取Creation time.
                     * @return InsertTime Creation time.
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置Creation time.
                     * @param _insertTime Creation time.
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
                     * 获取Whether the alarm policy is set to default.
                     * @return IsDefault Whether the alarm policy is set to default.
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置Whether the alarm policy is set to default.
                     * @param _isDefault Whether the alarm policy is set to default.
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Whether the alarm policy is enabled.
                     * @return Enable Whether the alarm policy is enabled.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Whether the alarm policy is enabled.
                     * @param _enable Whether the alarm policy is enabled.
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取UIN of the last modifier.
                     * @return LastEditUin UIN of the last modifier.
                     * 
                     */
                    int64_t GetLastEditUin() const;

                    /**
                     * 设置UIN of the last modifier.
                     * @param _lastEditUin UIN of the last modifier.
                     * 
                     */
                    void SetLastEditUin(const int64_t& _lastEditUin);

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     * 
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取Number of unshielded instances.
                     * @return NoShieldedInstanceCount Number of unshielded instances.
                     * 
                     */
                    int64_t GetNoShieldedInstanceCount() const;

                    /**
                     * 设置Number of unshielded instances.
                     * @param _noShieldedInstanceCount Number of unshielded instances.
                     * 
                     */
                    void SetNoShieldedInstanceCount(const int64_t& _noShieldedInstanceCount);

                    /**
                     * 判断参数 NoShieldedInstanceCount 是否已赋值
                     * @return NoShieldedInstanceCount 是否已赋值
                     * 
                     */
                    bool NoShieldedInstanceCountHasBeenSet() const;

                    /**
                     * 获取Parent policy group ID.
                     * @return ParentGroupID Parent policy group ID.
                     * 
                     */
                    int64_t GetParentGroupID() const;

                    /**
                     * 设置Parent policy group ID.
                     * @param _parentGroupID Parent policy group ID.
                     * 
                     */
                    void SetParentGroupID(const int64_t& _parentGroupID);

                    /**
                     * 判断参数 ParentGroupID 是否已赋值
                     * @return ParentGroupID 是否已赋值
                     * 
                     */
                    bool ParentGroupIDHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ProjectID Project ID.
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置Project ID.
                     * @param _projectID Project ID.
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取Alarm recipient information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ReceiverInfos Alarm recipient information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PolicyGroupReceiverInfo> GetReceiverInfos() const;

                    /**
                     * 设置Alarm recipient information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _receiverInfos Alarm recipient information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReceiverInfos(const std::vector<PolicyGroupReceiverInfo>& _receiverInfos);

                    /**
                     * 判断参数 ReceiverInfos 是否已赋值
                     * @return ReceiverInfos 是否已赋值
                     * 
                     */
                    bool ReceiverInfosHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
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
                     * 获取Modification time.
                     * @return UpdateTime Modification time.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Modification time.
                     * @param _updateTime Modification time.
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取The total number of associated instances.
                     * @return TotalInstanceCount The total number of associated instances.
                     * 
                     */
                    int64_t GetTotalInstanceCount() const;

                    /**
                     * 设置The total number of associated instances.
                     * @param _totalInstanceCount The total number of associated instances.
                     * 
                     */
                    void SetTotalInstanceCount(const int64_t& _totalInstanceCount);

                    /**
                     * 判断参数 TotalInstanceCount 是否已赋值
                     * @return TotalInstanceCount 是否已赋值
                     * 
                     */
                    bool TotalInstanceCountHasBeenSet() const;

                    /**
                     * 获取View.
                     * @return ViewName View.
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置View.
                     * @param _viewName View.
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
                     * 获取Whether the logical relationship between rules is AND.
                     * @return IsUnionRule Whether the logical relationship between rules is AND.
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置Whether the logical relationship between rules is AND.
                     * @param _isUnionRule Whether the logical relationship between rules is AND.
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
                     * Whether the alarm policy can be set to default.
                     */
                    bool m_canSetDefault;
                    bool m_canSetDefaultHasBeenSet;

                    /**
                     * Alarm policy group ID.
                     */
                    int64_t m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * Alarm policy group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Creation time.
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * Whether the alarm policy is set to default.
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Whether the alarm policy is enabled.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * UIN of the last modifier.
                     */
                    int64_t m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * Number of unshielded instances.
                     */
                    int64_t m_noShieldedInstanceCount;
                    bool m_noShieldedInstanceCountHasBeenSet;

                    /**
                     * Parent policy group ID.
                     */
                    int64_t m_parentGroupID;
                    bool m_parentGroupIDHasBeenSet;

                    /**
                     * Project ID.
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * Alarm recipient information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<PolicyGroupReceiverInfo> m_receiverInfos;
                    bool m_receiverInfosHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Modification time.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * The total number of associated instances.
                     */
                    int64_t m_totalInstanceCount;
                    bool m_totalInstanceCountHasBeenSet;

                    /**
                     * View.
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * Whether the logical relationship between rules is AND.
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_POLICYGROUP_H_
