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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_GETCCNREGIONBANDWIDTHLIMITSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_GETCCNREGIONBANDWIDTHLIMITSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * GetCcnRegionBandwidthLimits request structure.
                */
                class GetCcnRegionBandwidthLimitsRequest : public AbstractModel
                {
                public:
                    GetCcnRegionBandwidthLimitsRequest();
                    ~GetCcnRegionBandwidthLimitsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The CCN instance ID, such as `ccn-f49l6u0z`.
                     * @return CcnId The CCN instance ID, such as `ccn-f49l6u0z`.
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置The CCN instance ID, such as `ccn-f49l6u0z`.
                     * @param CcnId The CCN instance ID, such as `ccn-f49l6u0z`.
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取The filter condition.
<li>sregion - String - (Filter condition) Filter by the source region, such as 'ap-guangzhou'.</li>
<li>dregion - String - (Filter condition) Filter by the destination region, such as 'ap-shanghai-bm'.</li>
                     * @return Filters The filter condition.
<li>sregion - String - (Filter condition) Filter by the source region, such as 'ap-guangzhou'.</li>
<li>dregion - String - (Filter condition) Filter by the destination region, such as 'ap-shanghai-bm'.</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置The filter condition.
<li>sregion - String - (Filter condition) Filter by the source region, such as 'ap-guangzhou'.</li>
<li>dregion - String - (Filter condition) Filter by the destination region, such as 'ap-shanghai-bm'.</li>
                     * @param Filters The filter condition.
<li>sregion - String - (Filter condition) Filter by the source region, such as 'ap-guangzhou'.</li>
<li>dregion - String - (Filter condition) Filter by the destination region, such as 'ap-shanghai-bm'.</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The sorting condition. Valid values: `BandwidthLimit` and `ExpireTime`.
                     * @return SortedBy The sorting condition. Valid values: `BandwidthLimit` and `ExpireTime`.
                     */
                    std::string GetSortedBy() const;

                    /**
                     * 设置The sorting condition. Valid values: `BandwidthLimit` and `ExpireTime`.
                     * @param SortedBy The sorting condition. Valid values: `BandwidthLimit` and `ExpireTime`.
                     */
                    void SetSortedBy(const std::string& _sortedBy);

                    /**
                     * 判断参数 SortedBy 是否已赋值
                     * @return SortedBy 是否已赋值
                     */
                    bool SortedByHasBeenSet() const;

                    /**
                     * 获取The offset.
                     * @return Offset The offset.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The offset.
                     * @param Offset The offset.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The returned quantity.
                     * @return Limit The returned quantity.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The returned quantity.
                     * @param Limit The returned quantity.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取In ascending or descending order. Valid values: 'ASC' and 'DESC'.
                     * @return OrderBy In ascending or descending order. Valid values: 'ASC' and 'DESC'.
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置In ascending or descending order. Valid values: 'ASC' and 'DESC'.
                     * @param OrderBy In ascending or descending order. Valid values: 'ASC' and 'DESC'.
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * The CCN instance ID, such as `ccn-f49l6u0z`.
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * The filter condition.
<li>sregion - String - (Filter condition) Filter by the source region, such as 'ap-guangzhou'.</li>
<li>dregion - String - (Filter condition) Filter by the destination region, such as 'ap-shanghai-bm'.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The sorting condition. Valid values: `BandwidthLimit` and `ExpireTime`.
                     */
                    std::string m_sortedBy;
                    bool m_sortedByHasBeenSet;

                    /**
                     * The offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The returned quantity.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * In ascending or descending order. Valid values: 'ASC' and 'DESC'.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_GETCCNREGIONBANDWIDTHLIMITSREQUEST_H_
