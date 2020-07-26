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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCENETINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCENETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Instance network connection information.
                */
                class DBInstanceNetInfo : public AbstractModel
                {
                public:
                    DBInstanceNetInfo();
                    ~DBInstanceNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DNS domain name
                     * @return Address DNS domain name
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置DNS domain name
                     * @param Address DNS domain name
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取IP address
                     * @return Ip IP address
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP address
                     * @param Ip IP address
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Connection port address
                     * @return Port Connection port address
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Connection port address
                     * @param Port Connection port address
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Network type. Valid values: inner (private address of classic network), private (private address of VPC), public (public address of classic network/VPC)
                     * @return NetType Network type. Valid values: inner (private address of classic network), private (private address of VPC), public (public address of classic network/VPC)
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type. Valid values: inner (private address of classic network), private (private address of VPC), public (public address of classic network/VPC)
                     * @param NetType Network type. Valid values: inner (private address of classic network), private (private address of VPC), public (public address of classic network/VPC)
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取Network connection status
                     * @return Status Network connection status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Network connection status
                     * @param Status Network connection status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * DNS domain name
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * IP address
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Connection port address
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Network type. Valid values: inner (private address of classic network), private (private address of VPC), public (public address of classic network/VPC)
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Network connection status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCENETINFO_H_
