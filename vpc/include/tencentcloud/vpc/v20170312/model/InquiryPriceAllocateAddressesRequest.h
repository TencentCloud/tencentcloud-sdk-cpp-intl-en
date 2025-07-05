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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICEALLOCATEADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICEALLOCATEADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AddressChargePrepaid.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceAllocateAddresses request structure.
                */
                class InquiryPriceAllocateAddressesRequest : public AbstractModel
                {
                public:
                    InquiryPriceAllocateAddressesRequest();
                    ~InquiryPriceAllocateAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EIP billing method.

<ul style="margin:0"><li>Users with standard account type. Valid values: <ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR: billed by hourly bandwidth on a pay-as-you-go basis.</li>
<li>BANDWIDTH_PREPAID_BY_MONTH: monthly bandwidth subscription.</li>
<li>TRAFFIC_POSTPAID_BY_HOUR: billed by hourly traffic on a pay-as-you-go basis.</li></ul>Default value: TRAFFIC_POSTPAID_BY_HOUR.</li>
</ul>
                     * @return InternetChargeType EIP billing method.

<ul style="margin:0"><li>Users with standard account type. Valid values: <ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR: billed by hourly bandwidth on a pay-as-you-go basis.</li>
<li>BANDWIDTH_PREPAID_BY_MONTH: monthly bandwidth subscription.</li>
<li>TRAFFIC_POSTPAID_BY_HOUR: billed by hourly traffic on a pay-as-you-go basis.</li></ul>Default value: TRAFFIC_POSTPAID_BY_HOUR.</li>
</ul>
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置EIP billing method.

<ul style="margin:0"><li>Users with standard account type. Valid values: <ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR: billed by hourly bandwidth on a pay-as-you-go basis.</li>
<li>BANDWIDTH_PREPAID_BY_MONTH: monthly bandwidth subscription.</li>
<li>TRAFFIC_POSTPAID_BY_HOUR: billed by hourly traffic on a pay-as-you-go basis.</li></ul>Default value: TRAFFIC_POSTPAID_BY_HOUR.</li>
</ul>
                     * @param _internetChargeType EIP billing method.

<ul style="margin:0"><li>Users with standard account type. Valid values: <ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR: billed by hourly bandwidth on a pay-as-you-go basis.</li>
<li>BANDWIDTH_PREPAID_BY_MONTH: monthly bandwidth subscription.</li>
<li>TRAFFIC_POSTPAID_BY_HOUR: billed by hourly traffic on a pay-as-you-go basis.</li></ul>Default value: TRAFFIC_POSTPAID_BY_HOUR.</li>
</ul>
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取The EIP outbound bandwidth cap, in Mbps.
<ul style="margin:0"><li>For users with standard account type, the range of optional values depends on the EIP billing method:<ul>
<li>`BANDWIDTH_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps.</li>
<li>`BANDWIDTH_PREPAID_BY_MONTH`: 1 Mbps to 200 Mbps</li>
<li>`TRAFFIC_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps.</li></ul>Default value: 1 Mbps.</li></ul>
<li>For users with traditional account type, the EIP outbound bandwidth cap is subject to the public network egress bandwidth limit of the bound instance. No need to pass this parameter.</li></ul>
                     * @return InternetMaxBandwidthOut The EIP outbound bandwidth cap, in Mbps.
<ul style="margin:0"><li>For users with standard account type, the range of optional values depends on the EIP billing method:<ul>
<li>`BANDWIDTH_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps.</li>
<li>`BANDWIDTH_PREPAID_BY_MONTH`: 1 Mbps to 200 Mbps</li>
<li>`TRAFFIC_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps.</li></ul>Default value: 1 Mbps.</li></ul>
<li>For users with traditional account type, the EIP outbound bandwidth cap is subject to the public network egress bandwidth limit of the bound instance. No need to pass this parameter.</li></ul>
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置The EIP outbound bandwidth cap, in Mbps.
<ul style="margin:0"><li>For users with standard account type, the range of optional values depends on the EIP billing method:<ul>
<li>`BANDWIDTH_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps.</li>
<li>`BANDWIDTH_PREPAID_BY_MONTH`: 1 Mbps to 200 Mbps</li>
<li>`TRAFFIC_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps.</li></ul>Default value: 1 Mbps.</li></ul>
<li>For users with traditional account type, the EIP outbound bandwidth cap is subject to the public network egress bandwidth limit of the bound instance. No need to pass this parameter.</li></ul>
                     * @param _internetMaxBandwidthOut The EIP outbound bandwidth cap, in Mbps.
<ul style="margin:0"><li>For users with standard account type, the range of optional values depends on the EIP billing method:<ul>
<li>`BANDWIDTH_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps.</li>
<li>`BANDWIDTH_PREPAID_BY_MONTH`: 1 Mbps to 200 Mbps</li>
<li>`TRAFFIC_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps.</li></ul>Default value: 1 Mbps.</li></ul>
<li>For users with traditional account type, the EIP outbound bandwidth cap is subject to the public network egress bandwidth limit of the bound instance. No need to pass this parameter.</li></ul>
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取A required billing parameter for an EIP billed by "BANDWIDTH_PREPAID_BY_MONTH". When the EIP is billed by "BANDWIDTH_PREPAID_BY_MONTH" this parameter is required. For other scenarios, it can be ignored.
                     * @return AddressChargePrepaid A required billing parameter for an EIP billed by "BANDWIDTH_PREPAID_BY_MONTH". When the EIP is billed by "BANDWIDTH_PREPAID_BY_MONTH" this parameter is required. For other scenarios, it can be ignored.
                     * 
                     */
                    AddressChargePrepaid GetAddressChargePrepaid() const;

                    /**
                     * 设置A required billing parameter for an EIP billed by "BANDWIDTH_PREPAID_BY_MONTH". When the EIP is billed by "BANDWIDTH_PREPAID_BY_MONTH" this parameter is required. For other scenarios, it can be ignored.
                     * @param _addressChargePrepaid A required billing parameter for an EIP billed by "BANDWIDTH_PREPAID_BY_MONTH". When the EIP is billed by "BANDWIDTH_PREPAID_BY_MONTH" this parameter is required. For other scenarios, it can be ignored.
                     * 
                     */
                    void SetAddressChargePrepaid(const AddressChargePrepaid& _addressChargePrepaid);

                    /**
                     * 判断参数 AddressChargePrepaid 是否已赋值
                     * @return AddressChargePrepaid 是否已赋值
                     * 
                     */
                    bool AddressChargePrepaidHasBeenSet() const;

                    /**
                     * 获取EIP type. Default value: EIP.



<ul style="margin:0"><li>High quality EIP, valid values: <ul><li>HighQualityEIP: high quality EIP</li></ul>Note: High quality EIP is supported only in some regions.</li></ul><ul style="margin:0">
        <li>High-defense IP, valid values: <ul>
                <li>AntiDDoSEIP: high-defense IP</li>
            </ul>
        </li>
    </ul>
                     * @return AddressType EIP type. Default value: EIP.



<ul style="margin:0"><li>High quality EIP, valid values: <ul><li>HighQualityEIP: high quality EIP</li></ul>Note: High quality EIP is supported only in some regions.</li></ul><ul style="margin:0">
        <li>High-defense IP, valid values: <ul>
                <li>AntiDDoSEIP: high-defense IP</li>
            </ul>
        </li>
    </ul>
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置EIP type. Default value: EIP.



<ul style="margin:0"><li>High quality EIP, valid values: <ul><li>HighQualityEIP: high quality EIP</li></ul>Note: High quality EIP is supported only in some regions.</li></ul><ul style="margin:0">
        <li>High-defense IP, valid values: <ul>
                <li>AntiDDoSEIP: high-defense IP</li>
            </ul>
        </li>
    </ul>
                     * @param _addressType EIP type. Default value: EIP.



<ul style="margin:0"><li>High quality EIP, valid values: <ul><li>HighQualityEIP: high quality EIP</li></ul>Note: High quality EIP is supported only in some regions.</li></ul><ul style="margin:0">
        <li>High-defense IP, valid values: <ul>
                <li>AntiDDoSEIP: high-defense IP</li>
            </ul>
        </li>
    </ul>
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                private:

                    /**
                     * EIP billing method.

<ul style="margin:0"><li>Users with standard account type. Valid values: <ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR: billed by hourly bandwidth on a pay-as-you-go basis.</li>
<li>BANDWIDTH_PREPAID_BY_MONTH: monthly bandwidth subscription.</li>
<li>TRAFFIC_POSTPAID_BY_HOUR: billed by hourly traffic on a pay-as-you-go basis.</li></ul>Default value: TRAFFIC_POSTPAID_BY_HOUR.</li>
</ul>
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * The EIP outbound bandwidth cap, in Mbps.
<ul style="margin:0"><li>For users with standard account type, the range of optional values depends on the EIP billing method:<ul>
<li>`BANDWIDTH_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps.</li>
<li>`BANDWIDTH_PREPAID_BY_MONTH`: 1 Mbps to 200 Mbps</li>
<li>`TRAFFIC_POSTPAID_BY_HOUR`: 1 Mbps to 100 Mbps.</li></ul>Default value: 1 Mbps.</li></ul>
<li>For users with traditional account type, the EIP outbound bandwidth cap is subject to the public network egress bandwidth limit of the bound instance. No need to pass this parameter.</li></ul>
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * A required billing parameter for an EIP billed by "BANDWIDTH_PREPAID_BY_MONTH". When the EIP is billed by "BANDWIDTH_PREPAID_BY_MONTH" this parameter is required. For other scenarios, it can be ignored.
                     */
                    AddressChargePrepaid m_addressChargePrepaid;
                    bool m_addressChargePrepaidHasBeenSet;

                    /**
                     * EIP type. Default value: EIP.



<ul style="margin:0"><li>High quality EIP, valid values: <ul><li>HighQualityEIP: high quality EIP</li></ul>Note: High quality EIP is supported only in some regions.</li></ul><ul style="margin:0">
        <li>High-defense IP, valid values: <ul>
                <li>AntiDDoSEIP: high-defense IP</li>
            </ul>
        </li>
    </ul>
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICEALLOCATEADDRESSESREQUEST_H_
