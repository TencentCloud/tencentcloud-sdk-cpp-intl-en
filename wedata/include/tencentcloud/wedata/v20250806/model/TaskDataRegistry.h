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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKDATAREGISTRY_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKDATAREGISTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Task data registration item.
                */
                class TaskDataRegistry : public AbstractModel
                {
                public:
                    TaskDataRegistry();
                    ~TaskDataRegistry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data source ID.
                     * @return DatasourceId Data source ID.
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data source ID.
                     * @param _datasourceId Data source ID.
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Database name.

                     * @return DatabaseName Database name.

                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database name.

                     * @param _databaseName Database name.

                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

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
                     * 获取Partition name

                     * @return PartitionName Partition name

                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 设置Partition name

                     * @param _partitionName Partition name

                     * 
                     */
                    void SetPartitionName(const std::string& _partitionName);

                    /**
                     * 判断参数 PartitionName 是否已赋值
                     * @return PartitionName 是否已赋值
                     * 
                     */
                    bool PartitionNameHasBeenSet() const;

                    /**
                     * 获取Input output table data type.
Input stream:
 UPSTREAM,
Output stream:
  DOWNSTREAM;.
                     * @return DataFlowType Input output table data type.
Input stream:
 UPSTREAM,
Output stream:
  DOWNSTREAM;.
                     * 
                     */
                    std::string GetDataFlowType() const;

                    /**
                     * 设置Input output table data type.
Input stream:
 UPSTREAM,
Output stream:
  DOWNSTREAM;.
                     * @param _dataFlowType Input output table data type.
Input stream:
 UPSTREAM,
Output stream:
  DOWNSTREAM;.
                     * 
                     */
                    void SetDataFlowType(const std::string& _dataFlowType);

                    /**
                     * 判断参数 DataFlowType 是否已赋值
                     * @return DataFlowType 是否已赋值
                     * 
                     */
                    bool DataFlowTypeHasBeenSet() const;

                    /**
                     * 获取Physical unique ID..
                     * @return TablePhysicalId Physical unique ID..
                     * 
                     */
                    std::string GetTablePhysicalId() const;

                    /**
                     * 设置Physical unique ID..
                     * @param _tablePhysicalId Physical unique ID..
                     * 
                     */
                    void SetTablePhysicalId(const std::string& _tablePhysicalId);

                    /**
                     * 判断参数 TablePhysicalId 是否已赋值
                     * @return TablePhysicalId 是否已赋值
                     * 
                     */
                    bool TablePhysicalIdHasBeenSet() const;

                    /**
                     * 获取Database unique id..
                     * @return DbGuid Database unique id..
                     * 
                     */
                    std::string GetDbGuid() const;

                    /**
                     * 设置Database unique id..
                     * @param _dbGuid Database unique id..
                     * 
                     */
                    void SetDbGuid(const std::string& _dbGuid);

                    /**
                     * 判断参数 DbGuid 是否已赋值
                     * @return DbGuid 是否已赋值
                     * 
                     */
                    bool DbGuidHasBeenSet() const;

                    /**
                     * 获取Unique id of the table.
                     * @return TableGuid Unique id of the table.
                     * 
                     */
                    std::string GetTableGuid() const;

                    /**
                     * 设置Unique id of the table.
                     * @param _tableGuid Unique id of the table.
                     * 
                     */
                    void SetTableGuid(const std::string& _tableGuid);

                    /**
                     * 判断参数 TableGuid 是否已赋值
                     * @return TableGuid 是否已赋值
                     * 
                     */
                    bool TableGuidHasBeenSet() const;

                private:

                    /**
                     * Data source ID.
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Database name.

                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Table name

                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Partition name

                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                    /**
                     * Input output table data type.
Input stream:
 UPSTREAM,
Output stream:
  DOWNSTREAM;.
                     */
                    std::string m_dataFlowType;
                    bool m_dataFlowTypeHasBeenSet;

                    /**
                     * Physical unique ID..
                     */
                    std::string m_tablePhysicalId;
                    bool m_tablePhysicalIdHasBeenSet;

                    /**
                     * Database unique id..
                     */
                    std::string m_dbGuid;
                    bool m_dbGuidHasBeenSet;

                    /**
                     * Unique id of the table.
                     */
                    std::string m_tableGuid;
                    bool m_tableGuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKDATAREGISTRY_H_
