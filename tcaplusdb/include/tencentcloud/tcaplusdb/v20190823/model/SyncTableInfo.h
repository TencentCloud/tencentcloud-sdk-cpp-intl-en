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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SYNCTABLEINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SYNCTABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SyncTableField.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * TcaplusDB cache table information
                */
                class SyncTableInfo : public AbstractModel
                {
                public:
                    SyncTableInfo();
                    ~SyncTableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sharded table quantity of the target cache table
                     * @return TargetTableSplitNum Sharded table quantity of the target cache table
                     */
                    uint64_t GetTargetTableSplitNum() const;

                    /**
                     * 设置Sharded table quantity of the target cache table
                     * @param TargetTableSplitNum Sharded table quantity of the target cache table
                     */
                    void SetTargetTableSplitNum(const uint64_t& _targetTableSplitNum);

                    /**
                     * 判断参数 TargetTableSplitNum 是否已赋值
                     * @return TargetTableSplitNum 是否已赋值
                     */
                    bool TargetTableSplitNumHasBeenSet() const;

                    /**
                     * 获取Prefix of the target cache table name
                     * @return TargetTableNamePrefix Prefix of the target cache table name
                     */
                    std::vector<std::string> GetTargetTableNamePrefix() const;

                    /**
                     * 设置Prefix of the target cache table name
                     * @param TargetTableNamePrefix Prefix of the target cache table name
                     */
                    void SetTargetTableNamePrefix(const std::vector<std::string>& _targetTableNamePrefix);

                    /**
                     * 判断参数 TargetTableNamePrefix 是否已赋值
                     * @return TargetTableNamePrefix 是否已赋值
                     */
                    bool TargetTableNamePrefixHasBeenSet() const;

                    /**
                     * 获取Instance ID of the cache database
                     * @return TargetSyncDBInstanceId Instance ID of the cache database
                     */
                    std::string GetTargetSyncDBInstanceId() const;

                    /**
                     * 设置Instance ID of the cache database
                     * @param TargetSyncDBInstanceId Instance ID of the cache database
                     */
                    void SetTargetSyncDBInstanceId(const std::string& _targetSyncDBInstanceId);

                    /**
                     * 判断参数 TargetSyncDBInstanceId 是否已赋值
                     * @return TargetSyncDBInstanceId 是否已赋值
                     */
                    bool TargetSyncDBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Name of the database where the cache table resides
                     * @return TargetDatabaseName Name of the database where the cache table resides
                     */
                    std::string GetTargetDatabaseName() const;

                    /**
                     * 设置Name of the database where the cache table resides
                     * @param TargetDatabaseName Name of the database where the cache table resides
                     */
                    void SetTargetDatabaseName(const std::string& _targetDatabaseName);

                    /**
                     * 判断参数 TargetDatabaseName 是否已赋值
                     * @return TargetDatabaseName 是否已赋值
                     */
                    bool TargetDatabaseNameHasBeenSet() const;

                    /**
                     * 获取Caching status. Valid values: `0` (creating), `1` (caching), `2` (disabled), `-1` (deleted).
                     * @return Status Caching status. Valid values: `0` (creating), `1` (caching), `2` (disabled), `-1` (deleted).
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Caching status. Valid values: `0` (creating), `1` (caching), `2` (disabled), `-1` (deleted).
                     * @param Status Caching status. Valid values: `0` (creating), `1` (caching), `2` (disabled), `-1` (deleted).
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取ID of cluster where the table resides
                     * @return ClusterId ID of cluster where the table resides
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of cluster where the table resides
                     * @param ClusterId ID of cluster where the table resides
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The ID of the table group where the table resides
                     * @return TableGroupId The ID of the table group where the table resides
                     */
                    uint64_t GetTableGroupId() const;

                    /**
                     * 设置The ID of the table group where the table resides
                     * @param TableGroupId The ID of the table group where the table resides
                     */
                    void SetTableGroupId(const uint64_t& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取Table name
                     * @return TableName Table name
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
                     * @param TableName Table name
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Table ID
                     * @return TableId Table ID
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Table ID
                     * @param TableId Table ID
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Mapping from the primary key field of the TcaplusDB table to the field of the target cache table
                     * @return KeyFieldMapping Mapping from the primary key field of the TcaplusDB table to the field of the target cache table
                     */
                    std::vector<SyncTableField> GetKeyFieldMapping() const;

                    /**
                     * 设置Mapping from the primary key field of the TcaplusDB table to the field of the target cache table
                     * @param KeyFieldMapping Mapping from the primary key field of the TcaplusDB table to the field of the target cache table
                     */
                    void SetKeyFieldMapping(const std::vector<SyncTableField>& _keyFieldMapping);

                    /**
                     * 判断参数 KeyFieldMapping 是否已赋值
                     * @return KeyFieldMapping 是否已赋值
                     */
                    bool KeyFieldMappingHasBeenSet() const;

                    /**
                     * 获取Mapping of TcaplusDB table field to target cache table field
                     * @return ValueFieldMapping Mapping of TcaplusDB table field to target cache table field
                     */
                    std::vector<SyncTableField> GetValueFieldMapping() const;

                    /**
                     * 设置Mapping of TcaplusDB table field to target cache table field
                     * @param ValueFieldMapping Mapping of TcaplusDB table field to target cache table field
                     */
                    void SetValueFieldMapping(const std::vector<SyncTableField>& _valueFieldMapping);

                    /**
                     * 判断参数 ValueFieldMapping 是否已赋值
                     * @return ValueFieldMapping 是否已赋值
                     */
                    bool ValueFieldMappingHasBeenSet() const;

                private:

                    /**
                     * Sharded table quantity of the target cache table
                     */
                    uint64_t m_targetTableSplitNum;
                    bool m_targetTableSplitNumHasBeenSet;

                    /**
                     * Prefix of the target cache table name
                     */
                    std::vector<std::string> m_targetTableNamePrefix;
                    bool m_targetTableNamePrefixHasBeenSet;

                    /**
                     * Instance ID of the cache database
                     */
                    std::string m_targetSyncDBInstanceId;
                    bool m_targetSyncDBInstanceIdHasBeenSet;

                    /**
                     * Name of the database where the cache table resides
                     */
                    std::string m_targetDatabaseName;
                    bool m_targetDatabaseNameHasBeenSet;

                    /**
                     * Caching status. Valid values: `0` (creating), `1` (caching), `2` (disabled), `-1` (deleted).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * ID of cluster where the table resides
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The ID of the table group where the table resides
                     */
                    uint64_t m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * Table name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Table ID
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Mapping from the primary key field of the TcaplusDB table to the field of the target cache table
                     */
                    std::vector<SyncTableField> m_keyFieldMapping;
                    bool m_keyFieldMappingHasBeenSet;

                    /**
                     * Mapping of TcaplusDB table field to target cache table field
                     */
                    std::vector<SyncTableField> m_valueFieldMapping;
                    bool m_valueFieldMappingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SYNCTABLEINFO_H_
