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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBATCHIPACCESSCONTROLREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBATCHIPACCESSCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/FiltersItemNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeBatchIpAccessControl request structure.
                */
                class DescribeBatchIpAccessControlRequest : public AbstractModel
                {
                public:
                    DescribeBatchIpAccessControlRequest();
                    ~DescribeBatchIpAccessControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria: supports ActionType 40/42, IP: IP address, Domain: Three types of domains
                     * @return Filters Filter criteria: supports ActionType 40/42, IP: IP address, Domain: Three types of domains
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置Filter criteria: supports ActionType 40/42, IP: IP address, Domain: Three types of domains
                     * @param _filters Filter criteria: supports ActionType 40/42, IP: IP address, Domain: Three types of domains
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return OffSet Offset
                     * 
                     */
                    uint64_t GetOffSet() const;

                    /**
                     * 设置Offset
                     * @param _offSet Offset
                     * 
                     */
                    void SetOffSet(const uint64_t& _offSet);

                    /**
                     * 判断参数 OffSet 是否已赋值
                     * @return OffSet 是否已赋值
                     * 
                     */
                    bool OffSetHasBeenSet() const;

                    /**
                     * 获取Limit
                     * @return Limit Limit
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit
                     * @param _limit Limit
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
                     * 获取Sort parameters
                     * @return Sort Sort parameters
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sort parameters
                     * @param _sort Sort parameters
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * Filter criteria: supports ActionType 40/42, IP: IP address, Domain: Three types of domains
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offSet;
                    bool m_offSetHasBeenSet;

                    /**
                     * Limit
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sort parameters
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBATCHIPACCESSCONTROLREQUEST_H_
