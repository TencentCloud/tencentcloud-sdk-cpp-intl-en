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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DATABASETABLES_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DATABASETABLES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Database table information
                */
                class DatabaseTables : public AbstractModel
                {
                public:
                    DatabaseTables();
                    ~DatabaseTables() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name
                     * @return Database Database name
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name
                     * @param _database Database name
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取Table name list.
                     * @return Tables Table name list.
                     * 
                     */
                    std::vector<std::string> GetTables() const;

                    /**
                     * 设置Table name list.
                     * @param _tables Table name list.
                     * 
                     */
                    void SetTables(const std::vector<std::string>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Table name list.
                     */
                    std::vector<std::string> m_tables;
                    bool m_tablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DATABASETABLES_H_
