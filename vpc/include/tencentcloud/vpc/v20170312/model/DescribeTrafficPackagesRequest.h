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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICPACKAGESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICPACKAGESREQUEST_H_

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
                * DescribeTrafficPackages request structure.
                */
                class DescribeTrafficPackagesRequest : public AbstractModel
                {
                public:
                    DescribeTrafficPackagesRequest();
                    ~DescribeTrafficPackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Traffic package IDs. Multiple values can be used.
                     * @return TrafficPackageIds Traffic package IDs. Multiple values can be used.
                     * 
                     */
                    std::vector<std::string> GetTrafficPackageIds() const;

                    /**
                     * 设置Traffic package IDs. Multiple values can be used.
                     * @param _trafficPackageIds Traffic package IDs. Multiple values can be used.
                     * 
                     */
                    void SetTrafficPackageIds(const std::vector<std::string>& _trafficPackageIds);

                    /**
                     * 判断参数 TrafficPackageIds 是否已赋值
                     * @return TrafficPackageIds 是否已赋值
                     * 
                     */
                    bool TrafficPackageIdsHasBeenSet() const;

                    /**
                     * 获取Each request can have up to 10 `Filters`. `TrafficPackageIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li> `traffic-package_id` - String - Optional - Filter by the traffic package ID.</li>
<li> `traffic-package-name` - String - Optional - Filter by the traffic package name. Fuzzy match is not supported.</li>
<li> `status` - String - Optional - Filter by the traffic package status. Values: [AVAILABLE|EXPIRED|EXHAUSTED].</li>
                     * @return Filters Each request can have up to 10 `Filters`. `TrafficPackageIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li> `traffic-package_id` - String - Optional - Filter by the traffic package ID.</li>
<li> `traffic-package-name` - String - Optional - Filter by the traffic package name. Fuzzy match is not supported.</li>
<li> `status` - String - Optional - Filter by the traffic package status. Values: [AVAILABLE|EXPIRED|EXHAUSTED].</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Each request can have up to 10 `Filters`. `TrafficPackageIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li> `traffic-package_id` - String - Optional - Filter by the traffic package ID.</li>
<li> `traffic-package-name` - String - Optional - Filter by the traffic package name. Fuzzy match is not supported.</li>
<li> `status` - String - Optional - Filter by the traffic package status. Values: [AVAILABLE|EXPIRED|EXHAUSTED].</li>
                     * @param _filters Each request can have up to 10 `Filters`. `TrafficPackageIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li> `traffic-package_id` - String - Optional - Filter by the traffic package ID.</li>
<li> `traffic-package-name` - String - Optional - Filter by the traffic package name. Fuzzy match is not supported.</li>
<li> `status` - String - Optional - Filter by the traffic package status. Values: [AVAILABLE|EXPIRED|EXHAUSTED].</li>
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
                     * 获取Pagination parameter
                     * @return Limit Pagination parameter
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination parameter
                     * @param _limit Pagination parameter
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Traffic package IDs. Multiple values can be used.
                     */
                    std::vector<std::string> m_trafficPackageIds;
                    bool m_trafficPackageIdsHasBeenSet;

                    /**
                     * Each request can have up to 10 `Filters`. `TrafficPackageIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li> `traffic-package_id` - String - Optional - Filter by the traffic package ID.</li>
<li> `traffic-package-name` - String - Optional - Filter by the traffic package name. Fuzzy match is not supported.</li>
<li> `status` - String - Optional - Filter by the traffic package status. Values: [AVAILABLE|EXPIRED|EXHAUSTED].</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Pagination parameter
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination parameter
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICPACKAGESREQUEST_H_
