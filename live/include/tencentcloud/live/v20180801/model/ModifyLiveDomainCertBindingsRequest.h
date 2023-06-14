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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINCERTBINDINGSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINCERTBINDINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/LiveCertDomainInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyLiveDomainCertBindings request structure.
                */
                class ModifyLiveDomainCertBindingsRequest : public AbstractModel
                {
                public:
                    ModifyLiveDomainCertBindingsRequest();
                    ~ModifyLiveDomainCertBindingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The playback domains to bind and whether to enable HTTPS for them.
If neither `CloudCertId` nor the public/private key is specified, and a domain is already bound with a certificate, this API will only update the HTTPS configuration of the domain and, if the certificate is a self-owned certificate, upload it to Tencent Cloud.
                     * @return DomainInfos The playback domains to bind and whether to enable HTTPS for them.
If neither `CloudCertId` nor the public/private key is specified, and a domain is already bound with a certificate, this API will only update the HTTPS configuration of the domain and, if the certificate is a self-owned certificate, upload it to Tencent Cloud.
                     * 
                     */
                    std::vector<LiveCertDomainInfo> GetDomainInfos() const;

                    /**
                     * 设置The playback domains to bind and whether to enable HTTPS for them.
If neither `CloudCertId` nor the public/private key is specified, and a domain is already bound with a certificate, this API will only update the HTTPS configuration of the domain and, if the certificate is a self-owned certificate, upload it to Tencent Cloud.
                     * @param _domainInfos The playback domains to bind and whether to enable HTTPS for them.
If neither `CloudCertId` nor the public/private key is specified, and a domain is already bound with a certificate, this API will only update the HTTPS configuration of the domain and, if the certificate is a self-owned certificate, upload it to Tencent Cloud.
                     * 
                     */
                    void SetDomainInfos(const std::vector<LiveCertDomainInfo>& _domainInfos);

                    /**
                     * 判断参数 DomainInfos 是否已赋值
                     * @return DomainInfos 是否已赋值
                     * 
                     */
                    bool DomainInfosHasBeenSet() const;

                    /**
                     * 获取The SSL certificate ID assigned by Tencent Cloud.
For details, see https://intl.cloud.tencent.com/document/api/400/41665?from_cn_redirect=1
                     * @return CloudCertId The SSL certificate ID assigned by Tencent Cloud.
For details, see https://intl.cloud.tencent.com/document/api/400/41665?from_cn_redirect=1
                     * 
                     */
                    std::string GetCloudCertId() const;

                    /**
                     * 设置The SSL certificate ID assigned by Tencent Cloud.
For details, see https://intl.cloud.tencent.com/document/api/400/41665?from_cn_redirect=1
                     * @param _cloudCertId The SSL certificate ID assigned by Tencent Cloud.
For details, see https://intl.cloud.tencent.com/document/api/400/41665?from_cn_redirect=1
                     * 
                     */
                    void SetCloudCertId(const std::string& _cloudCertId);

                    /**
                     * 判断参数 CloudCertId 是否已赋值
                     * @return CloudCertId 是否已赋值
                     * 
                     */
                    bool CloudCertIdHasBeenSet() const;

                    /**
                     * 获取The public key of the certificate.
You can specify either `CloudCertId` or the public/private key. If both are specified, the private and public key parameters will be ignored. If you pass in only the public and private keys, the corresponding certificate will be uploaded to Tencent Cloud SSL Certificate Service, which will generate a `CloudCertId` for the certificate.
                     * @return CertificatePublicKey The public key of the certificate.
You can specify either `CloudCertId` or the public/private key. If both are specified, the private and public key parameters will be ignored. If you pass in only the public and private keys, the corresponding certificate will be uploaded to Tencent Cloud SSL Certificate Service, which will generate a `CloudCertId` for the certificate.
                     * 
                     */
                    std::string GetCertificatePublicKey() const;

                    /**
                     * 设置The public key of the certificate.
You can specify either `CloudCertId` or the public/private key. If both are specified, the private and public key parameters will be ignored. If you pass in only the public and private keys, the corresponding certificate will be uploaded to Tencent Cloud SSL Certificate Service, which will generate a `CloudCertId` for the certificate.
                     * @param _certificatePublicKey The public key of the certificate.
You can specify either `CloudCertId` or the public/private key. If both are specified, the private and public key parameters will be ignored. If you pass in only the public and private keys, the corresponding certificate will be uploaded to Tencent Cloud SSL Certificate Service, which will generate a `CloudCertId` for the certificate.
                     * 
                     */
                    void SetCertificatePublicKey(const std::string& _certificatePublicKey);

                    /**
                     * 判断参数 CertificatePublicKey 是否已赋值
                     * @return CertificatePublicKey 是否已赋值
                     * 
                     */
                    bool CertificatePublicKeyHasBeenSet() const;

                    /**
                     * 获取The private key of the certificate.
You can specify either `CloudCertId` or the public/private key. If both are specified, the private and public key parameters will be ignored. If you pass in only the public and private keys, the corresponding certificate will be uploaded to Tencent Cloud SSL Certificate Service, which will generate a `CloudCertId` for the certificate.
                     * @return CertificatePrivateKey The private key of the certificate.
You can specify either `CloudCertId` or the public/private key. If both are specified, the private and public key parameters will be ignored. If you pass in only the public and private keys, the corresponding certificate will be uploaded to Tencent Cloud SSL Certificate Service, which will generate a `CloudCertId` for the certificate.
                     * 
                     */
                    std::string GetCertificatePrivateKey() const;

                    /**
                     * 设置The private key of the certificate.
You can specify either `CloudCertId` or the public/private key. If both are specified, the private and public key parameters will be ignored. If you pass in only the public and private keys, the corresponding certificate will be uploaded to Tencent Cloud SSL Certificate Service, which will generate a `CloudCertId` for the certificate.
                     * @param _certificatePrivateKey The private key of the certificate.
You can specify either `CloudCertId` or the public/private key. If both are specified, the private and public key parameters will be ignored. If you pass in only the public and private keys, the corresponding certificate will be uploaded to Tencent Cloud SSL Certificate Service, which will generate a `CloudCertId` for the certificate.
                     * 
                     */
                    void SetCertificatePrivateKey(const std::string& _certificatePrivateKey);

                    /**
                     * 判断参数 CertificatePrivateKey 是否已赋值
                     * @return CertificatePrivateKey 是否已赋值
                     * 
                     */
                    bool CertificatePrivateKeyHasBeenSet() const;

                    /**
                     * 获取The remarks for the certificate in Tencent Cloud SSL Certificate Service. This parameter will be ignored if `CloudCertId` is specified.
                     * @return CertificateAlias The remarks for the certificate in Tencent Cloud SSL Certificate Service. This parameter will be ignored if `CloudCertId` is specified.
                     * 
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置The remarks for the certificate in Tencent Cloud SSL Certificate Service. This parameter will be ignored if `CloudCertId` is specified.
                     * @param _certificateAlias The remarks for the certificate in Tencent Cloud SSL Certificate Service. This parameter will be ignored if `CloudCertId` is specified.
                     * 
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     * 
                     */
                    bool CertificateAliasHasBeenSet() const;

                private:

                    /**
                     * The playback domains to bind and whether to enable HTTPS for them.
If neither `CloudCertId` nor the public/private key is specified, and a domain is already bound with a certificate, this API will only update the HTTPS configuration of the domain and, if the certificate is a self-owned certificate, upload it to Tencent Cloud.
                     */
                    std::vector<LiveCertDomainInfo> m_domainInfos;
                    bool m_domainInfosHasBeenSet;

                    /**
                     * The SSL certificate ID assigned by Tencent Cloud.
For details, see https://intl.cloud.tencent.com/document/api/400/41665?from_cn_redirect=1
                     */
                    std::string m_cloudCertId;
                    bool m_cloudCertIdHasBeenSet;

                    /**
                     * The public key of the certificate.
You can specify either `CloudCertId` or the public/private key. If both are specified, the private and public key parameters will be ignored. If you pass in only the public and private keys, the corresponding certificate will be uploaded to Tencent Cloud SSL Certificate Service, which will generate a `CloudCertId` for the certificate.
                     */
                    std::string m_certificatePublicKey;
                    bool m_certificatePublicKeyHasBeenSet;

                    /**
                     * The private key of the certificate.
You can specify either `CloudCertId` or the public/private key. If both are specified, the private and public key parameters will be ignored. If you pass in only the public and private keys, the corresponding certificate will be uploaded to Tencent Cloud SSL Certificate Service, which will generate a `CloudCertId` for the certificate.
                     */
                    std::string m_certificatePrivateKey;
                    bool m_certificatePrivateKeyHasBeenSet;

                    /**
                     * The remarks for the certificate in Tencent Cloud SSL Certificate Service. This parameter will be ignored if `CloudCertId` is specified.
                     */
                    std::string m_certificateAlias;
                    bool m_certificateAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINCERTBINDINGSREQUEST_H_
