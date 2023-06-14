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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREPLICATIONGROUPREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREPLICATIONGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeReplicationGroup request structure.
                */
                class DescribeReplicationGroupRequest : public AbstractModel
                {
                public:
                    DescribeReplicationGroupRequest();
                    ~DescribeReplicationGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of instances returned per page. Default value: `20`.
                     * @return Limit Number of instances returned per page. Default value: `20`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of instances returned per page. Default value: `20`.
                     * @param _limit Number of instances returned per page. Default value: `20`.
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
                     * 获取Pagination offset, which is an integral multiple of `Limit`. `offset` = `limit` * (page number - 1).
                     * @return Offset Pagination offset, which is an integral multiple of `Limit`. `offset` = `limit` * (page number - 1).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, which is an integral multiple of `Limit`. `offset` = `limit` * (page number - 1).
                     * @param _offset Pagination offset, which is an integral multiple of `Limit`. `offset` = `limit` * (page number - 1).
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
                     * 获取Replication group ID
                     * @return GroupId Replication group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Replication group ID
                     * @param _groupId Replication group ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Key words for fuzzy query, which can be set as the ID or name of a replication group.
                     * @return SearchKey Key words for fuzzy query, which can be set as the ID or name of a replication group.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Key words for fuzzy query, which can be set as the ID or name of a replication group.
                     * @param _searchKey Key words for fuzzy query, which can be set as the ID or name of a replication group.
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * Number of instances returned per page. Default value: `20`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset, which is an integral multiple of `Limit`. `offset` = `limit` * (page number - 1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Replication group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Key words for fuzzy query, which can be set as the ID or name of a replication group.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREPLICATIONGROUPREQUEST_H_
