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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SECURITYGROUPPOLICY_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SECURITYGROUPPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Security Group Policy
                */
                class SecurityGroupPolicy : public AbstractModel
                {
                public:
                    SecurityGroupPolicy();
                    ~SecurityGroupPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy, ACCEPT or DROP
                     * @return Action Policy, ACCEPT or DROP
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Policy, ACCEPT or DROP
                     * @param _action Policy, ACCEPT or DROP
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
                     * 获取Destination IP or IP range, for example 172.16.0.0/12
                     * @return CidrIp Destination IP or IP range, for example 172.16.0.0/12
                     * 
                     */
                    std::string GetCidrIp() const;

                    /**
                     * 设置Destination IP or IP range, for example 172.16.0.0/12
                     * @param _cidrIp Destination IP or IP range, for example 172.16.0.0/12
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
                     * 获取port or port range
                     * @return PortRange port or port range
                     * 
                     */
                    std::string GetPortRange() const;

                    /**
                     * 设置port or port range
                     * @param _portRange port or port range
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
                     * 获取Network protocol supports UDP, TCP, etc.
                     * @return IpProtocol Network protocol supports UDP, TCP, etc.
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置Network protocol supports UDP, TCP, etc.
                     * @param _ipProtocol Network protocol supports UDP, TCP, etc.
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
                     * 获取Rule direction, OUTPUT - Outbound Rules, INPUT - Inbound Rules
                     * @return Dir Rule direction, OUTPUT - Outbound Rules, INPUT - Inbound Rules
                     * 
                     */
                    std::string GetDir() const;

                    /**
                     * 设置Rule direction, OUTPUT - Outbound Rules, INPUT - Inbound Rules
                     * @param _dir Rule direction, OUTPUT - Outbound Rules, INPUT - Inbound Rules
                     * 
                     */
                    void SetDir(const std::string& _dir);

                    /**
                     * 判断参数 Dir 是否已赋值
                     * @return Dir 是否已赋值
                     * 
                     */
                    bool DirHasBeenSet() const;

                private:

                    /**
                     * Policy, ACCEPT or DROP
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Destination IP or IP range, for example 172.16.0.0/12
                     */
                    std::string m_cidrIp;
                    bool m_cidrIpHasBeenSet;

                    /**
                     * port or port range
                     */
                    std::string m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * Network protocol supports UDP, TCP, etc.
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * Rule direction, OUTPUT - Outbound Rules, INPUT - Inbound Rules
                     */
                    std::string m_dir;
                    bool m_dirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SECURITYGROUPPOLICY_H_
