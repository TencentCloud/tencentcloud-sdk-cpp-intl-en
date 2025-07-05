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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLRULEINFO_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Firewall rule details.
                */
                class FirewallRuleInfo : public AbstractModel
                {
                public:
                    FirewallRuleInfo();
                    ~FirewallRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application type. Valid values: custom, HTTP (80), HTTPS (443), Linux login (22), Windows login (3389), MySQL (3306), SQL Server (1433), all TCP ports, all UDP ports, Ping-ICMP, ALL.
                     * @return AppType Application type. Valid values: custom, HTTP (80), HTTPS (443), Linux login (22), Windows login (3389), MySQL (3306), SQL Server (1433), all TCP ports, all UDP ports, Ping-ICMP, ALL.
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置Application type. Valid values: custom, HTTP (80), HTTPS (443), Linux login (22), Windows login (3389), MySQL (3306), SQL Server (1433), all TCP ports, all UDP ports, Ping-ICMP, ALL.
                     * @param _appType Application type. Valid values: custom, HTTP (80), HTTPS (443), Linux login (22), Windows login (3389), MySQL (3306), SQL Server (1433), all TCP ports, all UDP ports, Ping-ICMP, ALL.
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取Protocol. Valid values: TCP, UDP, ICMP, ALL.
                     * @return Protocol Protocol. Valid values: TCP, UDP, ICMP, ALL.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Valid values: TCP, UDP, ICMP, ALL.
                     * @param _protocol Protocol. Valid values: TCP, UDP, ICMP, ALL.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Port. Valid values: ALL, one single port, multiple ports separated by commas, or port range indicated by a minus sign
                     * @return Port Port. Valid values: ALL, one single port, multiple ports separated by commas, or port range indicated by a minus sign
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port. Valid values: ALL, one single port, multiple ports separated by commas, or port range indicated by a minus sign
                     * @param _port Port. Valid values: ALL, one single port, multiple ports separated by commas, or port range indicated by a minus sign
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取IP range or IP (mutually exclusive). Default value: 0.0.0.0/0, which indicates all sources.
                     * @return CidrBlock IP range or IP (mutually exclusive). Default value: 0.0.0.0/0, which indicates all sources.
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置IP range or IP (mutually exclusive). Default value: 0.0.0.0/0, which indicates all sources.
                     * @param _cidrBlock IP range or IP (mutually exclusive). Default value: 0.0.0.0/0, which indicates all sources.
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取Valid values: ACCEPT, DROP. Default value: ACCEPT.
                     * @return Action Valid values: ACCEPT, DROP. Default value: ACCEPT.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Valid values: ACCEPT, DROP. Default value: ACCEPT.
                     * @param _action Valid values: ACCEPT, DROP. Default value: ACCEPT.
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
                     * 获取Firewall rule description.
                     * @return FirewallRuleDescription Firewall rule description.
                     * 
                     */
                    std::string GetFirewallRuleDescription() const;

                    /**
                     * 设置Firewall rule description.
                     * @param _firewallRuleDescription Firewall rule description.
                     * 
                     */
                    void SetFirewallRuleDescription(const std::string& _firewallRuleDescription);

                    /**
                     * 判断参数 FirewallRuleDescription 是否已赋值
                     * @return FirewallRuleDescription 是否已赋值
                     * 
                     */
                    bool FirewallRuleDescriptionHasBeenSet() const;

                private:

                    /**
                     * Application type. Valid values: custom, HTTP (80), HTTPS (443), Linux login (22), Windows login (3389), MySQL (3306), SQL Server (1433), all TCP ports, all UDP ports, Ping-ICMP, ALL.
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * Protocol. Valid values: TCP, UDP, ICMP, ALL.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port. Valid values: ALL, one single port, multiple ports separated by commas, or port range indicated by a minus sign
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * IP range or IP (mutually exclusive). Default value: 0.0.0.0/0, which indicates all sources.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * Valid values: ACCEPT, DROP. Default value: ACCEPT.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Firewall rule description.
                     */
                    std::string m_firewallRuleDescription;
                    bool m_firewallRuleDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLRULEINFO_H_
