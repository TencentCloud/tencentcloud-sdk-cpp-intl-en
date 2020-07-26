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
                     * 获取Domain name, which must be under a created forwarding rule.
                     * @return Domain Domain name, which must be under a created forwarding rule.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name, which must be under a created forwarding rule.
                     * @param Domain Domain name, which must be under a created forwarding rule.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取New domain name
                     * @return NewDomain New domain name
                     */
                    std::string GetNewDomain() const;

                    /**
                     * 设置New domain name
                     * @param NewDomain New domain name
                     */
                    void SetNewDomain(const std::string& _newDomain);

                    /**
                     * 判断参数 NewDomain 是否已赋值
                     * @return NewDomain 是否已赋值
                     */
                    bool NewDomainHasBeenSet() const;

                    /**
                     * 获取Domain name certificate information. Note: This is only applicable to SNI-enabled listeners.
                     * @return Certificate Domain name certificate information. Note: This is only applicable to SNI-enabled listeners.
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置Domain name certificate information. Note: This is only applicable to SNI-enabled listeners.
                     * @param Certificate Domain name certificate information. Note: This is only applicable to SNI-enabled listeners.
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
                     * 获取A listener must be configured with a default domain name. If you need to disable the default domain name, you must specify another one as the new default domain name.
                     * @return NewDefaultServerDomain A listener must be configured with a default domain name. If you need to disable the default domain name, you must specify another one as the new default domain name.
                     */
                    std::string GetNewDefaultServerDomain() const;

                    /**
                     * 设置A listener must be configured with a default domain name. If you need to disable the default domain name, you must specify another one as the new default domain name.
                     * @param NewDefaultServerDomain A listener must be configured with a default domain name. If you need to disable the default domain name, you must specify another one as the new default domain name.
                     */
                    void SetNewDefaultServerDomain(const std::string& _newDefaultServerDomain);

                    /**
                     * 判断参数 NewDefaultServerDomain 是否已赋值
                     * @return NewDefaultServerDomain 是否已赋值
                     */
                    bool NewDefaultServerDomainHasBeenSet() const;

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
                     * Domain name, which must be under a created forwarding rule.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * New domain name
                     */
                    std::string m_newDomain;
                    bool m_newDomainHasBeenSet;

                    /**
                     * Domain name certificate information. Note: This is only applicable to SNI-enabled listeners.
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
                     * A listener must be configured with a default domain name. If you need to disable the default domain name, you must specify another one as the new default domain name.
                     */
                    std::string m_newDefaultServerDomain;
                    bool m_newDefaultServerDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYDOMAINATTRIBUTESREQUEST_H_
