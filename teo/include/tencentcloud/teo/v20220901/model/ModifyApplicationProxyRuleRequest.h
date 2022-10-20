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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYRULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyApplicationProxyRule request structure.
                */
                class ModifyApplicationProxyRuleRequest : public AbstractModel
                {
                public:
                    ModifyApplicationProxyRuleRequest();
                    ~ModifyApplicationProxyRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The proxy ID.
                     * @return ProxyId The proxy ID.
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置The proxy ID.
                     * @param ProxyId The proxy ID.
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取The rule ID.
                     * @return RuleId The rule ID.
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置The rule ID.
                     * @param RuleId The rule ID.
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取The origin type. Values:
<li>`custom`: Specified origins</li>
<li>`origins`: Origin group</li></li>The original configuration will apply if this field is not specified.
                     * @return OriginType The origin type. Values:
<li>`custom`: Specified origins</li>
<li>`origins`: Origin group</li></li>The original configuration will apply if this field is not specified.
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置The origin type. Values:
<li>`custom`: Specified origins</li>
<li>`origins`: Origin group</li></li>The original configuration will apply if this field is not specified.
                     * @param OriginType The origin type. Values:
<li>`custom`: Specified origins</li>
<li>`origins`: Origin group</li></li>The original configuration will apply if this field is not specified.
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取The port, which can be specified in the following formats:
Single port, such as 80.
Port range, such as 81-90. The original configuration will apply if this field is not specified.
                     * @return Port The port, which can be specified in the following formats:
Single port, such as 80.
Port range, such as 81-90. The original configuration will apply if this field is not specified.
                     */
                    std::vector<std::string> GetPort() const;

                    /**
                     * 设置The port, which can be specified in the following formats:
Single port, such as 80.
Port range, such as 81-90. The original configuration will apply if this field is not specified.
                     * @param Port The port, which can be specified in the following formats:
Single port, such as 80.
Port range, such as 81-90. The original configuration will apply if this field is not specified.
                     */
                    void SetPort(const std::vector<std::string>& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取The protocol. Values:
<li>`TCP`: TCP protocol</li>
<li>`UDP`: UDP protocol</li>The original configuration will apply if this field is not specified.
                     * @return Proto The protocol. Values:
<li>`TCP`: TCP protocol</li>
<li>`UDP`: UDP protocol</li>The original configuration will apply if this field is not specified.
                     */
                    std::string GetProto() const;

                    /**
                     * 设置The protocol. Values:
<li>`TCP`: TCP protocol</li>
<li>`UDP`: UDP protocol</li>The original configuration will apply if this field is not specified.
                     * @param Proto The protocol. Values:
<li>`TCP`: TCP protocol</li>
<li>`UDP`: UDP protocol</li>The original configuration will apply if this field is not specified.
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     */
                    bool ProtoHasBeenSet() const;

                    /**
                     * 获取Origin server information:
When `OriginType=custom`, it indicates one or more origin servers. Example:
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"];
When `OriginType=origins`, it indicates an origin group ID. Example:
OriginValue=["origin-537f5b41-162a-11ed-abaa-525400c5da15"]
The original configuration will apply if this field is not specified.
                     * @return OriginValue Origin server information:
When `OriginType=custom`, it indicates one or more origin servers. Example:
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"];
When `OriginType=origins`, it indicates an origin group ID. Example:
OriginValue=["origin-537f5b41-162a-11ed-abaa-525400c5da15"]
The original configuration will apply if this field is not specified.
                     */
                    std::vector<std::string> GetOriginValue() const;

                    /**
                     * 设置Origin server information:
When `OriginType=custom`, it indicates one or more origin servers. Example:
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"];
When `OriginType=origins`, it indicates an origin group ID. Example:
OriginValue=["origin-537f5b41-162a-11ed-abaa-525400c5da15"]
The original configuration will apply if this field is not specified.
                     * @param OriginValue Origin server information:
When `OriginType=custom`, it indicates one or more origin servers. Example:
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"];
When `OriginType=origins`, it indicates an origin group ID. Example:
OriginValue=["origin-537f5b41-162a-11ed-abaa-525400c5da15"]
The original configuration will apply if this field is not specified.
                     */
                    void SetOriginValue(const std::vector<std::string>& _originValue);

                    /**
                     * 判断参数 OriginValue 是否已赋值
                     * @return OriginValue 是否已赋值
                     */
                    bool OriginValueHasBeenSet() const;

                    /**
                     * 获取Passes the client IP. Values:
<li>`TOA`: Pass the client IP via TOA (available only when `Proto=TCP`).</li>
<li>`PPV1`: Pass the client IP via Proxy Protocol V1 (available only when `Proto=TCP`).</li>
<li>`PPV2`: Pass the client IP via Proxy Protocol V2.</li>
<li>`OFF`: Not pass the client IP.</li>If not specified, this field uses the default value OFF.
                     * @return ForwardClientIp Passes the client IP. Values:
<li>`TOA`: Pass the client IP via TOA (available only when `Proto=TCP`).</li>
<li>`PPV1`: Pass the client IP via Proxy Protocol V1 (available only when `Proto=TCP`).</li>
<li>`PPV2`: Pass the client IP via Proxy Protocol V2.</li>
<li>`OFF`: Not pass the client IP.</li>If not specified, this field uses the default value OFF.
                     */
                    std::string GetForwardClientIp() const;

                    /**
                     * 设置Passes the client IP. Values:
<li>`TOA`: Pass the client IP via TOA (available only when `Proto=TCP`).</li>
<li>`PPV1`: Pass the client IP via Proxy Protocol V1 (available only when `Proto=TCP`).</li>
<li>`PPV2`: Pass the client IP via Proxy Protocol V2.</li>
<li>`OFF`: Not pass the client IP.</li>If not specified, this field uses the default value OFF.
                     * @param ForwardClientIp Passes the client IP. Values:
<li>`TOA`: Pass the client IP via TOA (available only when `Proto=TCP`).</li>
<li>`PPV1`: Pass the client IP via Proxy Protocol V1 (available only when `Proto=TCP`).</li>
<li>`PPV2`: Pass the client IP via Proxy Protocol V2.</li>
<li>`OFF`: Not pass the client IP.</li>If not specified, this field uses the default value OFF.
                     */
                    void SetForwardClientIp(const std::string& _forwardClientIp);

                    /**
                     * 判断参数 ForwardClientIp 是否已赋值
                     * @return ForwardClientIp 是否已赋值
                     */
                    bool ForwardClientIpHasBeenSet() const;

                    /**
                     * 获取Whether to enable session persistence. Values:
<li>`true`: Enable</li>
<li>`false`: Disable</li>The original configuration will apply if this field is not specified.
                     * @return SessionPersist Whether to enable session persistence. Values:
<li>`true`: Enable</li>
<li>`false`: Disable</li>The original configuration will apply if this field is not specified.
                     */
                    bool GetSessionPersist() const;

                    /**
                     * 设置Whether to enable session persistence. Values:
<li>`true`: Enable</li>
<li>`false`: Disable</li>The original configuration will apply if this field is not specified.
                     * @param SessionPersist Whether to enable session persistence. Values:
<li>`true`: Enable</li>
<li>`false`: Disable</li>The original configuration will apply if this field is not specified.
                     */
                    void SetSessionPersist(const bool& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     */
                    bool SessionPersistHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The proxy ID.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * The rule ID.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * The origin type. Values:
<li>`custom`: Specified origins</li>
<li>`origins`: Origin group</li></li>The original configuration will apply if this field is not specified.
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * The port, which can be specified in the following formats:
Single port, such as 80.
Port range, such as 81-90. The original configuration will apply if this field is not specified.
                     */
                    std::vector<std::string> m_port;
                    bool m_portHasBeenSet;

                    /**
                     * The protocol. Values:
<li>`TCP`: TCP protocol</li>
<li>`UDP`: UDP protocol</li>The original configuration will apply if this field is not specified.
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * Origin server information:
When `OriginType=custom`, it indicates one or more origin servers. Example:
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"];
When `OriginType=origins`, it indicates an origin group ID. Example:
OriginValue=["origin-537f5b41-162a-11ed-abaa-525400c5da15"]
The original configuration will apply if this field is not specified.
                     */
                    std::vector<std::string> m_originValue;
                    bool m_originValueHasBeenSet;

                    /**
                     * Passes the client IP. Values:
<li>`TOA`: Pass the client IP via TOA (available only when `Proto=TCP`).</li>
<li>`PPV1`: Pass the client IP via Proxy Protocol V1 (available only when `Proto=TCP`).</li>
<li>`PPV2`: Pass the client IP via Proxy Protocol V2.</li>
<li>`OFF`: Not pass the client IP.</li>If not specified, this field uses the default value OFF.
                     */
                    std::string m_forwardClientIp;
                    bool m_forwardClientIpHasBeenSet;

                    /**
                     * Whether to enable session persistence. Values:
<li>`true`: Enable</li>
<li>`false`: Disable</li>The original configuration will apply if this field is not specified.
                     */
                    bool m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYRULEREQUEST_H_
