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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Details of Layer 4 proxy forwarding rules.
                */
                class L4ProxyRule : public AbstractModel
                {
                public:
                    L4ProxyRule();
                    ~L4ProxyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forwarding rule ID.
Note: Do not fill in this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it must be filled in when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules.
                     * @return RuleId Forwarding rule ID.
Note: Do not fill in this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it must be filled in when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Forwarding rule ID.
Note: Do not fill in this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it must be filled in when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules.
                     * @param _ruleId Forwarding rule ID.
Note: Do not fill in this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it must be filled in when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules.
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Forwarding protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @return Protocol Forwarding protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Forwarding protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @param _protocol Forwarding protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
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
                     * 获取Forwarding port, which can be set as follows:
<li>A single port, such as 80;</li>
<li>A range of ports, such as 81-85, representing ports 81, 82, 83, 84, 85.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @return PortRange Forwarding port, which can be set as follows:
<li>A single port, such as 80;</li>
<li>A range of ports, such as 81-85, representing ports 81, 82, 83, 84, 85.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    std::vector<std::string> GetPortRange() const;

                    /**
                     * 设置Forwarding port, which can be set as follows:
<li>A single port, such as 80;</li>
<li>A range of ports, such as 81-85, representing ports 81, 82, 83, 84, 85.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @param _portRange Forwarding port, which can be set as follows:
<li>A single port, such as 80;</li>
<li>A range of ports, such as 81-85, representing ports 81, 82, 83, 84, 85.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    void SetPortRange(const std::vector<std::string>& _portRange);

                    /**
                     * 判断参数 PortRange 是否已赋值
                     * @return PortRange 是否已赋值
                     * 
                     */
                    bool PortRangeHasBeenSet() const;

                    /**
                     * 获取Origin server type. Valid values:
<li>IP_DOMAIN: IP/Domain name origin server;</li>
<li>ORIGIN_GROUP: Origin server group;</li>
<li>LB: Cloud Load Balancer, currently only open to the allowlist.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @return OriginType Origin server type. Valid values:
<li>IP_DOMAIN: IP/Domain name origin server;</li>
<li>ORIGIN_GROUP: Origin server group;</li>
<li>LB: Cloud Load Balancer, currently only open to the allowlist.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Origin server type. Valid values:
<li>IP_DOMAIN: IP/Domain name origin server;</li>
<li>ORIGIN_GROUP: Origin server group;</li>
<li>LB: Cloud Load Balancer, currently only open to the allowlist.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @param _originType Origin server type. Valid values:
<li>IP_DOMAIN: IP/Domain name origin server;</li>
<li>ORIGIN_GROUP: Origin server group;</li>
<li>LB: Cloud Load Balancer, currently only open to the allowlist.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取Origin server address.
<li>When OriginType is set to IP_DOMAIN, enter the IP address or domain name, such as 8.8.8.8 or test.com;</li>
<li>When OriginType is set to ORIGIN_GROUP, enter the origin server group ID, such as og-537y24vf5b41;</li>
<li>When OriginType is set to LB, enter the Cloud Load Balancer instance ID, such as lb-2qwk30xf7s9g.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @return OriginValue Origin server address.
<li>When OriginType is set to IP_DOMAIN, enter the IP address or domain name, such as 8.8.8.8 or test.com;</li>
<li>When OriginType is set to ORIGIN_GROUP, enter the origin server group ID, such as og-537y24vf5b41;</li>
<li>When OriginType is set to LB, enter the Cloud Load Balancer instance ID, such as lb-2qwk30xf7s9g.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    std::vector<std::string> GetOriginValue() const;

                    /**
                     * 设置Origin server address.
<li>When OriginType is set to IP_DOMAIN, enter the IP address or domain name, such as 8.8.8.8 or test.com;</li>
<li>When OriginType is set to ORIGIN_GROUP, enter the origin server group ID, such as og-537y24vf5b41;</li>
<li>When OriginType is set to LB, enter the Cloud Load Balancer instance ID, such as lb-2qwk30xf7s9g.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @param _originValue Origin server address.
<li>When OriginType is set to IP_DOMAIN, enter the IP address or domain name, such as 8.8.8.8 or test.com;</li>
<li>When OriginType is set to ORIGIN_GROUP, enter the origin server group ID, such as og-537y24vf5b41;</li>
<li>When OriginType is set to LB, enter the Cloud Load Balancer instance ID, such as lb-2qwk30xf7s9g.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    void SetOriginValue(const std::vector<std::string>& _originValue);

                    /**
                     * 判断参数 OriginValue 是否已赋值
                     * @return OriginValue 是否已赋值
                     * 
                     */
                    bool OriginValueHasBeenSet() const;

                    /**
                     * 获取Origin server port, which can be set as follows:<li>A single port, such as 80;</li>
<li>A range of ports, such as 81-85, representing ports 81, 82, 83, 84, 85. When inputting a range of ports, ensure that the length corresponds with that of the forwarding port range. For example, if the forwarding port range is 80-90, this port range should be 90-100.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @return OriginPortRange Origin server port, which can be set as follows:<li>A single port, such as 80;</li>
<li>A range of ports, such as 81-85, representing ports 81, 82, 83, 84, 85. When inputting a range of ports, ensure that the length corresponds with that of the forwarding port range. For example, if the forwarding port range is 80-90, this port range should be 90-100.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    std::string GetOriginPortRange() const;

                    /**
                     * 设置Origin server port, which can be set as follows:<li>A single port, such as 80;</li>
<li>A range of ports, such as 81-85, representing ports 81, 82, 83, 84, 85. When inputting a range of ports, ensure that the length corresponds with that of the forwarding port range. For example, if the forwarding port range is 80-90, this port range should be 90-100.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @param _originPortRange Origin server port, which can be set as follows:<li>A single port, such as 80;</li>
<li>A range of ports, such as 81-85, representing ports 81, 82, 83, 84, 85. When inputting a range of ports, ensure that the length corresponds with that of the forwarding port range. For example, if the forwarding port range is 80-90, this port range should be 90-100.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    void SetOriginPortRange(const std::string& _originPortRange);

                    /**
                     * 判断参数 OriginPortRange 是否已赋值
                     * @return OriginPortRange 是否已赋值
                     * 
                     */
                    bool OriginPortRangeHasBeenSet() const;

                    /**
                     * 获取Transmission of the client IP address. Valid values:<li>TOA: Available only when Protocol=TCP;</li> 
<li>PPV1: Transmission via Proxy Protocol V1. Available only when Protocol=TCP;</li>
<li>PPV2: Transmission via Proxy Protocol V2;</li> 
<li>SPP: Transmission via Simple Proxy Protocol. Available only when Protocol=UDP;</li> 
<li>OFF: No transmission.</li>
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules, and if not specified, the default value OFF will be used; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @return ClientIPPassThroughMode Transmission of the client IP address. Valid values:<li>TOA: Available only when Protocol=TCP;</li> 
<li>PPV1: Transmission via Proxy Protocol V1. Available only when Protocol=TCP;</li>
<li>PPV2: Transmission via Proxy Protocol V2;</li> 
<li>SPP: Transmission via Simple Proxy Protocol. Available only when Protocol=UDP;</li> 
<li>OFF: No transmission.</li>
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules, and if not specified, the default value OFF will be used; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    std::string GetClientIPPassThroughMode() const;

                    /**
                     * 设置Transmission of the client IP address. Valid values:<li>TOA: Available only when Protocol=TCP;</li> 
<li>PPV1: Transmission via Proxy Protocol V1. Available only when Protocol=TCP;</li>
<li>PPV2: Transmission via Proxy Protocol V2;</li> 
<li>SPP: Transmission via Simple Proxy Protocol. Available only when Protocol=UDP;</li> 
<li>OFF: No transmission.</li>
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules, and if not specified, the default value OFF will be used; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @param _clientIPPassThroughMode Transmission of the client IP address. Valid values:<li>TOA: Available only when Protocol=TCP;</li> 
<li>PPV1: Transmission via Proxy Protocol V1. Available only when Protocol=TCP;</li>
<li>PPV2: Transmission via Proxy Protocol V2;</li> 
<li>SPP: Transmission via Simple Proxy Protocol. Available only when Protocol=UDP;</li> 
<li>OFF: No transmission.</li>
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules, and if not specified, the default value OFF will be used; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    void SetClientIPPassThroughMode(const std::string& _clientIPPassThroughMode);

                    /**
                     * 判断参数 ClientIPPassThroughMode 是否已赋值
                     * @return ClientIPPassThroughMode 是否已赋值
                     * 
                     */
                    bool ClientIPPassThroughModeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable session persistence. Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules, and if not specified, the default value off will be used; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @return SessionPersist Specifies whether to enable session persistence. Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules, and if not specified, the default value off will be used; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    std::string GetSessionPersist() const;

                    /**
                     * 设置Specifies whether to enable session persistence. Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules, and if not specified, the default value off will be used; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @param _sessionPersist Specifies whether to enable session persistence. Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules, and if not specified, the default value off will be used; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    void SetSessionPersist(const std::string& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     * 
                     */
                    bool SessionPersistHasBeenSet() const;

                    /**
                     * 获取Session persistence period, with a range of 30-3600, measured in seconds.
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules. It is valid only when SessionPersist is set to on and defaults to 3600 if not specified. It is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @return SessionPersistTime Session persistence period, with a range of 30-3600, measured in seconds.
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules. It is valid only when SessionPersist is set to on and defaults to 3600 if not specified. It is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置Session persistence period, with a range of 30-3600, measured in seconds.
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules. It is valid only when SessionPersist is set to on and defaults to 3600 if not specified. It is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @param _sessionPersistTime Session persistence period, with a range of 30-3600, measured in seconds.
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules. It is valid only when SessionPersist is set to on and defaults to 3600 if not specified. It is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    void SetSessionPersistTime(const uint64_t& _sessionPersistTime);

                    /**
                     * 判断参数 SessionPersistTime 是否已赋值
                     * @return SessionPersistTime 是否已赋值
                     * 
                     */
                    bool SessionPersistTimeHasBeenSet() const;

                    /**
                     * 获取Rule tag. Accepts 1-50 arbitrary characters.
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @return RuleTag Rule tag. Accepts 1-50 arbitrary characters.
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    std::string GetRuleTag() const;

                    /**
                     * 设置Rule tag. Accepts 1-50 arbitrary characters.
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * @param _ruleTag Rule tag. Accepts 1-50 arbitrary characters.
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     * 
                     */
                    void SetRuleTag(const std::string& _ruleTag);

                    /**
                     * 判断参数 RuleTag 是否已赋值
                     * @return RuleTag 是否已赋值
                     * 
                     */
                    bool RuleTagHasBeenSet() const;

                    /**
                     * 获取Rule status. Valid values:<li>online: Enabled;</li>
<li>offline: Disabled;</li>
<li>progress: Deploying;</li>
<li>stopping: Disabling;</li>
<li>fail: Failed to deploy or disable.</li>
Note: Do not set this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules and ModifyL4ProxyRules.
                     * @return Status Rule status. Valid values:<li>online: Enabled;</li>
<li>offline: Disabled;</li>
<li>progress: Deploying;</li>
<li>stopping: Disabling;</li>
<li>fail: Failed to deploy or disable.</li>
Note: Do not set this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules and ModifyL4ProxyRules.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Rule status. Valid values:<li>online: Enabled;</li>
<li>offline: Disabled;</li>
<li>progress: Deploying;</li>
<li>stopping: Disabling;</li>
<li>fail: Failed to deploy or disable.</li>
Note: Do not set this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules and ModifyL4ProxyRules.
                     * @param _status Rule status. Valid values:<li>online: Enabled;</li>
<li>offline: Disabled;</li>
<li>progress: Deploying;</li>
<li>stopping: Disabling;</li>
<li>fail: Failed to deploy or disable.</li>
Note: Do not set this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules and ModifyL4ProxyRules.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Forwarding rule ID.
Note: Do not fill in this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it must be filled in when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Forwarding protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Forwarding port, which can be set as follows:
<li>A single port, such as 80;</li>
<li>A range of ports, such as 81-85, representing ports 81, 82, 83, 84, 85.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     */
                    std::vector<std::string> m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * Origin server type. Valid values:
<li>IP_DOMAIN: IP/Domain name origin server;</li>
<li>ORIGIN_GROUP: Origin server group;</li>
<li>LB: Cloud Load Balancer, currently only open to the allowlist.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Origin server address.
<li>When OriginType is set to IP_DOMAIN, enter the IP address or domain name, such as 8.8.8.8 or test.com;</li>
<li>When OriginType is set to ORIGIN_GROUP, enter the origin server group ID, such as og-537y24vf5b41;</li>
<li>When OriginType is set to LB, enter the Cloud Load Balancer instance ID, such as lb-2qwk30xf7s9g.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     */
                    std::vector<std::string> m_originValue;
                    bool m_originValueHasBeenSet;

                    /**
                     * Origin server port, which can be set as follows:<li>A single port, such as 80;</li>
<li>A range of ports, such as 81-85, representing ports 81, 82, 83, 84, 85. When inputting a range of ports, ensure that the length corresponds with that of the forwarding port range. For example, if the forwarding port range is 80-90, this port range should be 90-100.</li>
Note: This parameter must be filled in when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     */
                    std::string m_originPortRange;
                    bool m_originPortRangeHasBeenSet;

                    /**
                     * Transmission of the client IP address. Valid values:<li>TOA: Available only when Protocol=TCP;</li> 
<li>PPV1: Transmission via Proxy Protocol V1. Available only when Protocol=TCP;</li>
<li>PPV2: Transmission via Proxy Protocol V2;</li> 
<li>SPP: Transmission via Simple Proxy Protocol. Available only when Protocol=UDP;</li> 
<li>OFF: No transmission.</li>
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules, and if not specified, the default value OFF will be used; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     */
                    std::string m_clientIPPassThroughMode;
                    bool m_clientIPPassThroughModeHasBeenSet;

                    /**
                     * Specifies whether to enable session persistence. Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules, and if not specified, the default value off will be used; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     */
                    std::string m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                    /**
                     * Session persistence period, with a range of 30-3600, measured in seconds.
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules. It is valid only when SessionPersist is set to on and defaults to 3600 if not specified. It is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * Rule tag. Accepts 1-50 arbitrary characters.
Note: This parameter is optional when L4ProxyRule is used as an input parameter in CreateL4ProxyRules; it is optional when L4ProxyRule is used as an input parameter in ModifyL4ProxyRules. If not specified, it will retain its existing value.
                     */
                    std::string m_ruleTag;
                    bool m_ruleTagHasBeenSet;

                    /**
                     * Rule status. Valid values:<li>online: Enabled;</li>
<li>offline: Disabled;</li>
<li>progress: Deploying;</li>
<li>stopping: Disabling;</li>
<li>fail: Failed to deploy or disable.</li>
Note: Do not set this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules and ModifyL4ProxyRules.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYRULE_H_
