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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_HTTPSLISTENER_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_HTTPSLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/CertificateAliasInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * HTTPS listener information
                */
                class HTTPSListener : public AbstractModel
                {
                public:
                    HTTPSListener();
                    ~HTTPSListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listener ID
                     * @return ListenerId Listener ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID
                     * @param _listenerId Listener ID
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Listener name
                     * @return ListenerName Listener name
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Listener name
                     * @param _listenerName Listener name
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取Listener port
                     * @return Port Listener port
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Listener port
                     * @param _port Listener port
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Listener protocol. Valid values: HTTP, HTTPS. The value `HTTPS` is used for this structure
                     * @return Protocol Listener protocol. Valid values: HTTP, HTTPS. The value `HTTPS` is used for this structure
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol. Valid values: HTTP, HTTPS. The value `HTTPS` is used for this structure
                     * @param _protocol Listener protocol. Valid values: HTTP, HTTPS. The value `HTTPS` is used for this structure
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
                     * 获取Listener status:
0: running;
1: creating;
2: terminating;
3: adjusting origin server;
4: modifying configuration.
                     * @return ListenerStatus Listener status:
0: running;
1: creating;
2: terminating;
3: adjusting origin server;
4: modifying configuration.
                     * 
                     */
                    uint64_t GetListenerStatus() const;

                    /**
                     * 设置Listener status:
0: running;
1: creating;
2: terminating;
3: adjusting origin server;
4: modifying configuration.
                     * @param _listenerStatus Listener status:
0: running;
1: creating;
2: terminating;
3: adjusting origin server;
4: modifying configuration.
                     * 
                     */
                    void SetListenerStatus(const uint64_t& _listenerStatus);

                    /**
                     * 判断参数 ListenerStatus 是否已赋值
                     * @return ListenerStatus 是否已赋值
                     * 
                     */
                    bool ListenerStatusHasBeenSet() const;

                    /**
                     * 获取Server SSL certificate ID of the listener
                     * @return CertificateId Server SSL certificate ID of the listener
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Server SSL certificate ID of the listener
                     * @param _certificateId Server SSL certificate ID of the listener
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Protocol used in the forwarding from connections to origin servers
                     * @return ForwardProtocol Protocol used in the forwarding from connections to origin servers
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置Protocol used in the forwarding from connections to origin servers
                     * @param _forwardProtocol Protocol used in the forwarding from connections to origin servers
                     * 
                     */
                    void SetForwardProtocol(const std::string& _forwardProtocol);

                    /**
                     * 判断参数 ForwardProtocol 是否已赋值
                     * @return ForwardProtocol 是否已赋值
                     * 
                     */
                    bool ForwardProtocolHasBeenSet() const;

                    /**
                     * 获取Listener creation time; using UNIX timestamp.
                     * @return CreateTime Listener creation time; using UNIX timestamp.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Listener creation time; using UNIX timestamp.
                     * @param _createTime Listener creation time; using UNIX timestamp.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Server SSL certificate alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CertificateAlias Server SSL certificate alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置Server SSL certificate alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _certificateAlias Server SSL certificate alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     * 
                     */
                    bool CertificateAliasHasBeenSet() const;

                    /**
                     * 获取Client CA certificate ID of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientCertificateId Client CA certificate ID of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置Client CA certificate ID of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientCertificateId Client CA certificate ID of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClientCertificateId(const std::string& _clientCertificateId);

                    /**
                     * 判断参数 ClientCertificateId 是否已赋值
                     * @return ClientCertificateId 是否已赋值
                     * 
                     */
                    bool ClientCertificateIdHasBeenSet() const;

                    /**
                     * 获取Listener authentication mode. Valid values:
0: one-way authentication;
1: mutual authentication.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AuthType Listener authentication mode. Valid values:
0: one-way authentication;
1: mutual authentication.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置Listener authentication mode. Valid values:
0: one-way authentication;
1: mutual authentication.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _authType Listener authentication mode. Valid values:
0: one-way authentication;
1: mutual authentication.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取Client CA certificate alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientCertificateAlias Client CA certificate alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientCertificateAlias() const;

                    /**
                     * 设置Client CA certificate alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientCertificateAlias Client CA certificate alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClientCertificateAlias(const std::string& _clientCertificateAlias);

                    /**
                     * 判断参数 ClientCertificateAlias 是否已赋值
                     * @return ClientCertificateAlias 是否已赋值
                     * 
                     */
                    bool ClientCertificateAliasHasBeenSet() const;

                    /**
                     * 获取Alias information of multiple client CA certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolyClientCertificateAliasInfo Alias information of multiple client CA certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CertificateAliasInfo> GetPolyClientCertificateAliasInfo() const;

                    /**
                     * 设置Alias information of multiple client CA certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _polyClientCertificateAliasInfo Alias information of multiple client CA certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolyClientCertificateAliasInfo(const std::vector<CertificateAliasInfo>& _polyClientCertificateAliasInfo);

                    /**
                     * 判断参数 PolyClientCertificateAliasInfo 是否已赋值
                     * @return PolyClientCertificateAliasInfo 是否已赋值
                     * 
                     */
                    bool PolyClientCertificateAliasInfoHasBeenSet() const;

                    /**
                     * 获取Whether to support HTTP3. Values:
`0`: Do not support HTTP3 access;
`1`: Support HTTP3 access.
If HTTP3 is supported for a connection, the listener will use the port that is originally accessed to UDP, and a UDP listener with the same port cannot be created.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Http3Supported Whether to support HTTP3. Values:
`0`: Do not support HTTP3 access;
`1`: Support HTTP3 access.
If HTTP3 is supported for a connection, the listener will use the port that is originally accessed to UDP, and a UDP listener with the same port cannot be created.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置Whether to support HTTP3. Values:
`0`: Do not support HTTP3 access;
`1`: Support HTTP3 access.
If HTTP3 is supported for a connection, the listener will use the port that is originally accessed to UDP, and a UDP listener with the same port cannot be created.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _http3Supported Whether to support HTTP3. Values:
`0`: Do not support HTTP3 access;
`1`: Support HTTP3 access.
If HTTP3 is supported for a connection, the listener will use the port that is originally accessed to UDP, and a UDP listener with the same port cannot be created.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     * 
                     */
                    bool Http3SupportedHasBeenSet() const;

                    /**
                     * 获取Connection ID of the listener. A null value is returned if the listener is associated with the connection group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyId Connection ID of the listener. A null value is returned if the listener is associated with the connection group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection ID of the listener. A null value is returned if the listener is associated with the connection group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _proxyId Connection ID of the listener. A null value is returned if the listener is associated with the connection group.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Connection group ID of the listener. A null value is returned if the listener is associated with a specific connection.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return GroupId Connection group ID of the listener. A null value is returned if the listener is associated with a specific connection.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID of the listener. A null value is returned if the listener is associated with a specific connection.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _groupId Connection group ID of the listener. A null value is returned if the listener is associated with a specific connection.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * Listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Listener name
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Listener port
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Listener protocol. Valid values: HTTP, HTTPS. The value `HTTPS` is used for this structure
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Listener status:
0: running;
1: creating;
2: terminating;
3: adjusting origin server;
4: modifying configuration.
                     */
                    uint64_t m_listenerStatus;
                    bool m_listenerStatusHasBeenSet;

                    /**
                     * Server SSL certificate ID of the listener
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Protocol used in the forwarding from connections to origin servers
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * Listener creation time; using UNIX timestamp.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Server SSL certificate alias
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certificateAlias;
                    bool m_certificateAliasHasBeenSet;

                    /**
                     * Client CA certificate ID of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * Listener authentication mode. Valid values:
0: one-way authentication;
1: mutual authentication.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * Client CA certificate alias
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientCertificateAlias;
                    bool m_clientCertificateAliasHasBeenSet;

                    /**
                     * Alias information of multiple client CA certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CertificateAliasInfo> m_polyClientCertificateAliasInfo;
                    bool m_polyClientCertificateAliasInfoHasBeenSet;

                    /**
                     * Whether to support HTTP3. Values:
`0`: Do not support HTTP3 access;
`1`: Support HTTP3 access.
If HTTP3 is supported for a connection, the listener will use the port that is originally accessed to UDP, and a UDP listener with the same port cannot be created.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                    /**
                     * Connection ID of the listener. A null value is returned if the listener is associated with the connection group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Connection group ID of the listener. A null value is returned if the listener is associated with a specific connection.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_HTTPSLISTENER_H_
