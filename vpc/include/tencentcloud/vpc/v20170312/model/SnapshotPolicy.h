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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTPOLICY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/BackupPolicy.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Snapshot policy
                */
                class SnapshotPolicy : public AbstractModel
                {
                public:
                    SnapshotPolicy();
                    ~SnapshotPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Snapshot policy name
                     * @return SnapshotPolicyName Snapshot policy name
                     * 
                     */
                    std::string GetSnapshotPolicyName() const;

                    /**
                     * 设置Snapshot policy name
                     * @param _snapshotPolicyName Snapshot policy name
                     * 
                     */
                    void SetSnapshotPolicyName(const std::string& _snapshotPolicyName);

                    /**
                     * 判断参数 SnapshotPolicyName 是否已赋值
                     * @return SnapshotPolicyName 是否已赋值
                     * 
                     */
                    bool SnapshotPolicyNameHasBeenSet() const;

                    /**
                     * 获取Backup policy type. Values: `operate` (Manual backup); `time` (Scheduled backup)
                     * @return BackupType Backup policy type. Values: `operate` (Manual backup); `time` (Scheduled backup)
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup policy type. Values: `operate` (Manual backup); `time` (Scheduled backup)
                     * @param _backupType Backup policy type. Values: `operate` (Manual backup); `time` (Scheduled backup)
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Snapshot retention period in days. Range: 1 to 365.
                     * @return KeepTime Snapshot retention period in days. Range: 1 to 365.
                     * 
                     */
                    uint64_t GetKeepTime() const;

                    /**
                     * 设置Snapshot retention period in days. Range: 1 to 365.
                     * @param _keepTime Snapshot retention period in days. Range: 1 to 365.
                     * 
                     */
                    void SetKeepTime(const uint64_t& _keepTime);

                    /**
                     * 判断参数 KeepTime 是否已赋值
                     * @return KeepTime 是否已赋值
                     * 
                     */
                    bool KeepTimeHasBeenSet() const;

                    /**
                     * 获取Whether to create a new COS bucket. It defaults to `False`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CreateNewCos Whether to create a new COS bucket. It defaults to `False`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetCreateNewCos() const;

                    /**
                     * 设置Whether to create a new COS bucket. It defaults to `False`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _createNewCos Whether to create a new COS bucket. It defaults to `False`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateNewCos(const bool& _createNewCos);

                    /**
                     * 判断参数 CreateNewCos 是否已赋值
                     * @return CreateNewCos 是否已赋值
                     * 
                     */
                    bool CreateNewCosHasBeenSet() const;

                    /**
                     * 获取Region of the COS bucket
                     * @return CosRegion Region of the COS bucket
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置Region of the COS bucket
                     * @param _cosRegion Region of the COS bucket
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取COS bucket
                     * @return CosBucket COS bucket
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置COS bucket
                     * @param _cosBucket COS bucket
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取Snapshot policy ID
                     * @return SnapshotPolicyId Snapshot policy ID
                     * 
                     */
                    std::string GetSnapshotPolicyId() const;

                    /**
                     * 设置Snapshot policy ID
                     * @param _snapshotPolicyId Snapshot policy ID
                     * 
                     */
                    void SetSnapshotPolicyId(const std::string& _snapshotPolicyId);

                    /**
                     * 判断参数 SnapshotPolicyId 是否已赋值
                     * @return SnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool SnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取Scheduled backup policies
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return BackupPolicies Scheduled backup policies
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BackupPolicy> GetBackupPolicies() const;

                    /**
                     * 设置Scheduled backup policies
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _backupPolicies Scheduled backup policies
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupPolicies(const std::vector<BackupPolicy>& _backupPolicies);

                    /**
                     * 判断参数 BackupPolicies 是否已赋值
                     * @return BackupPolicies 是否已赋值
                     * 
                     */
                    bool BackupPoliciesHasBeenSet() const;

                    /**
                     * 获取Whether to enable the policy. Values: `True` (default), `False`
                     * @return Enable Whether to enable the policy. Values: `True` (default), `False`
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Whether to enable the policy. Values: `True` (default), `False`
                     * @param _enable Whether to enable the policy. Values: `True` (default), `False`
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
                     * 获取Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Snapshot policy name
                     */
                    std::string m_snapshotPolicyName;
                    bool m_snapshotPolicyNameHasBeenSet;

                    /**
                     * Backup policy type. Values: `operate` (Manual backup); `time` (Scheduled backup)
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Snapshot retention period in days. Range: 1 to 365.
                     */
                    uint64_t m_keepTime;
                    bool m_keepTimeHasBeenSet;

                    /**
                     * Whether to create a new COS bucket. It defaults to `False`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_createNewCos;
                    bool m_createNewCosHasBeenSet;

                    /**
                     * Region of the COS bucket
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * COS bucket
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * Snapshot policy ID
                     */
                    std::string m_snapshotPolicyId;
                    bool m_snapshotPolicyIdHasBeenSet;

                    /**
                     * Scheduled backup policies
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<BackupPolicy> m_backupPolicies;
                    bool m_backupPoliciesHasBeenSet;

                    /**
                     * Whether to enable the policy. Values: `True` (default), `False`
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTPOLICY_H_
