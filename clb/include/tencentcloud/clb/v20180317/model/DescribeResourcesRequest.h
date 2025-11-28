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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBERESOURCESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBERESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeResources request structure.
                */
                class DescribeResourcesRequest : public AbstractModel
                {
                public:
                    DescribeResourcesRequest();
                    ~DescribeResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of returned AZ resources. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned AZ resources. Default value: 20. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned AZ resources. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returned AZ resources. Default value: 20. Maximum value: 100.
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
                     * 获取Starting offset of the returned AZ resource list. Default value: 0.
                     * @return Offset Starting offset of the returned AZ resource list. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting offset of the returned AZ resource list. Default value: 0.
                     * @param _offset Starting offset of the returned AZ resource list. Default value: 0.
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
                     * 获取Specifies the conditions for querying the availability zone resource list. detailed filter criteria are as follows:.
- master-zone
Filters by regional availability zone, for example: ap-guangzhou-2.
Type: String.
Required: No
- ip-version
Filter by [IP type], such as IPv4.
Type: String.
Required: No
Valid values: IPv4, IPv6, IPv6_Nat.
- isp
Filters by [ISP type], for example: BGP.
Type: String.
Required: No
Optional. valid values: BGP, CMCC (china mobile), CUCC (china unicom), CTCC (china telecom), BGP_PRO, INTERNAL (private network).
                     * @return Filters Specifies the conditions for querying the availability zone resource list. detailed filter criteria are as follows:.
- master-zone
Filters by regional availability zone, for example: ap-guangzhou-2.
Type: String.
Required: No
- ip-version
Filter by [IP type], such as IPv4.
Type: String.
Required: No
Valid values: IPv4, IPv6, IPv6_Nat.
- isp
Filters by [ISP type], for example: BGP.
Type: String.
Required: No
Optional. valid values: BGP, CMCC (china mobile), CUCC (china unicom), CTCC (china telecom), BGP_PRO, INTERNAL (private network).
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Specifies the conditions for querying the availability zone resource list. detailed filter criteria are as follows:.
- master-zone
Filters by regional availability zone, for example: ap-guangzhou-2.
Type: String.
Required: No
- ip-version
Filter by [IP type], such as IPv4.
Type: String.
Required: No
Valid values: IPv4, IPv6, IPv6_Nat.
- isp
Filters by [ISP type], for example: BGP.
Type: String.
Required: No
Optional. valid values: BGP, CMCC (china mobile), CUCC (china unicom), CTCC (china telecom), BGP_PRO, INTERNAL (private network).
                     * @param _filters Specifies the conditions for querying the availability zone resource list. detailed filter criteria are as follows:.
- master-zone
Filters by regional availability zone, for example: ap-guangzhou-2.
Type: String.
Required: No
- ip-version
Filter by [IP type], such as IPv4.
Type: String.
Required: No
Valid values: IPv4, IPv6, IPv6_Nat.
- isp
Filters by [ISP type], for example: BGP.
Type: String.
Required: No
Optional. valid values: BGP, CMCC (china mobile), CUCC (china unicom), CTCC (china telecom), BGP_PRO, INTERNAL (private network).
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
                     * Number of returned AZ resources. Default value: 20. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Starting offset of the returned AZ resource list. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Specifies the conditions for querying the availability zone resource list. detailed filter criteria are as follows:.
- master-zone
Filters by regional availability zone, for example: ap-guangzhou-2.
Type: String.
Required: No
- ip-version
Filter by [IP type], such as IPv4.
Type: String.
Required: No
Valid values: IPv4, IPv6, IPv6_Nat.
- isp
Filters by [ISP type], for example: BGP.
Type: String.
Required: No
Optional. valid values: BGP, CMCC (china mobile), CUCC (china unicom), CTCC (china telecom), BGP_PRO, INTERNAL (private network).
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBERESOURCESREQUEST_H_
