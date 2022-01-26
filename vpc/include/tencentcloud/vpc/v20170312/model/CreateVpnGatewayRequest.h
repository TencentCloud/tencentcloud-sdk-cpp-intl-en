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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/InstanceChargePrepaid.h>
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
                * CreateVpnGateway request structure.
                */
                class CreateVpnGatewayRequest : public AbstractModel
                {
                public:
                    CreateVpnGatewayRequest();
                    ~CreateVpnGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC instance ID, which can be obtained from the `VpcId` field in the response of the [`DescribeVpcs`](https://intl.cloud.tencent.com/document/product/215/15778?from_cn_redirect=1) API.
                     * @return VpcId VPC instance ID, which can be obtained from the `VpcId` field in the response of the [`DescribeVpcs`](https://intl.cloud.tencent.com/document/product/215/15778?from_cn_redirect=1) API.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID, which can be obtained from the `VpcId` field in the response of the [`DescribeVpcs`](https://intl.cloud.tencent.com/document/product/215/15778?from_cn_redirect=1) API.
                     * @param VpcId VPC instance ID, which can be obtained from the `VpcId` field in the response of the [`DescribeVpcs`](https://intl.cloud.tencent.com/document/product/215/15778?from_cn_redirect=1) API.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The VPN gateway name. The maximum length is 60 bytes.
                     * @return VpnGatewayName The VPN gateway name. The maximum length is 60 bytes.
                     */
                    std::string GetVpnGatewayName() const;

                    /**
                     * 设置The VPN gateway name. The maximum length is 60 bytes.
                     * @param VpnGatewayName The VPN gateway name. The maximum length is 60 bytes.
                     */
                    void SetVpnGatewayName(const std::string& _vpnGatewayName);

                    /**
                     * 判断参数 VpnGatewayName 是否已赋值
                     * @return VpnGatewayName 是否已赋值
                     */
                    bool VpnGatewayNameHasBeenSet() const;

                    /**
                     * 获取The public network bandwidth configuration. Available bandwidth specifications: 5, 10, 20, 50, and 100. Unit: Mbps
                     * @return InternetMaxBandwidthOut The public network bandwidth configuration. Available bandwidth specifications: 5, 10, 20, 50, and 100. Unit: Mbps
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置The public network bandwidth configuration. Available bandwidth specifications: 5, 10, 20, 50, and 100. Unit: Mbps
                     * @param InternetMaxBandwidthOut The public network bandwidth configuration. Available bandwidth specifications: 5, 10, 20, 50, and 100. Unit: Mbps
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取The VPN gateway billing mode. PREPAID: prepaid means monthly subscription. POSTPAID_BY_HOUR: postpaid means pay-as-you-go. Default: POSTPAID_BY_HOUR. If prepaid mode is specified, the `InstanceChargePrepaid` parameter must be entered.
                     * @return InstanceChargeType The VPN gateway billing mode. PREPAID: prepaid means monthly subscription. POSTPAID_BY_HOUR: postpaid means pay-as-you-go. Default: POSTPAID_BY_HOUR. If prepaid mode is specified, the `InstanceChargePrepaid` parameter must be entered.
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置The VPN gateway billing mode. PREPAID: prepaid means monthly subscription. POSTPAID_BY_HOUR: postpaid means pay-as-you-go. Default: POSTPAID_BY_HOUR. If prepaid mode is specified, the `InstanceChargePrepaid` parameter must be entered.
                     * @param InstanceChargeType The VPN gateway billing mode. PREPAID: prepaid means monthly subscription. POSTPAID_BY_HOUR: postpaid means pay-as-you-go. Default: POSTPAID_BY_HOUR. If prepaid mode is specified, the `InstanceChargePrepaid` parameter must be entered.
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Parameter settings for prepaid billing mode, also known as monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. This parameter is mandatory for prepaid instances.
                     * @return InstanceChargePrepaid Parameter settings for prepaid billing mode, also known as monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. This parameter is mandatory for prepaid instances.
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Parameter settings for prepaid billing mode, also known as monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. This parameter is mandatory for prepaid instances.
                     * @param InstanceChargePrepaid Parameter settings for prepaid billing mode, also known as monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. This parameter is mandatory for prepaid instances.
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取The availability zone, such as `ap-guangzhou-2`.
                     * @return Zone The availability zone, such as `ap-guangzhou-2`.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The availability zone, such as `ap-guangzhou-2`.
                     * @param Zone The availability zone, such as `ap-guangzhou-2`.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取VPN gateway type. Values: `CCN` (CCN VPN gateway), `SSL` (SSL VPN gateway)
                     * @return Type VPN gateway type. Values: `CCN` (CCN VPN gateway), `SSL` (SSL VPN gateway)
                     */
                    std::string GetType() const;

                    /**
                     * 设置VPN gateway type. Values: `CCN` (CCN VPN gateway), `SSL` (SSL VPN gateway)
                     * @param Type VPN gateway type. Values: `CCN` (CCN VPN gateway), `SSL` (SSL VPN gateway)
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @param Tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取CDC instance ID
                     * @return CdcId CDC instance ID
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置CDC instance ID
                     * @param CdcId CDC instance ID
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取Maximum number of connected clients allowed for the SSL VPN gateway. Valid values: [5, 10, 20, 50, 100]. This parameter is only required for SSL VPN gateways.
                     * @return MaxConnection Maximum number of connected clients allowed for the SSL VPN gateway. Valid values: [5, 10, 20, 50, 100]. This parameter is only required for SSL VPN gateways.
                     */
                    uint64_t GetMaxConnection() const;

                    /**
                     * 设置Maximum number of connected clients allowed for the SSL VPN gateway. Valid values: [5, 10, 20, 50, 100]. This parameter is only required for SSL VPN gateways.
                     * @param MaxConnection Maximum number of connected clients allowed for the SSL VPN gateway. Valid values: [5, 10, 20, 50, 100]. This parameter is only required for SSL VPN gateways.
                     */
                    void SetMaxConnection(const uint64_t& _maxConnection);

                    /**
                     * 判断参数 MaxConnection 是否已赋值
                     * @return MaxConnection 是否已赋值
                     */
                    bool MaxConnectionHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID, which can be obtained from the `VpcId` field in the response of the [`DescribeVpcs`](https://intl.cloud.tencent.com/document/product/215/15778?from_cn_redirect=1) API.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The VPN gateway name. The maximum length is 60 bytes.
                     */
                    std::string m_vpnGatewayName;
                    bool m_vpnGatewayNameHasBeenSet;

                    /**
                     * The public network bandwidth configuration. Available bandwidth specifications: 5, 10, 20, 50, and 100. Unit: Mbps
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * The VPN gateway billing mode. PREPAID: prepaid means monthly subscription. POSTPAID_BY_HOUR: postpaid means pay-as-you-go. Default: POSTPAID_BY_HOUR. If prepaid mode is specified, the `InstanceChargePrepaid` parameter must be entered.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Parameter settings for prepaid billing mode, also known as monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. This parameter is mandatory for prepaid instances.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * The availability zone, such as `ap-guangzhou-2`.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPN gateway type. Values: `CCN` (CCN VPN gateway), `SSL` (SSL VPN gateway)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * CDC instance ID
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * Maximum number of connected clients allowed for the SSL VPN gateway. Valid values: [5, 10, 20, 50, 100]. This parameter is only required for SSL VPN gateways.
                     */
                    uint64_t m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYREQUEST_H_
