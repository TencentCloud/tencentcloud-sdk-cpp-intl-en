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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKTABLES_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKTABLES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RollbackTableName.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Details of the table for rollback
                */
                class RollbackTables : public AbstractModel
                {
                public:
                    RollbackTables();
                    ~RollbackTables() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Database Database name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Database Database name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取Table details
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Table Table details
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RollbackTableName> GetTable() const;

                    /**
                     * 设置Table details
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Table Table details
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTable(const std::vector<RollbackTableName>& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     */
                    bool TableHasBeenSet() const;

                private:

                    /**
                     * Database name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Table details
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RollbackTableName> m_table;
                    bool m_tableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKTABLES_H_
