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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/Filter.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DescribeInternetAddress request structure.
                */
                class DescribeInternetAddressRequest : public AbstractModel
                {
                public:
                    DescribeInternetAddressRequest();
                    ~DescribeInternetAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100.
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
                     * 获取Filter conditions:
<li>AddrType, address type. Valid values: 0: BGP; 1: China Telecom; 2: China Mobile; 3: China Unicom</li>
<li>AddrProto, address protocol. Valid values: 0: IPv4; 1: IPv6</li>
<li>Status, address status. Valid values: 0: in use; 1: disabled; 2: returned</li>
<li>Subnet, public IP address array</li>
<InstanceIds>Public IP address ID array</li>
                     * @return Filters Filter conditions:
<li>AddrType, address type. Valid values: 0: BGP; 1: China Telecom; 2: China Mobile; 3: China Unicom</li>
<li>AddrProto, address protocol. Valid values: 0: IPv4; 1: IPv6</li>
<li>Status, address status. Valid values: 0: in use; 1: disabled; 2: returned</li>
<li>Subnet, public IP address array</li>
<InstanceIds>Public IP address ID array</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions:
<li>AddrType, address type. Valid values: 0: BGP; 1: China Telecom; 2: China Mobile; 3: China Unicom</li>
<li>AddrProto, address protocol. Valid values: 0: IPv4; 1: IPv6</li>
<li>Status, address status. Valid values: 0: in use; 1: disabled; 2: returned</li>
<li>Subnet, public IP address array</li>
<InstanceIds>Public IP address ID array</li>
                     * @param _filters Filter conditions:
<li>AddrType, address type. Valid values: 0: BGP; 1: China Telecom; 2: China Mobile; 3: China Unicom</li>
<li>AddrProto, address protocol. Valid values: 0: IPv4; 1: IPv6</li>
<li>Status, address status. Valid values: 0: in use; 1: disabled; 2: returned</li>
<li>Subnet, public IP address array</li>
<InstanceIds>Public IP address ID array</li>
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
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter conditions:
<li>AddrType, address type. Valid values: 0: BGP; 1: China Telecom; 2: China Mobile; 3: China Unicom</li>
<li>AddrProto, address protocol. Valid values: 0: IPv4; 1: IPv6</li>
<li>Status, address status. Valid values: 0: in use; 1: disabled; 2: returned</li>
<li>Subnet, public IP address array</li>
<InstanceIds>Public IP address ID array</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSREQUEST_H_
