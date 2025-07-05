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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_APPLICATIONPROXYRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_APPLICATIONPROXYRULE_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Application proxy rule
                */
                class ApplicationProxyRule : public AbstractModel
                {
                public:
                    ApplicationProxyRule();
                    ~ApplicationProxyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Origin server type. Valid values:
`custom`: Specified origins
`origins`: Origin group
                     * @return OriginType Origin server type. Valid values:
`custom`: Specified origins
`origins`: Origin group
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Origin server type. Valid values:
`custom`: Specified origins
`origins`: Origin group
                     * @param _originType Origin server type. Valid values:
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
                     * 获取Origin server information:
When `OriginType=custom`, it indicates one or more origin servers. Example:
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]

When `OriginType=origins`, it indicates an origin group ID. Example:
OriginValue=["origin-xxx"]
                     * @return OriginValue Origin server information:
When `OriginType=custom`, it indicates one or more origin servers. Example:
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]

When `OriginType=origins`, it indicates an origin group ID. Example:
OriginValue=["origin-xxx"]
                     * 
                     */
                    std::vector<std::string> GetOriginValue() const;

                    /**
                     * 设置Origin server information:
When `OriginType=custom`, it indicates one or more origin servers. Example:
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]

When `OriginType=origins`, it indicates an origin group ID. Example:
OriginValue=["origin-xxx"]
                     * @param _originValue Origin server information:
When `OriginType=custom`, it indicates one or more origin servers. Example:
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]

When `OriginType=origins`, it indicates an origin group ID. Example:
OriginValue=["origin-xxx"]
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
                     * 获取Rule ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleId Rule ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ruleId Rule ID
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Status:
`online`: Enable
`offline`: Disable
`progress`: Deploying
`stopping`: Disabling
`fail`: Deployment/Disabling failed
                     * @return Status Status:
`online`: Enable
`offline`: Disable
`progress`: Deploying
`stopping`: Disabling
`fail`: Deployment/Disabling failed
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status:
`online`: Enable
`offline`: Disable
`progress`: Deploying
`stopping`: Disabling
`fail`: Deployment/Disabling failed
                     * @param _status Status:
`online`: Enable
`offline`: Disable
`progress`: Deploying
`stopping`: Disabling
`fail`: Deployment/Disabling failed
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
                     * Origin server type. Valid values:
`custom`: Specified origins
`origins`: Origin group
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Origin server information:
When `OriginType=custom`, it indicates one or more origin servers. Example:
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]

When `OriginType=origins`, it indicates an origin group ID. Example:
OriginValue=["origin-xxx"]
                     */
                    std::vector<std::string> m_originValue;
                    bool m_originValueHasBeenSet;

                    /**
                     * Rule ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Status:
`online`: Enable
`offline`: Disable
`progress`: Deploying
`stopping`: Disabling
`fail`: Deployment/Disabling failed
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

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

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_APPLICATIONPROXYRULE_H_
