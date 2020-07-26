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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INBOUND_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INBOUND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Security group inbound rule
                */
                class Inbound : public AbstractModel
                {
                public:
                    Inbound();
                    ~Inbound() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy. Valid values: ACCEPT, DROP.
                     * @return Action Policy. Valid values: ACCEPT, DROP.
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Policy. Valid values: ACCEPT, DROP.
                     * @param Action Policy. Valid values: ACCEPT, DROP.
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取All the addresses that the address group ID represents.
                     * @return AddressModule All the addresses that the address group ID represents.
                     */
                    std::string GetAddressModule() const;

                    /**
                     * 设置All the addresses that the address group ID represents.
                     * @param AddressModule All the addresses that the address group ID represents.
                     */
                    void SetAddressModule(const std::string& _addressModule);

                    /**
                     * 判断参数 AddressModule 是否已赋值
                     * @return AddressModule 是否已赋值
                     */
                    bool AddressModuleHasBeenSet() const;

                    /**
                     * 获取Source IP or IP address range, such as 192.168.0.0/16.
                     * @return CidrIp Source IP or IP address range, such as 192.168.0.0/16.
                     */
                    std::string GetCidrIp() const;

                    /**
                     * 设置Source IP or IP address range, such as 192.168.0.0/16.
                     * @param CidrIp Source IP or IP address range, such as 192.168.0.0/16.
                     */
                    void SetCidrIp(const std::string& _cidrIp);

                    /**
                     * 判断参数 CidrIp 是否已赋值
                     * @return CidrIp 是否已赋值
                     */
                    bool CidrIpHasBeenSet() const;

                    /**
                     * 获取Description.
                     * @return Desc Description.
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description.
                     * @param Desc Description.
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Network protocol, such as UDP and TCP, etc.
                     * @return IpProtocol Network protocol, such as UDP and TCP, etc.
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置Network protocol, such as UDP and TCP, etc.
                     * @param IpProtocol Network protocol, such as UDP and TCP, etc.
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取Port.
                     * @return PortRange Port.
                     */
                    std::string GetPortRange() const;

                    /**
                     * 设置Port.
                     * @param PortRange Port.
                     */
                    void SetPortRange(const std::string& _portRange);

                    /**
                     * 判断参数 PortRange 是否已赋值
                     * @return PortRange 是否已赋值
                     */
                    bool PortRangeHasBeenSet() const;

                    /**
                     * 获取All the protocols and ports that the service group ID represents.
                     * @return ServiceModule All the protocols and ports that the service group ID represents.
                     */
                    std::string GetServiceModule() const;

                    /**
                     * 设置All the protocols and ports that the service group ID represents.
                     * @param ServiceModule All the protocols and ports that the service group ID represents.
                     */
                    void SetServiceModule(const std::string& _serviceModule);

                    /**
                     * 判断参数 ServiceModule 是否已赋值
                     * @return ServiceModule 是否已赋值
                     */
                    bool ServiceModuleHasBeenSet() const;

                    /**
                     * 获取All the addresses that the security group ID represents.
                     * @return Id All the addresses that the security group ID represents.
                     */
                    std::string GetId() const;

                    /**
                     * 设置All the addresses that the security group ID represents.
                     * @param Id All the addresses that the security group ID represents.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Policy. Valid values: ACCEPT, DROP.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * All the addresses that the address group ID represents.
                     */
                    std::string m_addressModule;
                    bool m_addressModuleHasBeenSet;

                    /**
                     * Source IP or IP address range, such as 192.168.0.0/16.
                     */
                    std::string m_cidrIp;
                    bool m_cidrIpHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Network protocol, such as UDP and TCP, etc.
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * Port.
                     */
                    std::string m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * All the protocols and ports that the service group ID represents.
                     */
                    std::string m_serviceModule;
                    bool m_serviceModuleHasBeenSet;

                    /**
                     * All the addresses that the security group ID represents.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INBOUND_H_
