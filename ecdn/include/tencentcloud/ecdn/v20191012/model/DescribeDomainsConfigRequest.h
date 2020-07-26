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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEDOMAINSCONFIGREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEDOMAINSCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/DomainFilter.h>
#include <tencentcloud/ecdn/v20191012/model/Sort.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
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
                     * 获取Pagination offset address. Default value: 0.
                     * @return Offset Pagination offset address. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset address. Default value: 0.
                     * @param Offset Pagination offset address. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of domain names per page. Default value: 100.
                     * @return Limit Number of domain names per page. Default value: 100.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of domain names per page. Default value: 100.
                     * @param Limit Number of domain names per page. Default value: 100.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Query filter.
                     * @return Filters Query filter.
                     */
                    std::vector<DomainFilter> GetFilters() const;

                    /**
                     * 设置Query filter.
                     * @param Filters Query filter.
                     */
                    void SetFilters(const std::vector<DomainFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Query result sorting rule.
                     * @return Sort Query result sorting rule.
                     */
                    Sort GetSort() const;

                    /**
                     * 设置Query result sorting rule.
                     * @param Sort Query result sorting rule.
                     */
                    void SetSort(const Sort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * Pagination offset address. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of domain names per page. Default value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Query filter.
                     */
                    std::vector<DomainFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Query result sorting rule.
                     */
                    Sort m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEDOMAINSCONFIGREQUEST_H_
