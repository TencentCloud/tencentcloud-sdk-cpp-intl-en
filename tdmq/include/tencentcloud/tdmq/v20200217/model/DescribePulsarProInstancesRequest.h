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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPULSARPROINSTANCESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPULSARPROINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribePulsarProInstances request structure.
                */
                class DescribePulsarProInstancesRequest : public AbstractModel
                {
                public:
                    DescribePulsarProInstancesRequest();
                    ~DescribePulsarProInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query condition filter
                     * @return Filters Query condition filter
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Query condition filter
                     * @param _filters Query condition filter
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
                     * 获取The maximum number of queried items, which defaults to `20`.
                     * @return Limit The maximum number of queried items, which defaults to `20`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The maximum number of queried items, which defaults to `20`.
                     * @param _limit The maximum number of queried items, which defaults to `20`.
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
                     * 获取Start offset for query
                     * @return Offset Start offset for query
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Start offset for query
                     * @param _offset Start offset for query
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Query condition filter
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The maximum number of queried items, which defaults to `20`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Start offset for query
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPULSARPROINSTANCESREQUEST_H_
