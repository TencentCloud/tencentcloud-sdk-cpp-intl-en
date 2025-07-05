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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEEFFECTHOSTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEEFFECTHOSTLISTREQUEST_H_

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
                * DescribeBaselineEffectHostList request structure.
                */
                class DescribeBaselineEffectHostListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineEffectHostListRequest();
                    ~DescribeBaselineEffectHostListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination parameters (The maximum number is 100.)
                     * @return Limit Pagination parameters (The maximum number is 100.)
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination parameters (The maximum number is 100.)
                     * @param _limit Pagination parameters (The maximum number is 100.)
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
                     * 获取Baseline ID
                     * @return BaselineId Baseline ID
                     * 
                     */
                    uint64_t GetBaselineId() const;

                    /**
                     * 设置Baseline ID
                     * @param _baselineId Baseline ID
                     * 
                     */
                    void SetBaselineId(const uint64_t& _baselineId);

                    /**
                     * 判断参数 BaselineId 是否已赋值
                     * @return BaselineId 是否已赋值
                     * 
                     */
                    bool BaselineIdHasBeenSet() const;

                    /**
                     * 获取Filter criteria
<li>AliasName - String - host alias</li>
<li>Status- Uint: 1 - passed; 0 - failed; 5 - under detection</li>
                     * @return Filters Filter criteria
<li>AliasName - String - host alias</li>
<li>Status- Uint: 1 - passed; 0 - failed; 5 - under detection</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>AliasName - String - host alias</li>
<li>Status- Uint: 1 - passed; 0 - failed; 5 - under detection</li>
                     * @param _filters Filter criteria
<li>AliasName - String - host alias</li>
<li>Status- Uint: 1 - passed; 0 - failed; 5 - under detection</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return StrategyId Policy ID
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置Policy ID
                     * @param _strategyId Policy ID
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Host UUID array
                     * @return UuidList Host UUID array
                     * 
                     */
                    std::vector<std::string> GetUuidList() const;

                    /**
                     * 设置Host UUID array
                     * @param _uuidList Host UUID array
                     * 
                     */
                    void SetUuidList(const std::vector<std::string>& _uuidList);

                    /**
                     * 判断参数 UuidList 是否已赋值
                     * @return UuidList 是否已赋值
                     * 
                     */
                    bool UuidListHasBeenSet() const;

                private:

                    /**
                     * Pagination parameters (The maximum number is 100.)
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination parameter
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Baseline ID
                     */
                    uint64_t m_baselineId;
                    bool m_baselineIdHasBeenSet;

                    /**
                     * Filter criteria
<li>AliasName - String - host alias</li>
<li>Status- Uint: 1 - passed; 0 - failed; 5 - under detection</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Policy ID
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Host UUID array
                     */
                    std::vector<std::string> m_uuidList;
                    bool m_uuidListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEEFFECTHOSTLISTREQUEST_H_
