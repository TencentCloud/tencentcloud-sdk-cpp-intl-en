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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SEARCHCLUSTERDATABASESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SEARCHCLUSTERDATABASESREQUEST_H_

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
                * SearchClusterDatabases request structure.
                */
                class SearchClusterDatabasesRequest : public AbstractModel
                {
                public:
                    SearchClusterDatabasesRequest();
                    ~SearchClusterDatabasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The cluster ID
                     * @return ClusterId The cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The cluster ID
                     * @param ClusterId The cluster ID
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
                     * 获取Whether to search exactly
Valid values: `0` (fuzzy search), `1` (exact search). 
Default value: `0`.
                     * @return MatchType Whether to search exactly
Valid values: `0` (fuzzy search), `1` (exact search). 
Default value: `0`.
                     */
                    int64_t GetMatchType() const;

                    /**
                     * 设置Whether to search exactly
Valid values: `0` (fuzzy search), `1` (exact search). 
Default value: `0`.
                     * @param MatchType Whether to search exactly
Valid values: `0` (fuzzy search), `1` (exact search). 
Default value: `0`.
                     */
                    void SetMatchType(const int64_t& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     */
                    bool MatchTypeHasBeenSet() const;

                private:

                    /**
                     * The cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Whether to search exactly
Valid values: `0` (fuzzy search), `1` (exact search). 
Default value: `0`.
                     */
                    int64_t m_matchType;
                    bool m_matchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SEARCHCLUSTERDATABASESREQUEST_H_
