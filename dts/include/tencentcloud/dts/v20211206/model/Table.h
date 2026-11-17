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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_TABLE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_TABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Column.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Synced table description
                */
                class Table : public AbstractModel
                {
                public:
                    Table();
                    ~Table() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取New table name
                     * @return NewTableName New table name
                     * 
                     */
                    std::string GetNewTableName() const;

                    /**
                     * 设置New table name
                     * @param _newTableName New table name
                     * 
                     */
                    void SetNewTableName(const std::string& _newTableName);

                    /**
                     * 判断参数 NewTableName 是否已赋值
                     * @return NewTableName 是否已赋值
                     * 
                     */
                    bool NewTableNameHasBeenSet() const;

                    /**
                     * 获取Filter criteria.
                     * @return FilterCondition Filter criteria.
                     * 
                     */
                    std::string GetFilterCondition() const;

                    /**
                     * 设置Filter criteria.
                     * @param _filterCondition Filter criteria.
                     * 
                     */
                    void SetFilterCondition(const std::string& _filterCondition);

                    /**
                     * 判断参数 FilterCondition 是否已赋值
                     * @return FilterCondition 是否已赋值
                     * 
                     */
                    bool FilterConditionHasBeenSet() const;

                    /**
                     * 获取Whether to synchronize all columns in the table. All: all columns under the current table; Partial (the corresponding field ColumnMode in the ModifySyncJobConfig API does not currently support Partial): To synchronize some specific columns of the current table, Columns field is required.
                     * @return ColumnMode Whether to synchronize all columns in the table. All: all columns under the current table; Partial (the corresponding field ColumnMode in the ModifySyncJobConfig API does not currently support Partial): To synchronize some specific columns of the current table, Columns field is required.
                     * 
                     */
                    std::string GetColumnMode() const;

                    /**
                     * 设置Whether to synchronize all columns in the table. All: all columns under the current table; Partial (the corresponding field ColumnMode in the ModifySyncJobConfig API does not currently support Partial): To synchronize some specific columns of the current table, Columns field is required.
                     * @param _columnMode Whether to synchronize all columns in the table. All: all columns under the current table; Partial (the corresponding field ColumnMode in the ModifySyncJobConfig API does not currently support Partial): To synchronize some specific columns of the current table, Columns field is required.
                     * 
                     */
                    void SetColumnMode(const std::string& _columnMode);

                    /**
                     * 判断参数 ColumnMode 是否已赋值
                     * @return ColumnMode 是否已赋值
                     * 
                     */
                    bool ColumnModeHasBeenSet() const;

                    /**
                     * 获取Synchronized column information. It is required when ColumnMode is Partial.
                     * @return Columns Synchronized column information. It is required when ColumnMode is Partial.
                     * 
                     */
                    std::vector<Column> GetColumns() const;

                    /**
                     * 设置Synchronized column information. It is required when ColumnMode is Partial.
                     * @param _columns Synchronized column information. It is required when ColumnMode is Partial.
                     * 
                     */
                    void SetColumns(const std::vector<Column>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取Synchronize temporary tables. Note that this configuration is mutually exclusive with NewTableName, and only one of them can be used. When the configured synchronization object is at the table level and TableEditMode is pt, this parameter is meaningful. It is used to synchronize the temporary tables generated by tools such as pt-osc during the synchronization process. The possible temporary tables need to be configured here in advance, otherwise no temporary tables will be synchronized. For example, if you want to perform a pt-osc operation on t1, this configuration should be ["\_t1\_new","\_t1\_old"]; if you want to perform a gh-ost operation on t1, this configuration should be ["\_t1\_ghc","\_t1\_gho","\_t1\_del"]. Temporary tables generated by pt-osc and gh-ost can be configured simultaneously.
                     * @return TmpTables Synchronize temporary tables. Note that this configuration is mutually exclusive with NewTableName, and only one of them can be used. When the configured synchronization object is at the table level and TableEditMode is pt, this parameter is meaningful. It is used to synchronize the temporary tables generated by tools such as pt-osc during the synchronization process. The possible temporary tables need to be configured here in advance, otherwise no temporary tables will be synchronized. For example, if you want to perform a pt-osc operation on t1, this configuration should be ["\_t1\_new","\_t1\_old"]; if you want to perform a gh-ost operation on t1, this configuration should be ["\_t1\_ghc","\_t1\_gho","\_t1\_del"]. Temporary tables generated by pt-osc and gh-ost can be configured simultaneously.
                     * 
                     */
                    std::vector<std::string> GetTmpTables() const;

                    /**
                     * 设置Synchronize temporary tables. Note that this configuration is mutually exclusive with NewTableName, and only one of them can be used. When the configured synchronization object is at the table level and TableEditMode is pt, this parameter is meaningful. It is used to synchronize the temporary tables generated by tools such as pt-osc during the synchronization process. The possible temporary tables need to be configured here in advance, otherwise no temporary tables will be synchronized. For example, if you want to perform a pt-osc operation on t1, this configuration should be ["\_t1\_new","\_t1\_old"]; if you want to perform a gh-ost operation on t1, this configuration should be ["\_t1\_ghc","\_t1\_gho","\_t1\_del"]. Temporary tables generated by pt-osc and gh-ost can be configured simultaneously.
                     * @param _tmpTables Synchronize temporary tables. Note that this configuration is mutually exclusive with NewTableName, and only one of them can be used. When the configured synchronization object is at the table level and TableEditMode is pt, this parameter is meaningful. It is used to synchronize the temporary tables generated by tools such as pt-osc during the synchronization process. The possible temporary tables need to be configured here in advance, otherwise no temporary tables will be synchronized. For example, if you want to perform a pt-osc operation on t1, this configuration should be ["\_t1\_new","\_t1\_old"]; if you want to perform a gh-ost operation on t1, this configuration should be ["\_t1\_ghc","\_t1\_gho","\_t1\_del"]. Temporary tables generated by pt-osc and gh-ost can be configured simultaneously.
                     * 
                     */
                    void SetTmpTables(const std::vector<std::string>& _tmpTables);

                    /**
                     * 判断参数 TmpTables 是否已赋值
                     * @return TmpTables 是否已赋值
                     * 
                     */
                    bool TmpTablesHasBeenSet() const;

                    /**
                     * 获取Edit table type. Valid values: rename (table mapping); pt (synchronize additional table).
                     * @return TableEditMode Edit table type. Valid values: rename (table mapping); pt (synchronize additional table).
                     * 
                     */
                    std::string GetTableEditMode() const;

                    /**
                     * 设置Edit table type. Valid values: rename (table mapping); pt (synchronize additional table).
                     * @param _tableEditMode Edit table type. Valid values: rename (table mapping); pt (synchronize additional table).
                     * 
                     */
                    void SetTableEditMode(const std::string& _tableEditMode);

                    /**
                     * 判断参数 TableEditMode 是否已赋值
                     * @return TableEditMode 是否已赋值
                     * 
                     */
                    bool TableEditModeHasBeenSet() const;

                private:

                    /**
                     * Table name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * New table name
                     */
                    std::string m_newTableName;
                    bool m_newTableNameHasBeenSet;

                    /**
                     * Filter criteria.
                     */
                    std::string m_filterCondition;
                    bool m_filterConditionHasBeenSet;

                    /**
                     * Whether to synchronize all columns in the table. All: all columns under the current table; Partial (the corresponding field ColumnMode in the ModifySyncJobConfig API does not currently support Partial): To synchronize some specific columns of the current table, Columns field is required.
                     */
                    std::string m_columnMode;
                    bool m_columnModeHasBeenSet;

                    /**
                     * Synchronized column information. It is required when ColumnMode is Partial.
                     */
                    std::vector<Column> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * Synchronize temporary tables. Note that this configuration is mutually exclusive with NewTableName, and only one of them can be used. When the configured synchronization object is at the table level and TableEditMode is pt, this parameter is meaningful. It is used to synchronize the temporary tables generated by tools such as pt-osc during the synchronization process. The possible temporary tables need to be configured here in advance, otherwise no temporary tables will be synchronized. For example, if you want to perform a pt-osc operation on t1, this configuration should be ["\_t1\_new","\_t1\_old"]; if you want to perform a gh-ost operation on t1, this configuration should be ["\_t1\_ghc","\_t1\_gho","\_t1\_del"]. Temporary tables generated by pt-osc and gh-ost can be configured simultaneously.
                     */
                    std::vector<std::string> m_tmpTables;
                    bool m_tmpTablesHasBeenSet;

                    /**
                     * Edit table type. Valid values: rename (table mapping); pt (synchronize additional table).
                     */
                    std::string m_tableEditMode;
                    bool m_tableEditModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TABLE_H_
