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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/L4ProxyRemoteAuth.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Layer 4 proxy forwarding rule details.
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
Note: Do not fill in L4ProxyRule as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, this parameter is required.
                     * @return RuleId Forwarding rule ID.
Note: Do not fill in L4ProxyRule as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, this parameter is required.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Forwarding rule ID.
Note: Do not fill in L4ProxyRule as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, this parameter is required.
                     * @param _ruleId Forwarding rule ID.
Note: Do not fill in L4ProxyRule as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, this parameter is required.
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
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @return Protocol Forwarding protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Forwarding protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @param _protocol Forwarding protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
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
                     * 获取Forwarding port. You can fill it in based on the following format:
<li>A single port, such as 80;</li>
<li>A port range, such as 81-85, indicating five ports 81, 82, 83, 84, and 85.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @return PortRange Forwarding port. You can fill it in based on the following format:
<li>A single port, such as 80;</li>
<li>A port range, such as 81-85, indicating five ports 81, 82, 83, 84, and 85.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * 
                     */
                    std::vector<std::string> GetPortRange() const;

                    /**
                     * 设置Forwarding port. You can fill it in based on the following format:
<li>A single port, such as 80;</li>
<li>A port range, such as 81-85, indicating five ports 81, 82, 83, 84, and 85.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @param _portRange Forwarding port. You can fill it in based on the following format:
<li>A single port, such as 80;</li>
<li>A port range, such as 81-85, indicating five ports 81, 82, 83, 84, and 85.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
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
<li>IP_DOMAIN: IP/domain origin server;</li>
<li>ORIGIN_GROUP: origin server group;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @return OriginType Origin server type. Valid values:
<li>IP_DOMAIN: IP/domain origin server;</li>
<li>ORIGIN_GROUP: origin server group;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Origin server type. Valid values:
<li>IP_DOMAIN: IP/domain origin server;</li>
<li>ORIGIN_GROUP: origin server group;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @param _originType Origin server type. Valid values:
<li>IP_DOMAIN: IP/domain origin server;</li>
<li>ORIGIN_GROUP: origin server group;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
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
                     * 获取Origin server address:
<li>When OriginType is IP_DOMAIN, enter an IP address or domain name, for example, 8.8.8.8 or test.com;</li>
<li>When OriginType is ORIGIN_GROUP, fill in the origin server group ID, such as og-537y24vf5b41; if referencing an origin server group from another site, the format is {origin server group ID}@{ZoneID}. For example: og-testorigin@zone-38moq1z10wwwy;</li>
<li>When OriginType is LB, fill in the Cloud Load Balancer instance ID, for example, lb-2qwk30xf7s9g. If a load balancer from another site is referenced, the format is {Cloud Load Balancer ID}@{ZoneID}. For example: lb-2rxpamcyqfzg@zone-38moq1z10wwwy.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.

                     * @return OriginValue Origin server address:
<li>When OriginType is IP_DOMAIN, enter an IP address or domain name, for example, 8.8.8.8 or test.com;</li>
<li>When OriginType is ORIGIN_GROUP, fill in the origin server group ID, such as og-537y24vf5b41; if referencing an origin server group from another site, the format is {origin server group ID}@{ZoneID}. For example: og-testorigin@zone-38moq1z10wwwy;</li>
<li>When OriginType is LB, fill in the Cloud Load Balancer instance ID, for example, lb-2qwk30xf7s9g. If a load balancer from another site is referenced, the format is {Cloud Load Balancer ID}@{ZoneID}. For example: lb-2rxpamcyqfzg@zone-38moq1z10wwwy.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.

                     * 
                     */
                    std::vector<std::string> GetOriginValue() const;

                    /**
                     * 设置Origin server address:
<li>When OriginType is IP_DOMAIN, enter an IP address or domain name, for example, 8.8.8.8 or test.com;</li>
<li>When OriginType is ORIGIN_GROUP, fill in the origin server group ID, such as og-537y24vf5b41; if referencing an origin server group from another site, the format is {origin server group ID}@{ZoneID}. For example: og-testorigin@zone-38moq1z10wwwy;</li>
<li>When OriginType is LB, fill in the Cloud Load Balancer instance ID, for example, lb-2qwk30xf7s9g. If a load balancer from another site is referenced, the format is {Cloud Load Balancer ID}@{ZoneID}. For example: lb-2rxpamcyqfzg@zone-38moq1z10wwwy.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.

                     * @param _originValue Origin server address:
<li>When OriginType is IP_DOMAIN, enter an IP address or domain name, for example, 8.8.8.8 or test.com;</li>
<li>When OriginType is ORIGIN_GROUP, fill in the origin server group ID, such as og-537y24vf5b41; if referencing an origin server group from another site, the format is {origin server group ID}@{ZoneID}. For example: og-testorigin@zone-38moq1z10wwwy;</li>
<li>When OriginType is LB, fill in the Cloud Load Balancer instance ID, for example, lb-2qwk30xf7s9g. If a load balancer from another site is referenced, the format is {Cloud Load Balancer ID}@{ZoneID}. For example: lb-2rxpamcyqfzg@zone-38moq1z10wwwy.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.

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
                     * 获取Origin server port, which can be set as follows:
<li>A single port, such as 80;</li>
<li>A port range, such as 81-85, indicating five ports 81, 82, 83, 84, and 85. When entering a port range, ensure the length corresponds with the forwarding port range. For example, if the forwarding port is 80-90, the forwarding port should be 90-100.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @return OriginPortRange Origin server port, which can be set as follows:
<li>A single port, such as 80;</li>
<li>A port range, such as 81-85, indicating five ports 81, 82, 83, 84, and 85. When entering a port range, ensure the length corresponds with the forwarding port range. For example, if the forwarding port is 80-90, the forwarding port should be 90-100.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * 
                     */
                    std::string GetOriginPortRange() const;

                    /**
                     * 设置Origin server port, which can be set as follows:
<li>A single port, such as 80;</li>
<li>A port range, such as 81-85, indicating five ports 81, 82, 83, 84, and 85. When entering a port range, ensure the length corresponds with the forwarding port range. For example, if the forwarding port is 80-90, the forwarding port should be 90-100.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @param _originPortRange Origin server port, which can be set as follows:
<li>A single port, such as 80;</li>
<li>A port range, such as 81-85, indicating five ports 81, 82, 83, 84, and 85. When entering a port range, ensure the length corresponds with the forwarding port range. For example, if the forwarding port is 80-90, the forwarding port should be 90-100.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
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
                     * 获取Transmission of the client IP address. Valid values:
<li>TOA: TOA (selectable only when Protocol = TCP);</li> 
<li>PPV1: passing via Proxy Protocol V1, available only when Protocol = TCP;</li>
<li>PPV2: passing via Proxy Protocol V2;</li> 
<li>SPP: transmission via Simple Proxy Protocol (selectable only when Protocol = UDP);</li> 
<li>`OFF`: Do not pass the client IP.</li>
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. If not specified, it defaults to OFF. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @return ClientIPPassThroughMode Transmission of the client IP address. Valid values:
<li>TOA: TOA (selectable only when Protocol = TCP);</li> 
<li>PPV1: passing via Proxy Protocol V1, available only when Protocol = TCP;</li>
<li>PPV2: passing via Proxy Protocol V2;</li> 
<li>SPP: transmission via Simple Proxy Protocol (selectable only when Protocol = UDP);</li> 
<li>`OFF`: Do not pass the client IP.</li>
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. If not specified, it defaults to OFF. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * 
                     */
                    std::string GetClientIPPassThroughMode() const;

                    /**
                     * 设置Transmission of the client IP address. Valid values:
<li>TOA: TOA (selectable only when Protocol = TCP);</li> 
<li>PPV1: passing via Proxy Protocol V1, available only when Protocol = TCP;</li>
<li>PPV2: passing via Proxy Protocol V2;</li> 
<li>SPP: transmission via Simple Proxy Protocol (selectable only when Protocol = UDP);</li> 
<li>`OFF`: Do not pass the client IP.</li>
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. If not specified, it defaults to OFF. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @param _clientIPPassThroughMode Transmission of the client IP address. Valid values:
<li>TOA: TOA (selectable only when Protocol = TCP);</li> 
<li>PPV1: passing via Proxy Protocol V1, available only when Protocol = TCP;</li>
<li>PPV2: passing via Proxy Protocol V2;</li> 
<li>SPP: transmission via Simple Proxy Protocol (selectable only when Protocol = UDP);</li> 
<li>`OFF`: Do not pass the client IP.</li>
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. If not specified, it defaults to OFF. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
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
                     * 获取Whether to enable session persistence. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
Note: When L4ProxyRule is used as an input parameter in CreateL4ProxyRules, this parameter is optional and defaults to off if left empty. When used as an input parameter in ModifyL4ProxyRules, this parameter is optional and retains its existing value if not specified.
                     * @return SessionPersist Whether to enable session persistence. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
Note: When L4ProxyRule is used as an input parameter in CreateL4ProxyRules, this parameter is optional and defaults to off if left empty. When used as an input parameter in ModifyL4ProxyRules, this parameter is optional and retains its existing value if not specified.
                     * 
                     */
                    std::string GetSessionPersist() const;

                    /**
                     * 设置Whether to enable session persistence. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
Note: When L4ProxyRule is used as an input parameter in CreateL4ProxyRules, this parameter is optional and defaults to off if left empty. When used as an input parameter in ModifyL4ProxyRules, this parameter is optional and retains its existing value if not specified.
                     * @param _sessionPersist Whether to enable session persistence. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
Note: When L4ProxyRule is used as an input parameter in CreateL4ProxyRules, this parameter is optional and defaults to off if left empty. When used as an input parameter in ModifyL4ProxyRules, this parameter is optional and retains its existing value if not specified.
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
                     * 获取Session persistence duration, in seconds. Value range: 30-3600.
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. It is valid only when SessionPersist = on. If not specified when SessionPersist = on, it defaults to 3600. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @return SessionPersistTime Session persistence duration, in seconds. Value range: 30-3600.
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. It is valid only when SessionPersist = on. If not specified when SessionPersist = on, it defaults to 3600. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * 
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置Session persistence duration, in seconds. Value range: 30-3600.
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. It is valid only when SessionPersist = on. If not specified when SessionPersist = on, it defaults to 3600. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @param _sessionPersistTime Session persistence duration, in seconds. Value range: 30-3600.
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. It is valid only when SessionPersist = on. If not specified when SessionPersist = on, it defaults to 3600. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
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
                     * 获取Rule tag. Enter 1-50 characters.
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @return RuleTag Rule tag. Enter 1-50 characters.
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * 
                     */
                    std::string GetRuleTag() const;

                    /**
                     * 设置Rule tag. Enter 1-50 characters.
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     * @param _ruleTag Rule tag. Enter 1-50 characters.
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
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
                     * 获取Rule status. Valid values:
<li>online: enabled;</li>
<li>offline: disabled;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
Note: Do not fill in this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules or ModifyL4ProxyRules.
                     * @return Status Rule status. Valid values:
<li>online: enabled;</li>
<li>offline: disabled;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
Note: Do not fill in this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules or ModifyL4ProxyRules.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Rule status. Valid values:
<li>online: enabled;</li>
<li>offline: disabled;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
Note: Do not fill in this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules or ModifyL4ProxyRules.
                     * @param _status Rule status. Valid values:
<li>online: enabled;</li>
<li>offline: disabled;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
Note: Do not fill in this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules or ModifyL4ProxyRules.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取BuID.
                     * @return BuId BuID.
                     * 
                     */
                    std::string GetBuId() const;

                    /**
                     * 设置BuID.
                     * @param _buId BuID.
                     * 
                     */
                    void SetBuId(const std::string& _buId);

                    /**
                     * 判断参数 BuId 是否已赋值
                     * @return BuId 是否已赋值
                     * 
                     */
                    bool BuIdHasBeenSet() const;

                    /**
                     * 获取Remote authentication information.
Note: RemoteAuth cannot be used as an input parameter in CreateL4ProxyRules or ModifyL4ProxyRules. If this parameter is input, it will be ignored. If the returned data of DescribeL4ProxyRules is empty, it indicates that remote authentication is disabled.
                     * @return RemoteAuth Remote authentication information.
Note: RemoteAuth cannot be used as an input parameter in CreateL4ProxyRules or ModifyL4ProxyRules. If this parameter is input, it will be ignored. If the returned data of DescribeL4ProxyRules is empty, it indicates that remote authentication is disabled.
                     * 
                     */
                    L4ProxyRemoteAuth GetRemoteAuth() const;

                    /**
                     * 设置Remote authentication information.
Note: RemoteAuth cannot be used as an input parameter in CreateL4ProxyRules or ModifyL4ProxyRules. If this parameter is input, it will be ignored. If the returned data of DescribeL4ProxyRules is empty, it indicates that remote authentication is disabled.
                     * @param _remoteAuth Remote authentication information.
Note: RemoteAuth cannot be used as an input parameter in CreateL4ProxyRules or ModifyL4ProxyRules. If this parameter is input, it will be ignored. If the returned data of DescribeL4ProxyRules is empty, it indicates that remote authentication is disabled.
                     * 
                     */
                    void SetRemoteAuth(const L4ProxyRemoteAuth& _remoteAuth);

                    /**
                     * 判断参数 RemoteAuth 是否已赋值
                     * @return RemoteAuth 是否已赋值
                     * 
                     */
                    bool RemoteAuthHasBeenSet() const;

                private:

                    /**
                     * Forwarding rule ID.
Note: Do not fill in L4ProxyRule as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, this parameter is required.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Forwarding protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Forwarding port. You can fill it in based on the following format:
<li>A single port, such as 80;</li>
<li>A port range, such as 81-85, indicating five ports 81, 82, 83, 84, and 85.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     */
                    std::vector<std::string> m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * Origin server type. Valid values:
<li>IP_DOMAIN: IP/domain origin server;</li>
<li>ORIGIN_GROUP: origin server group;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Origin server address:
<li>When OriginType is IP_DOMAIN, enter an IP address or domain name, for example, 8.8.8.8 or test.com;</li>
<li>When OriginType is ORIGIN_GROUP, fill in the origin server group ID, such as og-537y24vf5b41; if referencing an origin server group from another site, the format is {origin server group ID}@{ZoneID}. For example: og-testorigin@zone-38moq1z10wwwy;</li>
<li>When OriginType is LB, fill in the Cloud Load Balancer instance ID, for example, lb-2qwk30xf7s9g. If a load balancer from another site is referenced, the format is {Cloud Load Balancer ID}@{ZoneID}. For example: lb-2rxpamcyqfzg@zone-38moq1z10wwwy.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.

                     */
                    std::vector<std::string> m_originValue;
                    bool m_originValueHasBeenSet;

                    /**
                     * Origin server port, which can be set as follows:
<li>A single port, such as 80;</li>
<li>A port range, such as 81-85, indicating five ports 81, 82, 83, 84, and 85. When entering a port range, ensure the length corresponds with the forwarding port range. For example, if the forwarding port is 80-90, the forwarding port should be 90-100.</li>
Note: L4ProxyRule is required as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     */
                    std::string m_originPortRange;
                    bool m_originPortRangeHasBeenSet;

                    /**
                     * Transmission of the client IP address. Valid values:
<li>TOA: TOA (selectable only when Protocol = TCP);</li> 
<li>PPV1: passing via Proxy Protocol V1, available only when Protocol = TCP;</li>
<li>PPV2: passing via Proxy Protocol V2;</li> 
<li>SPP: transmission via Simple Proxy Protocol (selectable only when Protocol = UDP);</li> 
<li>`OFF`: Do not pass the client IP.</li>
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. If not specified, it defaults to OFF. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     */
                    std::string m_clientIPPassThroughMode;
                    bool m_clientIPPassThroughModeHasBeenSet;

                    /**
                     * Whether to enable session persistence. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
Note: When L4ProxyRule is used as an input parameter in CreateL4ProxyRules, this parameter is optional and defaults to off if left empty. When used as an input parameter in ModifyL4ProxyRules, this parameter is optional and retains its existing value if not specified.
                     */
                    std::string m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                    /**
                     * Session persistence duration, in seconds. Value range: 30-3600.
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. It is valid only when SessionPersist = on. If not specified when SessionPersist = on, it defaults to 3600. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * Rule tag. Enter 1-50 characters.
Note: L4ProxyRule is optional as an input parameter in CreateL4ProxyRules. In ModifyL4ProxyRules, it is optional. If not specified, it will retain its existing value.
                     */
                    std::string m_ruleTag;
                    bool m_ruleTagHasBeenSet;

                    /**
                     * Rule status. Valid values:
<li>online: enabled;</li>
<li>offline: disabled;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
Note: Do not fill in this parameter when L4ProxyRule is used as an input parameter in CreateL4ProxyRules or ModifyL4ProxyRules.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * BuID.
                     */
                    std::string m_buId;
                    bool m_buIdHasBeenSet;

                    /**
                     * Remote authentication information.
Note: RemoteAuth cannot be used as an input parameter in CreateL4ProxyRules or ModifyL4ProxyRules. If this parameter is input, it will be ignored. If the returned data of DescribeL4ProxyRules is empty, it indicates that remote authentication is disabled.
                     */
                    L4ProxyRemoteAuth m_remoteAuth;
                    bool m_remoteAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYRULE_H_
