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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPSLISTENERREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPSLISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateHTTPSListener request structure.
                */
                class CreateHTTPSListenerRequest : public AbstractModel
                {
                public:
                    CreateHTTPSListenerRequest();
                    ~CreateHTTPSListenerRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Listener port, which is based on the listeners of same transport layer protocol (TCP or UDP). The port must be unique.
                     * @return Port Listener port, which is based on the listeners of same transport layer protocol (TCP or UDP). The port must be unique.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Listener port, which is based on the listeners of same transport layer protocol (TCP or UDP). The port must be unique.
                     * @param _port Listener port, which is based on the listeners of same transport layer protocol (TCP or UDP). The port must be unique.
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
                     * 获取Server certificate ID
                     * @return CertificateId Server certificate ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Server certificate ID
                     * @param _certificateId Server certificate ID
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
                     * 获取Protocol types of the forwarding from acceleration connection to origin server: HTTP | HTTPS
                     * @return ForwardProtocol Protocol types of the forwarding from acceleration connection to origin server: HTTP | HTTPS
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置Protocol types of the forwarding from acceleration connection to origin server: HTTP | HTTPS
                     * @param _forwardProtocol Protocol types of the forwarding from acceleration connection to origin server: HTTP | HTTPS
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
                     * 获取Connection ID, which cannot be set together with `GroupId` at the same time. A listener will be created for the corresponding connection.
                     * @return ProxyId Connection ID, which cannot be set together with `GroupId` at the same time. A listener will be created for the corresponding connection.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection ID, which cannot be set together with `GroupId` at the same time. A listener will be created for the corresponding connection.
                     * @param _proxyId Connection ID, which cannot be set together with `GroupId` at the same time. A listener will be created for the corresponding connection.
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
                     * 获取Authentication type, where:
0: one-way authentication;
1: mutual authentication.
The one-way authentication is used by default.
                     * @return AuthType Authentication type, where:
0: one-way authentication;
1: mutual authentication.
The one-way authentication is used by default.
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置Authentication type, where:
0: one-way authentication;
1: mutual authentication.
The one-way authentication is used by default.
                     * @param _authType Authentication type, where:
0: one-way authentication;
1: mutual authentication.
The one-way authentication is used by default.
                     * 
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取Client CA certificate ID, which is required only when the mutual authentication is adopted.
                     * @return ClientCertificateId Client CA certificate ID, which is required only when the mutual authentication is adopted.
                     * 
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置Client CA certificate ID, which is required only when the mutual authentication is adopted.
                     * @param _clientCertificateId Client CA certificate ID, which is required only when the mutual authentication is adopted.
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
                     * 获取IDs of multiple new client CA certificates. This field or the `ClientCertificateId` field is required for mutual authentication only.
                     * @return PolyClientCertificateIds IDs of multiple new client CA certificates. This field or the `ClientCertificateId` field is required for mutual authentication only.
                     * 
                     */
                    std::vector<std::string> GetPolyClientCertificateIds() const;

                    /**
                     * 设置IDs of multiple new client CA certificates. This field or the `ClientCertificateId` field is required for mutual authentication only.
                     * @param _polyClientCertificateIds IDs of multiple new client CA certificates. This field or the `ClientCertificateId` field is required for mutual authentication only.
                     * 
                     */
                    void SetPolyClientCertificateIds(const std::vector<std::string>& _polyClientCertificateIds);

                    /**
                     * 判断参数 PolyClientCertificateIds 是否已赋值
                     * @return PolyClientCertificateIds 是否已赋值
                     * 
                     */
                    bool PolyClientCertificateIdsHasBeenSet() const;

                    /**
                     * 获取Connection group ID, which cannot be set together with `ProxyId` at the same time. A listener will be created for the corresponding connection group.
                     * @return GroupId Connection group ID, which cannot be set together with `ProxyId` at the same time. A listener will be created for the corresponding connection group.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID, which cannot be set together with `ProxyId` at the same time. A listener will be created for the corresponding connection group.
                     * @param _groupId Connection group ID, which cannot be set together with `ProxyId` at the same time. A listener will be created for the corresponding connection group.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
Note: If HTTP3 is enabled for a connection, the listener will use the port that is originally accessed to UDP, and a UDP listener with the same port cannot be created.
After the connection is created, you cannot change your HTTP3 setting.
                     * @return Http3Supported Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
Note: If HTTP3 is enabled for a connection, the listener will use the port that is originally accessed to UDP, and a UDP listener with the same port cannot be created.
After the connection is created, you cannot change your HTTP3 setting.
                     * 
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
Note: If HTTP3 is enabled for a connection, the listener will use the port that is originally accessed to UDP, and a UDP listener with the same port cannot be created.
After the connection is created, you cannot change your HTTP3 setting.
                     * @param _http3Supported Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
Note: If HTTP3 is enabled for a connection, the listener will use the port that is originally accessed to UDP, and a UDP listener with the same port cannot be created.
After the connection is created, you cannot change your HTTP3 setting.
                     * 
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     * 
                     */
                    bool Http3SupportedHasBeenSet() const;

                private:

                    /**
                     * Listener name
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Listener port, which is based on the listeners of same transport layer protocol (TCP or UDP). The port must be unique.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Server certificate ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Protocol types of the forwarding from acceleration connection to origin server: HTTP | HTTPS
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * Connection ID, which cannot be set together with `GroupId` at the same time. A listener will be created for the corresponding connection.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Authentication type, where:
0: one-way authentication;
1: mutual authentication.
The one-way authentication is used by default.
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * Client CA certificate ID, which is required only when the mutual authentication is adopted.
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * IDs of multiple new client CA certificates. This field or the `ClientCertificateId` field is required for mutual authentication only.
                     */
                    std::vector<std::string> m_polyClientCertificateIds;
                    bool m_polyClientCertificateIdsHasBeenSet;

                    /**
                     * Connection group ID, which cannot be set together with `ProxyId` at the same time. A listener will be created for the corresponding connection group.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
Note: If HTTP3 is enabled for a connection, the listener will use the port that is originally accessed to UDP, and a UDP listener with the same port cannot be created.
After the connection is created, you cannot change your HTTP3 setting.
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPSLISTENERREQUEST_H_
