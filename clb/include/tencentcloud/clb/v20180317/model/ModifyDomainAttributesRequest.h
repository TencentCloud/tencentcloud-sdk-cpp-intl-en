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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYDOMAINATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYDOMAINATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/CertificateInput.h>
#include <tencentcloud/clb/v20180317/model/MultiCertInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyDomainAttributes request structure.
                */
                class ModifyDomainAttributesRequest : public AbstractModel
                {
                public:
                    ModifyDomainAttributesRequest();
                    ~ModifyDomainAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance ID
                     * @return LoadBalancerId CLB instance ID
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID
                     * @param LoadBalancerId CLB instance ID
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取CLB listener ID
                     * @return ListenerId CLB listener ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB listener ID
                     * @param ListenerId CLB listener ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取The domain name, which must be associated with an existing forwarding rule. If there are multiple domain names, you only need to specify one.
                     * @return Domain The domain name, which must be associated with an existing forwarding rule. If there are multiple domain names, you only need to specify one.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain name, which must be associated with an existing forwarding rule. If there are multiple domain names, you only need to specify one.
                     * @param Domain The domain name, which must be associated with an existing forwarding rule. If there are multiple domain names, you only need to specify one.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The one domain name to modify. `NewDomain` and `NewDomains` can not be both specified.
                     * @return NewDomain The one domain name to modify. `NewDomain` and `NewDomains` can not be both specified.
                     */
                    std::string GetNewDomain() const;

                    /**
                     * 设置The one domain name to modify. `NewDomain` and `NewDomains` can not be both specified.
                     * @param NewDomain The one domain name to modify. `NewDomain` and `NewDomains` can not be both specified.
                     */
                    void SetNewDomain(const std::string& _newDomain);

                    /**
                     * 判断参数 NewDomain 是否已赋值
                     * @return NewDomain 是否已赋值
                     */
                    bool NewDomainHasBeenSet() const;

                    /**
                     * 获取Certificate information of the domain name. It is only applicable to listeners with SNI enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @return Certificate Certificate information of the domain name. It is only applicable to listeners with SNI enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置Certificate information of the domain name. It is only applicable to listeners with SNI enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @param Certificate Certificate information of the domain name. It is only applicable to listeners with SNI enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取Whether to enable HTTP/2. Note: HTTP/2 can be enabled only for HTTPS domain names.
                     * @return Http2 Whether to enable HTTP/2. Note: HTTP/2 can be enabled only for HTTPS domain names.
                     */
                    bool GetHttp2() const;

                    /**
                     * 设置Whether to enable HTTP/2. Note: HTTP/2 can be enabled only for HTTPS domain names.
                     * @param Http2 Whether to enable HTTP/2. Note: HTTP/2 can be enabled only for HTTPS domain names.
                     */
                    void SetHttp2(const bool& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取Whether to set this domain name as the default domain name. Note: Only one default domain name can be set under one listener.
                     * @return DefaultServer Whether to set this domain name as the default domain name. Note: Only one default domain name can be set under one listener.
                     */
                    bool GetDefaultServer() const;

                    /**
                     * 设置Whether to set this domain name as the default domain name. Note: Only one default domain name can be set under one listener.
                     * @param DefaultServer Whether to set this domain name as the default domain name. Note: Only one default domain name can be set under one listener.
                     */
                    void SetDefaultServer(const bool& _defaultServer);

                    /**
                     * 判断参数 DefaultServer 是否已赋值
                     * @return DefaultServer 是否已赋值
                     */
                    bool DefaultServerHasBeenSet() const;

                    /**
                     * 获取Whether to enable QUIC. Note: QUIC can be enabled only for HTTPS domain names.
                     * @return Quic Whether to enable QUIC. Note: QUIC can be enabled only for HTTPS domain names.
                     */
                    bool GetQuic() const;

                    /**
                     * 设置Whether to enable QUIC. Note: QUIC can be enabled only for HTTPS domain names.
                     * @param Quic Whether to enable QUIC. Note: QUIC can be enabled only for HTTPS domain names.
                     */
                    void SetQuic(const bool& _quic);

                    /**
                     * 判断参数 Quic 是否已赋值
                     * @return Quic 是否已赋值
                     */
                    bool QuicHasBeenSet() const;

                    /**
                     * 获取Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     * @return NewDefaultServerDomain Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     */
                    std::string GetNewDefaultServerDomain() const;

                    /**
                     * 设置Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     * @param NewDefaultServerDomain Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     */
                    void SetNewDefaultServerDomain(const std::string& _newDefaultServerDomain);

                    /**
                     * 判断参数 NewDefaultServerDomain 是否已赋值
                     * @return NewDefaultServerDomain 是否已赋值
                     */
                    bool NewDefaultServerDomainHasBeenSet() const;

                    /**
                     * 获取The new domain names to modify. `NewDomain` and `NewDomains` can not be both specified.
                     * @return NewDomains The new domain names to modify. `NewDomain` and `NewDomains` can not be both specified.
                     */
                    std::vector<std::string> GetNewDomains() const;

                    /**
                     * 设置The new domain names to modify. `NewDomain` and `NewDomains` can not be both specified.
                     * @param NewDomains The new domain names to modify. `NewDomain` and `NewDomains` can not be both specified.
                     */
                    void SetNewDomains(const std::vector<std::string>& _newDomains);

                    /**
                     * 判断参数 NewDomains 是否已赋值
                     * @return NewDomains 是否已赋值
                     */
                    bool NewDomainsHasBeenSet() const;

                    /**
                     * 获取Certificate information of the domain name. It is only applicable to listeners with SNI enabled. You can specify multiple server-side certificates with different algorithm types. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @return MultiCertInfo Certificate information of the domain name. It is only applicable to listeners with SNI enabled. You can specify multiple server-side certificates with different algorithm types. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置Certificate information of the domain name. It is only applicable to listeners with SNI enabled. You can specify multiple server-side certificates with different algorithm types. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @param MultiCertInfo Certificate information of the domain name. It is only applicable to listeners with SNI enabled. You can specify multiple server-side certificates with different algorithm types. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    void SetMultiCertInfo(const MultiCertInfo& _multiCertInfo);

                    /**
                     * 判断参数 MultiCertInfo 是否已赋值
                     * @return MultiCertInfo 是否已赋值
                     */
                    bool MultiCertInfoHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * The domain name, which must be associated with an existing forwarding rule. If there are multiple domain names, you only need to specify one.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The one domain name to modify. `NewDomain` and `NewDomains` can not be both specified.
                     */
                    std::string m_newDomain;
                    bool m_newDomainHasBeenSet;

                    /**
                     * Certificate information of the domain name. It is only applicable to listeners with SNI enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Whether to enable HTTP/2. Note: HTTP/2 can be enabled only for HTTPS domain names.
                     */
                    bool m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * Whether to set this domain name as the default domain name. Note: Only one default domain name can be set under one listener.
                     */
                    bool m_defaultServer;
                    bool m_defaultServerHasBeenSet;

                    /**
                     * Whether to enable QUIC. Note: QUIC can be enabled only for HTTPS domain names.
                     */
                    bool m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     */
                    std::string m_newDefaultServerDomain;
                    bool m_newDefaultServerDomainHasBeenSet;

                    /**
                     * The new domain names to modify. `NewDomain` and `NewDomains` can not be both specified.
                     */
                    std::vector<std::string> m_newDomains;
                    bool m_newDomainsHasBeenSet;

                    /**
                     * Certificate information of the domain name. It is only applicable to listeners with SNI enabled. You can specify multiple server-side certificates with different algorithm types. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYDOMAINATTRIBUTESREQUEST_H_
