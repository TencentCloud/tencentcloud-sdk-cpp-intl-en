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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTSERVICE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * PrivateDNS outbound endpoint forwarding IP
                */
                class EndpointService : public AbstractModel
                {
                public:
                    EndpointService();
                    ~EndpointService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the forwarding target IP network access type.
CLB: Specifies that the forwarding IP is the private CLB VIP.
CCN: Specifies forwarding IP through CCN routing.
                     * @return AccessType Specifies the forwarding target IP network access type.
CLB: Specifies that the forwarding IP is the private CLB VIP.
CCN: Specifies forwarding IP through CCN routing.
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置Specifies the forwarding target IP network access type.
CLB: Specifies that the forwarding IP is the private CLB VIP.
CCN: Specifies forwarding IP through CCN routing.
                     * @param _accessType Specifies the forwarding target IP network access type.
CLB: Specifies that the forwarding IP is the private CLB VIP.
CCN: Specifies forwarding IP through CCN routing.
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the forwarding target IP address.
                     * @return Pip Specifies the forwarding target IP address.
                     * 
                     */
                    std::string GetPip() const;

                    /**
                     * 设置Specifies the forwarding target IP address.
                     * @param _pip Specifies the forwarding target IP address.
                     * 
                     */
                    void SetPip(const std::string& _pip);

                    /**
                     * 判断参数 Pip 是否已赋值
                     * @return Pip 是否已赋值
                     * 
                     */
                    bool PipHasBeenSet() const;

                    /**
                     * 获取Specifies the forwarding IP port number.
                     * @return Pport Specifies the forwarding IP port number.
                     * 
                     */
                    int64_t GetPport() const;

                    /**
                     * 设置Specifies the forwarding IP port number.
                     * @param _pport Specifies the forwarding IP port number.
                     * 
                     */
                    void SetPport(const int64_t& _pport);

                    /**
                     * 判断参数 Pport 是否已赋值
                     * @return Pport 是否已赋值
                     * 
                     */
                    bool PportHasBeenSet() const;

                    /**
                     * 获取Specifies the unique VPC ID.
                     * @return VpcId Specifies the unique VPC ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Specifies the unique VPC ID.
                     * @param _vpcId Specifies the unique VPC ID.
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
                     * 获取Specifies the forwarding target IP proxy IP.
                     * @return Vip Specifies the forwarding target IP proxy IP.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Specifies the forwarding target IP proxy IP.
                     * @param _vip Specifies the forwarding target IP proxy IP.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Specifies the forwarding target IP proxy port.
                     * @return Vport Specifies the forwarding target IP proxy port.
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Specifies the forwarding target IP proxy port.
                     * @param _vport Specifies the forwarding target IP proxy port.
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Specifies the forwarding target IP protocol.
                     * @return Proto Specifies the forwarding target IP protocol.
                     * 
                     */
                    std::string GetProto() const;

                    /**
                     * 设置Specifies the forwarding target IP protocol.
                     * @param _proto Specifies the forwarding target IP protocol.
                     * 
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     * 
                     */
                    bool ProtoHasBeenSet() const;

                    /**
                     * 获取Specifies the unique subnet ID.
Required if the access type is CCN.
                     * @return SubnetId Specifies the unique subnet ID.
Required if the access type is CCN.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Specifies the unique subnet ID.
Required if the access type is CCN.
                     * @param _subnetId Specifies the unique subnet ID.
Required if the access type is CCN.
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
                     * 获取ccn id
Required if the access type is CCN.
                     * @return AccessGatewayId ccn id
Required if the access type is CCN.
                     * 
                     */
                    std::string GetAccessGatewayId() const;

                    /**
                     * 设置ccn id
Required if the access type is CCN.
                     * @param _accessGatewayId ccn id
Required if the access type is CCN.
                     * 
                     */
                    void SetAccessGatewayId(const std::string& _accessGatewayId);

                    /**
                     * 判断参数 AccessGatewayId 是否已赋值
                     * @return AccessGatewayId 是否已赋值
                     * 
                     */
                    bool AccessGatewayIdHasBeenSet() const;

                    /**
                     * 获取The SNAT CIDR block of the outbound endpoint.
                     * @return SnatVipCidr The SNAT CIDR block of the outbound endpoint.
                     * 
                     */
                    std::string GetSnatVipCidr() const;

                    /**
                     * 设置The SNAT CIDR block of the outbound endpoint.
                     * @param _snatVipCidr The SNAT CIDR block of the outbound endpoint.
                     * 
                     */
                    void SetSnatVipCidr(const std::string& _snatVipCidr);

                    /**
                     * 判断参数 SnatVipCidr 是否已赋值
                     * @return SnatVipCidr 是否已赋值
                     * 
                     */
                    bool SnatVipCidrHasBeenSet() const;

                    /**
                     * 获取The SNAT IP list of the outbound endpoint.
                     * @return SnatVipSet The SNAT IP list of the outbound endpoint.
                     * 
                     */
                    std::string GetSnatVipSet() const;

                    /**
                     * 设置The SNAT IP list of the outbound endpoint.
                     * @param _snatVipSet The SNAT IP list of the outbound endpoint.
                     * 
                     */
                    void SetSnatVipSet(const std::string& _snatVipSet);

                    /**
                     * 判断参数 SnatVipSet 是否已赋值
                     * @return SnatVipSet 是否已赋值
                     * 
                     */
                    bool SnatVipSetHasBeenSet() const;

                    /**
                     * 获取The region of the outbound endpoint service.
                     * @return Region The region of the outbound endpoint service.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region of the outbound endpoint service.
                     * @param _region The region of the outbound endpoint service.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Specifies the forwarding target IP network access type.
CLB: Specifies that the forwarding IP is the private CLB VIP.
CCN: Specifies forwarding IP through CCN routing.
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Specifies the forwarding target IP address.
                     */
                    std::string m_pip;
                    bool m_pipHasBeenSet;

                    /**
                     * Specifies the forwarding IP port number.
                     */
                    int64_t m_pport;
                    bool m_pportHasBeenSet;

                    /**
                     * Specifies the unique VPC ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Specifies the forwarding target IP proxy IP.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Specifies the forwarding target IP proxy port.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Specifies the forwarding target IP protocol.
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * Specifies the unique subnet ID.
Required if the access type is CCN.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * ccn id
Required if the access type is CCN.
                     */
                    std::string m_accessGatewayId;
                    bool m_accessGatewayIdHasBeenSet;

                    /**
                     * The SNAT CIDR block of the outbound endpoint.
                     */
                    std::string m_snatVipCidr;
                    bool m_snatVipCidrHasBeenSet;

                    /**
                     * The SNAT IP list of the outbound endpoint.
                     */
                    std::string m_snatVipSet;
                    bool m_snatVipSetHasBeenSet;

                    /**
                     * The region of the outbound endpoint service.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTSERVICE_H_
