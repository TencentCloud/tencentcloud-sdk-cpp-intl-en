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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ZONEINSTANCECOUNTISP_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ZONEINSTANCECOUNTISP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Combination of the instance AZ, number of instances to be created, and ISP;
                */
                class ZoneInstanceCountISP : public AbstractModel
                {
                public:
                    ZoneInstanceCountISP();
                    ~ZoneInstanceCountISP() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The AZ in which to create an instance.
                     * @return Zone The AZ in which to create an instance.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The AZ in which to create an instance.
                     * @param _zone The AZ in which to create an instance.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Number of instances to be created in the current AZ.
                     * @return InstanceCount Number of instances to be created in the current AZ.
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances to be created in the current AZ.
                     * @param _instanceCount Number of instances to be created in the current AZ.
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取ISP name. Valid values:
CTCC: China Telecom
CUCC: China Unicom
CMCC: China Mobile
If there are multiple ISP names, you need to separate them by semicolons, such as `CMCC;CUCC;CTCC`. To use multiple ISPs, contact Tencent Cloud customer service for assistance.
                     * @return ISP ISP name. Valid values:
CTCC: China Telecom
CUCC: China Unicom
CMCC: China Mobile
If there are multiple ISP names, you need to separate them by semicolons, such as `CMCC;CUCC;CTCC`. To use multiple ISPs, contact Tencent Cloud customer service for assistance.
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置ISP name. Valid values:
CTCC: China Telecom
CUCC: China Unicom
CMCC: China Mobile
If there are multiple ISP names, you need to separate them by semicolons, such as `CMCC;CUCC;CTCC`. To use multiple ISPs, contact Tencent Cloud customer service for assistance.
                     * @param _iSP ISP name. Valid values:
CTCC: China Telecom
CUCC: China Unicom
CMCC: China Mobile
If there are multiple ISP names, you need to separate them by semicolons, such as `CMCC;CUCC;CTCC`. To use multiple ISPs, contact Tencent Cloud customer service for assistance.
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取ID of the specified VPC. You must specify both `SubnetId` and `VpcId` or neither
                     * @return VpcId ID of the specified VPC. You must specify both `SubnetId` and `VpcId` or neither
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the specified VPC. You must specify both `SubnetId` and `VpcId` or neither
                     * @param _vpcId ID of the specified VPC. You must specify both `SubnetId` and `VpcId` or neither
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
                     * 获取ID of the specified subnet. You must specify both `SubnetId` and `VpcId` or neither
                     * @return SubnetId ID of the specified subnet. You must specify both `SubnetId` and `VpcId` or neither
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置ID of the specified subnet. You must specify both `SubnetId` and `VpcId` or neither
                     * @param _subnetId ID of the specified subnet. You must specify both `SubnetId` and `VpcId` or neither
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
                     * 获取Private IP of the specified primary ENI. You must specify both `SubnetId` and `VpcId` at the same time. The number of IP addresses must be the same as `InstanceCount`. You can get the private IP of the secondary ENI of a multi-IP server through DHCP in the same subnet.
                     * @return PrivateIpAddresses Private IP of the specified primary ENI. You must specify both `SubnetId` and `VpcId` at the same time. The number of IP addresses must be the same as `InstanceCount`. You can get the private IP of the secondary ENI of a multi-IP server through DHCP in the same subnet.
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置Private IP of the specified primary ENI. You must specify both `SubnetId` and `VpcId` at the same time. The number of IP addresses must be the same as `InstanceCount`. You can get the private IP of the secondary ENI of a multi-IP server through DHCP in the same subnet.
                     * @param _privateIpAddresses Private IP of the specified primary ENI. You must specify both `SubnetId` and `VpcId` at the same time. The number of IP addresses must be the same as `InstanceCount`. You can get the private IP of the secondary ENI of a multi-IP server through DHCP in the same subnet.
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取Number of the IPv6 addresses to be randomly generated for the ENI, which cannot be greater than 1.
                     * @return Ipv6AddressCount Number of the IPv6 addresses to be randomly generated for the ENI, which cannot be greater than 1.
                     * 
                     */
                    int64_t GetIpv6AddressCount() const;

                    /**
                     * 设置Number of the IPv6 addresses to be randomly generated for the ENI, which cannot be greater than 1.
                     * @param _ipv6AddressCount Number of the IPv6 addresses to be randomly generated for the ENI, which cannot be greater than 1.
                     * 
                     */
                    void SetIpv6AddressCount(const int64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     * 
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                private:

                    /**
                     * The AZ in which to create an instance.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Number of instances to be created in the current AZ.
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * ISP name. Valid values:
CTCC: China Telecom
CUCC: China Unicom
CMCC: China Mobile
If there are multiple ISP names, you need to separate them by semicolons, such as `CMCC;CUCC;CTCC`. To use multiple ISPs, contact Tencent Cloud customer service for assistance.
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * ID of the specified VPC. You must specify both `SubnetId` and `VpcId` or neither
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ID of the specified subnet. You must specify both `SubnetId` and `VpcId` or neither
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Private IP of the specified primary ENI. You must specify both `SubnetId` and `VpcId` at the same time. The number of IP addresses must be the same as `InstanceCount`. You can get the private IP of the secondary ENI of a multi-IP server through DHCP in the same subnet.
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * Number of the IPv6 addresses to be randomly generated for the ENI, which cannot be greater than 1.
                     */
                    int64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ZONEINSTANCECOUNTISP_H_
