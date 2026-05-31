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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTBYVAULTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTBYVAULTREQUEST_H_

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
                * DescribeBackupListByVault request structure.
                */
                class DescribeBackupListByVaultRequest : public AbstractModel
                {
                public:
                    DescribeBackupListByVaultRequest();
                    ~DescribeBackupListByVaultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Safe ID, length must be greater than 0
                     * @return VaultId Safe ID, length must be greater than 0
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置Safe ID, length must be greater than 0
                     * @param _vaultId Safe ID, length must be greater than 0
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取Backup file ID list for filtering specific backups
                     * @return BackupIds Backup file ID list for filtering specific backups
                     * 
                     */
                    std::vector<int64_t> GetBackupIds() const;

                    /**
                     * 设置Backup file ID list for filtering specific backups
                     * @param _backupIds Backup file ID list for filtering specific backups
                     * 
                     */
                    void SetBackupIds(const std::vector<int64_t>& _backupIds);

                    /**
                     * 判断参数 BackupIds 是否已赋值
                     * @return BackupIds 是否已赋值
                     * 
                     */
                    bool BackupIdsHasBeenSet() const;

                    /**
                     * 获取Cluster ID for filtering backups of a specific cluster
                     * @return ClusterId Cluster ID for filtering backups of a specific cluster
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID for filtering backups of a specific cluster
                     * @param _clusterId Cluster ID for filtering backups of a specific cluster
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
                     * 获取Backup name list for exact matching filter criteria
                     * @return BackupNames Backup name list for exact matching filter criteria
                     * 
                     */
                    std::vector<std::string> GetBackupNames() const;

                    /**
                     * 设置Backup name list for exact matching filter criteria
                     * @param _backupNames Backup name list for exact matching filter criteria
                     * 
                     */
                    void SetBackupNames(const std::vector<std::string>& _backupNames);

                    /**
                     * 判断参数 BackupNames 是否已赋值
                     * @return BackupNames 是否已赋值
                     * 
                     */
                    bool BackupNamesHasBeenSet() const;

                    /**
                     * 获取Filename list for exact matching filter
                     * @return FileNames Filename list for exact matching filter
                     * 
                     */
                    std::vector<std::string> GetFileNames() const;

                    /**
                     * 设置Filename list for exact matching filter
                     * @param _fileNames Filename list for exact matching filter
                     * 
                     */
                    void SetFileNames(const std::vector<std::string>& _fileNames);

                    /**
                     * 判断参数 FileNames 是否已赋值
                     * @return FileNames 是否已赋值
                     * 
                     */
                    bool FileNamesHasBeenSet() const;

                    /**
                     * 获取Number of pages, range (0,100], default 100
                     * @return Limit Number of pages, range (0,100], default 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of pages, range (0,100], default 100
                     * @param _limit Number of pages, range (0,100], default 100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset. Range: [0, INF). Default is 0.
                     * @return Offset Pagination offset. Range: [0, INF). Default is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Range: [0, INF). Default is 0.
                     * @param _offset Pagination offset. Range: [0, INF). Default is 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime. Default: createTime.
                     * @return OrderBy Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime. Default: createTime.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime. Default: createTime.
                     * @param _orderBy Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime. Default: createTime.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting method, available values: desc, asc, DESC, ASC, default desc
                     * @return OrderByType Sorting method, available values: desc, asc, DESC, ASC, default desc
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting method, available values: desc, asc, DESC, ASC, default desc
                     * @param _orderByType Sorting method, available values: desc, asc, DESC, ASC, default desc
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Safe ID, length must be greater than 0
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * Backup file ID list for filtering specific backups
                     */
                    std::vector<int64_t> m_backupIds;
                    bool m_backupIdsHasBeenSet;

                    /**
                     * Cluster ID for filtering backups of a specific cluster
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Backup name list for exact matching filter criteria
                     */
                    std::vector<std::string> m_backupNames;
                    bool m_backupNamesHasBeenSet;

                    /**
                     * Filename list for exact matching filter
                     */
                    std::vector<std::string> m_fileNames;
                    bool m_fileNamesHasBeenSet;

                    /**
                     * Number of pages, range (0,100], default 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset. Range: [0, INF). Default is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime. Default: createTime.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting method, available values: desc, asc, DESC, ASC, default desc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTBYVAULTREQUEST_H_
