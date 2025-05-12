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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCENETINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCENETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Instance network information
                */
                class InstanceNetInfo : public AbstractModel
                {
                public:
                    InstanceNetInfo();
                    ~InstanceNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network type.
                     * @return InstanceGroupType Network type.
                     * 
                     */
                    std::string GetInstanceGroupType() const;

                    /**
                     * 设置Network type.
                     * @param _instanceGroupType Network type.
                     * 
                     */
                    void SetInstanceGroupType(const std::string& _instanceGroupType);

                    /**
                     * 判断参数 InstanceGroupType 是否已赋值
                     * @return InstanceGroupType 是否已赋值
                     * 
                     */
                    bool InstanceGroupTypeHasBeenSet() const;

                    /**
                     * 获取Instance group ID
                     * @return InstanceGroupId Instance group ID
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置Instance group ID
                     * @param _instanceGroupId Instance group ID
                     * 
                     */
                    void SetInstanceGroupId(const std::string& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取Specifies the virtual private cloud ID.
                     * @return VpcId Specifies the virtual private cloud ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Specifies the virtual private cloud ID.
                     * @param _vpcId Specifies the virtual private cloud ID.
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
                     * @return SubnetId Specifies the subnet ID.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Specifies the subnet ID.
                     * @param _subnetId Specifies the subnet ID.
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
                     * 获取Network type. valid values: 0 (basic network), 1 (vpc network), 2 (blackstone network).
                     * @return NetType Network type. valid values: 0 (basic network), 1 (vpc network), 2 (blackstone network).
                     * 
                     */
                    int64_t GetNetType() const;

                    /**
                     * 设置Network type. valid values: 0 (basic network), 1 (vpc network), 2 (blackstone network).
                     * @param _netType Network type. valid values: 0 (basic network), 1 (vpc network), 2 (blackstone network).
                     * 
                     */
                    void SetNetType(const int64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取VPC IP.
                     * @return Vip VPC IP.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置VPC IP.
                     * @param _vip VPC IP.
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
                     * 获取VPC port.
                     * @return Vport VPC port.
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置VPC port.
                     * @param _vport VPC port.
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
                     * 获取Specifies the public network domain name.
                     * @return WanDomain Specifies the public network domain name.
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置Specifies the public network domain name.
                     * @param _wanDomain Specifies the public network domain name.
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取Public IP address
                     * @return WanIP Public IP address
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置Public IP address
                     * @param _wanIP Public IP address
                     * 
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     * 
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取Public network port.
                     * @return WanPort Public network port.
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置Public network port.
                     * @param _wanPort Public network port.
                     * 
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取Public network enabled status.
                     * @return WanStatus Public network enabled status.
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置Public network enabled status.
                     * @param _wanStatus Public network enabled status.
                     * 
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                private:

                    /**
                     * Network type.
                     */
                    std::string m_instanceGroupType;
                    bool m_instanceGroupTypeHasBeenSet;

                    /**
                     * Instance group ID
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * Specifies the virtual private cloud ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Specifies the subnet ID.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Network type. valid values: 0 (basic network), 1 (vpc network), 2 (blackstone network).
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * VPC IP.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * VPC port.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Specifies the public network domain name.
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * Public network port.
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * Public network enabled status.
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCENETINFO_H_
