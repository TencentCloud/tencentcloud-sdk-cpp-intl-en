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
                     * 获取Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceGroupType Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceGroupType() const;

                    /**
                     * 设置Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceGroupType Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceGroupType(const std::string& _instanceGroupType);

                    /**
                     * 判断参数 InstanceGroupType 是否已赋值
                     * @return InstanceGroupType 是否已赋值
                     */
                    bool InstanceGroupTypeHasBeenSet() const;

                    /**
                     * 获取Instance group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceGroupId Instance group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置Instance group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceGroupId Instance group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceGroupId(const std::string& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param VpcId VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SubnetId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetType Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetNetType() const;

                    /**
                     * 设置Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NetType Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNetType(const int64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取VPC IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vip VPC IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVip() const;

                    /**
                     * 设置VPC IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Vip VPC IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取VPC port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vport VPC port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置VPC port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Vport VPC port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Public network domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WanDomain Public network domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置Public network domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WanDomain Public network domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取
                     * @return WanIP 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置
                     * @param WanIP 
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取Public network port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WanPort Public network port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置Public network port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WanPort Public network port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取Public network status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WanStatus Public network status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置Public network status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WanStatus Public network status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     */
                    bool WanStatusHasBeenSet() const;

                private:

                    /**
                     * Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceGroupType;
                    bool m_instanceGroupTypeHasBeenSet;

                    /**
                     * Instance group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Network type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * VPC IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * VPC port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Public network domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * Public network port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * Public network status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCENETINFO_H_
