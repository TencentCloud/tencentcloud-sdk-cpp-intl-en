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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_VPCDNSINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_VPCDNSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * VPC DNS status of NAT firewall
                */
                class VpcDnsInfo : public AbstractModel
                {
                public:
                    VpcDnsInfo();
                    ~VpcDnsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
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
                     * 获取VPC name
                     * @return VpcName VPC name
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name
                     * @param _vpcName VPC name
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取NAT firewall mode. 0: Create new; 1: Use existing
                     * @return FwMode NAT firewall mode. 0: Create new; 1: Use existing
                     * 
                     */
                    int64_t GetFwMode() const;

                    /**
                     * 设置NAT firewall mode. 0: Create new; 1: Use existing
                     * @param _fwMode NAT firewall mode. 0: Create new; 1: Use existing
                     * 
                     */
                    void SetFwMode(const int64_t& _fwMode);

                    /**
                     * 判断参数 FwMode 是否已赋值
                     * @return FwMode 是否已赋值
                     * 
                     */
                    bool FwModeHasBeenSet() const;

                    /**
                     * 获取VPC IPv4 CIDR block (Classless Inter-Domain Routing)
                     * @return VpcIpv4Cidr VPC IPv4 CIDR block (Classless Inter-Domain Routing)
                     * 
                     */
                    std::string GetVpcIpv4Cidr() const;

                    /**
                     * 设置VPC IPv4 CIDR block (Classless Inter-Domain Routing)
                     * @param _vpcIpv4Cidr VPC IPv4 CIDR block (Classless Inter-Domain Routing)
                     * 
                     */
                    void SetVpcIpv4Cidr(const std::string& _vpcIpv4Cidr);

                    /**
                     * 判断参数 VpcIpv4Cidr 是否已赋值
                     * @return VpcIpv4Cidr 是否已赋值
                     * 
                     */
                    bool VpcIpv4CidrHasBeenSet() const;

                    /**
                     * 获取Public EIP, which is the firewall DNS resolution address
                     * @return DNSEip Public EIP, which is the firewall DNS resolution address
                     * 
                     */
                    std::string GetDNSEip() const;

                    /**
                     * 设置Public EIP, which is the firewall DNS resolution address
                     * @param _dNSEip Public EIP, which is the firewall DNS resolution address
                     * 
                     */
                    void SetDNSEip(const std::string& _dNSEip);

                    /**
                     * 判断参数 DNSEip 是否已赋值
                     * @return DNSEip 是否已赋值
                     * 
                     */
                    bool DNSEipHasBeenSet() const;

                    /**
                     * 获取NAT gateway ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @return NatInsId NAT gateway ID
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetNatInsId() const;

                    /**
                     * 设置NAT gateway ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _natInsId NAT gateway ID
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetNatInsId(const std::string& _natInsId);

                    /**
                     * 判断参数 NatInsId 是否已赋值
                     * @return NatInsId 是否已赋值
                     * 
                     */
                    bool NatInsIdHasBeenSet() const;

                    /**
                     * 获取NAT gateway name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return NatInsName NAT gateway name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetNatInsName() const;

                    /**
                     * 设置NAT gateway name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _natInsName NAT gateway name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetNatInsName(const std::string& _natInsName);

                    /**
                     * 判断参数 NatInsName 是否已赋值
                     * @return NatInsName 是否已赋值
                     * 
                     */
                    bool NatInsNameHasBeenSet() const;

                    /**
                     * 获取0: off; 1: on
                     * @return SwitchStatus 0: off; 1: on
                     * 
                     */
                    int64_t GetSwitchStatus() const;

                    /**
                     * 设置0: off; 1: on
                     * @param _switchStatus 0: off; 1: on
                     * 
                     */
                    void SetSwitchStatus(const int64_t& _switchStatus);

                    /**
                     * 判断参数 SwitchStatus 是否已赋值
                     * @return SwitchStatus 是否已赋值
                     * 
                     */
                    bool SwitchStatusHasBeenSet() const;

                private:

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * NAT firewall mode. 0: Create new; 1: Use existing
                     */
                    int64_t m_fwMode;
                    bool m_fwModeHasBeenSet;

                    /**
                     * VPC IPv4 CIDR block (Classless Inter-Domain Routing)
                     */
                    std::string m_vpcIpv4Cidr;
                    bool m_vpcIpv4CidrHasBeenSet;

                    /**
                     * Public EIP, which is the firewall DNS resolution address
                     */
                    std::string m_dNSEip;
                    bool m_dNSEipHasBeenSet;

                    /**
                     * NAT gateway ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_natInsId;
                    bool m_natInsIdHasBeenSet;

                    /**
                     * NAT gateway name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_natInsName;
                    bool m_natInsNameHasBeenSet;

                    /**
                     * 0: off; 1: on
                     */
                    int64_t m_switchStatus;
                    bool m_switchStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCDNSINFO_H_
