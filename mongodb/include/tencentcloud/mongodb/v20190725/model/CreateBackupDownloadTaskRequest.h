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
                     * 获取Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @return InstanceId Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @param _instanceId Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
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
                     * 获取Name of the backup file to be downloaded. The [DescribeDBBackups](https://www.tencentcloud.com/document/product/240/38574?from_cn_redirect=1) API can be called to obtain it.
                     * @return BackupName Name of the backup file to be downloaded. The [DescribeDBBackups](https://www.tencentcloud.com/document/product/240/38574?from_cn_redirect=1) API can be called to obtain it.
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置Name of the backup file to be downloaded. The [DescribeDBBackups](https://www.tencentcloud.com/document/product/240/38574?from_cn_redirect=1) API can be called to obtain it.
                     * @param _backupName Name of the backup file to be downloaded. The [DescribeDBBackups](https://www.tencentcloud.com/document/product/240/38574?from_cn_redirect=1) API can be called to obtain it.
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
                     * 获取Specifies the node ID of the replica set to be downloaded or the shard node ID list of the sharded cluster.
- If the replica set instance ID is cmgo-p8vnipr5, for example, BackupSets.0=cmgo-p8vnipr5_0, full data can be downloaded.
- If the sharded cluster instance ID is cmgo-p8vnipr5, for example, BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1, download the data of Shard 0 and Shard 1. If a full download is needed for the sharded cluster, import all shard names as shown in the example.
                     * @return BackupSets Specifies the node ID of the replica set to be downloaded or the shard node ID list of the sharded cluster.
- If the replica set instance ID is cmgo-p8vnipr5, for example, BackupSets.0=cmgo-p8vnipr5_0, full data can be downloaded.
- If the sharded cluster instance ID is cmgo-p8vnipr5, for example, BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1, download the data of Shard 0 and Shard 1. If a full download is needed for the sharded cluster, import all shard names as shown in the example.
                     * 
                     */
                    std::vector<ReplicaSetInfo> GetBackupSets() const;

                    /**
                     * 设置Specifies the node ID of the replica set to be downloaded or the shard node ID list of the sharded cluster.
- If the replica set instance ID is cmgo-p8vnipr5, for example, BackupSets.0=cmgo-p8vnipr5_0, full data can be downloaded.
- If the sharded cluster instance ID is cmgo-p8vnipr5, for example, BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1, download the data of Shard 0 and Shard 1. If a full download is needed for the sharded cluster, import all shard names as shown in the example.
                     * @param _backupSets Specifies the node ID of the replica set to be downloaded or the shard node ID list of the sharded cluster.
- If the replica set instance ID is cmgo-p8vnipr5, for example, BackupSets.0=cmgo-p8vnipr5_0, full data can be downloaded.
- If the sharded cluster instance ID is cmgo-p8vnipr5, for example, BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1, download the data of Shard 0 and Shard 1. If a full download is needed for the sharded cluster, import all shard names as shown in the example.
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
                     * Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Name of the backup file to be downloaded. The [DescribeDBBackups](https://www.tencentcloud.com/document/product/240/38574?from_cn_redirect=1) API can be called to obtain it.
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * Specifies the node ID of the replica set to be downloaded or the shard node ID list of the sharded cluster.
- If the replica set instance ID is cmgo-p8vnipr5, for example, BackupSets.0=cmgo-p8vnipr5_0, full data can be downloaded.
- If the sharded cluster instance ID is cmgo-p8vnipr5, for example, BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1, download the data of Shard 0 and Shard 1. If a full download is needed for the sharded cluster, import all shard names as shown in the example.
                     */
                    std::vector<ReplicaSetInfo> m_backupSets;
                    bool m_backupSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDOWNLOADTASKREQUEST_H_
