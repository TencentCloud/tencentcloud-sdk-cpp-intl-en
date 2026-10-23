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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CALCULATEBACKUPSAVESECEXPIRESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CALCULATEBACKUPSAVESECEXPIRESREQUEST_H_

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
                * CalculateBackupSaveSecExpires request structure.
                */
                class CalculateBackupSaveSecExpiresRequest : public AbstractModel
                {
                public:
                    CalculateBackupSaveSecExpiresRequest();
                    ~CalculateBackupSaveSecExpiresRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Backup safe ID
                     * @return VaultId Backup safe ID
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置Backup safe ID
                     * @param _vaultId Backup safe ID
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
                     * 获取Backup retention period (in seconds). Must be greater than 0.
                     * @return BackupSaveSeconds Backup retention period (in seconds). Must be greater than 0.
                     * 
                     */
                    int64_t GetBackupSaveSeconds() const;

                    /**
                     * 设置Backup retention period (in seconds). Must be greater than 0.
                     * @param _backupSaveSeconds Backup retention period (in seconds). Must be greater than 0.
                     * 
                     */
                    void SetBackupSaveSeconds(const int64_t& _backupSaveSeconds);

                    /**
                     * 判断参数 BackupSaveSeconds 是否已赋值
                     * @return BackupSaveSeconds 是否已赋值
                     * 
                     */
                    bool BackupSaveSecondsHasBeenSet() const;

                    /**
                     * 获取Number of items per page. Value range: (0,100]. Default: 10.
                     * @return Limit Number of items per page. Value range: (0,100]. Default: 10.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. Value range: (0,100]. Default: 10.
                     * @param _limit Number of items per page. Value range: (0,100]. Default: 10.
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
                     * 获取Offset. Value range: [0, INF). Default value: 0.
                     * @return Offset Offset. Value range: [0, INF). Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Value range: [0, INF). Default value: 0.
                     * @param _offset Offset. Value range: [0, INF). Default value: 0.
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
                     * 获取Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime. Default value: endTime.
                     * @return OrderBy Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime. Default value: endTime.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime. Default value: endTime.
                     * @param _orderBy Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime. Default value: endTime.
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
                     * 获取Sorting method. Available values: desc, asc, DESC, ASC. Default value: desc.
                     * @return OrderByType Sorting method. Available values: desc, asc, DESC, ASC. Default value: desc.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting method. Available values: desc, asc, DESC, ASC. Default value: desc.
                     * @param _orderByType Sorting method. Available values: desc, asc, DESC, ASC. Default value: desc.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * Backup safe ID
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * Backup retention period (in seconds). Must be greater than 0.
                     */
                    int64_t m_backupSaveSeconds;
                    bool m_backupSaveSecondsHasBeenSet;

                    /**
                     * Number of items per page. Value range: (0,100]. Default: 10.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Value range: [0, INF). Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime. Default value: endTime.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting method. Available values: desc, asc, DESC, ASC. Default value: desc.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CALCULATEBACKUPSAVESECEXPIRESREQUEST_H_
