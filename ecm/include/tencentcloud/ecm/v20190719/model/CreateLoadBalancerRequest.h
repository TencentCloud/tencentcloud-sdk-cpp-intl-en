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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/LoadBalancerInternetAccessible.h>
#include <tencentcloud/ecm/v20190719/model/TagInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateLoadBalancer request structure.
                */
                class CreateLoadBalancerRequest : public AbstractModel
                {
                public:
                    CreateLoadBalancerRequest();
                    ~CreateLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM region, such as `ap-xian-ecm`.
                     * @return EcmRegion ECM region, such as `ap-xian-ecm`.
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region, such as `ap-xian-ecm`.
                     * @param _ecmRegion ECM region, such as `ap-xian-ecm`.
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取Network type of the CLB instance. Currently, you can pass in only `OPEN`, which indicates public network.
                     * @return LoadBalancerType Network type of the CLB instance. Currently, you can pass in only `OPEN`, which indicates public network.
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置Network type of the CLB instance. Currently, you can pass in only `OPEN`, which indicates public network.
                     * @param _loadBalancerType Network type of the CLB instance. Currently, you can pass in only `OPEN`, which indicates public network.
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取CMCC: China Mobile; CTCC: China Telecom; CUCC: China Unicom.
                     * @return VipIsp CMCC: China Mobile; CTCC: China Telecom; CUCC: China Unicom.
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置CMCC: China Mobile; CTCC: China Telecom; CUCC: China Unicom.
                     * @param _vipIsp CMCC: China Mobile; CTCC: China Telecom; CUCC: China Unicom.
                     * 
                     */
                    void SetVipIsp(const std::string& _vipIsp);

                    /**
                     * 判断参数 VipIsp 是否已赋值
                     * @return VipIsp 是否已赋值
                     * 
                     */
                    bool VipIspHasBeenSet() const;

                    /**
                     * 获取CLB instance name, which will take effect only when one instance is created. It can contain 1–50 letters, digits, hyphens, and underscores.
Note: if the name of the new CLB instance already exists, a default name will be generated automatically.
                     * @return LoadBalancerName CLB instance name, which will take effect only when one instance is created. It can contain 1–50 letters, digits, hyphens, and underscores.
Note: if the name of the new CLB instance already exists, a default name will be generated automatically.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB instance name, which will take effect only when one instance is created. It can contain 1–50 letters, digits, hyphens, and underscores.
Note: if the name of the new CLB instance already exists, a default name will be generated automatically.
                     * @param _loadBalancerName CLB instance name, which will take effect only when one instance is created. It can contain 1–50 letters, digits, hyphens, and underscores.
Note: if the name of the new CLB instance already exists, a default name will be generated automatically.
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取Network ID of the target device on the CLB backend, such as `vpc-12345678`.
                     * @return VpcId Network ID of the target device on the CLB backend, such as `vpc-12345678`.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Network ID of the target device on the CLB backend, such as `vpc-12345678`.
                     * @param _vpcId Network ID of the target device on the CLB backend, such as `vpc-12345678`.
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
                     * 获取Number of CLB instances to be created. Default value: 1.
                     * @return Number Number of CLB instances to be created. Default value: 1.
                     * 
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置Number of CLB instances to be created. Default value: 1.
                     * @param _number Number of CLB instances to be created. Default value: 1.
                     * 
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取CLB information such as bandwidth limit.
                     * @return InternetAccessible CLB information such as bandwidth limit.
                     * 
                     */
                    LoadBalancerInternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置CLB information such as bandwidth limit.
                     * @param _internetAccessible CLB information such as bandwidth limit.
                     * 
                     */
                    void SetInternetAccessible(const LoadBalancerInternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取Tags.
                     * @return Tags Tags.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tags.
                     * @param _tags Tags.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Security groups.
                     * @return SecurityGroups Security groups.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置Security groups.
                     * @param _securityGroups Security groups.
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                    /**
                     * 获取IP version. Valid values: `IPV4` (default), `IPv6FullChain` (IPv6 version). This parameter is only for public network CLB instances.
                     * @return AddressIPVersion IP version. Valid values: `IPV4` (default), `IPv6FullChain` (IPv6 version). This parameter is only for public network CLB instances.
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置IP version. Valid values: `IPV4` (default), `IPv6FullChain` (IPv6 version). This parameter is only for public network CLB instances.
                     * @param _addressIPVersion IP version. Valid values: `IPV4` (default), `IPv6FullChain` (IPv6 version). This parameter is only for public network CLB instances.
                     * 
                     */
                    void SetAddressIPVersion(const std::string& _addressIPVersion);

                    /**
                     * 判断参数 AddressIPVersion 是否已赋值
                     * @return AddressIPVersion 是否已赋值
                     * 
                     */
                    bool AddressIPVersionHasBeenSet() const;

                    /**
                     * 获取Subnet ID. This parameter is required for IPv6 CLB instances.
                     * @return SubnetId Subnet ID. This parameter is required for IPv6 CLB instances.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. This parameter is required for IPv6 CLB instances.
                     * @param _subnetId Subnet ID. This parameter is required for IPv6 CLB instances.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * ECM region, such as `ap-xian-ecm`.
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * Network type of the CLB instance. Currently, you can pass in only `OPEN`, which indicates public network.
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * CMCC: China Mobile; CTCC: China Telecom; CUCC: China Unicom.
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                    /**
                     * CLB instance name, which will take effect only when one instance is created. It can contain 1–50 letters, digits, hyphens, and underscores.
Note: if the name of the new CLB instance already exists, a default name will be generated automatically.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Network ID of the target device on the CLB backend, such as `vpc-12345678`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Number of CLB instances to be created. Default value: 1.
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * CLB information such as bandwidth limit.
                     */
                    LoadBalancerInternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Tags.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Security groups.
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * IP version. Valid values: `IPV4` (default), `IPv6FullChain` (IPv6 version). This parameter is only for public network CLB instances.
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * Subnet ID. This parameter is required for IPv6 CLB instances.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATELOADBALANCERREQUEST_H_
