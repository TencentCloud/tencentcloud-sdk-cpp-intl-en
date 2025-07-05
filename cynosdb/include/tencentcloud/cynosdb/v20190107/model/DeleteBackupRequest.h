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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETEBACKUPREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETEBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DeleteBackup request structure.
                */
                class DeleteBackupRequest : public AbstractModel
                {
                public:
                    DeleteBackupRequest();
                    ~DeleteBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Backup file ID. This field is used by legacy versions and thus not recommended.
                     * @return SnapshotIdList Backup file ID. This field is used by legacy versions and thus not recommended.
                     * 
                     */
                    std::vector<int64_t> GetSnapshotIdList() const;

                    /**
                     * 设置Backup file ID. This field is used by legacy versions and thus not recommended.
                     * @param _snapshotIdList Backup file ID. This field is used by legacy versions and thus not recommended.
                     * 
                     */
                    void SetSnapshotIdList(const std::vector<int64_t>& _snapshotIdList);

                    /**
                     * 判断参数 SnapshotIdList 是否已赋值
                     * @return SnapshotIdList 是否已赋值
                     * 
                     */
                    bool SnapshotIdListHasBeenSet() const;

                    /**
                     * 获取Backup file ID. This field is recommended.
                     * @return BackupIds Backup file ID. This field is recommended.
                     * 
                     */
                    std::vector<int64_t> GetBackupIds() const;

                    /**
                     * 设置Backup file ID. This field is recommended.
                     * @param _backupIds Backup file ID. This field is recommended.
                     * 
                     */
                    void SetBackupIds(const std::vector<int64_t>& _backupIds);

                    /**
                     * 判断参数 BackupIds 是否已赋值
                     * @return BackupIds 是否已赋值
                     * 
                     */
                    bool BackupIdsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Backup file ID. This field is used by legacy versions and thus not recommended.
                     */
                    std::vector<int64_t> m_snapshotIdList;
                    bool m_snapshotIdListHasBeenSet;

                    /**
                     * Backup file ID. This field is recommended.
                     */
                    std::vector<int64_t> m_backupIds;
                    bool m_backupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETEBACKUPREQUEST_H_
