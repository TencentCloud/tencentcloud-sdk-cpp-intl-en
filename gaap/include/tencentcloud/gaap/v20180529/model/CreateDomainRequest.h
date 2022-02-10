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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEDOMAINREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEDOMAINREQUEST_H_

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
                * CreateDomain request structure.
                */
                class CreateDomainRequest : public AbstractModel
                {
                public:
                    CreateDomainRequest();
                    ~CreateDomainRequest() = default;
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
                     * 获取Domain name to be created. Each listener supports up to 100 domain names.
                     * @return Domain Domain name to be created. Each listener supports up to 100 domain names.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name to be created. Each listener supports up to 100 domain names.
                     * @param Domain Domain name to be created. Each listener supports up to 100 domain names.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Server certificate, which is used for the HTTPS interaction between client and GAAP.
                     * @return CertificateId Server certificate, which is used for the HTTPS interaction between client and GAAP.
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Server certificate, which is used for the HTTPS interaction between client and GAAP.
                     * @param CertificateId Server certificate, which is used for the HTTPS interaction between client and GAAP.
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Client CA certificate, which is used for the HTTPS interaction between client and GAAP.
This field is required only when the mutual authentication method is adopted.
                     * @return ClientCertificateId Client CA certificate, which is used for the HTTPS interaction between client and GAAP.
This field is required only when the mutual authentication method is adopted.
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置Client CA certificate, which is used for the HTTPS interaction between client and GAAP.
This field is required only when the mutual authentication method is adopted.
                     * @param ClientCertificateId Client CA certificate, which is used for the HTTPS interaction between client and GAAP.
This field is required only when the mutual authentication method is adopted.
                     */
                    void SetClientCertificateId(const std::string& _clientCertificateId);

                    /**
                     * 判断参数 ClientCertificateId 是否已赋值
                     * @return ClientCertificateId 是否已赋值
                     */
                    bool ClientCertificateIdHasBeenSet() const;

                    /**
                     * 获取Client CA certificate, which is used for the HTTPS interaction between the client and GAAP.
This field or the `ClientCertificateId` field is required for mutual authentication only.
                     * @return PolyClientCertificateIds Client CA certificate, which is used for the HTTPS interaction between the client and GAAP.
This field or the `ClientCertificateId` field is required for mutual authentication only.
                     */
                    std::vector<std::string> GetPolyClientCertificateIds() const;

                    /**
                     * 设置Client CA certificate, which is used for the HTTPS interaction between the client and GAAP.
This field or the `ClientCertificateId` field is required for mutual authentication only.
                     * @param PolyClientCertificateIds Client CA certificate, which is used for the HTTPS interaction between the client and GAAP.
This field or the `ClientCertificateId` field is required for mutual authentication only.
                     */
                    void SetPolyClientCertificateIds(const std::vector<std::string>& _polyClientCertificateIds);

                    /**
                     * 判断参数 PolyClientCertificateIds 是否已赋值
                     * @return PolyClientCertificateIds 是否已赋值
                     */
                    bool PolyClientCertificateIdsHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
HTTP3 is not enabled by default. You can enable it with this field SetDomainHttp3.
                     * @return Http3Supported Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
HTTP3 is not enabled by default. You can enable it with this field SetDomainHttp3.
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
HTTP3 is not enabled by default. You can enable it with this field SetDomainHttp3.
                     * @param Http3Supported Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
HTTP3 is not enabled by default. You can enable it with this field SetDomainHttp3.
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     */
                    bool Http3SupportedHasBeenSet() const;

                private:

                    /**
                     * Listener ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Domain name to be created. Each listener supports up to 100 domain names.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Server certificate, which is used for the HTTPS interaction between client and GAAP.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Client CA certificate, which is used for the HTTPS interaction between client and GAAP.
This field is required only when the mutual authentication method is adopted.
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * Client CA certificate, which is used for the HTTPS interaction between the client and GAAP.
This field or the `ClientCertificateId` field is required for mutual authentication only.
                     */
                    std::vector<std::string> m_polyClientCertificateIds;
                    bool m_polyClientCertificateIdsHasBeenSet;

                    /**
                     * Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
HTTP3 is not enabled by default. You can enable it with this field SetDomainHttp3.
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEDOMAINREQUEST_H_
