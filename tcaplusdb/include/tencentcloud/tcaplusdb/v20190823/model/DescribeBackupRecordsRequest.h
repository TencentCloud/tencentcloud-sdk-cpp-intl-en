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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEBACKUPRECORDSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEBACKUPRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeBackupRecords request structure.
                */
                class DescribeBackupRecordsRequest : public AbstractModel
                {
                public:
                    DescribeBackupRecordsRequest();
                    ~DescribeBackupRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID, which is used to query a specified cluster
                     * @return ClusterId Cluster ID, which is used to query a specified cluster
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID, which is used to query a specified cluster
                     * @param _clusterId Cluster ID, which is used to query a specified cluster
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
                     * 获取Number of results per page
                     * @return Limit Number of results per page
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results per page
                     * @param _limit Number of results per page
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
                     * 获取Page offset
                     * @return Offset Page offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset
                     * @param _offset Page offset
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
                     * 获取Table group ID used as a filter condition
                     * @return TableGroupId Table group ID used as a filter condition
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置Table group ID used as a filter condition
                     * @param _tableGroupId Table group ID used as a filter condition
                     * 
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取Table name used as a filter condition
                     * @return TableName Table name used as a filter condition
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name used as a filter condition
                     * @param _tableName Table name used as a filter condition
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * Cluster ID, which is used to query a specified cluster
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Number of results per page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Table group ID used as a filter condition
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * Table name used as a filter condition
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEBACKUPRECORDSREQUEST_H_
