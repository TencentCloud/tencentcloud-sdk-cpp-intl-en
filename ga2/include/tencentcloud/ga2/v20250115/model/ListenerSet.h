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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_LISTENERSET_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_LISTENERSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/PortRanges.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * Listener information
                */
                class ListenerSet : public AbstractModel
                {
                public:
                    ListenerSet();
                    ~ListenerSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Global acceleration instance ID.
                     * @return GlobalAcceleratorId Global acceleration instance ID.
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置Global acceleration instance ID.
                     * @param _globalAcceleratorId Global acceleration instance ID.
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取Listener ID.
                     * @return ListenerId Listener ID.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID.
                     * @param _listenerId Listener ID.
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
                     * 获取Listener name.
                     * @return Name Listener name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Listener name.
                     * @param _name Listener name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Listener description.
                     * @return Description Listener description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Listener description.
                     * @param _description Listener description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Protocol.
                     * @return Protocol Protocol.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol.
                     * @param _protocol Protocol.
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
                     * 获取Port range.
                     * @return PortRanges Port range.
                     * 
                     */
                    PortRanges GetPortRanges() const;

                    /**
                     * 设置Port range.
                     * @param _portRanges Port range.
                     * 
                     */
                    void SetPortRanges(const PortRanges& _portRanges);

                    /**
                     * 判断参数 PortRanges 是否已赋值
                     * @return PortRanges 是否已赋值
                     * 
                     */
                    bool PortRangesHasBeenSet() const;

                    /**
                     * 获取Whether to enable layer-7 access to source IP mode.
                     * @return XForwardedForRealIp Whether to enable layer-7 access to source IP mode.
                     * 
                     */
                    bool GetXForwardedForRealIp() const;

                    /**
                     * 设置Whether to enable layer-7 access to source IP mode.
                     * @param _xForwardedForRealIp Whether to enable layer-7 access to source IP mode.
                     * 
                     */
                    void SetXForwardedForRealIp(const bool& _xForwardedForRealIp);

                    /**
                     * 判断参数 XForwardedForRealIp 是否已赋值
                     * @return XForwardedForRealIp 是否已赋值
                     * 
                     */
                    bool XForwardedForRealIpHasBeenSet() const;

                    /**
                     * 获取Enable session persistence.
                     * @return ClientAffinity Enable session persistence.
                     * 
                     */
                    std::string GetClientAffinity() const;

                    /**
                     * 设置Enable session persistence.
                     * @param _clientAffinity Enable session persistence.
                     * 
                     */
                    void SetClientAffinity(const std::string& _clientAffinity);

                    /**
                     * 判断参数 ClientAffinity 是否已赋值
                     * @return ClientAffinity 是否已赋值
                     * 
                     */
                    bool ClientAffinityHasBeenSet() const;

                    /**
                     * 获取Session persistence time.
                     * @return ClientAffinityTime Session persistence time.
                     * 
                     */
                    uint64_t GetClientAffinityTime() const;

                    /**
                     * 设置Session persistence time.
                     * @param _clientAffinityTime Session persistence time.
                     * 
                     */
                    void SetClientAffinityTime(const uint64_t& _clientAffinityTime);

                    /**
                     * 判断参数 ClientAffinityTime 是否已赋值
                     * @return ClientAffinityTime 是否已赋值
                     * 
                     */
                    bool ClientAffinityTimeHasBeenSet() const;

                    /**
                     * 获取SSL decryption method.
                     * @return CertificationType SSL decryption method.
                     * 
                     */
                    std::string GetCertificationType() const;

                    /**
                     * 设置SSL decryption method.
                     * @param _certificationType SSL decryption method.
                     * 
                     */
                    void SetCertificationType(const std::string& _certificationType);

                    /**
                     * 判断参数 CertificationType 是否已赋值
                     * @return CertificationType 是否已赋值
                     * 
                     */
                    bool CertificationTypeHasBeenSet() const;

                    /**
                     * 获取Server certificate.
                     * @return ServerCertificates Server certificate.
                     * 
                     */
                    std::vector<std::string> GetServerCertificates() const;

                    /**
                     * 设置Server certificate.
                     * @param _serverCertificates Server certificate.
                     * 
                     */
                    void SetServerCertificates(const std::vector<std::string>& _serverCertificates);

                    /**
                     * 判断参数 ServerCertificates 是否已赋值
                     * @return ServerCertificates 是否已赋值
                     * 
                     */
                    bool ServerCertificatesHasBeenSet() const;

                    /**
                     * 获取Client certificate.
                     * @return ClientCaCertificates Client certificate.
                     * 
                     */
                    std::vector<std::string> GetClientCaCertificates() const;

                    /**
                     * 设置Client certificate.
                     * @param _clientCaCertificates Client certificate.
                     * 
                     */
                    void SetClientCaCertificates(const std::vector<std::string>& _clientCaCertificates);

                    /**
                     * 判断参数 ClientCaCertificates 是否已赋值
                     * @return ClientCaCertificates 是否已赋值
                     * 
                     */
                    bool ClientCaCertificatesHasBeenSet() const;

                    /**
                     * 获取TLS password suite package.
                     * @return CipherPolicyId TLS password suite package.
                     * 
                     */
                    std::string GetCipherPolicyId() const;

                    /**
                     * 设置TLS password suite package.
                     * @param _cipherPolicyId TLS password suite package.
                     * 
                     */
                    void SetCipherPolicyId(const std::string& _cipherPolicyId);

                    /**
                     * 判断参数 CipherPolicyId 是否已赋值
                     * @return CipherPolicyId 是否已赋值
                     * 
                     */
                    bool CipherPolicyIdHasBeenSet() const;

                    /**
                     * 获取HTTP version.
                     * @return HttpVersion HTTP version.
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置HTTP version.
                     * @param _httpVersion HTTP version.
                     * 
                     */
                    void SetHttpVersion(const std::string& _httpVersion);

                    /**
                     * 判断参数 HttpVersion 是否已赋值
                     * @return HttpVersion 是否已赋值
                     * 
                     */
                    bool HttpVersionHasBeenSet() const;

                    /**
                     * 获取Request timeout.
                     * @return RequestTimeout Request timeout.
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 设置Request timeout.
                     * @param _requestTimeout Request timeout.
                     * 
                     */
                    void SetRequestTimeout(const uint64_t& _requestTimeout);

                    /**
                     * 判断参数 RequestTimeout 是否已赋值
                     * @return RequestTimeout 是否已赋值
                     * 
                     */
                    bool RequestTimeoutHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Listener routing type.
                     * @return ListenerType Listener routing type.
                     * 
                     */
                    std::string GetListenerType() const;

                    /**
                     * 设置Listener routing type.
                     * @param _listenerType Listener routing type.
                     * 
                     */
                    void SetListenerType(const std::string& _listenerType);

                    /**
                     * 判断参数 ListenerType 是否已赋值
                     * @return ListenerType 是否已赋值
                     * 
                     */
                    bool ListenerTypeHasBeenSet() const;

                    /**
                     * 获取Listener status.
                     * @return Status Listener status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Listener status.
                     * @param _status Listener status.
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
                     * 获取Number of terminal node groups belonging to the listener.
                     * @return EndpointGroupCounts Number of terminal node groups belonging to the listener.
                     * 
                     */
                    uint64_t GetEndpointGroupCounts() const;

                    /**
                     * 设置Number of terminal node groups belonging to the listener.
                     * @param _endpointGroupCounts Number of terminal node groups belonging to the listener.
                     * 
                     */
                    void SetEndpointGroupCounts(const uint64_t& _endpointGroupCounts);

                    /**
                     * 判断参数 EndpointGroupCounts 是否已赋值
                     * @return EndpointGroupCounts 是否已赋值
                     * 
                     */
                    bool EndpointGroupCountsHasBeenSet() const;

                    /**
                     * 获取Method for obtaining the source IP at Layer 4.
                     * @return GetRealIpType Method for obtaining the source IP at Layer 4.
                     * 
                     */
                    std::string GetGetRealIpType() const;

                    /**
                     * 设置Method for obtaining the source IP at Layer 4.
                     * @param _getRealIpType Method for obtaining the source IP at Layer 4.
                     * 
                     */
                    void SetGetRealIpType(const std::string& _getRealIpType);

                    /**
                     * 判断参数 GetRealIpType 是否已赋值
                     * @return GetRealIpType 是否已赋值
                     * 
                     */
                    bool GetRealIpTypeHasBeenSet() const;

                    /**
                     * 获取Connection timeout.
                     * @return IdleTimeout Connection timeout.
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 设置Connection timeout.
                     * @param _idleTimeout Connection timeout.
                     * 
                     */
                    void SetIdleTimeout(const uint64_t& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                private:

                    /**
                     * Global acceleration instance ID.
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * Listener ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Listener name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Listener description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port range.
                     */
                    PortRanges m_portRanges;
                    bool m_portRangesHasBeenSet;

                    /**
                     * Whether to enable layer-7 access to source IP mode.
                     */
                    bool m_xForwardedForRealIp;
                    bool m_xForwardedForRealIpHasBeenSet;

                    /**
                     * Enable session persistence.
                     */
                    std::string m_clientAffinity;
                    bool m_clientAffinityHasBeenSet;

                    /**
                     * Session persistence time.
                     */
                    uint64_t m_clientAffinityTime;
                    bool m_clientAffinityTimeHasBeenSet;

                    /**
                     * SSL decryption method.
                     */
                    std::string m_certificationType;
                    bool m_certificationTypeHasBeenSet;

                    /**
                     * Server certificate.
                     */
                    std::vector<std::string> m_serverCertificates;
                    bool m_serverCertificatesHasBeenSet;

                    /**
                     * Client certificate.
                     */
                    std::vector<std::string> m_clientCaCertificates;
                    bool m_clientCaCertificatesHasBeenSet;

                    /**
                     * TLS password suite package.
                     */
                    std::string m_cipherPolicyId;
                    bool m_cipherPolicyIdHasBeenSet;

                    /**
                     * HTTP version.
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                    /**
                     * Request timeout.
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Listener routing type.
                     */
                    std::string m_listenerType;
                    bool m_listenerTypeHasBeenSet;

                    /**
                     * Listener status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Number of terminal node groups belonging to the listener.
                     */
                    uint64_t m_endpointGroupCounts;
                    bool m_endpointGroupCountsHasBeenSet;

                    /**
                     * Method for obtaining the source IP at Layer 4.
                     */
                    std::string m_getRealIpType;
                    bool m_getRealIpTypeHasBeenSet;

                    /**
                     * Connection timeout.
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_LISTENERSET_H_
