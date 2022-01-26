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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBINSTANCENETINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBINSTANCENETINFO_H_

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
                * PostgreSQL for Serverless instance network description
                */
                class ServerlessDBInstanceNetInfo : public AbstractModel
                {
                public:
                    ServerlessDBInstanceNetInfo();
                    ~ServerlessDBInstanceNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Address Address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Address Address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取IP address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Ip IP address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Ip IP address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Port Port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Port Port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Status Status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Status Status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Network type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return NetType Network type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param NetType Network type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     */
                    bool NetTypeHasBeenSet() const;

                private:

                    /**
                     * Address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * IP address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Network type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBINSTANCENETINFO_H_
