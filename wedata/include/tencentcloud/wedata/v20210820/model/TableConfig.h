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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLECONFIG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FieldConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Rule Table Variable Replacement
                */
                class TableConfig : public AbstractModel
                {
                public:
                    TableConfig();
                    ~TableConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseId Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseId Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseName Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseName Database nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableId Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableId Table ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableName Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableName Table Name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Table Key
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableKey Table Key
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableKey() const;

                    /**
                     * 设置Table Key
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableKey Table Key
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableKey(const std::string& _tableKey);

                    /**
                     * 判断参数 TableKey 是否已赋值
                     * @return TableKey 是否已赋值
                     * 
                     */
                    bool TableKeyHasBeenSet() const;

                    /**
                     * 获取Field Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FieldConfig Field Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<FieldConfig> GetFieldConfig() const;

                    /**
                     * 设置Field Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fieldConfig Field Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFieldConfig(const std::vector<FieldConfig>& _fieldConfig);

                    /**
                     * 判断参数 FieldConfig 是否已赋值
                     * @return FieldConfig 是否已赋值
                     * 
                     */
                    bool FieldConfigHasBeenSet() const;

                private:

                    /**
                     * Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Table Key
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableKey;
                    bool m_tableKeyHasBeenSet;

                    /**
                     * Field Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<FieldConfig> m_fieldConfig;
                    bool m_fieldConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLECONFIG_H_
