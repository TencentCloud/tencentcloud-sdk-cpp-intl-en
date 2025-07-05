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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATEAPPLICATIONPROXYRULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATEAPPLICATIONPROXYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CreateApplicationProxyRule request structure.
                */
                class CreateApplicationProxyRuleRequest : public AbstractModel
                {
                public:
                    CreateApplicationProxyRuleRequest();
                    ~CreateApplicationProxyRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID
                     * @return ZoneId Site ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID
                     * @param _zoneId Site ID
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Proxy ID
                     * @return ProxyId Proxy ID
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Proxy ID
                     * @param _proxyId Proxy ID
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Protocol. Valid values: `TCP` and `UDP`.
                     * @return Proto Protocol. Valid values: `TCP` and `UDP`.
                     * 
                     */
                    std::string GetProto() const;

                    /**
                     * 设置Protocol. Valid values: `TCP` and `UDP`.
                     * @param _proto Protocol. Valid values: `TCP` and `UDP`.
                     * 
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     * 
                     */
                    bool ProtoHasBeenSet() const;

                    /**
                     * 获取Port. Valid values:
`80`: Port 80
`81-90`: Port range 81-90
                     * @return Port Port. Valid values:
`80`: Port 80
`81-90`: Port range 81-90
                     * 
                     */
                    std::vector<std::string> GetPort() const;

                    /**
                     * 设置Port. Valid values:
`80`: Port 80
`81-90`: Port range 81-90
                     * @param _port Port. Valid values:
`80`: Port 80
`81-90`: Port range 81-90
                     * 
                     */
                    void SetPort(const std::vector<std::string>& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Origin type. Valid values:
`custom`: Specified origins
`origins`: Origin group
                     * @return OriginType Origin type. Valid values:
`custom`: Specified origins
`origins`: Origin group
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Origin type. Valid values:
`custom`: Specified origins
`origins`: Origin group
                     * @param _originType Origin type. Valid values:
`custom`: Specified origins
`origins`: Origin group
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
                     * 获取Origin information:
When `OriginType=custom`, it can include one or more origins in either of the following formats:
IP:Port
Domain name:Port
When `OriginType=origins`, it is an origin group ID.
                     * @return OriginValue Origin information:
When `OriginType=custom`, it can include one or more origins in either of the following formats:
IP:Port
Domain name:Port
When `OriginType=origins`, it is an origin group ID.
                     * 
                     */
                    std::vector<std::string> GetOriginValue() const;

                    /**
                     * 设置Origin information:
When `OriginType=custom`, it can include one or more origins in either of the following formats:
IP:Port
Domain name:Port
When `OriginType=origins`, it is an origin group ID.
                     * @param _originValue Origin information:
When `OriginType=custom`, it can include one or more origins in either of the following formats:
IP:Port
Domain name:Port
When `OriginType=origins`, it is an origin group ID.
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
                     * 获取Passes the client IP. When `Proto=TCP`, valid values:
`TOA`: Pass the client IP via TOA
`PPV1`: Pass the client IP via Proxy Protocol V1
`PPV2`: Pass the client IP via Proxy Protocol V2
`OFF`: Do not pass the client IP.
When `Proto=UDP`, valid values:
`PPV2`: Pass the client IP via Proxy Protocol V2
`OFF`: Do not pass the client IP.
                     * @return ForwardClientIp Passes the client IP. When `Proto=TCP`, valid values:
`TOA`: Pass the client IP via TOA
`PPV1`: Pass the client IP via Proxy Protocol V1
`PPV2`: Pass the client IP via Proxy Protocol V2
`OFF`: Do not pass the client IP.
When `Proto=UDP`, valid values:
`PPV2`: Pass the client IP via Proxy Protocol V2
`OFF`: Do not pass the client IP.
                     * 
                     */
                    std::string GetForwardClientIp() const;

                    /**
                     * 设置Passes the client IP. When `Proto=TCP`, valid values:
`TOA`: Pass the client IP via TOA
`PPV1`: Pass the client IP via Proxy Protocol V1
`PPV2`: Pass the client IP via Proxy Protocol V2
`OFF`: Do not pass the client IP.
When `Proto=UDP`, valid values:
`PPV2`: Pass the client IP via Proxy Protocol V2
`OFF`: Do not pass the client IP.
                     * @param _forwardClientIp Passes the client IP. When `Proto=TCP`, valid values:
`TOA`: Pass the client IP via TOA
`PPV1`: Pass the client IP via Proxy Protocol V1
`PPV2`: Pass the client IP via Proxy Protocol V2
`OFF`: Do not pass the client IP.
When `Proto=UDP`, valid values:
`PPV2`: Pass the client IP via Proxy Protocol V2
`OFF`: Do not pass the client IP.
                     * 
                     */
                    void SetForwardClientIp(const std::string& _forwardClientIp);

                    /**
                     * 判断参数 ForwardClientIp 是否已赋值
                     * @return ForwardClientIp 是否已赋值
                     * 
                     */
                    bool ForwardClientIpHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable session persistence 
                     * @return SessionPersist Specifies whether to enable session persistence 
                     * 
                     */
                    bool GetSessionPersist() const;

                    /**
                     * 设置Specifies whether to enable session persistence 
                     * @param _sessionPersist Specifies whether to enable session persistence 
                     * 
                     */
                    void SetSessionPersist(const bool& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     * 
                     */
                    bool SessionPersistHasBeenSet() const;

                private:

                    /**
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Proxy ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Protocol. Valid values: `TCP` and `UDP`.
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * Port. Valid values:
`80`: Port 80
`81-90`: Port range 81-90
                     */
                    std::vector<std::string> m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Origin type. Valid values:
`custom`: Specified origins
`origins`: Origin group
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Origin information:
When `OriginType=custom`, it can include one or more origins in either of the following formats:
IP:Port
Domain name:Port
When `OriginType=origins`, it is an origin group ID.
                     */
                    std::vector<std::string> m_originValue;
                    bool m_originValueHasBeenSet;

                    /**
                     * Passes the client IP. When `Proto=TCP`, valid values:
`TOA`: Pass the client IP via TOA
`PPV1`: Pass the client IP via Proxy Protocol V1
`PPV2`: Pass the client IP via Proxy Protocol V2
`OFF`: Do not pass the client IP.
When `Proto=UDP`, valid values:
`PPV2`: Pass the client IP via Proxy Protocol V2
`OFF`: Do not pass the client IP.
                     */
                    std::string m_forwardClientIp;
                    bool m_forwardClientIpHasBeenSet;

                    /**
                     * Specifies whether to enable session persistence 
                     */
                    bool m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATEAPPLICATIONPROXYRULEREQUEST_H_
