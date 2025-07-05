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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DBTABLESINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DBTABLESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Database and table information
                */
                class DbTablesInfo : public AbstractModel
                {
                public:
                    DbTablesInfo();
                    ~DbTablesInfo() = default;
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
                     * 获取The corresponding table list under this database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TablesName The corresponding table list under this database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTablesName() const;

                    /**
                     * 设置The corresponding table list under this database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tablesName The corresponding table list under this database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTablesName(const std::vector<std::string>& _tablesName);

                    /**
                     * 判断参数 TablesName 是否已赋值
                     * @return TablesName 是否已赋值
                     * 
                     */
                    bool TablesNameHasBeenSet() const;

                private:

                    /**
                     * Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * The corresponding table list under this database.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tablesName;
                    bool m_tablesNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DBTABLESINFO_H_
