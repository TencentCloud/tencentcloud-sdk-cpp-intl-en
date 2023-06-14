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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEGROUPINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Table group details
                */
                class TableGroupInfo : public AbstractModel
                {
                public:
                    TableGroupInfo();
                    ~TableGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table group ID
                     * @return TableGroupId Table group ID
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置Table group ID
                     * @param _tableGroupId Table group ID
                     * 
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取Table group name
                     * @return TableGroupName Table group name
                     * 
                     */
                    std::string GetTableGroupName() const;

                    /**
                     * 设置Table group name
                     * @param _tableGroupName Table group name
                     * 
                     */
                    void SetTableGroupName(const std::string& _tableGroupName);

                    /**
                     * 判断参数 TableGroupName 是否已赋值
                     * @return TableGroupName 是否已赋值
                     * 
                     */
                    bool TableGroupNameHasBeenSet() const;

                    /**
                     * 获取Table group creation time
                     * @return CreatedTime Table group creation time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Table group creation time
                     * @param _createdTime Table group creation time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Number of tables in table group
                     * @return TableCount Number of tables in table group
                     * 
                     */
                    uint64_t GetTableCount() const;

                    /**
                     * 设置Number of tables in table group
                     * @param _tableCount Number of tables in table group
                     * 
                     */
                    void SetTableCount(const uint64_t& _tableCount);

                    /**
                     * 判断参数 TableCount 是否已赋值
                     * @return TableCount 是否已赋值
                     * 
                     */
                    bool TableCountHasBeenSet() const;

                    /**
                     * 获取Total table storage capacity in MB in table group
                     * @return TotalSize Total table storage capacity in MB in table group
                     * 
                     */
                    uint64_t GetTotalSize() const;

                    /**
                     * 设置Total table storage capacity in MB in table group
                     * @param _totalSize Total table storage capacity in MB in table group
                     * 
                     */
                    void SetTotalSize(const uint64_t& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取The number of days before the backup files of the Txh tables expire and are deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TxhBackupExpireDay The number of days before the backup files of the Txh tables expire and are deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTxhBackupExpireDay() const;

                    /**
                     * 设置The number of days before the backup files of the Txh tables expire and are deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _txhBackupExpireDay The number of days before the backup files of the Txh tables expire and are deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTxhBackupExpireDay(const uint64_t& _txhBackupExpireDay);

                    /**
                     * 判断参数 TxhBackupExpireDay 是否已赋值
                     * @return TxhBackupExpireDay 是否已赋值
                     * 
                     */
                    bool TxhBackupExpireDayHasBeenSet() const;

                    /**
                     * 获取Whether MySQL load rebalancing is enabled. Valid values: `0` (Disabled), `1` (Enabling), `2` (Enabled).
                     * @return EnableMysql Whether MySQL load rebalancing is enabled. Valid values: `0` (Disabled), `1` (Enabling), `2` (Enabled).
                     * 
                     */
                    uint64_t GetEnableMysql() const;

                    /**
                     * 设置Whether MySQL load rebalancing is enabled. Valid values: `0` (Disabled), `1` (Enabling), `2` (Enabled).
                     * @param _enableMysql Whether MySQL load rebalancing is enabled. Valid values: `0` (Disabled), `1` (Enabling), `2` (Enabled).
                     * 
                     */
                    void SetEnableMysql(const uint64_t& _enableMysql);

                    /**
                     * 判断参数 EnableMysql 是否已赋值
                     * @return EnableMysql 是否已赋值
                     * 
                     */
                    bool EnableMysqlHasBeenSet() const;

                    /**
                     * 获取MySQL load rebalancing vip
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MysqlConnIp MySQL load rebalancing vip
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMysqlConnIp() const;

                    /**
                     * 设置MySQL load rebalancing vip
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mysqlConnIp MySQL load rebalancing vip
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMysqlConnIp(const std::string& _mysqlConnIp);

                    /**
                     * 判断参数 MysqlConnIp 是否已赋值
                     * @return MysqlConnIp 是否已赋值
                     * 
                     */
                    bool MysqlConnIpHasBeenSet() const;

                    /**
                     * 获取MySQL load rebalancing vport
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MysqlConnPort MySQL load rebalancing vport
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMysqlConnPort() const;

                    /**
                     * 设置MySQL load rebalancing vport
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mysqlConnPort MySQL load rebalancing vport
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMysqlConnPort(const uint64_t& _mysqlConnPort);

                    /**
                     * 判断参数 MysqlConnPort 是否已赋值
                     * @return MysqlConnPort 是否已赋值
                     * 
                     */
                    bool MysqlConnPortHasBeenSet() const;

                private:

                    /**
                     * Table group ID
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * Table group name
                     */
                    std::string m_tableGroupName;
                    bool m_tableGroupNameHasBeenSet;

                    /**
                     * Table group creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Number of tables in table group
                     */
                    uint64_t m_tableCount;
                    bool m_tableCountHasBeenSet;

                    /**
                     * Total table storage capacity in MB in table group
                     */
                    uint64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * The number of days before the backup files of the Txh tables expire and are deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_txhBackupExpireDay;
                    bool m_txhBackupExpireDayHasBeenSet;

                    /**
                     * Whether MySQL load rebalancing is enabled. Valid values: `0` (Disabled), `1` (Enabling), `2` (Enabled).
                     */
                    uint64_t m_enableMysql;
                    bool m_enableMysqlHasBeenSet;

                    /**
                     * MySQL load rebalancing vip
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mysqlConnIp;
                    bool m_mysqlConnIpHasBeenSet;

                    /**
                     * MySQL load rebalancing vport
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_mysqlConnPort;
                    bool m_mysqlConnPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEGROUPINFO_H_
