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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPV6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPV6ADDRESSESREQUEST_H_

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
                * DescribeIPv6Addresses request structure.
                */
                class DescribeIPv6AddressesRequest : public AbstractModel
                {
                public:
                    DescribeIPv6AddressesRequest();
                    ~DescribeIPv6AddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID column identifying IPv6.

- Unique ID of the traditional EIPv6, such as `eip-11112222`
- Unique ID of the EIPv6, such as `eipv6-11112222`

Note: `IPv6AddressIds` and `Filters` cannot be specified at the same time.
                     * @return IPv6AddressIds Unique ID column identifying IPv6.

- Unique ID of the traditional EIPv6, such as `eip-11112222`
- Unique ID of the EIPv6, such as `eipv6-11112222`

Note: `IPv6AddressIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetIPv6AddressIds() const;

                    /**
                     * 设置Unique ID column identifying IPv6.

- Unique ID of the traditional EIPv6, such as `eip-11112222`
- Unique ID of the EIPv6, such as `eipv6-11112222`

Note: `IPv6AddressIds` and `Filters` cannot be specified at the same time.
                     * @param _iPv6AddressIds Unique ID column identifying IPv6.

- Unique ID of the traditional EIPv6, such as `eip-11112222`
- Unique ID of the EIPv6, such as `eipv6-11112222`

Note: `IPv6AddressIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    void SetIPv6AddressIds(const std::vector<std::string>& _iPv6AddressIds);

                    /**
                     * 判断参数 IPv6AddressIds 是否已赋值
                     * @return IPv6AddressIds 是否已赋值
                     * 
                     */
                    bool IPv6AddressIdsHasBeenSet() const;

                    /**
                     * 获取Each request can have up to 10 `Filters` and 100 `Filter.Values`. `IPv6AddressIds` and `Filters` cannot be specified at the same time. The detailed filter conditions are as follows:

- address-id - String - Required: No - (Filter condition) Filter by the unique ID of the EIPv6.
- public-ipv6-address - String - Required: No - (Filter condition) Filter by the public IPv6 address.
- network-interface-id - String - Required: No - (Filter condition) Filter by the unique ID of the ENI.
- instance-id - String - Required: No - (Filter condition) Filter by the unique ID of the bound instance.
- charge-type - String - Required: No - (Filter condition) Filter by the billing type.
- private-ipv6-address - String - Required: No - (Filter condition) Filter by the bound private IPv6 address.
- egress - String - Required: No - (Filter condition) Filter by the egress.
- address-type - String - Required: No - (Filter condition) Filter by the IPv6 type. Valid values: 'EIP6', 'EIPv6', 'WanIPv6', and 'HighQualityEIPv6'. Default: 'EIPv6'.
- address-isp - String - Required: No - (Filter condition) Filter by the ISP type. Valid values: 'BGP', 'CMCC', 'CUCC', and 'CTCC'.
- address-status - String - Required: No - (Filter condition) Filter by the EIP status. Valid values: 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', 'BIND_ENI', and 'PRIVATE'.
- address-name - String - Required: No - (Filter condition) Filter by the EIP name. Fuzzy filtering is not supported.
- tag-key - String - Required: No - (Filter condition) Filter by the tag key.
- tag-value - String - Required: No - (Filter condition) Filter by the tag value.
- tag:tag-key - String - Required: No - (Filter condition) Filter by the tag-key - value pair. Replace tag-key with a specific tag key.
                     * @return Filters Each request can have up to 10 `Filters` and 100 `Filter.Values`. `IPv6AddressIds` and `Filters` cannot be specified at the same time. The detailed filter conditions are as follows:

- address-id - String - Required: No - (Filter condition) Filter by the unique ID of the EIPv6.
- public-ipv6-address - String - Required: No - (Filter condition) Filter by the public IPv6 address.
- network-interface-id - String - Required: No - (Filter condition) Filter by the unique ID of the ENI.
- instance-id - String - Required: No - (Filter condition) Filter by the unique ID of the bound instance.
- charge-type - String - Required: No - (Filter condition) Filter by the billing type.
- private-ipv6-address - String - Required: No - (Filter condition) Filter by the bound private IPv6 address.
- egress - String - Required: No - (Filter condition) Filter by the egress.
- address-type - String - Required: No - (Filter condition) Filter by the IPv6 type. Valid values: 'EIP6', 'EIPv6', 'WanIPv6', and 'HighQualityEIPv6'. Default: 'EIPv6'.
- address-isp - String - Required: No - (Filter condition) Filter by the ISP type. Valid values: 'BGP', 'CMCC', 'CUCC', and 'CTCC'.
- address-status - String - Required: No - (Filter condition) Filter by the EIP status. Valid values: 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', 'BIND_ENI', and 'PRIVATE'.
- address-name - String - Required: No - (Filter condition) Filter by the EIP name. Fuzzy filtering is not supported.
- tag-key - String - Required: No - (Filter condition) Filter by the tag key.
- tag-value - String - Required: No - (Filter condition) Filter by the tag value.
- tag:tag-key - String - Required: No - (Filter condition) Filter by the tag-key - value pair. Replace tag-key with a specific tag key.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Each request can have up to 10 `Filters` and 100 `Filter.Values`. `IPv6AddressIds` and `Filters` cannot be specified at the same time. The detailed filter conditions are as follows:

- address-id - String - Required: No - (Filter condition) Filter by the unique ID of the EIPv6.
- public-ipv6-address - String - Required: No - (Filter condition) Filter by the public IPv6 address.
- network-interface-id - String - Required: No - (Filter condition) Filter by the unique ID of the ENI.
- instance-id - String - Required: No - (Filter condition) Filter by the unique ID of the bound instance.
- charge-type - String - Required: No - (Filter condition) Filter by the billing type.
- private-ipv6-address - String - Required: No - (Filter condition) Filter by the bound private IPv6 address.
- egress - String - Required: No - (Filter condition) Filter by the egress.
- address-type - String - Required: No - (Filter condition) Filter by the IPv6 type. Valid values: 'EIP6', 'EIPv6', 'WanIPv6', and 'HighQualityEIPv6'. Default: 'EIPv6'.
- address-isp - String - Required: No - (Filter condition) Filter by the ISP type. Valid values: 'BGP', 'CMCC', 'CUCC', and 'CTCC'.
- address-status - String - Required: No - (Filter condition) Filter by the EIP status. Valid values: 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', 'BIND_ENI', and 'PRIVATE'.
- address-name - String - Required: No - (Filter condition) Filter by the EIP name. Fuzzy filtering is not supported.
- tag-key - String - Required: No - (Filter condition) Filter by the tag key.
- tag-value - String - Required: No - (Filter condition) Filter by the tag value.
- tag:tag-key - String - Required: No - (Filter condition) Filter by the tag-key - value pair. Replace tag-key with a specific tag key.
                     * @param _filters Each request can have up to 10 `Filters` and 100 `Filter.Values`. `IPv6AddressIds` and `Filters` cannot be specified at the same time. The detailed filter conditions are as follows:

- address-id - String - Required: No - (Filter condition) Filter by the unique ID of the EIPv6.
- public-ipv6-address - String - Required: No - (Filter condition) Filter by the public IPv6 address.
- network-interface-id - String - Required: No - (Filter condition) Filter by the unique ID of the ENI.
- instance-id - String - Required: No - (Filter condition) Filter by the unique ID of the bound instance.
- charge-type - String - Required: No - (Filter condition) Filter by the billing type.
- private-ipv6-address - String - Required: No - (Filter condition) Filter by the bound private IPv6 address.
- egress - String - Required: No - (Filter condition) Filter by the egress.
- address-type - String - Required: No - (Filter condition) Filter by the IPv6 type. Valid values: 'EIP6', 'EIPv6', 'WanIPv6', and 'HighQualityEIPv6'. Default: 'EIPv6'.
- address-isp - String - Required: No - (Filter condition) Filter by the ISP type. Valid values: 'BGP', 'CMCC', 'CUCC', and 'CTCC'.
- address-status - String - Required: No - (Filter condition) Filter by the EIP status. Valid values: 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', 'BIND_ENI', and 'PRIVATE'.
- address-name - String - Required: No - (Filter condition) Filter by the EIP name. Fuzzy filtering is not supported.
- tag-key - String - Required: No - (Filter condition) Filter by the tag key.
- tag-value - String - Required: No - (Filter condition) Filter by the tag value.
- tag:tag-key - String - Required: No - (Filter condition) Filter by the tag-key - value pair. Replace tag-key with a specific tag key.
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
                     * 获取Indicates whether to query the traditional IPv6 address information.
                     * @return Traditional Indicates whether to query the traditional IPv6 address information.
                     * 
                     */
                    bool GetTraditional() const;

                    /**
                     * 设置Indicates whether to query the traditional IPv6 address information.
                     * @param _traditional Indicates whether to query the traditional IPv6 address information.
                     * 
                     */
                    void SetTraditional(const bool& _traditional);

                    /**
                     * 判断参数 Traditional 是否已赋值
                     * @return Traditional 是否已赋值
                     * 
                     */
                    bool TraditionalHasBeenSet() const;

                    /**
                     * 获取Offset. Default: 0. For more information on Offset, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * @return Offset Offset. Default: 0. For more information on Offset, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default: 0. For more information on Offset, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * @param _offset Offset. Default: 0. For more information on Offset, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
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
                     * 获取Number of returned results. Default: 20. Maximum: 100. For more information on Limit, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * @return Limit Number of returned results. Default: 20. Maximum: 100. For more information on Limit, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default: 20. Maximum: 100. For more information on Limit, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * @param _limit Number of returned results. Default: 20. Maximum: 100. For more information on Limit, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Unique ID column identifying IPv6.

- Unique ID of the traditional EIPv6, such as `eip-11112222`
- Unique ID of the EIPv6, such as `eipv6-11112222`

Note: `IPv6AddressIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_iPv6AddressIds;
                    bool m_iPv6AddressIdsHasBeenSet;

                    /**
                     * Each request can have up to 10 `Filters` and 100 `Filter.Values`. `IPv6AddressIds` and `Filters` cannot be specified at the same time. The detailed filter conditions are as follows:

- address-id - String - Required: No - (Filter condition) Filter by the unique ID of the EIPv6.
- public-ipv6-address - String - Required: No - (Filter condition) Filter by the public IPv6 address.
- network-interface-id - String - Required: No - (Filter condition) Filter by the unique ID of the ENI.
- instance-id - String - Required: No - (Filter condition) Filter by the unique ID of the bound instance.
- charge-type - String - Required: No - (Filter condition) Filter by the billing type.
- private-ipv6-address - String - Required: No - (Filter condition) Filter by the bound private IPv6 address.
- egress - String - Required: No - (Filter condition) Filter by the egress.
- address-type - String - Required: No - (Filter condition) Filter by the IPv6 type. Valid values: 'EIP6', 'EIPv6', 'WanIPv6', and 'HighQualityEIPv6'. Default: 'EIPv6'.
- address-isp - String - Required: No - (Filter condition) Filter by the ISP type. Valid values: 'BGP', 'CMCC', 'CUCC', and 'CTCC'.
- address-status - String - Required: No - (Filter condition) Filter by the EIP status. Valid values: 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', 'BIND_ENI', and 'PRIVATE'.
- address-name - String - Required: No - (Filter condition) Filter by the EIP name. Fuzzy filtering is not supported.
- tag-key - String - Required: No - (Filter condition) Filter by the tag key.
- tag-value - String - Required: No - (Filter condition) Filter by the tag value.
- tag:tag-key - String - Required: No - (Filter condition) Filter by the tag-key - value pair. Replace tag-key with a specific tag key.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Indicates whether to query the traditional IPv6 address information.
                     */
                    bool m_traditional;
                    bool m_traditionalHasBeenSet;

                    /**
                     * Offset. Default: 0. For more information on Offset, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default: 20. Maximum: 100. For more information on Limit, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPV6ADDRESSESREQUEST_H_
