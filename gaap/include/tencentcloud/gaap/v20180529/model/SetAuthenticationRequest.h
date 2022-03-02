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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_SETAUTHENTICATIONREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_SETAUTHENTICATIONREQUEST_H_

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
                * SetAuthentication request structure.
                */
                class SetAuthenticationRequest : public AbstractModel
                {
                public:
                    SetAuthenticationRequest();
                    ~SetAuthenticationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Listener ID.
                     * @return ListenerId Listener ID.
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID.
                     * @param ListenerId Listener ID.
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取The domain name requiring advanced configuration, i.e., the domain name of the listener's forwarding rules.
                     * @return Domain The domain name requiring advanced configuration, i.e., the domain name of the listener's forwarding rules.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain name requiring advanced configuration, i.e., the domain name of the listener's forwarding rules.
                     * @param Domain The domain name requiring advanced configuration, i.e., the domain name of the listener's forwarding rules.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Whether to enable the basic authentication:
0: disable basic authentication;
1: enable basic authentication.
The default value is 0.
                     * @return BasicAuth Whether to enable the basic authentication:
0: disable basic authentication;
1: enable basic authentication.
The default value is 0.
                     */
                    int64_t GetBasicAuth() const;

                    /**
                     * 设置Whether to enable the basic authentication:
0: disable basic authentication;
1: enable basic authentication.
The default value is 0.
                     * @param BasicAuth Whether to enable the basic authentication:
0: disable basic authentication;
1: enable basic authentication.
The default value is 0.
                     */
                    void SetBasicAuth(const int64_t& _basicAuth);

                    /**
                     * 判断参数 BasicAuth 是否已赋值
                     * @return BasicAuth 是否已赋值
                     */
                    bool BasicAuthHasBeenSet() const;

                    /**
                     * 获取Whether to enable the connection authentication, which is for the origin server to authenticate GAAP.
0: disable;
1: enable.
The default value is 0.
                     * @return GaapAuth Whether to enable the connection authentication, which is for the origin server to authenticate GAAP.
0: disable;
1: enable.
The default value is 0.
                     */
                    int64_t GetGaapAuth() const;

                    /**
                     * 设置Whether to enable the connection authentication, which is for the origin server to authenticate GAAP.
0: disable;
1: enable.
The default value is 0.
                     * @param GaapAuth Whether to enable the connection authentication, which is for the origin server to authenticate GAAP.
0: disable;
1: enable.
The default value is 0.
                     */
                    void SetGaapAuth(const int64_t& _gaapAuth);

                    /**
                     * 判断参数 GaapAuth 是否已赋值
                     * @return GaapAuth 是否已赋值
                     */
                    bool GaapAuthHasBeenSet() const;

                    /**
                     * 获取Whether to enable the origin server authentication, which is for GAAP to authenticate the server.
0: disable;
1: enable.
The default value is 0.
                     * @return RealServerAuth Whether to enable the origin server authentication, which is for GAAP to authenticate the server.
0: disable;
1: enable.
The default value is 0.
                     */
                    int64_t GetRealServerAuth() const;

                    /**
                     * 设置Whether to enable the origin server authentication, which is for GAAP to authenticate the server.
0: disable;
1: enable.
The default value is 0.
                     * @param RealServerAuth Whether to enable the origin server authentication, which is for GAAP to authenticate the server.
0: disable;
1: enable.
The default value is 0.
                     */
                    void SetRealServerAuth(const int64_t& _realServerAuth);

                    /**
                     * 判断参数 RealServerAuth 是否已赋值
                     * @return RealServerAuth 是否已赋值
                     */
                    bool RealServerAuthHasBeenSet() const;

                    /**
                     * 获取Basic authentication configuration ID, which is obtained from the certificate management page.
                     * @return BasicAuthConfId Basic authentication configuration ID, which is obtained from the certificate management page.
                     */
                    std::string GetBasicAuthConfId() const;

                    /**
                     * 设置Basic authentication configuration ID, which is obtained from the certificate management page.
                     * @param BasicAuthConfId Basic authentication configuration ID, which is obtained from the certificate management page.
                     */
                    void SetBasicAuthConfId(const std::string& _basicAuthConfId);

                    /**
                     * 判断参数 BasicAuthConfId 是否已赋值
                     * @return BasicAuthConfId 是否已赋值
                     */
                    bool BasicAuthConfIdHasBeenSet() const;

                    /**
                     * 获取Connection SSL certificate ID, which is obtained from the certificate management page.
                     * @return GaapCertificateId Connection SSL certificate ID, which is obtained from the certificate management page.
                     */
                    std::string GetGaapCertificateId() const;

                    /**
                     * 设置Connection SSL certificate ID, which is obtained from the certificate management page.
                     * @param GaapCertificateId Connection SSL certificate ID, which is obtained from the certificate management page.
                     */
                    void SetGaapCertificateId(const std::string& _gaapCertificateId);

                    /**
                     * 判断参数 GaapCertificateId 是否已赋值
                     * @return GaapCertificateId 是否已赋值
                     */
                    bool GaapCertificateIdHasBeenSet() const;

                    /**
                     * 获取CA certificate ID of the origin server, which is obtained from the certificate management page. When authenticating the origin server, enter this parameter or the `RealServerCertificateIds` parameter.
                     * @return RealServerCertificateId CA certificate ID of the origin server, which is obtained from the certificate management page. When authenticating the origin server, enter this parameter or the `RealServerCertificateIds` parameter.
                     */
                    std::string GetRealServerCertificateId() const;

                    /**
                     * 设置CA certificate ID of the origin server, which is obtained from the certificate management page. When authenticating the origin server, enter this parameter or the `RealServerCertificateIds` parameter.
                     * @param RealServerCertificateId CA certificate ID of the origin server, which is obtained from the certificate management page. When authenticating the origin server, enter this parameter or the `RealServerCertificateIds` parameter.
                     */
                    void SetRealServerCertificateId(const std::string& _realServerCertificateId);

                    /**
                     * 判断参数 RealServerCertificateId 是否已赋值
                     * @return RealServerCertificateId 是否已赋值
                     */
                    bool RealServerCertificateIdHasBeenSet() const;

                    /**
                     * 获取This field has been disused. Use ServerNameIndication instead.
                     * @return RealServerCertificateDomain This field has been disused. Use ServerNameIndication instead.
                     */
                    std::string GetRealServerCertificateDomain() const;

                    /**
                     * 设置This field has been disused. Use ServerNameIndication instead.
                     * @param RealServerCertificateDomain This field has been disused. Use ServerNameIndication instead.
                     */
                    void SetRealServerCertificateDomain(const std::string& _realServerCertificateDomain);

                    /**
                     * 判断参数 RealServerCertificateDomain 是否已赋值
                     * @return RealServerCertificateDomain 是否已赋值
                     */
                    bool RealServerCertificateDomainHasBeenSet() const;

                    /**
                     * 获取CA certificate IDs of multiple origin servers, which are obtained from the certificate management page. When authenticating the origin servers, enter this parameter or the `RealServerCertificateId` parameter.
                     * @return PolyRealServerCertificateIds CA certificate IDs of multiple origin servers, which are obtained from the certificate management page. When authenticating the origin servers, enter this parameter or the `RealServerCertificateId` parameter.
                     */
                    std::vector<std::string> GetPolyRealServerCertificateIds() const;

                    /**
                     * 设置CA certificate IDs of multiple origin servers, which are obtained from the certificate management page. When authenticating the origin servers, enter this parameter or the `RealServerCertificateId` parameter.
                     * @param PolyRealServerCertificateIds CA certificate IDs of multiple origin servers, which are obtained from the certificate management page. When authenticating the origin servers, enter this parameter or the `RealServerCertificateId` parameter.
                     */
                    void SetPolyRealServerCertificateIds(const std::vector<std::string>& _polyRealServerCertificateIds);

                    /**
                     * 判断参数 PolyRealServerCertificateIds 是否已赋值
                     * @return PolyRealServerCertificateIds 是否已赋值
                     */
                    bool PolyRealServerCertificateIdsHasBeenSet() const;

                private:

                    /**
                     * Listener ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * The domain name requiring advanced configuration, i.e., the domain name of the listener's forwarding rules.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Whether to enable the basic authentication:
0: disable basic authentication;
1: enable basic authentication.
The default value is 0.
                     */
                    int64_t m_basicAuth;
                    bool m_basicAuthHasBeenSet;

                    /**
                     * Whether to enable the connection authentication, which is for the origin server to authenticate GAAP.
0: disable;
1: enable.
The default value is 0.
                     */
                    int64_t m_gaapAuth;
                    bool m_gaapAuthHasBeenSet;

                    /**
                     * Whether to enable the origin server authentication, which is for GAAP to authenticate the server.
0: disable;
1: enable.
The default value is 0.
                     */
                    int64_t m_realServerAuth;
                    bool m_realServerAuthHasBeenSet;

                    /**
                     * Basic authentication configuration ID, which is obtained from the certificate management page.
                     */
                    std::string m_basicAuthConfId;
                    bool m_basicAuthConfIdHasBeenSet;

                    /**
                     * Connection SSL certificate ID, which is obtained from the certificate management page.
                     */
                    std::string m_gaapCertificateId;
                    bool m_gaapCertificateIdHasBeenSet;

                    /**
                     * CA certificate ID of the origin server, which is obtained from the certificate management page. When authenticating the origin server, enter this parameter or the `RealServerCertificateIds` parameter.
                     */
                    std::string m_realServerCertificateId;
                    bool m_realServerCertificateIdHasBeenSet;

                    /**
                     * This field has been disused. Use ServerNameIndication instead.
                     */
                    std::string m_realServerCertificateDomain;
                    bool m_realServerCertificateDomainHasBeenSet;

                    /**
                     * CA certificate IDs of multiple origin servers, which are obtained from the certificate management page. When authenticating the origin servers, enter this parameter or the `RealServerCertificateId` parameter.
                     */
                    std::vector<std::string> m_polyRealServerCertificateIds;
                    bool m_polyRealServerCertificateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_SETAUTHENTICATIONREQUEST_H_
