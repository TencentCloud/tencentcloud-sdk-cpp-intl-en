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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEINFO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Metadata Table Details
                */
                class TableInfo : public AbstractModel
                {
                public:
                    TableInfo();
                    ~TableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Table databaseName
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OriginDatabaseName Table databaseName
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOriginDatabaseName() const;

                    /**
                     * 设置Table databaseName
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _originDatabaseName Table databaseName
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOriginDatabaseName(const std::string& _originDatabaseName);

                    /**
                     * 判断参数 OriginDatabaseName 是否已赋值
                     * @return OriginDatabaseName 是否已赋值
                     * 
                     */
                    bool OriginDatabaseNameHasBeenSet() const;

                    /**
                     * 获取Table schemaName
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OriginSchemaName Table schemaName
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOriginSchemaName() const;

                    /**
                     * 设置Table schemaName
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _originSchemaName Table schemaName
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOriginSchemaName(const std::string& _originSchemaName);

                    /**
                     * 判断参数 OriginSchemaName 是否已赋值
                     * @return OriginSchemaName 是否已赋值
                     * 
                     */
                    bool OriginSchemaNameHasBeenSet() const;

                private:

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
                     * Table databaseName
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_originDatabaseName;
                    bool m_originDatabaseNameHasBeenSet;

                    /**
                     * Table schemaName
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_originSchemaName;
                    bool m_originSchemaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEINFO_H_
