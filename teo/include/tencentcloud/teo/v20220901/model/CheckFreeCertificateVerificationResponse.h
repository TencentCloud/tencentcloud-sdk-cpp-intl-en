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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CHECKFREECERTIFICATEVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CHECKFREECERTIFICATEVERIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CheckFreeCertificateVerification response structure.
                */
                class CheckFreeCertificateVerificationResponse : public AbstractModel
                {
                public:
                    CheckFreeCertificateVerificationResponse();
                    ~CheckFreeCertificateVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the domain name to which the certificate is issued when the free certificate application succeeds.
Note: only one free certificate can be applied for a domain name. if a wildcard certificate has been applied for the domain name, its subdomains will use the wildcard certificate.
                     * @return CommonName Specifies the domain name to which the certificate is issued when the free certificate application succeeds.
Note: only one free certificate can be applied for a domain name. if a wildcard certificate has been applied for the domain name, its subdomains will use the wildcard certificate.
                     * 
                     */
                    std::string GetCommonName() const;

                    /**
                     * 判断参数 CommonName 是否已赋值
                     * @return CommonName 是否已赋值
                     * 
                     */
                    bool CommonNameHasBeenSet() const;

                    /**
                     * 获取Specifies the signature algorithm used by the certificate when the free certificate application succeeds. currently only support RSA 2048.
                     * @return SignatureAlgorithm Specifies the signature algorithm used by the certificate when the free certificate application succeeds. currently only support RSA 2048.
                     * 
                     */
                    std::string GetSignatureAlgorithm() const;

                    /**
                     * 判断参数 SignatureAlgorithm 是否已赋值
                     * @return SignatureAlgorithm 是否已赋值
                     * 
                     */
                    bool SignatureAlgorithmHasBeenSet() const;

                    /**
                     * 获取Expiration time of the certificate when the free certificate application is successful. the time is in coordinated universal time (UTC), following the ISO 8601 standard date and time format.
                     * @return ExpireTime Expiration time of the certificate when the free certificate application is successful. the time is in coordinated universal time (UTC), following the ISO 8601 standard date and time format.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Specifies the domain name to which the certificate is issued when the free certificate application succeeds.
Note: only one free certificate can be applied for a domain name. if a wildcard certificate has been applied for the domain name, its subdomains will use the wildcard certificate.
                     */
                    std::string m_commonName;
                    bool m_commonNameHasBeenSet;

                    /**
                     * Specifies the signature algorithm used by the certificate when the free certificate application succeeds. currently only support RSA 2048.
                     */
                    std::string m_signatureAlgorithm;
                    bool m_signatureAlgorithmHasBeenSet;

                    /**
                     * Expiration time of the certificate when the free certificate application is successful. the time is in coordinated universal time (UTC), following the ISO 8601 standard date and time format.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CHECKFREECERTIFICATEVERIFICATIONRESPONSE_H_
