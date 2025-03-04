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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/SearchTags.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * DescribeInstances request structure.
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The name of the Instance ID for the search.
                     * @return SearchInstanceId The name of the Instance ID for the search.
                     * 
                     */
                    std::string GetSearchInstanceId() const;

                    /**
                     * 设置The name of the Instance ID for the search.
                     * @param _searchInstanceId The name of the Instance ID for the search.
                     * 
                     */
                    void SetSearchInstanceId(const std::string& _searchInstanceId);

                    /**
                     * 判断参数 SearchInstanceId 是否已赋值
                     * @return SearchInstanceId 是否已赋值
                     * 
                     */
                    bool SearchInstanceIdHasBeenSet() const;

                    /**
                     * 获取The instance name for the search.
                     * @return SearchInstanceName The instance name for the search.
                     * 
                     */
                    std::string GetSearchInstanceName() const;

                    /**
                     * 设置The instance name for the search.
                     * @param _searchInstanceName The instance name for the search.
                     * 
                     */
                    void SetSearchInstanceName(const std::string& _searchInstanceName);

                    /**
                     * 判断参数 SearchInstanceName 是否已赋值
                     * @return SearchInstanceName 是否已赋值
                     * 
                     */
                    bool SearchInstanceNameHasBeenSet() const;

                    /**
                     * 获取Pagination parameter. The first page is 0, and the second page is 10.
                     * @return Offset Pagination parameter. The first page is 0, and the second page is 10.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameter. The first page is 0, and the second page is 10.
                     * @param _offset Pagination parameter. The first page is 0, and the second page is 10.
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
                     * 获取Pagination parameter. Pagination step length. It is 10 by default.
                     * @return Limit Pagination parameter. Pagination step length. It is 10 by default.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination parameter. Pagination step length. It is 10 by default.
                     * @param _limit Pagination parameter. Pagination step length. It is 10 by default.
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
                     * 获取Searched tag list.
                     * @return SearchTags Searched tag list.
                     * 
                     */
                    std::vector<SearchTags> GetSearchTags() const;

                    /**
                     * 设置Searched tag list.
                     * @param _searchTags Searched tag list.
                     * 
                     */
                    void SetSearchTags(const std::vector<SearchTags>& _searchTags);

                    /**
                     * 判断参数 SearchTags 是否已赋值
                     * @return SearchTags 是否已赋值
                     * 
                     */
                    bool SearchTagsHasBeenSet() const;

                private:

                    /**
                     * The name of the Instance ID for the search.
                     */
                    std::string m_searchInstanceId;
                    bool m_searchInstanceIdHasBeenSet;

                    /**
                     * The instance name for the search.
                     */
                    std::string m_searchInstanceName;
                    bool m_searchInstanceNameHasBeenSet;

                    /**
                     * Pagination parameter. The first page is 0, and the second page is 10.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination parameter. Pagination step length. It is 10 by default.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Searched tag list.
                     */
                    std::vector<SearchTags> m_searchTags;
                    bool m_searchTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCESREQUEST_H_
