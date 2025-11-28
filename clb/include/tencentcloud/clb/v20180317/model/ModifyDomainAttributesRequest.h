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
                     * 获取ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * @return LoadBalancerId ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * @param _loadBalancerId ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取ID of the CLB instance listener. You can call the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) API to query the ID.
                     * @return ListenerId ID of the CLB instance listener. You can call the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) API to query the ID.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置ID of the CLB instance listener. You can call the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) API to query the ID.
                     * @param _listenerId ID of the CLB instance listener. You can call the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) API to query the ID.
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
                     * 获取Domain name (must be a domain name under a created forwarding rule). if it is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * @return Domain Domain name (must be a domain name under a created forwarding rule). if it is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name (must be a domain name under a created forwarding rule). if it is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * @param _domain Domain name (must be a domain name under a created forwarding rule). if it is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The one domain name to modify. `NewDomain` and `NewDomains` can not be both specified.
                     * @return NewDomain The one domain name to modify. `NewDomain` and `NewDomains` can not be both specified.
                     * 
                     */
                    std::string GetNewDomain() const;

                    /**
                     * 设置The one domain name to modify. `NewDomain` and `NewDomains` can not be both specified.
                     * @param _newDomain The one domain name to modify. `NewDomain` and `NewDomains` can not be both specified.
                     * 
                     */
                    void SetNewDomain(const std::string& _newDomain);

                    /**
                     * 判断参数 NewDomain 是否已赋值
                     * @return NewDomain 是否已赋值
                     * 
                     */
                    bool NewDomainHasBeenSet() const;

                    /**
                     * 获取Certificate information of the domain name. It is only applicable to listeners with SNI enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @return Certificate Certificate information of the domain name. It is only applicable to listeners with SNI enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置Certificate information of the domain name. It is only applicable to listeners with SNI enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @param _certificate Certificate information of the domain name. It is only applicable to listeners with SNI enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * 
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable HTTP/2. note that only HTTPS domain names support HTTP/2.
True: enable HTTP2. false: disable HTTP2.
                     * @return Http2 Specifies whether to enable HTTP/2. note that only HTTPS domain names support HTTP/2.
True: enable HTTP2. false: disable HTTP2.
                     * 
                     */
                    bool GetHttp2() const;

                    /**
                     * 设置Specifies whether to enable HTTP/2. note that only HTTPS domain names support HTTP/2.
True: enable HTTP2. false: disable HTTP2.
                     * @param _http2 Specifies whether to enable HTTP/2. note that only HTTPS domain names support HTTP/2.
True: enable HTTP2. false: disable HTTP2.
                     * 
                     */
                    void SetHttp2(const bool& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     * 
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取Whether to set as the default domain name. Note: Only one default domain name can be set under a listener.
True: set as default domain name. false: do not set as default domain name.
                     * @return DefaultServer Whether to set as the default domain name. Note: Only one default domain name can be set under a listener.
True: set as default domain name. false: do not set as default domain name.
                     * 
                     */
                    bool GetDefaultServer() const;

                    /**
                     * 设置Whether to set as the default domain name. Note: Only one default domain name can be set under a listener.
True: set as default domain name. false: do not set as default domain name.
                     * @param _defaultServer Whether to set as the default domain name. Note: Only one default domain name can be set under a listener.
True: set as default domain name. false: do not set as default domain name.
                     * 
                     */
                    void SetDefaultServer(const bool& _defaultServer);

                    /**
                     * 判断参数 DefaultServer 是否已赋值
                     * @return DefaultServer 是否已赋值
                     * 
                     */
                    bool DefaultServerHasBeenSet() const;

                    /**
                     * 获取Specifies whether QUIC is enabled. note that QUIC can only be enabled for HTTPS domains.
True: enable QUIC. False: disable.
                     * @return Quic Specifies whether QUIC is enabled. note that QUIC can only be enabled for HTTPS domains.
True: enable QUIC. False: disable.
                     * 
                     */
                    bool GetQuic() const;

                    /**
                     * 设置Specifies whether QUIC is enabled. note that QUIC can only be enabled for HTTPS domains.
True: enable QUIC. False: disable.
                     * @param _quic Specifies whether QUIC is enabled. note that QUIC can only be enabled for HTTPS domains.
True: enable QUIC. False: disable.
                     * 
                     */
                    void SetQuic(const bool& _quic);

                    /**
                     * 判断参数 Quic 是否已赋值
                     * @return Quic 是否已赋值
                     * 
                     */
                    bool QuicHasBeenSet() const;

                    /**
                     * 获取Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     * @return NewDefaultServerDomain Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     * 
                     */
                    std::string GetNewDefaultServerDomain() const;

                    /**
                     * 设置Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     * @param _newDefaultServerDomain Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     * 
                     */
                    void SetNewDefaultServerDomain(const std::string& _newDefaultServerDomain);

                    /**
                     * 判断参数 NewDefaultServerDomain 是否已赋值
                     * @return NewDefaultServerDomain 是否已赋值
                     * 
                     */
                    bool NewDefaultServerDomainHasBeenSet() const;

                    /**
                     * 获取The new domain names to modify. `NewDomain` and `NewDomains` can not be both specified.
                     * @return NewDomains The new domain names to modify. `NewDomain` and `NewDomains` can not be both specified.
                     * 
                     */
                    std::vector<std::string> GetNewDomains() const;

                    /**
                     * 设置The new domain names to modify. `NewDomain` and `NewDomains` can not be both specified.
                     * @param _newDomains The new domain names to modify. `NewDomain` and `NewDomains` can not be both specified.
                     * 
                     */
                    void SetNewDomains(const std::vector<std::string>& _newDomains);

                    /**
                     * 判断参数 NewDomains 是否已赋值
                     * @return NewDomains 是否已赋值
                     * 
                     */
                    bool NewDomainsHasBeenSet() const;

                    /**
                     * 获取Certificate information related to the domain name. Note: This applies only to listeners with SNI enabled. Multiple server certificates with different algorithm types can be input simultaneously, but this parameter cannot be input together with the Certificate.
                     * @return MultiCertInfo Certificate information related to the domain name. Note: This applies only to listeners with SNI enabled. Multiple server certificates with different algorithm types can be input simultaneously, but this parameter cannot be input together with the Certificate.
                     * 
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置Certificate information related to the domain name. Note: This applies only to listeners with SNI enabled. Multiple server certificates with different algorithm types can be input simultaneously, but this parameter cannot be input together with the Certificate.
                     * @param _multiCertInfo Certificate information related to the domain name. Note: This applies only to listeners with SNI enabled. Multiple server certificates with different algorithm types can be input simultaneously, but this parameter cannot be input together with the Certificate.
                     * 
                     */
                    void SetMultiCertInfo(const MultiCertInfo& _multiCertInfo);

                    /**
                     * 判断参数 MultiCertInfo 是否已赋值
                     * @return MultiCertInfo 是否已赋值
                     * 
                     */
                    bool MultiCertInfoHasBeenSet() const;

                private:

                    /**
                     * ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * ID of the CLB instance listener. You can call the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) API to query the ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Domain name (must be a domain name under a created forwarding rule). if it is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
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
                     * Specifies whether to enable HTTP/2. note that only HTTPS domain names support HTTP/2.
True: enable HTTP2. false: disable HTTP2.
                     */
                    bool m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * Whether to set as the default domain name. Note: Only one default domain name can be set under a listener.
True: set as default domain name. false: do not set as default domain name.
                     */
                    bool m_defaultServer;
                    bool m_defaultServerHasBeenSet;

                    /**
                     * Specifies whether QUIC is enabled. note that QUIC can only be enabled for HTTPS domains.
True: enable QUIC. False: disable.
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
                     * Certificate information related to the domain name. Note: This applies only to listeners with SNI enabled. Multiple server certificates with different algorithm types can be input simultaneously, but this parameter cannot be input together with the Certificate.
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYDOMAINATTRIBUTESREQUEST_H_
