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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSESREQUEST_H_

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
                * DescribeAddresses request structure.
                */
                class DescribeAddressesRequest : public AbstractModel
                {
                public:
                    DescribeAddressesRequest();
                    ~DescribeAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The list of unique IDs of EIPs, such as `eip-11112222`. `AddressIds` and `Filters` cannot be specified at the same time.
                     * @return AddressIds The list of unique IDs of EIPs, such as `eip-11112222`. `AddressIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> GetAddressIds() const;

                    /**
                     * 设置The list of unique IDs of EIPs, such as `eip-11112222`. `AddressIds` and `Filters` cannot be specified at the same time.
                     * @param AddressIds The list of unique IDs of EIPs, such as `eip-11112222`. `AddressIds` and `Filters` cannot be specified at the same time.
                     */
                    void SetAddressIds(const std::vector<std::string>& _addressIds);

                    /**
                     * 判断参数 AddressIds 是否已赋值
                     * @return AddressIds 是否已赋值
                     */
                    bool AddressIdsHasBeenSet() const;

                    /**
                     * 获取The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. `AddressIds` and `Filters` cannot be specified at the same time. Detailed filter conditions are as follows:
<li> address-id - String - Required: no - (Filter condition) The unique EIP ID, such as `eip-11112222`.</li>
<li> address-name - String - Required: no - (Filter condition) The EIP name. Fuzzy filtering is not supported.</li>
<li> address-ip - String - Required: no - (Filter condition) Filters by EIP.</li>
<li> address-status - String - Required: no - (Filter condition) The EIP state. Possible EIP states are: 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', and 'BIND_ENI'.</li>
<li> instance-id - String - Required: no - (Filter condition) The ID of the instance bound to the EIP, such as `ins-11112222`.</li>
<li> private-ip-address - String - Required: no - (Filter condition) The private IP address bound to the EIP.</li>
<li> network-interface-id - String - Required: no - (Filter condition) The ID of the ENI bound to the EIP, such as `eni-11112222`.</li>
<li> is-arrears - String - Required: no - (Filter condition) Whether the EIP is in arrears. (TRUE: the EIP is in arrears | FALSE: the billing status of the EIP is normal)</li>
                     * @return Filters The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. `AddressIds` and `Filters` cannot be specified at the same time. Detailed filter conditions are as follows:
<li> address-id - String - Required: no - (Filter condition) The unique EIP ID, such as `eip-11112222`.</li>
<li> address-name - String - Required: no - (Filter condition) The EIP name. Fuzzy filtering is not supported.</li>
<li> address-ip - String - Required: no - (Filter condition) Filters by EIP.</li>
<li> address-status - String - Required: no - (Filter condition) The EIP state. Possible EIP states are: 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', and 'BIND_ENI'.</li>
<li> instance-id - String - Required: no - (Filter condition) The ID of the instance bound to the EIP, such as `ins-11112222`.</li>
<li> private-ip-address - String - Required: no - (Filter condition) The private IP address bound to the EIP.</li>
<li> network-interface-id - String - Required: no - (Filter condition) The ID of the ENI bound to the EIP, such as `eni-11112222`.</li>
<li> is-arrears - String - Required: no - (Filter condition) Whether the EIP is in arrears. (TRUE: the EIP is in arrears | FALSE: the billing status of the EIP is normal)</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. `AddressIds` and `Filters` cannot be specified at the same time. Detailed filter conditions are as follows:
<li> address-id - String - Required: no - (Filter condition) The unique EIP ID, such as `eip-11112222`.</li>
<li> address-name - String - Required: no - (Filter condition) The EIP name. Fuzzy filtering is not supported.</li>
<li> address-ip - String - Required: no - (Filter condition) Filters by EIP.</li>
<li> address-status - String - Required: no - (Filter condition) The EIP state. Possible EIP states are: 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', and 'BIND_ENI'.</li>
<li> instance-id - String - Required: no - (Filter condition) The ID of the instance bound to the EIP, such as `ins-11112222`.</li>
<li> private-ip-address - String - Required: no - (Filter condition) The private IP address bound to the EIP.</li>
<li> network-interface-id - String - Required: no - (Filter condition) The ID of the ENI bound to the EIP, such as `eni-11112222`.</li>
<li> is-arrears - String - Required: no - (Filter condition) Whether the EIP is in arrears. (TRUE: the EIP is in arrears | FALSE: the billing status of the EIP is normal)</li>
                     * @param Filters The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. `AddressIds` and `Filters` cannot be specified at the same time. Detailed filter conditions are as follows:
<li> address-id - String - Required: no - (Filter condition) The unique EIP ID, such as `eip-11112222`.</li>
<li> address-name - String - Required: no - (Filter condition) The EIP name. Fuzzy filtering is not supported.</li>
<li> address-ip - String - Required: no - (Filter condition) Filters by EIP.</li>
<li> address-status - String - Required: no - (Filter condition) The EIP state. Possible EIP states are: 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', and 'BIND_ENI'.</li>
<li> instance-id - String - Required: no - (Filter condition) The ID of the instance bound to the EIP, such as `ins-11112222`.</li>
<li> private-ip-address - String - Required: no - (Filter condition) The private IP address bound to the EIP.</li>
<li> network-interface-id - String - Required: no - (Filter condition) The ID of the ENI bound to the EIP, such as `eni-11112222`.</li>
<li> is-arrears - String - Required: no - (Filter condition) Whether the EIP is in arrears. (TRUE: the EIP is in arrears | FALSE: the billing status of the EIP is normal)</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The Offset. The default value is 0. For more information on `Offset`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/product/11646).
                     * @return Offset The Offset. The default value is 0. For more information on `Offset`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/product/11646).
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The Offset. The default value is 0. For more information on `Offset`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/product/11646).
                     * @param Offset The Offset. The default value is 0. For more information on `Offset`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/product/11646).
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. The default value is 20. The maximum is 100. For more information on `Limit`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/product/11646).
                     * @return Limit Number of returned results. The default value is 20. The maximum is 100. For more information on `Limit`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/product/11646).
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. The default value is 20. The maximum is 100. For more information on `Limit`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/product/11646).
                     * @param Limit Number of returned results. The default value is 20. The maximum is 100. For more information on `Limit`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/product/11646).
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The list of unique IDs of EIPs, such as `eip-11112222`. `AddressIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_addressIds;
                    bool m_addressIdsHasBeenSet;

                    /**
                     * The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. `AddressIds` and `Filters` cannot be specified at the same time. Detailed filter conditions are as follows:
<li> address-id - String - Required: no - (Filter condition) The unique EIP ID, such as `eip-11112222`.</li>
<li> address-name - String - Required: no - (Filter condition) The EIP name. Fuzzy filtering is not supported.</li>
<li> address-ip - String - Required: no - (Filter condition) Filters by EIP.</li>
<li> address-status - String - Required: no - (Filter condition) The EIP state. Possible EIP states are: 'CREATING', 'BINDING', 'BIND', 'UNBINDING', 'UNBIND', 'OFFLINING', and 'BIND_ENI'.</li>
<li> instance-id - String - Required: no - (Filter condition) The ID of the instance bound to the EIP, such as `ins-11112222`.</li>
<li> private-ip-address - String - Required: no - (Filter condition) The private IP address bound to the EIP.</li>
<li> network-interface-id - String - Required: no - (Filter condition) The ID of the ENI bound to the EIP, such as `eni-11112222`.</li>
<li> is-arrears - String - Required: no - (Filter condition) Whether the EIP is in arrears. (TRUE: the EIP is in arrears | FALSE: the billing status of the EIP is normal)</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The Offset. The default value is 0. For more information on `Offset`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/product/11646).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. The default value is 20. The maximum is 100. For more information on `Limit`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/product/11646).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSESREQUEST_H_
