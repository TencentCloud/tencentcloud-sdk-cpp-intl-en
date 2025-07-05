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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDOWNLOADTASKREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDOWNLOADTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/ReplicaSetInfo.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateBackupDownloadTask request structure.
                */
                class CreateBackupDownloadTaskRequest : public AbstractModel
                {
                public:
                    CreateBackupDownloadTaskRequest();
                    ~CreateBackupDownloadTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of "cmgo-p8vnipr5", which is the same as the instance ID displayed in the TencentDB console.
                     * @return InstanceId Instance ID in the format of "cmgo-p8vnipr5", which is the same as the instance ID displayed in the TencentDB console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of "cmgo-p8vnipr5", which is the same as the instance ID displayed in the TencentDB console.
                     * @param _instanceId Instance ID in the format of "cmgo-p8vnipr5", which is the same as the instance ID displayed in the TencentDB console.
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
                     * 获取The name of the backup file to be downloaded, which can be obtained by the `DescribeDBBackups` API.
                     * @return BackupName The name of the backup file to be downloaded, which can be obtained by the `DescribeDBBackups` API.
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置The name of the backup file to be downloaded, which can be obtained by the `DescribeDBBackups` API.
                     * @param _backupName The name of the backup file to be downloaded, which can be obtained by the `DescribeDBBackups` API.
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取Specify the node name of a replica set instance or the shard name list of a sharded cluster instance. Only backups of the specified node or shards will be downloaded.
Suppose you have a replica set instance (ID: cmgo-p8vnipr5), you can use the sample code `BackupSets.0=cmgo-p8vnipr5_0` to download the full backup. For a replica set instance, the parameter value must be in the format of "instance ID_0".
Suppose you have a sharded cluster instance (ID: cmgo-p8vnipr5), you can use the sample code `BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1` to download the backup data of shard 0 and shard 1. To download the full backup, please specify all shard names.
                     * @return BackupSets Specify the node name of a replica set instance or the shard name list of a sharded cluster instance. Only backups of the specified node or shards will be downloaded.
Suppose you have a replica set instance (ID: cmgo-p8vnipr5), you can use the sample code `BackupSets.0=cmgo-p8vnipr5_0` to download the full backup. For a replica set instance, the parameter value must be in the format of "instance ID_0".
Suppose you have a sharded cluster instance (ID: cmgo-p8vnipr5), you can use the sample code `BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1` to download the backup data of shard 0 and shard 1. To download the full backup, please specify all shard names.
                     * 
                     */
                    std::vector<ReplicaSetInfo> GetBackupSets() const;

                    /**
                     * 设置Specify the node name of a replica set instance or the shard name list of a sharded cluster instance. Only backups of the specified node or shards will be downloaded.
Suppose you have a replica set instance (ID: cmgo-p8vnipr5), you can use the sample code `BackupSets.0=cmgo-p8vnipr5_0` to download the full backup. For a replica set instance, the parameter value must be in the format of "instance ID_0".
Suppose you have a sharded cluster instance (ID: cmgo-p8vnipr5), you can use the sample code `BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1` to download the backup data of shard 0 and shard 1. To download the full backup, please specify all shard names.
                     * @param _backupSets Specify the node name of a replica set instance or the shard name list of a sharded cluster instance. Only backups of the specified node or shards will be downloaded.
Suppose you have a replica set instance (ID: cmgo-p8vnipr5), you can use the sample code `BackupSets.0=cmgo-p8vnipr5_0` to download the full backup. For a replica set instance, the parameter value must be in the format of "instance ID_0".
Suppose you have a sharded cluster instance (ID: cmgo-p8vnipr5), you can use the sample code `BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1` to download the backup data of shard 0 and shard 1. To download the full backup, please specify all shard names.
                     * 
                     */
                    void SetBackupSets(const std::vector<ReplicaSetInfo>& _backupSets);

                    /**
                     * 判断参数 BackupSets 是否已赋值
                     * @return BackupSets 是否已赋值
                     * 
                     */
                    bool BackupSetsHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of "cmgo-p8vnipr5", which is the same as the instance ID displayed in the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The name of the backup file to be downloaded, which can be obtained by the `DescribeDBBackups` API.
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * Specify the node name of a replica set instance or the shard name list of a sharded cluster instance. Only backups of the specified node or shards will be downloaded.
Suppose you have a replica set instance (ID: cmgo-p8vnipr5), you can use the sample code `BackupSets.0=cmgo-p8vnipr5_0` to download the full backup. For a replica set instance, the parameter value must be in the format of "instance ID_0".
Suppose you have a sharded cluster instance (ID: cmgo-p8vnipr5), you can use the sample code `BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1` to download the backup data of shard 0 and shard 1. To download the full backup, please specify all shard names.
                     */
                    std::vector<ReplicaSetInfo> m_backupSets;
                    bool m_backupSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDOWNLOADTASKREQUEST_H_
