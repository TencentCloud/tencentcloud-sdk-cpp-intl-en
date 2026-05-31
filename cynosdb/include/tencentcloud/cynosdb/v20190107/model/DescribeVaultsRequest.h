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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTSREQUEST_H_

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
                * DescribeVaults request structure.
                */
                class DescribeVaultsRequest : public AbstractModel
                {
                public:
                    DescribeVaultsRequest();
                    ~DescribeVaultsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Safe ID list for precise filtering
                     * @return VaultIds Safe ID list for precise filtering
                     * 
                     */
                    std::vector<std::string> GetVaultIds() const;

                    /**
                     * 设置Safe ID list for precise filtering
                     * @param _vaultIds Safe ID list for precise filtering
                     * 
                     */
                    void SetVaultIds(const std::vector<std::string>& _vaultIds);

                    /**
                     * 判断参数 VaultIds 是否已赋值
                     * @return VaultIds 是否已赋值
                     * 
                     */
                    bool VaultIdsHasBeenSet() const;

                    /**
                     * 获取Safe name, used for fuzzy filtering
                     * @return VaultName Safe name, used for fuzzy filtering
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置Safe name, used for fuzzy filtering
                     * @param _vaultName Safe name, used for fuzzy filtering
                     * 
                     */
                    void SetVaultName(const std::string& _vaultName);

                    /**
                     * 判断参数 VaultName 是否已赋值
                     * @return VaultName 是否已赋值
                     * 
                     */
                    bool VaultNameHasBeenSet() const;

                    /**
                     * 获取Status list of safe for filtering
                     * @return Status Status list of safe for filtering
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置Status list of safe for filtering
                     * @param _status Status list of safe for filtering
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Number of items per page, range (0,100], default 100
                     * @return Limit Number of items per page, range (0,100], default 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items per page, range (0,100], default 100
                     * @param _limit Number of items per page, range (0,100], default 100
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
                     * 获取Offset. Range: [0,+∞). Default is 0
                     * @return Offset Offset. Range: [0,+∞). Default is 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Range: [0,+∞). Default is 0
                     * @param _offset Offset. Range: [0,+∞). Default is 0
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
                     * 获取Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime
                     * @return OrderBy Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime
                     * @param _orderBy Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime
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
                     * 获取Sorting method, available values: desc, asc, DESC, ASC
                     * @return OrderByType Sorting method, available values: desc, asc, DESC, ASC
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting method, available values: desc, asc, DESC, ASC
                     * @param _orderByType Sorting method, available values: desc, asc, DESC, ASC
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
                     * Safe ID list for precise filtering
                     */
                    std::vector<std::string> m_vaultIds;
                    bool m_vaultIdsHasBeenSet;

                    /**
                     * Safe name, used for fuzzy filtering
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * Status list of safe for filtering
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Number of items per page, range (0,100], default 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Range: [0,+∞). Default is 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting field. Available values: VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting method, available values: desc, asc, DESC, ASC
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTSREQUEST_H_
