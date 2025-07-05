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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>
#include <tencentcloud/gaap/v20180529/model/Filter.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeRealServers request structure.
                */
                class DescribeRealServersRequest : public AbstractModel
                {
                public:
                    DescribeRealServersRequest();
                    ~DescribeRealServersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queries the project ID to which the origin server belongs. -1: all projects.
                     * @return ProjectId Queries the project ID to which the origin server belongs. -1: all projects.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Queries the project ID to which the origin server belongs. -1: all projects.
                     * @param _projectId Queries the project ID to which the origin server belongs. -1: all projects.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Origin server IP or domain name to be queried. The fuzzy match is supported.
                     * @return SearchValue Origin server IP or domain name to be queried. The fuzzy match is supported.
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置Origin server IP or domain name to be queried. The fuzzy match is supported.
                     * @param _searchValue Origin server IP or domain name to be queried. The fuzzy match is supported.
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取Offset, which is 0 by default.
                     * @return Offset Offset, which is 0 by default.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which is 0 by default.
                     * @param _offset Offset, which is 0 by default.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Quantity of values to return. The default value is 20 and the maximum value is 50.
                     * @return Limit Quantity of values to return. The default value is 20 and the maximum value is 50.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Quantity of values to return. The default value is 20 and the maximum value is 50.
                     * @param _limit Quantity of values to return. The default value is 20 and the maximum value is 50.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the origin servers tagged any of them will be pulled.
                     * @return TagSet Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the origin servers tagged any of them will be pulled.
                     * 
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the origin servers tagged any of them will be pulled.
                     * @param _tagSet Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the origin servers tagged any of them will be pulled.
                     * 
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Filter conditions. The value of the `name` of the `filter` (RealServerName, RealServerIP)
                     * @return Filters Filter conditions. The value of the `name` of the `filter` (RealServerName, RealServerIP)
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions. The value of the `name` of the `filter` (RealServerName, RealServerIP)
                     * @param _filters Filter conditions. The value of the `name` of the `filter` (RealServerName, RealServerIP)
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Queries the project ID to which the origin server belongs. -1: all projects.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Origin server IP or domain name to be queried. The fuzzy match is supported.
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * Offset, which is 0 by default.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Quantity of values to return. The default value is 20 and the maximum value is 50.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the origin servers tagged any of them will be pulled.
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Filter conditions. The value of the `name` of the `filter` (RealServerName, RealServerIP)
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSREQUEST_H_
