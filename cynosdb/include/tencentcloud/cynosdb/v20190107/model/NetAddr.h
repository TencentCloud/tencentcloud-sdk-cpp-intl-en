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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NETADDR_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NETADDR_H_

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
                * Network information
                */
                class NetAddr : public AbstractModel
                {
                public:
                    NetAddr();
                    ~NetAddr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private IP address
                     * @return Vip Private IP address
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Private IP address
                     * @param _vip Private IP address
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
                     * 获取Specifies the private network port number.
                     * @return Vport Specifies the private network port number.
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Specifies the private network port number.
                     * @param _vport Specifies the private network port number.
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
                     * 获取Specifies the public network port number.
                     * @return WanPort Specifies the public network port number.
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置Specifies the public network port number.
                     * @param _wanPort Specifies the public network port number.
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
                     * 获取Network type (ro - read-only, rw/ha - read-write).
                     * @return NetType Network type (ro - read-only, rw/ha - read-write).
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type (ro - read-only, rw/ha - read-write).
                     * @param _netType Network type (ro - read-only, rw/ha - read-write).
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the subnet ID.
                     * @return UniqSubnetId Specifies the subnet ID.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Specifies the subnet ID.
                     * @param _uniqSubnetId Specifies the subnet ID.
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Specifies the virtual private cloud ID.
                     * @return UniqVpcId Specifies the virtual private cloud ID.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Specifies the virtual private cloud ID.
                     * @param _uniqVpcId Specifies the virtual private cloud ID.
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Description information
                     * @return Description Description information
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description information
                     * @param _description Description information
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

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
                     * 获取Specifies the public network status.
                     * @return WanStatus Specifies the public network status.
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置Specifies the public network status.
                     * @param _wanStatus Specifies the public network status.
                     * 
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

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

                private:

                    /**
                     * Private IP address
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Specifies the private network port number.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Specifies the public network domain name.
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * Specifies the public network port number.
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * Network type (ro - read-only, rw/ha - read-write).
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Specifies the subnet ID.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Specifies the virtual private cloud ID.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Description information
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * Specifies the public network status.
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * Instance group ID
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NETADDR_H_
