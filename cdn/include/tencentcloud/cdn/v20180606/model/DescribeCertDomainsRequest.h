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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECERTDOMAINSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECERTDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeCertDomains request structure.
                */
                class DescribeCertDomainsRequest : public AbstractModel
                {
                public:
                    DescribeCertDomainsRequest();
                    ~DescribeCertDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64-encoded string of certificate in PEM format
                     * @return Cert Base64-encoded string of certificate in PEM format
                     */
                    std::string GetCert() const;

                    /**
                     * 设置Base64-encoded string of certificate in PEM format
                     * @param Cert Base64-encoded string of certificate in PEM format
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取Managed certificate ID. `Cert` and `CertId` cannot be both empty. If they’re both filled in, `CerID` prevails.
                     * @return CertId Managed certificate ID. `Cert` and `CertId` cannot be both empty. If they’re both filled in, `CerID` prevails.
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Managed certificate ID. `Cert` and `CertId` cannot be both empty. If they’re both filled in, `CerID` prevails.
                     * @param CertId Managed certificate ID. `Cert` and `CertId` cannot be both empty. If they’re both filled in, `CerID` prevails.
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Product of the domain name, either `cdn` (default) or `ecdn`.
                     * @return Product Product of the domain name, either `cdn` (default) or `ecdn`.
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Product of the domain name, either `cdn` (default) or `ecdn`.
                     * @param Product Product of the domain name, either `cdn` (default) or `ecdn`.
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded string of certificate in PEM format
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * Managed certificate ID. `Cert` and `CertId` cannot be both empty. If they’re both filled in, `CerID` prevails.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Product of the domain name, either `cdn` (default) or `ecdn`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECERTDOMAINSREQUEST_H_
