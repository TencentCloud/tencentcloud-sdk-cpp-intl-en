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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEIPV6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEIPV6ADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AllocateIPv6Addresses request structure.
                */
                class AllocateIPv6AddressesRequest : public AbstractModel
                {
                public:
                    AllocateIPv6AddressesRequest();
                    ~AllocateIPv6AddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EIPv6 name, which is the custom EIPv6 name given by the user when the user applies for the EIPv6. Default: not named.
                     * @return AddressName EIPv6 name, which is the custom EIPv6 name given by the user when the user applies for the EIPv6. Default: not named.
                     * 
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置EIPv6 name, which is the custom EIPv6 name given by the user when the user applies for the EIPv6. Default: not named.
                     * @param _addressName EIPv6 name, which is the custom EIPv6 name given by the user when the user applies for the EIPv6. Default: not named.
                     * 
                     */
                    void SetAddressName(const std::string& _addressName);

                    /**
                     * 判断参数 AddressName 是否已赋值
                     * @return AddressName 是否已赋值
                     * 
                     */
                    bool AddressNameHasBeenSet() const;

                    /**
                     * 获取Indicates the type of EIPv6. Valid values:

- EIPv6: common IPv6
- HighQualityEIPv6: dedicated IPv6
Note: Contact the product team to enable the dedicated IPv6 allowlist. The dedicated IPv6 is only supported in some regions.

Default: EIPv6.
                     * @return AddressType Indicates the type of EIPv6. Valid values:

- EIPv6: common IPv6
- HighQualityEIPv6: dedicated IPv6
Note: Contact the product team to enable the dedicated IPv6 allowlist. The dedicated IPv6 is only supported in some regions.

Default: EIPv6.
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置Indicates the type of EIPv6. Valid values:

- EIPv6: common IPv6
- HighQualityEIPv6: dedicated IPv6
Note: Contact the product team to enable the dedicated IPv6 allowlist. The dedicated IPv6 is only supported in some regions.

Default: EIPv6.
                     * @param _addressType Indicates the type of EIPv6. Valid values:

- EIPv6: common IPv6
- HighQualityEIPv6: dedicated IPv6
Note: Contact the product team to enable the dedicated IPv6 allowlist. The dedicated IPv6 is only supported in some regions.

Default: EIPv6.
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取Number of applied EIPv6 addresses. Default: 1.
                     * @return AddressCount Number of applied EIPv6 addresses. Default: 1.
                     * 
                     */
                    int64_t GetAddressCount() const;

                    /**
                     * 设置Number of applied EIPv6 addresses. Default: 1.
                     * @param _addressCount Number of applied EIPv6 addresses. Default: 1.
                     * 
                     */
                    void SetAddressCount(const int64_t& _addressCount);

                    /**
                     * 判断参数 AddressCount 是否已赋值
                     * @return AddressCount 是否已赋值
                     * 
                     */
                    bool AddressCountHasBeenSet() const;

                    /**
                     * 获取Indicates the billing method of EIPv6. Valid values:

- BANDWIDTH_PACKAGE: billed by [Bandwidth Package](https://intl.cloud.tencent.com/document/product/684/15255?from_cn_redirect=1)
- TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic on an hourly basis

Default: TRAFFIC_POSTPAID_BY_HOUR.
                     * @return InternetChargeType Indicates the billing method of EIPv6. Valid values:

- BANDWIDTH_PACKAGE: billed by [Bandwidth Package](https://intl.cloud.tencent.com/document/product/684/15255?from_cn_redirect=1)
- TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic on an hourly basis

Default: TRAFFIC_POSTPAID_BY_HOUR.
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置Indicates the billing method of EIPv6. Valid values:

- BANDWIDTH_PACKAGE: billed by [Bandwidth Package](https://intl.cloud.tencent.com/document/product/684/15255?from_cn_redirect=1)
- TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic on an hourly basis

Default: TRAFFIC_POSTPAID_BY_HOUR.
                     * @param _internetChargeType Indicates the billing method of EIPv6. Valid values:

- BANDWIDTH_PACKAGE: billed by [Bandwidth Package](https://intl.cloud.tencent.com/document/product/684/15255?from_cn_redirect=1)
- TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic on an hourly basis

Default: TRAFFIC_POSTPAID_BY_HOUR.
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
                     * 获取Indicates the type of EIPv6 line. Default: BGP.

For a user who has enabled the static single-line IP allowlist, valid values include:
- CMCC: China Mobile
- CTCC: China Telecom
- CUCC: China Unicom
Note: The static single-line IP is only supported in some regions.
                     * @return InternetServiceProvider Indicates the type of EIPv6 line. Default: BGP.

For a user who has enabled the static single-line IP allowlist, valid values include:
- CMCC: China Mobile
- CTCC: China Telecom
- CUCC: China Unicom
Note: The static single-line IP is only supported in some regions.
                     * 
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置Indicates the type of EIPv6 line. Default: BGP.

For a user who has enabled the static single-line IP allowlist, valid values include:
- CMCC: China Mobile
- CTCC: China Telecom
- CUCC: China Unicom
Note: The static single-line IP is only supported in some regions.
                     * @param _internetServiceProvider Indicates the type of EIPv6 line. Default: BGP.

For a user who has enabled the static single-line IP allowlist, valid values include:
- CMCC: China Mobile
- CTCC: China Telecom
- CUCC: China Unicom
Note: The static single-line IP is only supported in some regions.
                     * 
                     */
                    void SetInternetServiceProvider(const std::string& _internetServiceProvider);

                    /**
                     * 判断参数 InternetServiceProvider 是否已赋值
                     * @return InternetServiceProvider 是否已赋值
                     * 
                     */
                    bool InternetServiceProviderHasBeenSet() const;

                    /**
                     * 获取EIPv6 bandwidth cap, in Mbps.

Valid values depend on the EIP billing method:

- BANDWIDTH_PACKAGE: 1 Mbps to 2000 Mbps
- TRAFFIC_POSTPAID_BY_HOUR: 1 Mbps to 100 Mbps

Default: 1 Mbps.
                     * @return InternetMaxBandwidthOut EIPv6 bandwidth cap, in Mbps.

Valid values depend on the EIP billing method:

- BANDWIDTH_PACKAGE: 1 Mbps to 2000 Mbps
- TRAFFIC_POSTPAID_BY_HOUR: 1 Mbps to 100 Mbps

Default: 1 Mbps.
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置EIPv6 bandwidth cap, in Mbps.

Valid values depend on the EIP billing method:

- BANDWIDTH_PACKAGE: 1 Mbps to 2000 Mbps
- TRAFFIC_POSTPAID_BY_HOUR: 1 Mbps to 100 Mbps

Default: 1 Mbps.
                     * @param _internetMaxBandwidthOut EIPv6 bandwidth cap, in Mbps.

Valid values depend on the EIP billing method:

- BANDWIDTH_PACKAGE: 1 Mbps to 2000 Mbps
- TRAFFIC_POSTPAID_BY_HOUR: 1 Mbps to 100 Mbps

Default: 1 Mbps.
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
                     * 获取Unique ID of the bandwidth package.
Setting this parameter and having InternetChargeType as BANDWIDTH_PACKAGE indicate that the created EIP will join this BGP bandwidth package and the billing method of bandwidth package will be adopted.
                     * @return BandwidthPackageId Unique ID of the bandwidth package.
Setting this parameter and having InternetChargeType as BANDWIDTH_PACKAGE indicate that the created EIP will join this BGP bandwidth package and the billing method of bandwidth package will be adopted.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置Unique ID of the bandwidth package.
Setting this parameter and having InternetChargeType as BANDWIDTH_PACKAGE indicate that the created EIP will join this BGP bandwidth package and the billing method of bandwidth package will be adopted.
                     * @param _bandwidthPackageId Unique ID of the bandwidth package.
Setting this parameter and having InternetChargeType as BANDWIDTH_PACKAGE indicate that the created EIP will join this BGP bandwidth package and the billing method of bandwidth package will be adopted.
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取List of tags to be associated.
                     * @return Tags List of tags to be associated.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags to be associated.
                     * @param _tags List of tags to be associated.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取EIPv6 network egress. Valid values:

- CENTER_EGRESS_1: Central egress point 1
- CENTER_EGRESS_2: Central egress point 2
- CENTER_EGRESS_3: Central egress point 3
Note: The network egress for different Internet Service Providers (ISPs) or resource types requires contacting the product team for enablement.

Default: CENTER_EGRESS_1.
                     * @return Egress EIPv6 network egress. Valid values:

- CENTER_EGRESS_1: Central egress point 1
- CENTER_EGRESS_2: Central egress point 2
- CENTER_EGRESS_3: Central egress point 3
Note: The network egress for different Internet Service Providers (ISPs) or resource types requires contacting the product team for enablement.

Default: CENTER_EGRESS_1.
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置EIPv6 network egress. Valid values:

- CENTER_EGRESS_1: Central egress point 1
- CENTER_EGRESS_2: Central egress point 2
- CENTER_EGRESS_3: Central egress point 3
Note: The network egress for different Internet Service Providers (ISPs) or resource types requires contacting the product team for enablement.

Default: CENTER_EGRESS_1.
                     * @param _egress EIPv6 network egress. Valid values:

- CENTER_EGRESS_1: Central egress point 1
- CENTER_EGRESS_2: Central egress point 2
- CENTER_EGRESS_3: Central egress point 3
Note: The network egress for different Internet Service Providers (ISPs) or resource types requires contacting the product team for enablement.

Default: CENTER_EGRESS_1.
                     * 
                     */
                    void SetEgress(const std::string& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                private:

                    /**
                     * EIPv6 name, which is the custom EIPv6 name given by the user when the user applies for the EIPv6. Default: not named.
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                    /**
                     * Indicates the type of EIPv6. Valid values:

- EIPv6: common IPv6
- HighQualityEIPv6: dedicated IPv6
Note: Contact the product team to enable the dedicated IPv6 allowlist. The dedicated IPv6 is only supported in some regions.

Default: EIPv6.
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * Number of applied EIPv6 addresses. Default: 1.
                     */
                    int64_t m_addressCount;
                    bool m_addressCountHasBeenSet;

                    /**
                     * Indicates the billing method of EIPv6. Valid values:

- BANDWIDTH_PACKAGE: billed by [Bandwidth Package](https://intl.cloud.tencent.com/document/product/684/15255?from_cn_redirect=1)
- TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic on an hourly basis

Default: TRAFFIC_POSTPAID_BY_HOUR.
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * Indicates the type of EIPv6 line. Default: BGP.

For a user who has enabled the static single-line IP allowlist, valid values include:
- CMCC: China Mobile
- CTCC: China Telecom
- CUCC: China Unicom
Note: The static single-line IP is only supported in some regions.
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * EIPv6 bandwidth cap, in Mbps.

Valid values depend on the EIP billing method:

- BANDWIDTH_PACKAGE: 1 Mbps to 2000 Mbps
- TRAFFIC_POSTPAID_BY_HOUR: 1 Mbps to 100 Mbps

Default: 1 Mbps.
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Unique ID of the bandwidth package.
Setting this parameter and having InternetChargeType as BANDWIDTH_PACKAGE indicate that the created EIP will join this BGP bandwidth package and the billing method of bandwidth package will be adopted.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * List of tags to be associated.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * EIPv6 network egress. Valid values:

- CENTER_EGRESS_1: Central egress point 1
- CENTER_EGRESS_2: Central egress point 2
- CENTER_EGRESS_3: Central egress point 3
Note: The network egress for different Internet Service Providers (ISPs) or resource types requires contacting the product team for enablement.

Default: CENTER_EGRESS_1.
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEIPV6ADDRESSESREQUEST_H_
