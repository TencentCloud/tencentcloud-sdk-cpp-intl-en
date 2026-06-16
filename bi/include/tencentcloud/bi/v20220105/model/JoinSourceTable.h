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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_JOINSOURCETABLE_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_JOINSOURCETABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/TableField.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Join tables and view original table information
                */
                class JoinSourceTable : public AbstractModel
                {
                public:
                    JoinSourceTable();
                    ~JoinSourceTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1: Data source original table, 2: Local table, 3: Excel table, 4: API table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableNodeType 1: Data source original table, 2: Local table, 3: Excel table, 4: API table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTableNodeType() const;

                    /**
                     * 设置1: Data source original table, 2: Local table, 3: Excel table, 4: API table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableNodeType 1: Data source original table, 2: Local table, 3: Excel table, 4: API table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableNodeType(const uint64_t& _tableNodeType);

                    /**
                     * 判断参数 TableNodeType 是否已赋值
                     * @return TableNodeType 是否已赋值
                     * 
                     */
                    bool TableNodeTypeHasBeenSet() const;

                    /**
                     * 获取Base Table Node Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableNodeId Base Table Node Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableNodeId() const;

                    /**
                     * 设置Base Table Node Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableNodeId Base Table Node Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableNodeId(const std::string& _tableNodeId);

                    /**
                     * 判断参数 TableNodeId 是否已赋值
                     * @return TableNodeId 是否已赋值
                     * 
                     */
                    bool TableNodeIdHasBeenSet() const;

                    /**
                     * 获取Parent node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParentId Parent node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置Parent node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parentId Parent node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取Optional, the data source has no ID in the original table.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableId Optional, the data source has no ID in the original table.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Optional, the data source has no ID in the original table.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableId Optional, the data source has no ID in the original table.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Required. Use the original table name for the data source. Use the logical table name for other types.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableName Required. Use the original table name for the data source. Use the logical table name for other types.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Required. Use the original table name for the data source. Use the logical table name for other types.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableName Required. Use the original table name for the data source. Use the logical table name for other types.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Field list to display in the base table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Fields Field list to display in the base table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TableField> GetFields() const;

                    /**
                     * 设置Field list to display in the base table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fields Field list to display in the base table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFields(const std::vector<TableField>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceId Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDatasourceId() const;

                    /**
                     * 设置Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceId Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceId(const uint64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Optional, alias of the data source displayed on the front-end, excel table creation is required
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableAlias Optional, alias of the data source displayed on the front-end, excel table creation is required
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableAlias() const;

                    /**
                     * 设置Optional, alias of the data source displayed on the front-end, excel table creation is required
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableAlias Optional, alias of the data source displayed on the front-end, excel table creation is required
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableAlias(const std::string& _tableAlias);

                    /**
                     * 判断参数 TableAlias 是否已赋值
                     * @return TableAlias 是否已赋值
                     * 
                     */
                    bool TableAliasHasBeenSet() const;

                private:

                    /**
                     * 1: Data source original table, 2: Local table, 3: Excel table, 4: API table
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_tableNodeType;
                    bool m_tableNodeTypeHasBeenSet;

                    /**
                     * Base Table Node Id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableNodeId;
                    bool m_tableNodeIdHasBeenSet;

                    /**
                     * Parent node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * Optional, the data source has no ID in the original table.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Required. Use the original table name for the data source. Use the logical table name for other types.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Field list to display in the base table
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TableField> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Optional, alias of the data source displayed on the front-end, excel table creation is required
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableAlias;
                    bool m_tableAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_JOINSOURCETABLE_H_
