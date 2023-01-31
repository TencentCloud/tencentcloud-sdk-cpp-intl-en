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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_TABLEITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_TABLEITEM_H_

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
                * The set of table objects, which is required if `TableMode` is `partial`.
                */
                class TableItem : public AbstractModel
                {
                public:
                    TableItem();
                    ~TableItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the migrated table, which is case-sensitive
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableName Name of the migrated table, which is case-sensitive
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Name of the migrated table, which is case-sensitive
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TableName Name of the migrated table, which is case-sensitive
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Name of the table after migration, which is required if `TableEditMode` is `rename`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NewTableName Name of the table after migration, which is required if `TableEditMode` is `rename`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNewTableName() const;

                    /**
                     * 设置Name of the table after migration, which is required if `TableEditMode` is `rename`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NewTableName Name of the table after migration, which is required if `TableEditMode` is `rename`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNewTableName(const std::string& _newTableName);

                    /**
                     * 判断参数 NewTableName 是否已赋值
                     * @return NewTableName 是否已赋值
                     */
                    bool NewTableNameHasBeenSet() const;

                    /**
                     * 获取Temp table to be migrated, which is required if `TableEditMode` is `pt`. To sync temp tables that may be generated during migration by tools such as pt-online-schema-change, you can use this parameter to configure the temp table names.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TmpTables Temp table to be migrated, which is required if `TableEditMode` is `pt`. To sync temp tables that may be generated during migration by tools such as pt-online-schema-change, you can use this parameter to configure the temp table names.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetTmpTables() const;

                    /**
                     * 设置Temp table to be migrated, which is required if `TableEditMode` is `pt`. To sync temp tables that may be generated during migration by tools such as pt-online-schema-change, you can use this parameter to configure the temp table names.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TmpTables Temp table to be migrated, which is required if `TableEditMode` is `pt`. To sync temp tables that may be generated during migration by tools such as pt-online-schema-change, you can use this parameter to configure the temp table names.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTmpTables(const std::vector<std::string>& _tmpTables);

                    /**
                     * 判断参数 TmpTables 是否已赋值
                     * @return TmpTables 是否已赋值
                     */
                    bool TmpTablesHasBeenSet() const;

                    /**
                     * 获取Table editing type. Valid values: `rename` (table mapping); `pt` (additional table sync).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableEditMode Table editing type. Valid values: `rename` (table mapping); `pt` (additional table sync).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTableEditMode() const;

                    /**
                     * 设置Table editing type. Valid values: `rename` (table mapping); `pt` (additional table sync).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TableEditMode Table editing type. Valid values: `rename` (table mapping); `pt` (additional table sync).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTableEditMode(const std::string& _tableEditMode);

                    /**
                     * 判断参数 TableEditMode 是否已赋值
                     * @return TableEditMode 是否已赋值
                     */
                    bool TableEditModeHasBeenSet() const;

                private:

                    /**
                     * Name of the migrated table, which is case-sensitive
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Name of the table after migration, which is required if `TableEditMode` is `rename`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_newTableName;
                    bool m_newTableNameHasBeenSet;

                    /**
                     * Temp table to be migrated, which is required if `TableEditMode` is `pt`. To sync temp tables that may be generated during migration by tools such as pt-online-schema-change, you can use this parameter to configure the temp table names.
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

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TABLEITEM_H_
