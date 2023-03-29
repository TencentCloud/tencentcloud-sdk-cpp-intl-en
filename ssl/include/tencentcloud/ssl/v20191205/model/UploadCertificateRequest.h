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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * UploadCertificate request structure.
                */
                class UploadCertificateRequest : public AbstractModel
                {
                public:
                    UploadCertificateRequest();
                    ~UploadCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Public key of the certificate
                     * @return CertificatePublicKey Public key of the certificate
                     */
                    std::string GetCertificatePublicKey() const;

                    /**
                     * 设置Public key of the certificate
                     * @param CertificatePublicKey Public key of the certificate
                     */
                    void SetCertificatePublicKey(const std::string& _certificatePublicKey);

                    /**
                     * 判断参数 CertificatePublicKey 是否已赋值
                     * @return CertificatePublicKey 是否已赋值
                     */
                    bool CertificatePublicKeyHasBeenSet() const;

                    /**
                     * 获取Private key content. This parameter is required when the certificate type is SVR, and not required when the certificate type is CA.
                     * @return CertificatePrivateKey Private key content. This parameter is required when the certificate type is SVR, and not required when the certificate type is CA.
                     */
                    std::string GetCertificatePrivateKey() const;

                    /**
                     * 设置Private key content. This parameter is required when the certificate type is SVR, and not required when the certificate type is CA.
                     * @param CertificatePrivateKey Private key content. This parameter is required when the certificate type is SVR, and not required when the certificate type is CA.
                     */
                    void SetCertificatePrivateKey(const std::string& _certificatePrivateKey);

                    /**
                     * 判断参数 CertificatePrivateKey 是否已赋值
                     * @return CertificatePrivateKey 是否已赋值
                     */
                    bool CertificatePrivateKeyHasBeenSet() const;

                    /**
                     * 获取Certificate type. `CA`: client certificate; `SVR`: server certificate. The default value is SVR.
                     * @return CertificateType Certificate type. `CA`: client certificate; `SVR`: server certificate. The default value is SVR.
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置Certificate type. `CA`: client certificate; `SVR`: server certificate. The default value is SVR.
                     * @param CertificateType Certificate type. `CA`: client certificate; `SVR`: server certificate. The default value is SVR.
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取Alias
                     * @return Alias Alias
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Alias
                     * @param Alias Alias
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param ProjectId Project ID
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return CertificateUse 
                     */
                    std::string GetCertificateUse() const;

                    /**
                     * 设置
                     * @param CertificateUse 
                     */
                    void SetCertificateUse(const std::string& _certificateUse);

                    /**
                     * 判断参数 CertificateUse 是否已赋值
                     * @return CertificateUse 是否已赋值
                     */
                    bool CertificateUseHasBeenSet() const;

                    /**
                     * 获取Whether a certificate can be repeatedly uploaded.
                     * @return Repeatable Whether a certificate can be repeatedly uploaded.
                     */
                    bool GetRepeatable() const;

                    /**
                     * 设置Whether a certificate can be repeatedly uploaded.
                     * @param Repeatable Whether a certificate can be repeatedly uploaded.
                     */
                    void SetRepeatable(const bool& _repeatable);

                    /**
                     * 判断参数 Repeatable 是否已赋值
                     * @return Repeatable 是否已赋值
                     */
                    bool RepeatableHasBeenSet() const;

                private:

                    /**
                     * Public key of the certificate
                     */
                    std::string m_certificatePublicKey;
                    bool m_certificatePublicKeyHasBeenSet;

                    /**
                     * Private key content. This parameter is required when the certificate type is SVR, and not required when the certificate type is CA.
                     */
                    std::string m_certificatePrivateKey;
                    bool m_certificatePrivateKeyHasBeenSet;

                    /**
                     * Certificate type. `CA`: client certificate; `SVR`: server certificate. The default value is SVR.
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * Alias
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Project ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_certificateUse;
                    bool m_certificateUseHasBeenSet;

                    /**
                     * Whether a certificate can be repeatedly uploaded.
                     */
                    bool m_repeatable;
                    bool m_repeatableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADCERTIFICATEREQUEST_H_
