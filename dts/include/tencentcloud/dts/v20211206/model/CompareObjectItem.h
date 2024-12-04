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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOBJECTITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOBJECTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareTableItem.h>
#include <tencentcloud/dts/v20211206/model/CompareViewItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Database/Table objects for data consistency check
                */
                class CompareObjectItem : public AbstractModel
                {
                public:
                    CompareObjectItem();
                    ~CompareObjectItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbName Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbName Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Database selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbMode Database selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Database selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbMode Database selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     * 
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取Schema name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SchemaName Schema name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Schema name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _schemaName Schema name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取Schema selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableMode Schema selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableMode() const;

                    /**
                     * 设置Schema selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableMode Schema selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableMode(const std::string& _tableMode);

                    /**
                     * 判断参数 TableMode 是否已赋值
                     * @return TableMode 是否已赋值
                     * 
                     */
                    bool TableModeHasBeenSet() const;

                    /**
                     * 获取Table configuration for data consistency check, which is required if `TableMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tables Table configuration for data consistency check, which is required if `TableMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CompareTableItem> GetTables() const;

                    /**
                     * 设置Table configuration for data consistency check, which is required if `TableMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tables Table configuration for data consistency check, which is required if `TableMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTables(const std::vector<CompareTableItem>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取View selection mode: all refers to all view objects under the current object, partial refers to partial view objects (consistency check does not check views, and the current parameters are disabled).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ViewMode View selection mode: all refers to all view objects under the current object, partial refers to partial view objects (consistency check does not check views, and the current parameters are disabled).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetViewMode() const;

                    /**
                     * 设置View selection mode: all refers to all view objects under the current object, partial refers to partial view objects (consistency check does not check views, and the current parameters are disabled).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _viewMode View selection mode: all refers to all view objects under the current object, partial refers to partial view objects (consistency check does not check views, and the current parameters are disabled).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetViewMode(const std::string& _viewMode);

                    /**
                     * 判断参数 ViewMode 是否已赋值
                     * @return ViewMode 是否已赋值
                     * 
                     */
                    bool ViewModeHasBeenSet() const;

                    /**
                     * 获取View configuration used for consistency check. When ViewMode is partial, it needs to be filled in (consistency check does not check views, and the current parameters are disabled).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Views View configuration used for consistency check. When ViewMode is partial, it needs to be filled in (consistency check does not check views, and the current parameters are disabled).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CompareViewItem> GetViews() const;

                    /**
                     * 设置View configuration used for consistency check. When ViewMode is partial, it needs to be filled in (consistency check does not check views, and the current parameters are disabled).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _views View configuration used for consistency check. When ViewMode is partial, it needs to be filled in (consistency check does not check views, and the current parameters are disabled).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetViews(const std::vector<CompareViewItem>& _views);

                    /**
                     * 判断参数 Views 是否已赋值
                     * @return Views 是否已赋值
                     * 
                     */
                    bool ViewsHasBeenSet() const;

                private:

                    /**
                     * Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Database selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * Schema name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Schema selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableMode;
                    bool m_tableModeHasBeenSet;

                    /**
                     * Table configuration for data consistency check, which is required if `TableMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CompareTableItem> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * View selection mode: all refers to all view objects under the current object, partial refers to partial view objects (consistency check does not check views, and the current parameters are disabled).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_viewMode;
                    bool m_viewModeHasBeenSet;

                    /**
                     * View configuration used for consistency check. When ViewMode is partial, it needs to be filled in (consistency check does not check views, and the current parameters are disabled).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CompareViewItem> m_views;
                    bool m_viewsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOBJECTITEM_H_
