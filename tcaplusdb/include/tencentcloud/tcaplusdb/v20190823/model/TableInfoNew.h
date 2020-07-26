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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEINFONEW_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEINFONEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Table details
                */
                class TableInfoNew : public AbstractModel
                {
                public:
                    TableInfoNew();
                    ~TableInfoNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableName Table name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TableName Table name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Table instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableInstanceId Table instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置Table instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TableInstanceId Table instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTableInstanceId(const std::string& _tableInstanceId);

                    /**
                     * 判断参数 TableInstanceId 是否已赋值
                     * @return TableInstanceId 是否已赋值
                     */
                    bool TableInstanceIdHasBeenSet() const;

                    /**
                     * 获取Table data structure type, such as `GENERIC` or `LIST`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableType Table data structure type, such as `GENERIC` or `LIST`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置Table data structure type, such as `GENERIC` or `LIST`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TableType Table data structure type, such as `GENERIC` or `LIST`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取Table data interface description language (IDL) type, such as `PROTO` or `TDR`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableIdlType Table data interface description language (IDL) type, such as `PROTO` or `TDR`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTableIdlType() const;

                    /**
                     * 设置Table data interface description language (IDL) type, such as `PROTO` or `TDR`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TableIdlType Table data interface description language (IDL) type, such as `PROTO` or `TDR`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTableIdlType(const std::string& _tableIdlType);

                    /**
                     * 判断参数 TableIdlType 是否已赋值
                     * @return TableIdlType 是否已赋值
                     */
                    bool TableIdlTypeHasBeenSet() const;

                    /**
                     * 获取ID of the cluster where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId ID of the cluster where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ClusterId ID of the cluster where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Name of the cluster where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClusterName Name of the cluster where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Name of the cluster where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ClusterName Name of the cluster where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取ID of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableGroupId ID of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置ID of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TableGroupId ID of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取Name of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableGroupName Name of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTableGroupName() const;

                    /**
                     * 设置Name of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TableGroupName Name of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTableGroupName(const std::string& _tableGroupName);

                    /**
                     * 判断参数 TableGroupName 是否已赋值
                     * @return TableGroupName 是否已赋值
                     */
                    bool TableGroupNameHasBeenSet() const;

                    /**
                     * 获取JSON string of table's primary key field structure
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KeyStruct JSON string of table's primary key field structure
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetKeyStruct() const;

                    /**
                     * 设置JSON string of table's primary key field structure
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param KeyStruct JSON string of table's primary key field structure
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetKeyStruct(const std::string& _keyStruct);

                    /**
                     * 判断参数 KeyStruct 是否已赋值
                     * @return KeyStruct 是否已赋值
                     */
                    bool KeyStructHasBeenSet() const;

                    /**
                     * 获取JSON string of table non-primary key field structure
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ValueStruct JSON string of table non-primary key field structure
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetValueStruct() const;

                    /**
                     * 设置JSON string of table non-primary key field structure
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ValueStruct JSON string of table non-primary key field structure
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetValueStruct(const std::string& _valueStruct);

                    /**
                     * 判断参数 ValueStruct 是否已赋值
                     * @return ValueStruct 是否已赋值
                     */
                    bool ValueStructHasBeenSet() const;

                    /**
                     * 获取Table shardkey set, which is valid for PROTO-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ShardingKeySet Table shardkey set, which is valid for PROTO-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetShardingKeySet() const;

                    /**
                     * 设置Table shardkey set, which is valid for PROTO-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ShardingKeySet Table shardkey set, which is valid for PROTO-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetShardingKeySet(const std::string& _shardingKeySet);

                    /**
                     * 判断参数 ShardingKeySet 是否已赋值
                     * @return ShardingKeySet 是否已赋值
                     */
                    bool ShardingKeySetHasBeenSet() const;

                    /**
                     * 获取Table index key field set, which is valid for PROTO-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IndexStruct Table index key field set, which is valid for PROTO-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIndexStruct() const;

                    /**
                     * 设置Table index key field set, which is valid for PROTO-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IndexStruct Table index key field set, which is valid for PROTO-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIndexStruct(const std::string& _indexStruct);

                    /**
                     * 判断参数 IndexStruct 是否已赋值
                     * @return IndexStruct 是否已赋值
                     */
                    bool IndexStructHasBeenSet() const;

                    /**
                     * 获取Number of LIST-type table elements
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ListElementNum Number of LIST-type table elements
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetListElementNum() const;

                    /**
                     * 设置Number of LIST-type table elements
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ListElementNum Number of LIST-type table elements
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetListElementNum(const uint64_t& _listElementNum);

                    /**
                     * 判断参数 ListElementNum 是否已赋值
                     * @return ListElementNum 是否已赋值
                     */
                    bool ListElementNumHasBeenSet() const;

                    /**
                     * 获取Information list of IDL files associated with table
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IdlFiles Information list of IDL files associated with table
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<IdlFileInfo> GetIdlFiles() const;

                    /**
                     * 设置Information list of IDL files associated with table
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IdlFiles Information list of IDL files associated with table
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIdlFiles(const std::vector<IdlFileInfo>& _idlFiles);

                    /**
                     * 判断参数 IdlFiles 是否已赋值
                     * @return IdlFiles 是否已赋值
                     */
                    bool IdlFilesHasBeenSet() const;

                    /**
                     * 获取Reserved table capacity in GB
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ReservedVolume Reserved table capacity in GB
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetReservedVolume() const;

                    /**
                     * 设置Reserved table capacity in GB
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ReservedVolume Reserved table capacity in GB
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetReservedVolume(const int64_t& _reservedVolume);

                    /**
                     * 判断参数 ReservedVolume 是否已赋值
                     * @return ReservedVolume 是否已赋值
                     */
                    bool ReservedVolumeHasBeenSet() const;

                    /**
                     * 获取Reserved table read QPS
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ReservedReadQps Reserved table read QPS
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetReservedReadQps() const;

                    /**
                     * 设置Reserved table read QPS
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ReservedReadQps Reserved table read QPS
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetReservedReadQps(const int64_t& _reservedReadQps);

                    /**
                     * 判断参数 ReservedReadQps 是否已赋值
                     * @return ReservedReadQps 是否已赋值
                     */
                    bool ReservedReadQpsHasBeenSet() const;

                    /**
                     * 获取Reserved table write QPS
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ReservedWriteQps Reserved table write QPS
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetReservedWriteQps() const;

                    /**
                     * 设置Reserved table write QPS
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ReservedWriteQps Reserved table write QPS
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetReservedWriteQps(const int64_t& _reservedWriteQps);

                    /**
                     * 判断参数 ReservedWriteQps 是否已赋值
                     * @return ReservedWriteQps 是否已赋值
                     */
                    bool ReservedWriteQpsHasBeenSet() const;

                    /**
                     * 获取Actual table data size in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableSize Actual table data size in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTableSize() const;

                    /**
                     * 设置Actual table data size in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TableSize Actual table data size in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTableSize(const int64_t& _tableSize);

                    /**
                     * 判断参数 TableSize 是否已赋值
                     * @return TableSize 是否已赋值
                     */
                    bool TableSizeHasBeenSet() const;

                    /**
                     * 获取Table status
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Table status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Table status
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Status Table status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Table creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Table creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Table creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreatedTime Table creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Table's last modified time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedTime Table's last modified time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Table's last modified time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UpdatedTime Table's last modified time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取Table remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Memo Table remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMemo() const;

                    /**
                     * 设置Table remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Memo Table remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMemo(const std::string& _memo);

                    /**
                     * 判断参数 Memo 是否已赋值
                     * @return Memo 是否已赋值
                     */
                    bool MemoHasBeenSet() const;

                    /**
                     * 获取Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Error Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Error Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取TcaplusDB SDK data access ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiAccessId TcaplusDB SDK data access ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApiAccessId() const;

                    /**
                     * 设置TcaplusDB SDK data access ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ApiAccessId TcaplusDB SDK data access ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApiAccessId(const std::string& _apiAccessId);

                    /**
                     * 判断参数 ApiAccessId 是否已赋值
                     * @return ApiAccessId 是否已赋值
                     */
                    bool ApiAccessIdHasBeenSet() const;

                    /**
                     * 获取Number of SORTLIST-type table sort fields
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SortFieldNum Number of SORTLIST-type table sort fields
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetSortFieldNum() const;

                    /**
                     * 设置Number of SORTLIST-type table sort fields
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SortFieldNum Number of SORTLIST-type table sort fields
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSortFieldNum(const int64_t& _sortFieldNum);

                    /**
                     * 判断参数 SortFieldNum 是否已赋值
                     * @return SortFieldNum 是否已赋值
                     */
                    bool SortFieldNumHasBeenSet() const;

                    /**
                     * 获取Sort order of SORTLIST-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SortRule Sort order of SORTLIST-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetSortRule() const;

                    /**
                     * 设置Sort order of SORTLIST-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SortRule Sort order of SORTLIST-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSortRule(const int64_t& _sortRule);

                    /**
                     * 判断参数 SortRule 是否已赋值
                     * @return SortRule 是否已赋值
                     */
                    bool SortRuleHasBeenSet() const;

                    /**
                     * 获取
                     * @return DbClusterInfoStruct 
                     */
                    std::string GetDbClusterInfoStruct() const;

                    /**
                     * 设置
                     * @param DbClusterInfoStruct 
                     */
                    void SetDbClusterInfoStruct(const std::string& _dbClusterInfoStruct);

                    /**
                     * 判断参数 DbClusterInfoStruct 是否已赋值
                     * @return DbClusterInfoStruct 是否已赋值
                     */
                    bool DbClusterInfoStructHasBeenSet() const;

                private:

                    /**
                     * Table name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Table instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * Table data structure type, such as `GENERIC` or `LIST`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * Table data interface description language (IDL) type, such as `PROTO` or `TDR`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableIdlType;
                    bool m_tableIdlTypeHasBeenSet;

                    /**
                     * ID of the cluster where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Name of the cluster where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * ID of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * Name of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableGroupName;
                    bool m_tableGroupNameHasBeenSet;

                    /**
                     * JSON string of table's primary key field structure
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyStruct;
                    bool m_keyStructHasBeenSet;

                    /**
                     * JSON string of table non-primary key field structure
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_valueStruct;
                    bool m_valueStructHasBeenSet;

                    /**
                     * Table shardkey set, which is valid for PROTO-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_shardingKeySet;
                    bool m_shardingKeySetHasBeenSet;

                    /**
                     * Table index key field set, which is valid for PROTO-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_indexStruct;
                    bool m_indexStructHasBeenSet;

                    /**
                     * Number of LIST-type table elements
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_listElementNum;
                    bool m_listElementNumHasBeenSet;

                    /**
                     * Information list of IDL files associated with table
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<IdlFileInfo> m_idlFiles;
                    bool m_idlFilesHasBeenSet;

                    /**
                     * Reserved table capacity in GB
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_reservedVolume;
                    bool m_reservedVolumeHasBeenSet;

                    /**
                     * Reserved table read QPS
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_reservedReadQps;
                    bool m_reservedReadQpsHasBeenSet;

                    /**
                     * Reserved table write QPS
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_reservedWriteQps;
                    bool m_reservedWriteQpsHasBeenSet;

                    /**
                     * Actual table data size in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tableSize;
                    bool m_tableSizeHasBeenSet;

                    /**
                     * Table status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Table creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Table's last modified time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * Table remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_memo;
                    bool m_memoHasBeenSet;

                    /**
                     * Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * TcaplusDB SDK data access ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiAccessId;
                    bool m_apiAccessIdHasBeenSet;

                    /**
                     * Number of SORTLIST-type table sort fields
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sortFieldNum;
                    bool m_sortFieldNumHasBeenSet;

                    /**
                     * Sort order of SORTLIST-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sortRule;
                    bool m_sortRuleHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_dbClusterInfoStruct;
                    bool m_dbClusterInfoStructHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEINFONEW_H_
