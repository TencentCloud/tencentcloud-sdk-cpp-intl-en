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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERDATABASETABLESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERDATABASETABLESREQUEST_H_

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
                * DescribeClusterDatabaseTables request structure.
                */
                class DescribeClusterDatabaseTablesRequest : public AbstractModel
                {
                public:
                    DescribeClusterDatabaseTablesRequest();
                    ~DescribeClusterDatabaseTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return Db Database name
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置Database name
                     * @param _db Database name
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number
                     * @return Limit Number
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number
                     * @param _limit Number
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Specifies the table type.
Specifies that "view" only returns the view, "base_table" only returns the basic table, and "all" returns both the view and the table. the default value is all.
                     * @return TableType Specifies the table type.
Specifies that "view" only returns the view, "base_table" only returns the basic table, and "all" returns both the view and the table. the default value is all.
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置Specifies the table type.
Specifies that "view" only returns the view, "base_table" only returns the basic table, and "all" returns both the view and the table. the default value is all.
                     * @param _tableType Specifies the table type.
Specifies that "view" only returns the view, "base_table" only returns the basic table, and "all" returns both the view and the table. the default value is all.
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
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
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specifies the table type.
Specifies that "view" only returns the view, "base_table" only returns the basic table, and "all" returns both the view and the table. the default value is all.
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERDATABASETABLESREQUEST_H_
