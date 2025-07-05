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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYHTTPSLISTENERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYHTTPSLISTENERATTRIBUTEREQUEST_H_

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
                * ModifyHTTPSListenerAttribute request structure.
                */
                class ModifyHTTPSListenerAttributeRequest : public AbstractModel
                {
                public:
                    ModifyHTTPSListenerAttributeRequest();
                    ~ModifyHTTPSListenerAttributeRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Connection ID. This field is required if using a single connection listener.
                     * @return ProxyId Connection ID. This field is required if using a single connection listener.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection ID. This field is required if using a single connection listener.
                     * @param _proxyId Connection ID. This field is required if using a single connection listener.
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
                     * 获取New listener name
                     * @return ListenerName New listener name
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置New listener name
                     * @param _listenerName New listener name
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
                     * 获取Type of the protocol used in the forwarding from connections to origin servers
                     * @return ForwardProtocol Type of the protocol used in the forwarding from connections to origin servers
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置Type of the protocol used in the forwarding from connections to origin servers
                     * @param _forwardProtocol Type of the protocol used in the forwarding from connections to origin servers
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
                     * 获取New listener server certificate ID
                     * @return CertificateId New listener server certificate ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置New listener server certificate ID
                     * @param _certificateId New listener server certificate ID
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
                     * 获取New listener client certificate ID
                     * @return ClientCertificateId New listener client certificate ID
                     * 
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置New listener client certificate ID
                     * @param _clientCertificateId New listener client certificate ID
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
                     * 获取Client certificate ID of the listener after modification, which is a new field.
                     * @return PolyClientCertificateIds Client certificate ID of the listener after modification, which is a new field.
                     * 
                     */
                    std::vector<std::string> GetPolyClientCertificateIds() const;

                    /**
                     * 设置Client certificate ID of the listener after modification, which is a new field.
                     * @param _polyClientCertificateIds Client certificate ID of the listener after modification, which is a new field.
                     * 
                     */
                    void SetPolyClientCertificateIds(const std::vector<std::string>& _polyClientCertificateIds);

                    /**
                     * 判断参数 PolyClientCertificateIds 是否已赋值
                     * @return PolyClientCertificateIds 是否已赋值
                     * 
                     */
                    bool PolyClientCertificateIdsHasBeenSet() const;

                private:

                    /**
                     * Listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Connection ID. This field is required if using a single connection listener.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * New listener name
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Type of the protocol used in the forwarding from connections to origin servers
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * New listener server certificate ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * New listener client certificate ID
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * Client certificate ID of the listener after modification, which is a new field.
                     */
                    std::vector<std::string> m_polyClientCertificateIds;
                    bool m_polyClientCertificateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYHTTPSLISTENERATTRIBUTEREQUEST_H_
