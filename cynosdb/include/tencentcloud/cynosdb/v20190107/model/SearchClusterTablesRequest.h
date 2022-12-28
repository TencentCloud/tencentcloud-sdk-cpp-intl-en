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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SEARCHCLUSTERTABLESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SEARCHCLUSTERTABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SearchClusterTables request structure.
                */
                class SearchClusterTablesRequest : public AbstractModel
                {
                public:
                    SearchClusterTablesRequest();
                    ~SearchClusterTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return Database Database name
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name
                     * @param Database Database name
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取Data table name
                     * @return Table Data table name
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Data table name
                     * @param Table Data table name
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取Data table type. Valid values:
`view`: Only return to view,
`base_table`: Only return to basic table,
`all`: Return to view and table.
                     * @return TableType Data table type. Valid values:
`view`: Only return to view,
`base_table`: Only return to basic table,
`all`: Return to view and table.
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置Data table type. Valid values:
`view`: Only return to view,
`base_table`: Only return to basic table,
`all`: Return to view and table.
                     * @param TableType Data table type. Valid values:
`view`: Only return to view,
`base_table`: Only return to basic table,
`all`: Return to view and table.
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     */
                    bool TableTypeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Data table name
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * Data table type. Valid values:
`view`: Only return to view,
`base_table`: Only return to basic table,
`all`: Return to view and table.
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SEARCHCLUSTERTABLESREQUEST_H_
