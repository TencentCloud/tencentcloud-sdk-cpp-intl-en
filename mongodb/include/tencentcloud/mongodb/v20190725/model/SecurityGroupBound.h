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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SECURITYGROUPBOUND_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SECURITYGROUPBOUND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Security group rule
                */
                class SecurityGroupBound : public AbstractModel
                {
                public:
                    SecurityGroupBound();
                    ~SecurityGroupBound() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execution rule. Valid values: `ACCEPT`, `DROP`
                     * @return Action Execution rule. Valid values: `ACCEPT`, `DROP`
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Execution rule. Valid values: `ACCEPT`, `DROP`
                     * @param _action Execution rule. Valid values: `ACCEPT`, `DROP`
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取IP range
                     * @return CidrIp IP range
                     * 
                     */
                    std::string GetCidrIp() const;

                    /**
                     * 设置IP range
                     * @param _cidrIp IP range
                     * 
                     */
                    void SetCidrIp(const std::string& _cidrIp);

                    /**
                     * 判断参数 CidrIp 是否已赋值
                     * @return CidrIp 是否已赋值
                     * 
                     */
                    bool CidrIpHasBeenSet() const;

                    /**
                     * 获取Port range
                     * @return PortRange Port range
                     * 
                     */
                    std::string GetPortRange() const;

                    /**
                     * 设置Port range
                     * @param _portRange Port range
                     * 
                     */
                    void SetPortRange(const std::string& _portRange);

                    /**
                     * 判断参数 PortRange 是否已赋值
                     * @return PortRange 是否已赋值
                     * 
                     */
                    bool PortRangeHasBeenSet() const;

                    /**
                     * 获取Transport layer protocol. Valid values: `tcp`, `udp`, `ALL`
                     * @return IpProtocol Transport layer protocol. Valid values: `tcp`, `udp`, `ALL`
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置Transport layer protocol. Valid values: `tcp`, `udp`, `ALL`
                     * @param _ipProtocol Transport layer protocol. Valid values: `tcp`, `udp`, `ALL`
                     * 
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     * 
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取All the addresses that the security group ID represents
                     * @return Id All the addresses that the security group ID represents
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置All the addresses that the security group ID represents
                     * @param _id All the addresses that the security group ID represents
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取All the addresses that the address group ID represents
                     * @return AddressModule All the addresses that the address group ID represents
                     * 
                     */
                    std::string GetAddressModule() const;

                    /**
                     * 设置All the addresses that the address group ID represents
                     * @param _addressModule All the addresses that the address group ID represents
                     * 
                     */
                    void SetAddressModule(const std::string& _addressModule);

                    /**
                     * 判断参数 AddressModule 是否已赋值
                     * @return AddressModule 是否已赋值
                     * 
                     */
                    bool AddressModuleHasBeenSet() const;

                    /**
                     * 获取All the protocols and ports that the service group ID represents
                     * @return ServiceModule All the protocols and ports that the service group ID represents
                     * 
                     */
                    std::string GetServiceModule() const;

                    /**
                     * 设置All the protocols and ports that the service group ID represents
                     * @param _serviceModule All the protocols and ports that the service group ID represents
                     * 
                     */
                    void SetServiceModule(const std::string& _serviceModule);

                    /**
                     * 判断参数 ServiceModule 是否已赋值
                     * @return ServiceModule 是否已赋值
                     * 
                     */
                    bool ServiceModuleHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Desc Description
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description
                     * @param _desc Description
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * Execution rule. Valid values: `ACCEPT`, `DROP`
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * IP range
                     */
                    std::string m_cidrIp;
                    bool m_cidrIpHasBeenSet;

                    /**
                     * Port range
                     */
                    std::string m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * Transport layer protocol. Valid values: `tcp`, `udp`, `ALL`
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * All the addresses that the security group ID represents
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * All the addresses that the address group ID represents
                     */
                    std::string m_addressModule;
                    bool m_addressModuleHasBeenSet;

                    /**
                     * All the protocols and ports that the service group ID represents
                     */
                    std::string m_serviceModule;
                    bool m_serviceModuleHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SECURITYGROUPBOUND_H_
