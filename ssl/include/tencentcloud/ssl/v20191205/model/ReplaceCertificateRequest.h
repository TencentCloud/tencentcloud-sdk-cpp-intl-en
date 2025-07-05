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
                     * 获取Certificate ID
                     * @return CertificateId Certificate ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Certificate ID
                     * @param _certificateId Certificate ID
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
                     * 获取Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation
                     * @return ValidType Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation
                     * 
                     */
                    std::string GetValidType() const;

                    /**
                     * 设置Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation
                     * @param _validType Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation
                     * 
                     */
                    void SetValidType(const std::string& _validType);

                    /**
                     * 判断参数 ValidType 是否已赋值
                     * @return ValidType 是否已赋值
                     * 
                     */
                    bool ValidTypeHasBeenSet() const;

                    /**
                     * 获取Type. `Original`: original certificate CSR; `Upload`: uploaded manually; `Online`: generated online. The default value is original.
                     * @return CsrType Type. `Original`: original certificate CSR; `Upload`: uploaded manually; `Online`: generated online. The default value is original.
                     * 
                     */
                    std::string GetCsrType() const;

                    /**
                     * 设置Type. `Original`: original certificate CSR; `Upload`: uploaded manually; `Online`: generated online. The default value is original.
                     * @param _csrType Type. `Original`: original certificate CSR; `Upload`: uploaded manually; `Online`: generated online. The default value is original.
                     * 
                     */
                    void SetCsrType(const std::string& _csrType);

                    /**
                     * 判断参数 CsrType 是否已赋值
                     * @return CsrType 是否已赋值
                     * 
                     */
                    bool CsrTypeHasBeenSet() const;

                    /**
                     * 获取CSR content, required when uploading manually.
                     * @return CsrContent CSR content, required when uploading manually.
                     * 
                     */
                    std::string GetCsrContent() const;

                    /**
                     * 设置CSR content, required when uploading manually.
                     * @param _csrContent CSR content, required when uploading manually.
                     * 
                     */
                    void SetCsrContent(const std::string& _csrContent);

                    /**
                     * 判断参数 CsrContent 是否已赋值
                     * @return CsrContent 是否已赋值
                     * 
                     */
                    bool CsrContentHasBeenSet() const;

                    /**
                     * 获取Password of the key
                     * @return CsrkeyPassword Password of the key
                     * 
                     */
                    std::string GetCsrkeyPassword() const;

                    /**
                     * 设置Password of the key
                     * @param _csrkeyPassword Password of the key
                     * 
                     */
                    void SetCsrkeyPassword(const std::string& _csrkeyPassword);

                    /**
                     * 判断参数 CsrkeyPassword 是否已赋值
                     * @return CsrkeyPassword 是否已赋值
                     * 
                     */
                    bool CsrkeyPasswordHasBeenSet() const;

                    /**
                     * 获取Reissue reason
                     * @return Reason Reissue reason
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reissue reason
                     * @param _reason Reissue reason
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取The CSR encryption algorithm. Valid values: `RSA` (default), `ECC1`, and `SM2`.
This parameter is available for selection only when the value of `CsrType` is `Online`.
                     * @return CertCSREncryptAlgo The CSR encryption algorithm. Valid values: `RSA` (default), `ECC1`, and `SM2`.
This parameter is available for selection only when the value of `CsrType` is `Online`.
                     * 
                     */
                    std::string GetCertCSREncryptAlgo() const;

                    /**
                     * 设置The CSR encryption algorithm. Valid values: `RSA` (default), `ECC1`, and `SM2`.
This parameter is available for selection only when the value of `CsrType` is `Online`.
                     * @param _certCSREncryptAlgo The CSR encryption algorithm. Valid values: `RSA` (default), `ECC1`, and `SM2`.
This parameter is available for selection only when the value of `CsrType` is `Online`.
                     * 
                     */
                    void SetCertCSREncryptAlgo(const std::string& _certCSREncryptAlgo);

                    /**
                     * 判断参数 CertCSREncryptAlgo 是否已赋值
                     * @return CertCSREncryptAlgo 是否已赋值
                     * 
                     */
                    bool CertCSREncryptAlgoHasBeenSet() const;

                    /**
                     * 获取The CSR encryption parameters. When `CsrEncryptAlgo` is set to `RSA`, `2048` (default) and `4096` are available for selection; and when`CsrEncryptAlgo` is set to `ECC`, `prime256v1` (default) and `secp384r1` are available for selection. 
                     * @return CertCSRKeyParameter The CSR encryption parameters. When `CsrEncryptAlgo` is set to `RSA`, `2048` (default) and `4096` are available for selection; and when`CsrEncryptAlgo` is set to `ECC`, `prime256v1` (default) and `secp384r1` are available for selection. 
                     * 
                     */
                    std::string GetCertCSRKeyParameter() const;

                    /**
                     * 设置The CSR encryption parameters. When `CsrEncryptAlgo` is set to `RSA`, `2048` (default) and `4096` are available for selection; and when`CsrEncryptAlgo` is set to `ECC`, `prime256v1` (default) and `secp384r1` are available for selection. 
                     * @param _certCSRKeyParameter The CSR encryption parameters. When `CsrEncryptAlgo` is set to `RSA`, `2048` (default) and `4096` are available for selection; and when`CsrEncryptAlgo` is set to `ECC`, `prime256v1` (default) and `secp384r1` are available for selection. 
                     * 
                     */
                    void SetCertCSRKeyParameter(const std::string& _certCSRKeyParameter);

                    /**
                     * 判断参数 CertCSRKeyParameter 是否已赋值
                     * @return CertCSRKeyParameter 是否已赋值
                     * 
                     */
                    bool CertCSRKeyParameterHasBeenSet() const;

                private:

                    /**
                     * Certificate ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation
                     */
                    std::string m_validType;
                    bool m_validTypeHasBeenSet;

                    /**
                     * Type. `Original`: original certificate CSR; `Upload`: uploaded manually; `Online`: generated online. The default value is original.
                     */
                    std::string m_csrType;
                    bool m_csrTypeHasBeenSet;

                    /**
                     * CSR content, required when uploading manually.
                     */
                    std::string m_csrContent;
                    bool m_csrContentHasBeenSet;

                    /**
                     * Password of the key
                     */
                    std::string m_csrkeyPassword;
                    bool m_csrkeyPasswordHasBeenSet;

                    /**
                     * Reissue reason
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * The CSR encryption algorithm. Valid values: `RSA` (default), `ECC1`, and `SM2`.
This parameter is available for selection only when the value of `CsrType` is `Online`.
                     */
                    std::string m_certCSREncryptAlgo;
                    bool m_certCSREncryptAlgoHasBeenSet;

                    /**
                     * The CSR encryption parameters. When `CsrEncryptAlgo` is set to `RSA`, `2048` (default) and `4096` are available for selection; and when`CsrEncryptAlgo` is set to `ECC`, `prime256v1` (default) and `secp384r1` are available for selection. 
                     */
                    std::string m_certCSRKeyParameter;
                    bool m_certCSRKeyParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_REPLACECERTIFICATEREQUEST_H_
