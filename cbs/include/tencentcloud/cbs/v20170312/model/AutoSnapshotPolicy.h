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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_AUTOSNAPSHOTPOLICY_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_AUTOSNAPSHOTPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Policy.h>
#include <tencentcloud/cbs/v20170312/model/AdvancedRetentionPolicy.h>
#include <tencentcloud/cbs/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * This describes the detailed information of the scheduled snapshot policy.
                */
                class AutoSnapshotPolicy : public AbstractModel
                {
                public:
                    AutoSnapshotPolicy();
                    ~AutoSnapshotPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The list of cloud disk IDs that the current scheduled snapshot policy is bound to.
                     * @return DiskIdSet The list of cloud disk IDs that the current scheduled snapshot policy is bound to.
                     * 
                     */
                    std::vector<std::string> GetDiskIdSet() const;

                    /**
                     * 设置The list of cloud disk IDs that the current scheduled snapshot policy is bound to.
                     * @param _diskIdSet The list of cloud disk IDs that the current scheduled snapshot policy is bound to.
                     * 
                     */
                    void SetDiskIdSet(const std::vector<std::string>& _diskIdSet);

                    /**
                     * 判断参数 DiskIdSet 是否已赋值
                     * @return DiskIdSet 是否已赋值
                     * 
                     */
                    bool DiskIdSetHasBeenSet() const;

                    /**
                     * 获取Whether scheduled snapshot policy is activated.
                     * @return IsActivated Whether scheduled snapshot policy is activated.
                     * 
                     */
                    bool GetIsActivated() const;

                    /**
                     * 设置Whether scheduled snapshot policy is activated.
                     * @param _isActivated Whether scheduled snapshot policy is activated.
                     * 
                     */
                    void SetIsActivated(const bool& _isActivated);

                    /**
                     * 判断参数 IsActivated 是否已赋值
                     * @return IsActivated 是否已赋值
                     * 
                     */
                    bool IsActivatedHasBeenSet() const;

                    /**
                     * 获取Scheduled snapshot policy state. Value range:<br><li>NORMAL: Normal<br><li>ISOLATED: Isolated.
                     * @return AutoSnapshotPolicyState Scheduled snapshot policy state. Value range:<br><li>NORMAL: Normal<br><li>ISOLATED: Isolated.
                     * 
                     */
                    std::string GetAutoSnapshotPolicyState() const;

                    /**
                     * 设置Scheduled snapshot policy state. Value range:<br><li>NORMAL: Normal<br><li>ISOLATED: Isolated.
                     * @param _autoSnapshotPolicyState Scheduled snapshot policy state. Value range:<br><li>NORMAL: Normal<br><li>ISOLATED: Isolated.
                     * 
                     */
                    void SetAutoSnapshotPolicyState(const std::string& _autoSnapshotPolicyState);

                    /**
                     * 判断参数 AutoSnapshotPolicyState 是否已赋值
                     * @return AutoSnapshotPolicyState 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyStateHasBeenSet() const;

                    /**
                     * 获取Whether it is to replicate a snapshot across accounts. `1`: yes, `0`: no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsCopyToRemote Whether it is to replicate a snapshot across accounts. `1`: yes, `0`: no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsCopyToRemote() const;

                    /**
                     * 设置Whether it is to replicate a snapshot across accounts. `1`: yes, `0`: no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isCopyToRemote Whether it is to replicate a snapshot across accounts. `1`: yes, `0`: no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsCopyToRemote(const uint64_t& _isCopyToRemote);

                    /**
                     * 判断参数 IsCopyToRemote 是否已赋值
                     * @return IsCopyToRemote 是否已赋值
                     * 
                     */
                    bool IsCopyToRemoteHasBeenSet() const;

                    /**
                     * 获取Whether the snapshot created by this scheduled snapshot policy is retained permanently.
                     * @return IsPermanent Whether the snapshot created by this scheduled snapshot policy is retained permanently.
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置Whether the snapshot created by this scheduled snapshot policy is retained permanently.
                     * @param _isPermanent Whether the snapshot created by this scheduled snapshot policy is retained permanently.
                     * 
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     * 
                     */
                    bool IsPermanentHasBeenSet() const;

                    /**
                     * 获取The time the scheduled snapshot will be triggered again.
                     * @return NextTriggerTime The time the scheduled snapshot will be triggered again.
                     * 
                     */
                    std::string GetNextTriggerTime() const;

                    /**
                     * 设置The time the scheduled snapshot will be triggered again.
                     * @param _nextTriggerTime The time the scheduled snapshot will be triggered again.
                     * 
                     */
                    void SetNextTriggerTime(const std::string& _nextTriggerTime);

                    /**
                     * 判断参数 NextTriggerTime 是否已赋值
                     * @return NextTriggerTime 是否已赋值
                     * 
                     */
                    bool NextTriggerTimeHasBeenSet() const;

                    /**
                     * 获取Scheduled snapshot policy name.
                     * @return AutoSnapshotPolicyName Scheduled snapshot policy name.
                     * 
                     */
                    std::string GetAutoSnapshotPolicyName() const;

                    /**
                     * 设置Scheduled snapshot policy name.
                     * @param _autoSnapshotPolicyName Scheduled snapshot policy name.
                     * 
                     */
                    void SetAutoSnapshotPolicyName(const std::string& _autoSnapshotPolicyName);

                    /**
                     * 判断参数 AutoSnapshotPolicyName 是否已赋值
                     * @return AutoSnapshotPolicyName 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyNameHasBeenSet() const;

                    /**
                     * 获取Scheduled snapshot policy ID.
                     * @return AutoSnapshotPolicyId Scheduled snapshot policy ID.
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置Scheduled snapshot policy ID.
                     * @param _autoSnapshotPolicyId Scheduled snapshot policy ID.
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取The policy for executing the scheduled snapshot.
                     * @return Policy The policy for executing the scheduled snapshot.
                     * 
                     */
                    std::vector<Policy> GetPolicy() const;

                    /**
                     * 设置The policy for executing the scheduled snapshot.
                     * @param _policy The policy for executing the scheduled snapshot.
                     * 
                     */
                    void SetPolicy(const std::vector<Policy>& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取The time the scheduled snapshot policy was created.
                     * @return CreateTime The time the scheduled snapshot policy was created.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The time the scheduled snapshot policy was created.
                     * @param _createTime The time the scheduled snapshot policy was created.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Number of days the snapshot created by this scheduled snapshot policy is retained.
                     * @return RetentionDays Number of days the snapshot created by this scheduled snapshot policy is retained.
                     * 
                     */
                    uint64_t GetRetentionDays() const;

                    /**
                     * 设置Number of days the snapshot created by this scheduled snapshot policy is retained.
                     * @param _retentionDays Number of days the snapshot created by this scheduled snapshot policy is retained.
                     * 
                     */
                    void SetRetentionDays(const uint64_t& _retentionDays);

                    /**
                     * 判断参数 RetentionDays 是否已赋值
                     * @return RetentionDays 是否已赋值
                     * 
                     */
                    bool RetentionDaysHasBeenSet() const;

                    /**
                     * 获取ID of the replication target account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CopyToAccountUin ID of the replication target account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCopyToAccountUin() const;

                    /**
                     * 设置ID of the replication target account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _copyToAccountUin ID of the replication target account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCopyToAccountUin(const std::string& _copyToAccountUin);

                    /**
                     * 判断参数 CopyToAccountUin 是否已赋值
                     * @return CopyToAccountUin 是否已赋值
                     * 
                     */
                    bool CopyToAccountUinHasBeenSet() const;

                    /**
                     * 获取List of IDs of the instances associated with the scheduled snapshot policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceIdSet List of IDs of the instances associated with the scheduled snapshot policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置List of IDs of the instances associated with the scheduled snapshot policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceIdSet List of IDs of the instances associated with the scheduled snapshot policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取The number of months for which the snapshots created by this scheduled snapshot policy can be retained.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RetentionMonths The number of months for which the snapshots created by this scheduled snapshot policy can be retained.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRetentionMonths() const;

                    /**
                     * 设置The number of months for which the snapshots created by this scheduled snapshot policy can be retained.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retentionMonths The number of months for which the snapshots created by this scheduled snapshot policy can be retained.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetentionMonths(const uint64_t& _retentionMonths);

                    /**
                     * 判断参数 RetentionMonths 是否已赋值
                     * @return RetentionMonths 是否已赋值
                     * 
                     */
                    bool RetentionMonthsHasBeenSet() const;

                    /**
                     * 获取The maximum number of snapshots created by this scheduled snapshot policy that can be retained.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RetentionAmount The maximum number of snapshots created by this scheduled snapshot policy that can be retained.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRetentionAmount() const;

                    /**
                     * 设置The maximum number of snapshots created by this scheduled snapshot policy that can be retained.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retentionAmount The maximum number of snapshots created by this scheduled snapshot policy that can be retained.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetentionAmount(const uint64_t& _retentionAmount);

                    /**
                     * 判断参数 RetentionAmount 是否已赋值
                     * @return RetentionAmount 是否已赋值
                     * 
                     */
                    bool RetentionAmountHasBeenSet() const;

                    /**
                     * 获取Retention policy for scheduled snapshots.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdvancedRetentionPolicy Retention policy for scheduled snapshots.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AdvancedRetentionPolicy GetAdvancedRetentionPolicy() const;

                    /**
                     * 设置Retention policy for scheduled snapshots.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _advancedRetentionPolicy Retention policy for scheduled snapshots.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAdvancedRetentionPolicy(const AdvancedRetentionPolicy& _advancedRetentionPolicy);

                    /**
                     * 判断参数 AdvancedRetentionPolicy 是否已赋值
                     * @return AdvancedRetentionPolicy 是否已赋值
                     * 
                     */
                    bool AdvancedRetentionPolicyHasBeenSet() const;

                    /**
                     * 获取Source account ID of the copied snapshot policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CopyFromAccountUin Source account ID of the copied snapshot policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCopyFromAccountUin() const;

                    /**
                     * 设置Source account ID of the copied snapshot policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _copyFromAccountUin Source account ID of the copied snapshot policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCopyFromAccountUin(const std::string& _copyFromAccountUin);

                    /**
                     * 判断参数 CopyFromAccountUin 是否已赋值
                     * @return CopyFromAccountUin 是否已赋值
                     * 
                     */
                    bool CopyFromAccountUinHasBeenSet() const;

                    /**
                     * 获取Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * The list of cloud disk IDs that the current scheduled snapshot policy is bound to.
                     */
                    std::vector<std::string> m_diskIdSet;
                    bool m_diskIdSetHasBeenSet;

                    /**
                     * Whether scheduled snapshot policy is activated.
                     */
                    bool m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * Scheduled snapshot policy state. Value range:<br><li>NORMAL: Normal<br><li>ISOLATED: Isolated.
                     */
                    std::string m_autoSnapshotPolicyState;
                    bool m_autoSnapshotPolicyStateHasBeenSet;

                    /**
                     * Whether it is to replicate a snapshot across accounts. `1`: yes, `0`: no.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isCopyToRemote;
                    bool m_isCopyToRemoteHasBeenSet;

                    /**
                     * Whether the snapshot created by this scheduled snapshot policy is retained permanently.
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * The time the scheduled snapshot will be triggered again.
                     */
                    std::string m_nextTriggerTime;
                    bool m_nextTriggerTimeHasBeenSet;

                    /**
                     * Scheduled snapshot policy name.
                     */
                    std::string m_autoSnapshotPolicyName;
                    bool m_autoSnapshotPolicyNameHasBeenSet;

                    /**
                     * Scheduled snapshot policy ID.
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * The policy for executing the scheduled snapshot.
                     */
                    std::vector<Policy> m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * The time the scheduled snapshot policy was created.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Number of days the snapshot created by this scheduled snapshot policy is retained.
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

                    /**
                     * ID of the replication target account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_copyToAccountUin;
                    bool m_copyToAccountUinHasBeenSet;

                    /**
                     * List of IDs of the instances associated with the scheduled snapshot policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * The number of months for which the snapshots created by this scheduled snapshot policy can be retained.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_retentionMonths;
                    bool m_retentionMonthsHasBeenSet;

                    /**
                     * The maximum number of snapshots created by this scheduled snapshot policy that can be retained.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_retentionAmount;
                    bool m_retentionAmountHasBeenSet;

                    /**
                     * Retention policy for scheduled snapshots.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AdvancedRetentionPolicy m_advancedRetentionPolicy;
                    bool m_advancedRetentionPolicyHasBeenSet;

                    /**
                     * Source account ID of the copied snapshot policy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_copyFromAccountUin;
                    bool m_copyFromAccountUinHasBeenSet;

                    /**
                     * Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_AUTOSNAPSHOTPOLICY_H_
