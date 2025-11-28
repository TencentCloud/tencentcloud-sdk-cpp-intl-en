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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_ENDPOINT_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_ENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/IpRule.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Access point information.
                */
                class Endpoint : public AbstractModel
                {
                public:
                    Endpoint();
                    ~Endpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access point type, with the enumerated values as follows:.

- VPC: specifies the VPC network.

-PUBLIC: public network.

-INTERNAL: specifies the support network.
                     * @return Type Access point type, with the enumerated values as follows:.

- VPC: specifies the VPC network.

-PUBLIC: public network.

-INTERNAL: specifies the support network.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Access point type, with the enumerated values as follows:.

- VPC: specifies the VPC network.

-PUBLIC: public network.

-INTERNAL: specifies the support network.
                     * @param _type Access point type, with the enumerated values as follows:.

- VPC: specifies the VPC network.

-PUBLIC: public network.

-INTERNAL: specifies the support network.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Status.
OPEN: indicates to start or activate a function.
CLOSE: indicates the closed state.
PROCESSING: operation in progress.
                     * @return Status Status.
OPEN: indicates to start or activate a function.
CLOSE: indicates the closed state.
PROCESSING: operation in progress.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status.
OPEN: indicates to start or activate a function.
CLOSE: indicates the closed state.
PROCESSING: operation in progress.
                     * @param _status Status.
OPEN: indicates to start or activate a function.
CLOSE: indicates the closed state.
PROCESSING: operation in progress.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Payment type, only public network.
PREPAID: annual/monthly package.
Pay-As-You-Go.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode Payment type, only public network.
PREPAID: annual/monthly package.
Pay-As-You-Go.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Payment type, only public network.
PREPAID: annual/monthly package.
Pay-As-You-Go.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payMode Payment type, only public network.
PREPAID: annual/monthly package.
Pay-As-You-Go.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndpointUrl Access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndpointUrl() const;

                    /**
                     * 设置Access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endpointUrl Access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndpointUrl(const std::string& _endpointUrl);

                    /**
                     * 判断参数 EndpointUrl 是否已赋值
                     * @return EndpointUrl 是否已赋值
                     * 
                     */
                    bool EndpointUrlHasBeenSet() const;

                    /**
                     * 获取VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Specifies the subnet ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId Specifies the subnet ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Specifies the subnet ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId Specifies the subnet ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth, in Mbps

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bandwidth Public network bandwidth, in Mbps

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Public network bandwidth, in Mbps

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bandwidth Public network bandwidth, in Mbps

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Public network access rules

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IpRules Public network access rules

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<IpRule> GetIpRules() const;

                    /**
                     * 设置Public network access rules

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipRules Public network access rules

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpRules(const std::vector<IpRule>& _ipRules);

                    /**
                     * 判断参数 IpRules 是否已赋值
                     * @return IpRules 是否已赋值
                     * 
                     */
                    bool IpRulesHasBeenSet() const;

                    /**
                     * 获取Whether the public network is billed by traffic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BillingFlow Whether the public network is billed by traffic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetBillingFlow() const;

                    /**
                     * 设置Whether the public network is billed by traffic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _billingFlow Whether the public network is billed by traffic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBillingFlow(const bool& _billingFlow);

                    /**
                     * 判断参数 BillingFlow 是否已赋值
                     * @return BillingFlow 是否已赋值
                     * 
                     */
                    bool BillingFlowHasBeenSet() const;

                private:

                    /**
                     * Access point type, with the enumerated values as follows:.

- VPC: specifies the VPC network.

-PUBLIC: public network.

-INTERNAL: specifies the support network.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Status.
OPEN: indicates to start or activate a function.
CLOSE: indicates the closed state.
PROCESSING: operation in progress.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Payment type, only public network.
PREPAID: annual/monthly package.
Pay-As-You-Go.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endpointUrl;
                    bool m_endpointUrlHasBeenSet;

                    /**
                     * VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Specifies the subnet ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Public network bandwidth, in Mbps

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Public network access rules

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<IpRule> m_ipRules;
                    bool m_ipRulesHasBeenSet;

                    /**
                     * Whether the public network is billed by traffic.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_billingFlow;
                    bool m_billingFlowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_ENDPOINT_H_
