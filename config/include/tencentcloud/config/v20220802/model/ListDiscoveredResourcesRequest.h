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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTDISCOVEREDRESOURCESREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTDISCOVEREDRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/Filter.h>
#include <tencentcloud/config/v20220802/model/Tag.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListDiscoveredResources request structure.
                */
                class ListDiscoveredResourcesRequest : public AbstractModel
                {
                public:
                    ListDiscoveredResourcesRequest();
                    ~ListDiscoveredResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Items per Page
                     * @return MaxResults Items per Page
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置Items per Page
                     * @param _maxResults Items per Page
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取resourceName: Resource name resourceId: Resource ID
                     * @return Filters resourceName: Resource name resourceId: Resource ID
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置resourceName: Resource name resourceId: Resource ID
                     * @param _filters resourceName: Resource name resourceId: Resource ID
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
                     * 获取Tag
                     * @return Tags Tag
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag
                     * @param _tags Tag
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Next page token.
                     * @return NextToken Next page token.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Next page token.
                     * @param _nextToken Next page token.
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Sorting method asc, desc
                     * @return OrderType Sorting method asc, desc
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置Sorting method asc, desc
                     * @param _orderType Sorting method asc, desc
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * Items per Page
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * resourceName: Resource name resourceId: Resource ID
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Tag
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Next page token.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Sorting method asc, desc
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTDISCOVEREDRESOURCESREQUEST_H_
