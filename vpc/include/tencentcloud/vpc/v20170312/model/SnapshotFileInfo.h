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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTFILEINFO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Snapshot file information
                */
                class SnapshotFileInfo : public AbstractModel
                {
                public:
                    SnapshotFileInfo();
                    ~SnapshotFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取ID of the instance.
                     * @return InstanceId ID of the instance.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance.
                     * @param _instanceId ID of the instance.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Snapshot file ID
                     * @return SnapshotFileId Snapshot file ID
                     * 
                     */
                    std::string GetSnapshotFileId() const;

                    /**
                     * 设置Snapshot file ID
                     * @param _snapshotFileId Snapshot file ID
                     * 
                     */
                    void SetSnapshotFileId(const std::string& _snapshotFileId);

                    /**
                     * 判断参数 SnapshotFileId 是否已赋值
                     * @return SnapshotFileId 是否已赋值
                     * 
                     */
                    bool SnapshotFileIdHasBeenSet() const;

                    /**
                     * 获取Backup time
                     * @return BackupTime Backup time
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置Backup time
                     * @param _backupTime Backup time
                     * 
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取Operator UIN
                     * @return Operator Operator UIN
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator UIN
                     * @param _operator Operator UIN
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * Snapshot policy ID
                     */
                    std::string m_snapshotPolicyId;
                    bool m_snapshotPolicyIdHasBeenSet;

                    /**
                     * ID of the instance.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Snapshot file ID
                     */
                    std::string m_snapshotFileId;
                    bool m_snapshotFileIdHasBeenSet;

                    /**
                     * Backup time
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * Operator UIN
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTFILEINFO_H_
