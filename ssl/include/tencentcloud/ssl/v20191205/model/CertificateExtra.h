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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEEXTRA_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEEXTRA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Content of the `CertificateExtra` parameter. `CertificateExtra` is an element of `Certificates` array which is returned by `DescribeCertificates`.
                */
                class CertificateExtra : public AbstractModel
                {
                public:
                    CertificateExtra();
                    ~CertificateExtra() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Quantity of configurable domain names for the certificate.
                     * @return DomainNumber Quantity of configurable domain names for the certificate.
                     * 
                     */
                    std::string GetDomainNumber() const;

                    /**
                     * 设置Quantity of configurable domain names for the certificate.
                     * @param _domainNumber Quantity of configurable domain names for the certificate.
                     * 
                     */
                    void SetDomainNumber(const std::string& _domainNumber);

                    /**
                     * 判断参数 DomainNumber 是否已赋值
                     * @return DomainNumber 是否已赋值
                     * 
                     */
                    bool DomainNumberHasBeenSet() const;

                    /**
                     * 获取Renew the original certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OriginCertificateId Renew the original certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOriginCertificateId() const;

                    /**
                     * 设置Renew the original certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _originCertificateId Renew the original certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOriginCertificateId(const std::string& _originCertificateId);

                    /**
                     * 判断参数 OriginCertificateId 是否已赋值
                     * @return OriginCertificateId 是否已赋值
                     * 
                     */
                    bool OriginCertificateIdHasBeenSet() const;

                    /**
                     * 获取Original ID of the new certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ReplacedBy Original ID of the new certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReplacedBy() const;

                    /**
                     * 设置Original ID of the new certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _replacedBy Original ID of the new certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReplacedBy(const std::string& _replacedBy);

                    /**
                     * 判断参数 ReplacedBy 是否已赋值
                     * @return ReplacedBy 是否已赋值
                     * 
                     */
                    bool ReplacedByHasBeenSet() const;

                    /**
                     * 获取Reissue certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ReplacedFor Reissue certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReplacedFor() const;

                    /**
                     * 设置Reissue certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _replacedFor Reissue certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReplacedFor(const std::string& _replacedFor);

                    /**
                     * 判断参数 ReplacedFor 是否已赋值
                     * @return ReplacedFor 是否已赋值
                     * 
                     */
                    bool ReplacedForHasBeenSet() const;

                    /**
                     * 获取Renewal certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RenewOrder Renewal certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRenewOrder() const;

                    /**
                     * 设置Renewal certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _renewOrder Renewal certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRenewOrder(const std::string& _renewOrder);

                    /**
                     * 判断参数 RenewOrder 是否已赋值
                     * @return RenewOrder 是否已赋值
                     * 
                     */
                    bool RenewOrderHasBeenSet() const;

                    /**
                     * 获取Whether it is a China SM certificate.
                     * @return SMCert Whether it is a China SM certificate.
                     * 
                     */
                    int64_t GetSMCert() const;

                    /**
                     * 设置Whether it is a China SM certificate.
                     * @param _sMCert Whether it is a China SM certificate.
                     * 
                     */
                    void SetSMCert(const int64_t& _sMCert);

                    /**
                     * 判断参数 SMCert 是否已赋值
                     * @return SMCert 是否已赋值
                     * 
                     */
                    bool SMCertHasBeenSet() const;

                    /**
                     * 获取Company type, valid values: 1 (individual); 2 (company).
                     * @return CompanyType Company type, valid values: 1 (individual); 2 (company).
                     * 
                     */
                    int64_t GetCompanyType() const;

                    /**
                     * 设置Company type, valid values: 1 (individual); 2 (company).
                     * @param _companyType Company type, valid values: 1 (individual); 2 (company).
                     * 
                     */
                    void SetCompanyType(const int64_t& _companyType);

                    /**
                     * 判断参数 CompanyType 是否已赋值
                     * @return CompanyType 是否已赋值
                     * 
                     */
                    bool CompanyTypeHasBeenSet() const;

                private:

                    /**
                     * Quantity of configurable domain names for the certificate.
                     */
                    std::string m_domainNumber;
                    bool m_domainNumberHasBeenSet;

                    /**
                     * Renew the original certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originCertificateId;
                    bool m_originCertificateIdHasBeenSet;

                    /**
                     * Original ID of the new certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_replacedBy;
                    bool m_replacedByHasBeenSet;

                    /**
                     * Reissue certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_replacedFor;
                    bool m_replacedForHasBeenSet;

                    /**
                     * Renewal certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_renewOrder;
                    bool m_renewOrderHasBeenSet;

                    /**
                     * Whether it is a China SM certificate.
                     */
                    int64_t m_sMCert;
                    bool m_sMCertHasBeenSet;

                    /**
                     * Company type, valid values: 1 (individual); 2 (company).
                     */
                    int64_t m_companyType;
                    bool m_companyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEEXTRA_H_
