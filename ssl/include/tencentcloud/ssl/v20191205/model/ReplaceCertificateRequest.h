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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_REPLACECERTIFICATEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_REPLACECERTIFICATEREQUEST_H_

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
                * ReplaceCertificate request structure.
                */
                class ReplaceCertificateRequest : public AbstractModel
                {
                public:
                    ReplaceCertificateRequest();
                    ~ReplaceCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Certificate ID.
                     * @return CertificateId Certificate ID.
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Certificate ID.
                     * @param CertificateId Certificate ID.
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Verification type. DNS_AUTO: automatic DNS verification; DNS: manual DNS verification; FILE: verification by file.
                     * @return ValidType Verification type. DNS_AUTO: automatic DNS verification; DNS: manual DNS verification; FILE: verification by file.
                     */
                    std::string GetValidType() const;

                    /**
                     * 设置Verification type. DNS_AUTO: automatic DNS verification; DNS: manual DNS verification; FILE: verification by file.
                     * @param ValidType Verification type. DNS_AUTO: automatic DNS verification; DNS: manual DNS verification; FILE: verification by file.
                     */
                    void SetValidType(const std::string& _validType);

                    /**
                     * 判断参数 ValidType 是否已赋值
                     * @return ValidType 是否已赋值
                     */
                    bool ValidTypeHasBeenSet() const;

                    /**
                     * 获取Type. Original: original certificate CSR; upload: uploaded manually; online: generated online. The default value is original.
                     * @return CsrType Type. Original: original certificate CSR; upload: uploaded manually; online: generated online. The default value is original.
                     */
                    std::string GetCsrType() const;

                    /**
                     * 设置Type. Original: original certificate CSR; upload: uploaded manually; online: generated online. The default value is original.
                     * @param CsrType Type. Original: original certificate CSR; upload: uploaded manually; online: generated online. The default value is original.
                     */
                    void SetCsrType(const std::string& _csrType);

                    /**
                     * 判断参数 CsrType 是否已赋值
                     * @return CsrType 是否已赋值
                     */
                    bool CsrTypeHasBeenSet() const;

                    /**
                     * 获取CSR content.
                     * @return CsrContent CSR content.
                     */
                    std::string GetCsrContent() const;

                    /**
                     * 设置CSR content.
                     * @param CsrContent CSR content.
                     */
                    void SetCsrContent(const std::string& _csrContent);

                    /**
                     * 判断参数 CsrContent 是否已赋值
                     * @return CsrContent 是否已赋值
                     */
                    bool CsrContentHasBeenSet() const;

                    /**
                     * 获取Password of the key.
                     * @return CsrkeyPassword Password of the key.
                     */
                    std::string GetCsrkeyPassword() const;

                    /**
                     * 设置Password of the key.
                     * @param CsrkeyPassword Password of the key.
                     */
                    void SetCsrkeyPassword(const std::string& _csrkeyPassword);

                    /**
                     * 判断参数 CsrkeyPassword 是否已赋值
                     * @return CsrkeyPassword 是否已赋值
                     */
                    bool CsrkeyPasswordHasBeenSet() const;

                private:

                    /**
                     * Certificate ID.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Verification type. DNS_AUTO: automatic DNS verification; DNS: manual DNS verification; FILE: verification by file.
                     */
                    std::string m_validType;
                    bool m_validTypeHasBeenSet;

                    /**
                     * Type. Original: original certificate CSR; upload: uploaded manually; online: generated online. The default value is original.
                     */
                    std::string m_csrType;
                    bool m_csrTypeHasBeenSet;

                    /**
                     * CSR content.
                     */
                    std::string m_csrContent;
                    bool m_csrContentHasBeenSet;

                    /**
                     * Password of the key.
                     */
                    std::string m_csrkeyPassword;
                    bool m_csrkeyPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_REPLACECERTIFICATEREQUEST_H_
