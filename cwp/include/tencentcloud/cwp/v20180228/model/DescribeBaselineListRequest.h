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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineList request structure.
                */
                class DescribeBaselineListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineListRequest();
                    ~DescribeBaselineListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination parameter, indicating the number of entries per page. Maximum value: 100.
                     * @return Limit Pagination parameter, indicating the number of entries per page. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination parameter, indicating the number of entries per page. Maximum value: 100.
                     * @param _limit Pagination parameter, indicating the number of entries per page. Maximum value: 100.
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
                     * 获取Pagination parameter
                     * @return Offset Pagination parameter
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination parameter
                     * @param _offset Pagination parameter
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
                     * 获取Filtering criteria
<li>StrategyId - Uint64 - baseline policy ID</li>
<li>Status - Uint64 - processing status: 1: passed; 0: failed</li><li>Level - Uint64[] - risk level: 1: low; 2: medium; 3: high; 4: critical</li><li>BaselineName - String - baseline name</li>
<li>Quuid - String - host QUUID</li>
<li>Uuid - String - host UUID</li>
                     * @return Filters Filtering criteria
<li>StrategyId - Uint64 - baseline policy ID</li>
<li>Status - Uint64 - processing status: 1: passed; 0: failed</li><li>Level - Uint64[] - risk level: 1: low; 2: medium; 3: high; 4: critical</li><li>BaselineName - String - baseline name</li>
<li>Quuid - String - host QUUID</li>
<li>Uuid - String - host UUID</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filtering criteria
<li>StrategyId - Uint64 - baseline policy ID</li>
<li>Status - Uint64 - processing status: 1: passed; 0: failed</li><li>Level - Uint64[] - risk level: 1: low; 2: medium; 3: high; 4: critical</li><li>BaselineName - String - baseline name</li>
<li>Quuid - String - host QUUID</li>
<li>Uuid - String - host UUID</li>
                     * @param _filters Filtering criteria
<li>StrategyId - Uint64 - baseline policy ID</li>
<li>Status - Uint64 - processing status: 1: passed; 0: failed</li><li>Level - Uint64[] - risk level: 1: low; 2: medium; 3: high; 4: critical</li><li>BaselineName - String - baseline name</li>
<li>Quuid - String - host QUUID</li>
<li>Uuid - String - host UUID</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Pagination parameter, indicating the number of entries per page. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination parameter
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filtering criteria
<li>StrategyId - Uint64 - baseline policy ID</li>
<li>Status - Uint64 - processing status: 1: passed; 0: failed</li><li>Level - Uint64[] - risk level: 1: low; 2: medium; 3: high; 4: critical</li><li>BaselineName - String - baseline name</li>
<li>Quuid - String - host QUUID</li>
<li>Uuid - String - host UUID</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINELISTREQUEST_H_
