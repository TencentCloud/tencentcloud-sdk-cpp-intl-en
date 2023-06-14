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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_TABLE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_TABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableName Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableName Table name
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
                     * 获取New table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NewTableName New table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNewTableName() const;

                    /**
                     * 设置New table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _newTableName New table name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Filter condition
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FilterCondition Filter condition
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFilterCondition() const;

                    /**
                     * 设置Filter condition
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _filterCondition Filter condition
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The temp tables to be synced. This parameter is mutually exclusive with `NewTableName`. It is valid only when the configured sync objects are table-level ones and `TableEditMode` is `pt`. To sync temp tables generated when pt-osc or other tools are used during the sync process, you must configure this parameter first. For example, if you want to perform the pt-osc operation on a table named "t1", configure this parameter as ["\_t1\_new","\_t1\_old"]; to perform the gh-ost operation on t1, configure it as ["\_t1\_ghc","\_t1\_gho","\_t1\_del"]. Temp tables generated by pt-osc and gh-ost operations can be configured at the same time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TmpTables The temp tables to be synced. This parameter is mutually exclusive with `NewTableName`. It is valid only when the configured sync objects are table-level ones and `TableEditMode` is `pt`. To sync temp tables generated when pt-osc or other tools are used during the sync process, you must configure this parameter first. For example, if you want to perform the pt-osc operation on a table named "t1", configure this parameter as ["\_t1\_new","\_t1\_old"]; to perform the gh-ost operation on t1, configure it as ["\_t1\_ghc","\_t1\_gho","\_t1\_del"]. Temp tables generated by pt-osc and gh-ost operations can be configured at the same time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTmpTables() const;

                    /**
                     * 设置The temp tables to be synced. This parameter is mutually exclusive with `NewTableName`. It is valid only when the configured sync objects are table-level ones and `TableEditMode` is `pt`. To sync temp tables generated when pt-osc or other tools are used during the sync process, you must configure this parameter first. For example, if you want to perform the pt-osc operation on a table named "t1", configure this parameter as ["\_t1\_new","\_t1\_old"]; to perform the gh-ost operation on t1, configure it as ["\_t1\_ghc","\_t1\_gho","\_t1\_del"]. Temp tables generated by pt-osc and gh-ost operations can be configured at the same time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tmpTables The temp tables to be synced. This parameter is mutually exclusive with `NewTableName`. It is valid only when the configured sync objects are table-level ones and `TableEditMode` is `pt`. To sync temp tables generated when pt-osc or other tools are used during the sync process, you must configure this parameter first. For example, if you want to perform the pt-osc operation on a table named "t1", configure this parameter as ["\_t1\_new","\_t1\_old"]; to perform the gh-ost operation on t1, configure it as ["\_t1\_ghc","\_t1\_gho","\_t1\_del"]. Temp tables generated by pt-osc and gh-ost operations can be configured at the same time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Table editing type. Valid values: `rename` (table mapping); `pt` (additional table sync).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableEditMode Table editing type. Valid values: `rename` (table mapping); `pt` (additional table sync).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableEditMode() const;

                    /**
                     * 设置Table editing type. Valid values: `rename` (table mapping); `pt` (additional table sync).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableEditMode Table editing type. Valid values: `rename` (table mapping); `pt` (additional table sync).
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * New table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_newTableName;
                    bool m_newTableNameHasBeenSet;

                    /**
                     * Filter condition
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_filterCondition;
                    bool m_filterConditionHasBeenSet;

                    /**
                     * The temp tables to be synced. This parameter is mutually exclusive with `NewTableName`. It is valid only when the configured sync objects are table-level ones and `TableEditMode` is `pt`. To sync temp tables generated when pt-osc or other tools are used during the sync process, you must configure this parameter first. For example, if you want to perform the pt-osc operation on a table named "t1", configure this parameter as ["\_t1\_new","\_t1\_old"]; to perform the gh-ost operation on t1, configure it as ["\_t1\_ghc","\_t1\_gho","\_t1\_del"]. Temp tables generated by pt-osc and gh-ost operations can be configured at the same time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tmpTables;
                    bool m_tmpTablesHasBeenSet;

                    /**
                     * Table editing type. Valid values: `rename` (table mapping); `pt` (additional table sync).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableEditMode;
                    bool m_tableEditModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TABLE_H_
