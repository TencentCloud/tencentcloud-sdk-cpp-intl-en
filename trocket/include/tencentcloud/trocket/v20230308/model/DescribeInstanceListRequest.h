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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Filter.h>
#include <tencentcloud/trocket/v20230308/model/TagFilter.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeInstanceList request structure.
                */
                class DescribeInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeInstanceListRequest();
                    ~DescribeInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filtering condition list. See the description of the API using this parameter for the usage method.
                     * @return Filters Filtering condition list. See the description of the API using this parameter for the usage method.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filtering condition list. See the description of the API using this parameter for the usage method.
                     * @param _filters Filtering condition list. See the description of the API using this parameter for the usage method.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Tag filter
                     * @return TagFilters Tag filter
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置Tag filter
                     * @param _tagFilters Tag filter
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取Starting position of the query. Default value: 0.
                     * @return Offset Starting position of the query. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Starting position of the query. Default value: 0.
                     * @param _offset Starting position of the query. Default value: 0.
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
                     * 获取Maximum number of queried results. Default value: 20.
                     * @return Limit Maximum number of queried results. Default value: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of queried results. Default value: 20.
                     * @param _limit Maximum number of queried results. Default value: 20.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Filtering condition list. See the description of the API using this parameter for the usage method.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Tag filter
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * Starting position of the query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of queried results. Default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
