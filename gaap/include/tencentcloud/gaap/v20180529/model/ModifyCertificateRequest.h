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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYCERTIFICATEREQUEST_H_

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
                * ModifyCertificate request structure.
                */
                class ModifyCertificateRequest : public AbstractModel
                {
                public:
                    ModifyCertificateRequest();
                    ~ModifyCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Listener instance ID
                     * @return ListenerId Listener instance ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener instance ID
                     * @param ListenerId Listener instance ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Domain name whose certificate needs to be modified
                     * @return Domain Domain name whose certificate needs to be modified
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name whose certificate needs to be modified
                     * @param Domain Domain name whose certificate needs to be modified
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取New server certificate ID:
If CertificateId=default, using the listener certificate.
                     * @return CertificateId New server certificate ID:
If CertificateId=default, using the listener certificate.
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置New server certificate ID:
If CertificateId=default, using the listener certificate.
                     * @param CertificateId New server certificate ID:
If CertificateId=default, using the listener certificate.
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取New client certificate ID:
If ClientCertificateId=default, using the listener certificate.
This parameter is required only when the mutual authentication is adopted.
                     * @return ClientCertificateId New client certificate ID:
If ClientCertificateId=default, using the listener certificate.
This parameter is required only when the mutual authentication is adopted.
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置New client certificate ID:
If ClientCertificateId=default, using the listener certificate.
This parameter is required only when the mutual authentication is adopted.
                     * @param ClientCertificateId New client certificate ID:
If ClientCertificateId=default, using the listener certificate.
This parameter is required only when the mutual authentication is adopted.
                     */
                    void SetClientCertificateId(const std::string& _clientCertificateId);

                    /**
                     * 判断参数 ClientCertificateId 是否已赋值
                     * @return ClientCertificateId 是否已赋值
                     */
                    bool ClientCertificateIdHasBeenSet() const;

                    /**
                     * 获取List of new IDs of multiple client certificates, where:
This parameter or the `ClientCertificateId` parameter is required for mutual authentication only.
                     * @return PolyClientCertificateIds List of new IDs of multiple client certificates, where:
This parameter or the `ClientCertificateId` parameter is required for mutual authentication only.
                     */
                    std::vector<std::string> GetPolyClientCertificateIds() const;

                    /**
                     * 设置List of new IDs of multiple client certificates, where:
This parameter or the `ClientCertificateId` parameter is required for mutual authentication only.
                     * @param PolyClientCertificateIds List of new IDs of multiple client certificates, where:
This parameter or the `ClientCertificateId` parameter is required for mutual authentication only.
                     */
                    void SetPolyClientCertificateIds(const std::vector<std::string>& _polyClientCertificateIds);

                    /**
                     * 判断参数 PolyClientCertificateIds 是否已赋值
                     * @return PolyClientCertificateIds 是否已赋值
                     */
                    bool PolyClientCertificateIdsHasBeenSet() const;

                private:

                    /**
                     * Listener instance ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Domain name whose certificate needs to be modified
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * New server certificate ID:
If CertificateId=default, using the listener certificate.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * New client certificate ID:
If ClientCertificateId=default, using the listener certificate.
This parameter is required only when the mutual authentication is adopted.
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * List of new IDs of multiple client certificates, where:
This parameter or the `ClientCertificateId` parameter is required for mutual authentication only.
                     */
                    std::vector<std::string> m_polyClientCertificateIds;
                    bool m_polyClientCertificateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYCERTIFICATEREQUEST_H_
