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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDOMAINSCONFIGREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDOMAINSCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/DomainFilter.h>
#include <tencentcloud/cdn/v20180606/model/Sort.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeDomainsConfig request structure.
                */
                class DescribeDomainsConfigRequest : public AbstractModel
                {
                public:
                    DescribeDomainsConfigRequest();
                    ~DescribeDomainsConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset for paginated queries. Default value: 0
                     * @return Offset Offset for paginated queries. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset for paginated queries. Default value: 0
                     * @param _offset Offset for paginated queries. Default value: 0
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
                     * 获取Limit on paginated queries. Default value: 100. Maximum value: 1000.
                     * @return Limit Limit on paginated queries. Default value: 100. Maximum value: 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on paginated queries. Default value: 100. Maximum value: 1000.
                     * @param _limit Limit on paginated queries. Default value: 100. Maximum value: 1000.
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
                     * 获取Query condition filter, complex type.
                     * @return Filters Query condition filter, complex type.
                     * 
                     */
                    std::vector<DomainFilter> GetFilters() const;

                    /**
                     * 设置Query condition filter, complex type.
                     * @param _filters Query condition filter, complex type.
                     * 
                     */
                    void SetFilters(const std::vector<DomainFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting rules
                     * @return Sort Sorting rules
                     * 
                     */
                    Sort GetSort() const;

                    /**
                     * 设置Sorting rules
                     * @param _sort Sorting rules
                     * 
                     */
                    void SetSort(const Sort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * Offset for paginated queries. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit on paginated queries. Default value: 100. Maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Query condition filter, complex type.
                     */
                    std::vector<DomainFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting rules
                     */
                    Sort m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDOMAINSCONFIGREQUEST_H_
