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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SELECTEDTABLEWITHFIELD_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SELECTEDTABLEWITHFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/FieldInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/KafkaInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * The list of tables to which the specified fields belong
                */
                class SelectedTableWithField : public AbstractModel
                {
                public:
                    SelectedTableWithField();
                    ~SelectedTableWithField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the table group where the table resides
                     * @return TableGroupId ID of the table group where the table resides
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置ID of the table group where the table resides
                     * @param _tableGroupId ID of the table group where the table resides
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
                     * 获取Table name
                     * @return TableName Table name
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
                     * @param _tableName Table name
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Table ID
                     * @return TableInstanceId Table ID
                     * 
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置Table ID
                     * @param _tableInstanceId Table ID
                     * 
                     */
                    void SetTableInstanceId(const std::string& _tableInstanceId);

                    /**
                     * 判断参数 TableInstanceId 是否已赋值
                     * @return TableInstanceId 是否已赋值
                     * 
                     */
                    bool TableInstanceIdHasBeenSet() const;

                    /**
                     * 获取Table description language. Valid values: `PROTO`, `TDR`
                     * @return TableIdlType Table description language. Valid values: `PROTO`, `TDR`
                     * 
                     */
                    std::string GetTableIdlType() const;

                    /**
                     * 设置Table description language. Valid values: `PROTO`, `TDR`
                     * @param _tableIdlType Table description language. Valid values: `PROTO`, `TDR`
                     * 
                     */
                    void SetTableIdlType(const std::string& _tableIdlType);

                    /**
                     * 判断参数 TableIdlType 是否已赋值
                     * @return TableIdlType 是否已赋值
                     * 
                     */
                    bool TableIdlTypeHasBeenSet() const;

                    /**
                     * 获取Table data structure. Valid values: `GENERIC`, `LIST`
                     * @return TableType Table data structure. Valid values: `GENERIC`, `LIST`
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置Table data structure. Valid values: `GENERIC`, `LIST`
                     * @param _tableType Table data structure. Valid values: `GENERIC`, `LIST`
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取The list of fields on which indexes will be created, table caching enabled, or data subscription enabled
                     * @return SelectedFields The list of fields on which indexes will be created, table caching enabled, or data subscription enabled
                     * 
                     */
                    std::vector<FieldInfo> GetSelectedFields() const;

                    /**
                     * 设置The list of fields on which indexes will be created, table caching enabled, or data subscription enabled
                     * @param _selectedFields The list of fields on which indexes will be created, table caching enabled, or data subscription enabled
                     * 
                     */
                    void SetSelectedFields(const std::vector<FieldInfo>& _selectedFields);

                    /**
                     * 判断参数 SelectedFields 是否已赋值
                     * @return SelectedFields 是否已赋值
                     * 
                     */
                    bool SelectedFieldsHasBeenSet() const;

                    /**
                     * 获取The number of index shards
                     * @return ShardNum The number of index shards
                     * 
                     */
                    uint64_t GetShardNum() const;

                    /**
                     * 设置The number of index shards
                     * @param _shardNum The number of index shards
                     * 
                     */
                    void SetShardNum(const uint64_t& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取CKafka instance information
                     * @return KafkaInfo CKafka instance information
                     * 
                     */
                    KafkaInfo GetKafkaInfo() const;

                    /**
                     * 设置CKafka instance information
                     * @param _kafkaInfo CKafka instance information
                     * 
                     */
                    void SetKafkaInfo(const KafkaInfo& _kafkaInfo);

                    /**
                     * 判断参数 KafkaInfo 是否已赋值
                     * @return KafkaInfo 是否已赋值
                     * 
                     */
                    bool KafkaInfoHasBeenSet() const;

                private:

                    /**
                     * ID of the table group where the table resides
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * Table name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Table ID
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * Table description language. Valid values: `PROTO`, `TDR`
                     */
                    std::string m_tableIdlType;
                    bool m_tableIdlTypeHasBeenSet;

                    /**
                     * Table data structure. Valid values: `GENERIC`, `LIST`
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * The list of fields on which indexes will be created, table caching enabled, or data subscription enabled
                     */
                    std::vector<FieldInfo> m_selectedFields;
                    bool m_selectedFieldsHasBeenSet;

                    /**
                     * The number of index shards
                     */
                    uint64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * CKafka instance information
                     */
                    KafkaInfo m_kafkaInfo;
                    bool m_kafkaInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SELECTEDTABLEWITHFIELD_H_
