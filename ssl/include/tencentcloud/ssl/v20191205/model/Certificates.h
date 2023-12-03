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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CertificateExtra.h>
#include <tencentcloud/ssl/v20191205/model/ProjectInfo.h>
#include <tencentcloud/ssl/v20191205/model/Tags.h>
#include <tencentcloud/ssl/v20191205/model/PreAuditInfo.h>
#include <tencentcloud/ssl/v20191205/model/SupportDownloadType.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Content of the `Certificates` parameter returned by `DescribeCertificates`
                */
                class Certificates : public AbstractModel
                {
                public:
                    Certificates();
                    ~Certificates() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OwnerUin User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _ownerUin User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Certificate source
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return From Certificate source
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Certificate source
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _from Certificate source
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取The certificate plan type. Valid values:
null: Certificates uploaded by users (no plan type)
`1`: GeoTrust DV SSL CA - G3; `2`: TrustAsia TLS RSA CA; `3`: SecureSite EV Pro; `4`: SecureSite EV; `5`: SecureSite OV Pro; `6`: SecureSite OV; `7`: SecureSite OV wildcard; `8`: GeoTrust EV; `9`: GeoTrust OV; `10`: GeoTrust OV wildcard; `11`: TrustAsia DV multi-domain; `12`: TrustAsia DV wildcard; `13`: TrustAsia OV wildcard D3; `14`: TrustAsia OV D3; `15`: TrustAsia OV multi-domain D3; `16`: TrustAsia EV D3; `17`: TrustAsia EV multi-domain D3; `18`: GlobalSign OV; `19`: GlobalSign OV wildcard; `20`: GlobalSign EV; `21`: TrustAsia OV wildcard multi-domain D3; `22`: GlobalSign OV multi-domain; `23`: GlobalSign OV wildcard multi-domain; `24`: GlobalSign EV multi-domain
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PackageType The certificate plan type. Valid values:
null: Certificates uploaded by users (no plan type)
`1`: GeoTrust DV SSL CA - G3; `2`: TrustAsia TLS RSA CA; `3`: SecureSite EV Pro; `4`: SecureSite EV; `5`: SecureSite OV Pro; `6`: SecureSite OV; `7`: SecureSite OV wildcard; `8`: GeoTrust EV; `9`: GeoTrust OV; `10`: GeoTrust OV wildcard; `11`: TrustAsia DV multi-domain; `12`: TrustAsia DV wildcard; `13`: TrustAsia OV wildcard D3; `14`: TrustAsia OV D3; `15`: TrustAsia OV multi-domain D3; `16`: TrustAsia EV D3; `17`: TrustAsia EV multi-domain D3; `18`: GlobalSign OV; `19`: GlobalSign OV wildcard; `20`: GlobalSign EV; `21`: TrustAsia OV wildcard multi-domain D3; `22`: GlobalSign OV multi-domain; `23`: GlobalSign OV wildcard multi-domain; `24`: GlobalSign EV multi-domain
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置The certificate plan type. Valid values:
null: Certificates uploaded by users (no plan type)
`1`: GeoTrust DV SSL CA - G3; `2`: TrustAsia TLS RSA CA; `3`: SecureSite EV Pro; `4`: SecureSite EV; `5`: SecureSite OV Pro; `6`: SecureSite OV; `7`: SecureSite OV wildcard; `8`: GeoTrust EV; `9`: GeoTrust OV; `10`: GeoTrust OV wildcard; `11`: TrustAsia DV multi-domain; `12`: TrustAsia DV wildcard; `13`: TrustAsia OV wildcard D3; `14`: TrustAsia OV D3; `15`: TrustAsia OV multi-domain D3; `16`: TrustAsia EV D3; `17`: TrustAsia EV multi-domain D3; `18`: GlobalSign OV; `19`: GlobalSign OV wildcard; `20`: GlobalSign EV; `21`: TrustAsia OV wildcard multi-domain D3; `22`: GlobalSign OV multi-domain; `23`: GlobalSign OV wildcard multi-domain; `24`: GlobalSign EV multi-domain
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _packageType The certificate plan type. Valid values:
null: Certificates uploaded by users (no plan type)
`1`: GeoTrust DV SSL CA - G3; `2`: TrustAsia TLS RSA CA; `3`: SecureSite EV Pro; `4`: SecureSite EV; `5`: SecureSite OV Pro; `6`: SecureSite OV; `7`: SecureSite OV wildcard; `8`: GeoTrust EV; `9`: GeoTrust OV; `10`: GeoTrust OV wildcard; `11`: TrustAsia DV multi-domain; `12`: TrustAsia DV wildcard; `13`: TrustAsia OV wildcard D3; `14`: TrustAsia OV D3; `15`: TrustAsia OV multi-domain D3; `16`: TrustAsia EV D3; `17`: TrustAsia EV multi-domain D3; `18`: GlobalSign OV; `19`: GlobalSign OV wildcard; `20`: GlobalSign EV; `21`: TrustAsia OV wildcard multi-domain D3; `22`: GlobalSign OV multi-domain; `23`: GlobalSign OV wildcard multi-domain; `24`: GlobalSign EV multi-domain
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取Certificate type. `CA`: client certificate; `SVR`: server certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertificateType Certificate type. `CA`: client certificate; `SVR`: server certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置Certificate type. `CA`: client certificate; `SVR`: server certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _certificateType Certificate type. `CA`: client certificate; `SVR`: server certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取Issuer
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProductZhName Issuer
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductZhName() const;

                    /**
                     * 设置Issuer
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _productZhName Issuer
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProductZhName(const std::string& _productZhName);

                    /**
                     * 判断参数 ProductZhName 是否已赋值
                     * @return ProductZhName 是否已赋值
                     * 
                     */
                    bool ProductZhNameHasBeenSet() const;

                    /**
                     * 获取Primary domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Domain Primary domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Primary domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _domain Primary domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Alias
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Alias Alias
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Alias
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _alias Alias
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Status. `0`: Reviewing; `1`: Approved; `2`: Unapproved; `3`: Expired; `4`: DNS record added for domain names of the DNS_AUTO verification type; `5`: Enterprise-grade certificate, pending submission; `6`: Canceling order; `7`: Canceled; `8`: Information submitted, pending confirmation letter upload; `9`: Revoking certificate; `10`: Revoked; `11`: Reissuing; `12`: Pending revocation confirmation letter upload; `13`: Pending information submission for the free certificate; `14`: Refunded.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status. `0`: Reviewing; `1`: Approved; `2`: Unapproved; `3`: Expired; `4`: DNS record added for domain names of the DNS_AUTO verification type; `5`: Enterprise-grade certificate, pending submission; `6`: Canceling order; `7`: Canceled; `8`: Information submitted, pending confirmation letter upload; `9`: Revoking certificate; `10`: Revoked; `11`: Reissuing; `12`: Pending revocation confirmation letter upload; `13`: Pending information submission for the free certificate; `14`: Refunded.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status. `0`: Reviewing; `1`: Approved; `2`: Unapproved; `3`: Expired; `4`: DNS record added for domain names of the DNS_AUTO verification type; `5`: Enterprise-grade certificate, pending submission; `6`: Canceling order; `7`: Canceled; `8`: Information submitted, pending confirmation letter upload; `9`: Revoking certificate; `10`: Revoked; `11`: Reissuing; `12`: Pending revocation confirmation letter upload; `13`: Pending information submission for the free certificate; `14`: Refunded.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status. `0`: Reviewing; `1`: Approved; `2`: Unapproved; `3`: Expired; `4`: DNS record added for domain names of the DNS_AUTO verification type; `5`: Enterprise-grade certificate, pending submission; `6`: Canceling order; `7`: Canceled; `8`: Information submitted, pending confirmation letter upload; `9`: Revoking certificate; `10`: Revoked; `11`: Reissuing; `12`: Pending revocation confirmation letter upload; `13`: Pending information submission for the free certificate; `14`: Refunded.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Extended information of the certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertificateExtra Extended information of the certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CertificateExtra GetCertificateExtra() const;

                    /**
                     * 设置Extended information of the certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _certificateExtra Extended information of the certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertificateExtra(const CertificateExtra& _certificateExtra);

                    /**
                     * 判断参数 CertificateExtra 是否已赋值
                     * @return CertificateExtra 是否已赋值
                     * 
                     */
                    bool CertificateExtraHasBeenSet() const;

                    /**
                     * 获取Vulnerability scanning status. `INACTIVE`: not activated; `ACTIVE`: activated
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VulnerabilityStatus Vulnerability scanning status. `INACTIVE`: not activated; `ACTIVE`: activated
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVulnerabilityStatus() const;

                    /**
                     * 设置Vulnerability scanning status. `INACTIVE`: not activated; `ACTIVE`: activated
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _vulnerabilityStatus Vulnerability scanning status. `INACTIVE`: not activated; `ACTIVE`: activated
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVulnerabilityStatus(const std::string& _vulnerabilityStatus);

                    /**
                     * 判断参数 VulnerabilityStatus 是否已赋值
                     * @return VulnerabilityStatus 是否已赋值
                     * 
                     */
                    bool VulnerabilityStatusHasBeenSet() const;

                    /**
                     * 获取Status information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StatusMsg Status information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusMsg() const;

                    /**
                     * 设置Status information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _statusMsg Status information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusMsg(const std::string& _statusMsg);

                    /**
                     * 判断参数 StatusMsg 是否已赋值
                     * @return StatusMsg 是否已赋值
                     * 
                     */
                    bool StatusMsgHasBeenSet() const;

                    /**
                     * 获取Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation; `EMAIL`: email validation
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VerifyType Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation; `EMAIL`: email validation
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation; `EMAIL`: email validation
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _verifyType Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation; `EMAIL`: email validation
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取Time when the certificate takes effect
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertBeginTime Time when the certificate takes effect
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertBeginTime() const;

                    /**
                     * 设置Time when the certificate takes effect
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _certBeginTime Time when the certificate takes effect
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertBeginTime(const std::string& _certBeginTime);

                    /**
                     * 判断参数 CertBeginTime 是否已赋值
                     * @return CertBeginTime 是否已赋值
                     * 
                     */
                    bool CertBeginTimeHasBeenSet() const;

                    /**
                     * 获取Time when the certificate expires
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertEndTime Time when the certificate expires
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertEndTime() const;

                    /**
                     * 设置Time when the certificate expires
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _certEndTime Time when the certificate expires
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertEndTime(const std::string& _certEndTime);

                    /**
                     * 判断参数 CertEndTime 是否已赋值
                     * @return CertEndTime 是否已赋值
                     * 
                     */
                    bool CertEndTimeHasBeenSet() const;

                    /**
                     * 获取Validity period of the certificate, in months
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ValidityPeriod Validity period of the certificate, in months
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 设置Validity period of the certificate, in months
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _validityPeriod Validity period of the certificate, in months
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValidityPeriod(const std::string& _validityPeriod);

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     * 
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InsertTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _insertTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取Certificate ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertificateId Certificate ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Certificate ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _certificateId Certificate ID
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Domain names associated with the certificate (including the primary domain name)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubjectAltName Domain names associated with the certificate (including the primary domain name)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 设置Domain names associated with the certificate (including the primary domain name)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _subjectAltName Domain names associated with the certificate (including the primary domain name)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubjectAltName(const std::vector<std::string>& _subjectAltName);

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     * 
                     */
                    bool SubjectAltNameHasBeenSet() const;

                    /**
                     * 获取Certificate type name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PackageTypeName Certificate type name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPackageTypeName() const;

                    /**
                     * 设置Certificate type name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _packageTypeName Certificate type name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPackageTypeName(const std::string& _packageTypeName);

                    /**
                     * 判断参数 PackageTypeName 是否已赋值
                     * @return PackageTypeName 是否已赋值
                     * 
                     */
                    bool PackageTypeNameHasBeenSet() const;

                    /**
                     * 获取Status description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StatusName Status description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusName() const;

                    /**
                     * 设置Status description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _statusName Status description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusName(const std::string& _statusName);

                    /**
                     * 判断参数 StatusName 是否已赋值
                     * @return StatusName 是否已赋值
                     * 
                     */
                    bool StatusNameHasBeenSet() const;

                    /**
                     * 获取Whether the customer is a VIP customer
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsVip Whether the customer is a VIP customer
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsVip() const;

                    /**
                     * 设置Whether the customer is a VIP customer
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isVip Whether the customer is a VIP customer
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsVip(const bool& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取Whether the certificate is a DV certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsDv Whether the certificate is a DV certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsDv() const;

                    /**
                     * 设置Whether the certificate is a DV certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isDv Whether the certificate is a DV certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsDv(const bool& _isDv);

                    /**
                     * 判断参数 IsDv 是否已赋值
                     * @return IsDv 是否已赋值
                     * 
                     */
                    bool IsDvHasBeenSet() const;

                    /**
                     * 获取Whether the certificate is a wildcard certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsWildcard Whether the certificate is a wildcard certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsWildcard() const;

                    /**
                     * 设置Whether the certificate is a wildcard certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isWildcard Whether the certificate is a wildcard certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsWildcard(const bool& _isWildcard);

                    /**
                     * 判断参数 IsWildcard 是否已赋值
                     * @return IsWildcard 是否已赋值
                     * 
                     */
                    bool IsWildcardHasBeenSet() const;

                    /**
                     * 获取Whether the vulnerability scanning feature is enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsVulnerability Whether the vulnerability scanning feature is enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsVulnerability() const;

                    /**
                     * 设置Whether the vulnerability scanning feature is enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isVulnerability Whether the vulnerability scanning feature is enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsVulnerability(const bool& _isVulnerability);

                    /**
                     * 判断参数 IsVulnerability 是否已赋值
                     * @return IsVulnerability 是否已赋值
                     * 
                     */
                    bool IsVulnerabilityHasBeenSet() const;

                    /**
                     * 获取Whether it can be renewed 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RenewAble Whether it can be renewed 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetRenewAble() const;

                    /**
                     * 设置Whether it can be renewed 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _renewAble Whether it can be renewed 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRenewAble(const bool& _renewAble);

                    /**
                     * 判断参数 RenewAble 是否已赋值
                     * @return RenewAble 是否已赋值
                     * 
                     */
                    bool RenewAbleHasBeenSet() const;

                    /**
                     * 获取Project information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectInfo Project information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ProjectInfo GetProjectInfo() const;

                    /**
                     * 设置Project information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _projectInfo Project information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectInfo(const ProjectInfo& _projectInfo);

                    /**
                     * 判断参数 ProjectInfo 是否已赋值
                     * @return ProjectInfo 是否已赋值
                     * 
                     */
                    bool ProjectInfoHasBeenSet() const;

                    /**
                     * 获取Associated Tencent Cloud services. Currently, this parameter is unavailable.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BoundResource Associated Tencent Cloud services. Currently, this parameter is unavailable.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBoundResource() const;

                    /**
                     * 设置Associated Tencent Cloud services. Currently, this parameter is unavailable.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _boundResource Associated Tencent Cloud services. Currently, this parameter is unavailable.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBoundResource(const std::vector<std::string>& _boundResource);

                    /**
                     * 判断参数 BoundResource 是否已赋值
                     * @return BoundResource 是否已赋值
                     * 
                     */
                    bool BoundResourceHasBeenSet() const;

                    /**
                     * 获取Whether the certificate can be deployed
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Deployable Whether the certificate can be deployed
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetDeployable() const;

                    /**
                     * 设置Whether the certificate can be deployed
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _deployable Whether the certificate can be deployed
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeployable(const bool& _deployable);

                    /**
                     * 判断参数 Deployable 是否已赋值
                     * @return Deployable 是否已赋值
                     * 
                     */
                    bool DeployableHasBeenSet() const;

                    /**
                     * 获取List of tags
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Tags List of tags
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置List of tags
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _tags List of tags
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether the expiration notification was ignored
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsIgnore Whether the expiration notification was ignored
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsIgnore() const;

                    /**
                     * 设置Whether the expiration notification was ignored
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isIgnore Whether the expiration notification was ignored
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsIgnore(const bool& _isIgnore);

                    /**
                     * 判断参数 IsIgnore 是否已赋值
                     * @return IsIgnore 是否已赋值
                     * 
                     */
                    bool IsIgnoreHasBeenSet() const;

                    /**
                     * 获取Whether the certificate is a Chinese SM certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsSM Whether the certificate is a Chinese SM certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsSM() const;

                    /**
                     * 设置Whether the certificate is a Chinese SM certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isSM Whether the certificate is a Chinese SM certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsSM(const bool& _isSM);

                    /**
                     * 判断参数 IsSM 是否已赋值
                     * @return IsSM 是否已赋值
                     * 
                     */
                    bool IsSMHasBeenSet() const;

                    /**
                     * 获取Certificate algorithm
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EncryptAlgorithm Certificate algorithm
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 设置Certificate algorithm
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _encryptAlgorithm Certificate algorithm
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEncryptAlgorithm(const std::string& _encryptAlgorithm);

                    /**
                     * 判断参数 EncryptAlgorithm 是否已赋值
                     * @return EncryptAlgorithm 是否已赋值
                     * 
                     */
                    bool EncryptAlgorithmHasBeenSet() const;

                    /**
                     * 获取Encryption algorithm of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CAEncryptAlgorithms Encryption algorithm of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetCAEncryptAlgorithms() const;

                    /**
                     * 设置Encryption algorithm of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cAEncryptAlgorithms Encryption algorithm of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCAEncryptAlgorithms(const std::vector<std::string>& _cAEncryptAlgorithms);

                    /**
                     * 判断参数 CAEncryptAlgorithms 是否已赋值
                     * @return CAEncryptAlgorithms 是否已赋值
                     * 
                     */
                    bool CAEncryptAlgorithmsHasBeenSet() const;

                    /**
                     * 获取Expiration time of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CAEndTimes Expiration time of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetCAEndTimes() const;

                    /**
                     * 设置Expiration time of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cAEndTimes Expiration time of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCAEndTimes(const std::vector<std::string>& _cAEndTimes);

                    /**
                     * 判断参数 CAEndTimes 是否已赋值
                     * @return CAEndTimes 是否已赋值
                     * 
                     */
                    bool CAEndTimesHasBeenSet() const;

                    /**
                     * 获取Generic name of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CACommonNames Generic name of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetCACommonNames() const;

                    /**
                     * 设置Generic name of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cACommonNames Generic name of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCACommonNames(const std::vector<std::string>& _cACommonNames);

                    /**
                     * 判断参数 CACommonNames 是否已赋值
                     * @return CACommonNames 是否已赋值
                     * 
                     */
                    bool CACommonNamesHasBeenSet() const;

                    /**
                     * 获取Prereview information of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PreAuditInfo Prereview information of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PreAuditInfo GetPreAuditInfo() const;

                    /**
                     * 设置Prereview information of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _preAuditInfo Prereview information of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPreAuditInfo(const PreAuditInfo& _preAuditInfo);

                    /**
                     * 判断参数 PreAuditInfo 是否已赋值
                     * @return PreAuditInfo 是否已赋值
                     * 
                     */
                    bool PreAuditInfoHasBeenSet() const;

                    /**
                     * 获取Whether auto-renewal is enabled.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AutoRenewFlag Whether auto-renewal is enabled.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Whether auto-renewal is enabled.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _autoRenewFlag Whether auto-renewal is enabled.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取The hosting status. Valid values: `0` (hosting), `5` (replacing resources), `10` (hosting completed), and `-1` (not hosted). 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostingStatus The hosting status. Valid values: `0` (hosting), `5` (replacing resources), `10` (hosting completed), and `-1` (not hosted). 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHostingStatus() const;

                    /**
                     * 设置The hosting status. Valid values: `0` (hosting), `5` (replacing resources), `10` (hosting completed), and `-1` (not hosted). 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostingStatus The hosting status. Valid values: `0` (hosting), `5` (replacing resources), `10` (hosting completed), and `-1` (not hosted). 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostingStatus(const int64_t& _hostingStatus);

                    /**
                     * 判断参数 HostingStatus 是否已赋值
                     * @return HostingStatus 是否已赋值
                     * 
                     */
                    bool HostingStatusHasBeenSet() const;

                    /**
                     * 获取The hosting completion time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostingCompleteTime The hosting completion time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostingCompleteTime() const;

                    /**
                     * 设置The hosting completion time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostingCompleteTime The hosting completion time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostingCompleteTime(const std::string& _hostingCompleteTime);

                    /**
                     * 判断参数 HostingCompleteTime 是否已赋值
                     * @return HostingCompleteTime 是否已赋值
                     * 
                     */
                    bool HostingCompleteTimeHasBeenSet() const;

                    /**
                     * 获取The hosted new certificate ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostingRenewCertId The hosted new certificate ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostingRenewCertId() const;

                    /**
                     * 设置The hosted new certificate ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostingRenewCertId The hosted new certificate ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostingRenewCertId(const std::string& _hostingRenewCertId);

                    /**
                     * 判断参数 HostingRenewCertId 是否已赋值
                     * @return HostingRenewCertId 是否已赋值
                     * 
                     */
                    bool HostingRenewCertIdHasBeenSet() const;

                    /**
                     * 获取Existing renewed certificate ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return HasRenewOrder Existing renewed certificate ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetHasRenewOrder() const;

                    /**
                     * 设置Existing renewed certificate ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _hasRenewOrder Existing renewed certificate ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHasRenewOrder(const std::string& _hasRenewOrder);

                    /**
                     * 判断参数 HasRenewOrder 是否已赋值
                     * @return HasRenewOrder 是否已赋值
                     * 
                     */
                    bool HasRenewOrderHasBeenSet() const;

                    /**
                     * 获取Whether the original certificate is deleted when a certificate is reissued.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReplaceOriCertIsDelete Whether the original certificate is deleted when a certificate is reissued.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetReplaceOriCertIsDelete() const;

                    /**
                     * 设置Whether the original certificate is deleted when a certificate is reissued.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _replaceOriCertIsDelete Whether the original certificate is deleted when a certificate is reissued.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReplaceOriCertIsDelete(const bool& _replaceOriCertIsDelete);

                    /**
                     * 判断参数 ReplaceOriCertIsDelete 是否已赋值
                     * @return ReplaceOriCertIsDelete 是否已赋值
                     * 
                     */
                    bool ReplaceOriCertIsDeleteHasBeenSet() const;

                    /**
                     * 获取Whether the certificate is expiring soon. A certificate is considered to be expiring soon when there are 30 days or less left.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IsExpiring Whether the certificate is expiring soon. A certificate is considered to be expiring soon when there are 30 days or less left.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetIsExpiring() const;

                    /**
                     * 设置Whether the certificate is expiring soon. A certificate is considered to be expiring soon when there are 30 days or less left.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _isExpiring Whether the certificate is expiring soon. A certificate is considered to be expiring soon when there are 30 days or less left.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIsExpiring(const bool& _isExpiring);

                    /**
                     * 判断参数 IsExpiring 是否已赋值
                     * @return IsExpiring 是否已赋值
                     * 
                     */
                    bool IsExpiringHasBeenSet() const;

                    /**
                     * 获取Validation expiration time for the addition of the DV certificate
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DVAuthDeadline Validation expiration time for the addition of the DV certificate
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDVAuthDeadline() const;

                    /**
                     * 设置Validation expiration time for the addition of the DV certificate
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dVAuthDeadline Validation expiration time for the addition of the DV certificate
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDVAuthDeadline(const std::string& _dVAuthDeadline);

                    /**
                     * 判断参数 DVAuthDeadline 是否已赋值
                     * @return DVAuthDeadline 是否已赋值
                     * 
                     */
                    bool DVAuthDeadlineHasBeenSet() const;

                    /**
                     * 获取Domain name validation pass time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ValidationPassedTime Domain name validation pass time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetValidationPassedTime() const;

                    /**
                     * 设置Domain name validation pass time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _validationPassedTime Domain name validation pass time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetValidationPassedTime(const std::string& _validationPassedTime);

                    /**
                     * 判断参数 ValidationPassedTime 是否已赋值
                     * @return ValidationPassedTime 是否已赋值
                     * 
                     */
                    bool ValidationPassedTimeHasBeenSet() const;

                    /**
                     * 获取Multiple domain names with which the certificate is associated
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CertSANs Multiple domain names with which the certificate is associated
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetCertSANs() const;

                    /**
                     * 设置Multiple domain names with which the certificate is associated
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _certSANs Multiple domain names with which the certificate is associated
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCertSANs(const std::vector<std::string>& _certSANs);

                    /**
                     * 判断参数 CertSANs 是否已赋值
                     * @return CertSANs 是否已赋值
                     * 
                     */
                    bool CertSANsHasBeenSet() const;

                    /**
                     * 获取Domain name validation rejection information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AwaitingValidationMsg Domain name validation rejection information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAwaitingValidationMsg() const;

                    /**
                     * 设置Domain name validation rejection information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _awaitingValidationMsg Domain name validation rejection information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAwaitingValidationMsg(const std::string& _awaitingValidationMsg);

                    /**
                     * 判断参数 AwaitingValidationMsg 是否已赋值
                     * @return AwaitingValidationMsg 是否已赋值
                     * 
                     */
                    bool AwaitingValidationMsgHasBeenSet() const;

                    /**
                     * 获取Whether downloading is allowed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AllowDownload Whether downloading is allowed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetAllowDownload() const;

                    /**
                     * 设置Whether downloading is allowed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _allowDownload Whether downloading is allowed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAllowDownload(const bool& _allowDownload);

                    /**
                     * 判断参数 AllowDownload 是否已赋值
                     * @return AllowDownload 是否已赋值
                     * 
                     */
                    bool AllowDownloadHasBeenSet() const;

                    /**
                     * 获取
                     * @return IsDNSPODResolve 
                     * 
                     */
                    bool GetIsDNSPODResolve() const;

                    /**
                     * 设置
                     * @param _isDNSPODResolve 
                     * 
                     */
                    void SetIsDNSPODResolve(const bool& _isDNSPODResolve);

                    /**
                     * 判断参数 IsDNSPODResolve 是否已赋值
                     * @return IsDNSPODResolve 是否已赋值
                     * 
                     */
                    bool IsDNSPODResolveHasBeenSet() const;

                    /**
                     * 获取
                     * @return IsPackage 
                     * 
                     */
                    bool GetIsPackage() const;

                    /**
                     * 设置
                     * @param _isPackage 
                     * 
                     */
                    void SetIsPackage(const bool& _isPackage);

                    /**
                     * 判断参数 IsPackage 是否已赋值
                     * @return IsPackage 是否已赋值
                     * 
                     */
                    bool IsPackageHasBeenSet() const;

                    /**
                     * 获取
                     * @return KeyPasswordCustomFlag 
                     * 
                     */
                    bool GetKeyPasswordCustomFlag() const;

                    /**
                     * 设置
                     * @param _keyPasswordCustomFlag 
                     * 
                     */
                    void SetKeyPasswordCustomFlag(const bool& _keyPasswordCustomFlag);

                    /**
                     * 判断参数 KeyPasswordCustomFlag 是否已赋值
                     * @return KeyPasswordCustomFlag 是否已赋值
                     * 
                     */
                    bool KeyPasswordCustomFlagHasBeenSet() const;

                    /**
                     * 获取
                     * @return SupportDownloadType 
                     * 
                     */
                    SupportDownloadType GetSupportDownloadType() const;

                    /**
                     * 设置
                     * @param _supportDownloadType 
                     * 
                     */
                    void SetSupportDownloadType(const SupportDownloadType& _supportDownloadType);

                    /**
                     * 判断参数 SupportDownloadType 是否已赋值
                     * @return SupportDownloadType 是否已赋值
                     * 
                     */
                    bool SupportDownloadTypeHasBeenSet() const;

                private:

                    /**
                     * User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Certificate source
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * The certificate plan type. Valid values:
null: Certificates uploaded by users (no plan type)
`1`: GeoTrust DV SSL CA - G3; `2`: TrustAsia TLS RSA CA; `3`: SecureSite EV Pro; `4`: SecureSite EV; `5`: SecureSite OV Pro; `6`: SecureSite OV; `7`: SecureSite OV wildcard; `8`: GeoTrust EV; `9`: GeoTrust OV; `10`: GeoTrust OV wildcard; `11`: TrustAsia DV multi-domain; `12`: TrustAsia DV wildcard; `13`: TrustAsia OV wildcard D3; `14`: TrustAsia OV D3; `15`: TrustAsia OV multi-domain D3; `16`: TrustAsia EV D3; `17`: TrustAsia EV multi-domain D3; `18`: GlobalSign OV; `19`: GlobalSign OV wildcard; `20`: GlobalSign EV; `21`: TrustAsia OV wildcard multi-domain D3; `22`: GlobalSign OV multi-domain; `23`: GlobalSign OV wildcard multi-domain; `24`: GlobalSign EV multi-domain
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Certificate type. `CA`: client certificate; `SVR`: server certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * Issuer
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productZhName;
                    bool m_productZhNameHasBeenSet;

                    /**
                     * Primary domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Alias
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Status. `0`: Reviewing; `1`: Approved; `2`: Unapproved; `3`: Expired; `4`: DNS record added for domain names of the DNS_AUTO verification type; `5`: Enterprise-grade certificate, pending submission; `6`: Canceling order; `7`: Canceled; `8`: Information submitted, pending confirmation letter upload; `9`: Revoking certificate; `10`: Revoked; `11`: Reissuing; `12`: Pending revocation confirmation letter upload; `13`: Pending information submission for the free certificate; `14`: Refunded.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Extended information of the certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CertificateExtra m_certificateExtra;
                    bool m_certificateExtraHasBeenSet;

                    /**
                     * Vulnerability scanning status. `INACTIVE`: not activated; `ACTIVE`: activated
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vulnerabilityStatus;
                    bool m_vulnerabilityStatusHasBeenSet;

                    /**
                     * Status information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusMsg;
                    bool m_statusMsgHasBeenSet;

                    /**
                     * Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation; `EMAIL`: email validation
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * Time when the certificate takes effect
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certBeginTime;
                    bool m_certBeginTimeHasBeenSet;

                    /**
                     * Time when the certificate expires
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certEndTime;
                    bool m_certEndTimeHasBeenSet;

                    /**
                     * Validity period of the certificate, in months
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * Certificate ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Domain names associated with the certificate (including the primary domain name)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * Certificate type name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_packageTypeName;
                    bool m_packageTypeNameHasBeenSet;

                    /**
                     * Status description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusName;
                    bool m_statusNameHasBeenSet;

                    /**
                     * Whether the customer is a VIP customer
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * Whether the certificate is a DV certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isDv;
                    bool m_isDvHasBeenSet;

                    /**
                     * Whether the certificate is a wildcard certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isWildcard;
                    bool m_isWildcardHasBeenSet;

                    /**
                     * Whether the vulnerability scanning feature is enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isVulnerability;
                    bool m_isVulnerabilityHasBeenSet;

                    /**
                     * Whether it can be renewed 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_renewAble;
                    bool m_renewAbleHasBeenSet;

                    /**
                     * Project information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ProjectInfo m_projectInfo;
                    bool m_projectInfoHasBeenSet;

                    /**
                     * Associated Tencent Cloud services. Currently, this parameter is unavailable.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_boundResource;
                    bool m_boundResourceHasBeenSet;

                    /**
                     * Whether the certificate can be deployed
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_deployable;
                    bool m_deployableHasBeenSet;

                    /**
                     * List of tags
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether the expiration notification was ignored
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isIgnore;
                    bool m_isIgnoreHasBeenSet;

                    /**
                     * Whether the certificate is a Chinese SM certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isSM;
                    bool m_isSMHasBeenSet;

                    /**
                     * Certificate algorithm
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * Encryption algorithm of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_cAEncryptAlgorithms;
                    bool m_cAEncryptAlgorithmsHasBeenSet;

                    /**
                     * Expiration time of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_cAEndTimes;
                    bool m_cAEndTimesHasBeenSet;

                    /**
                     * Generic name of the uploaded CA certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_cACommonNames;
                    bool m_cACommonNamesHasBeenSet;

                    /**
                     * Prereview information of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PreAuditInfo m_preAuditInfo;
                    bool m_preAuditInfoHasBeenSet;

                    /**
                     * Whether auto-renewal is enabled.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * The hosting status. Valid values: `0` (hosting), `5` (replacing resources), `10` (hosting completed), and `-1` (not hosted). 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hostingStatus;
                    bool m_hostingStatusHasBeenSet;

                    /**
                     * The hosting completion time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostingCompleteTime;
                    bool m_hostingCompleteTimeHasBeenSet;

                    /**
                     * The hosted new certificate ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostingRenewCertId;
                    bool m_hostingRenewCertIdHasBeenSet;

                    /**
                     * Existing renewed certificate ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_hasRenewOrder;
                    bool m_hasRenewOrderHasBeenSet;

                    /**
                     * Whether the original certificate is deleted when a certificate is reissued.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_replaceOriCertIsDelete;
                    bool m_replaceOriCertIsDeleteHasBeenSet;

                    /**
                     * Whether the certificate is expiring soon. A certificate is considered to be expiring soon when there are 30 days or less left.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_isExpiring;
                    bool m_isExpiringHasBeenSet;

                    /**
                     * Validation expiration time for the addition of the DV certificate
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dVAuthDeadline;
                    bool m_dVAuthDeadlineHasBeenSet;

                    /**
                     * Domain name validation pass time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_validationPassedTime;
                    bool m_validationPassedTimeHasBeenSet;

                    /**
                     * Multiple domain names with which the certificate is associated
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_certSANs;
                    bool m_certSANsHasBeenSet;

                    /**
                     * Domain name validation rejection information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_awaitingValidationMsg;
                    bool m_awaitingValidationMsgHasBeenSet;

                    /**
                     * Whether downloading is allowed
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_allowDownload;
                    bool m_allowDownloadHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isDNSPODResolve;
                    bool m_isDNSPODResolveHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isPackage;
                    bool m_isPackageHasBeenSet;

                    /**
                     * 
                     */
                    bool m_keyPasswordCustomFlag;
                    bool m_keyPasswordCustomFlagHasBeenSet;

                    /**
                     * 
                     */
                    SupportDownloadType m_supportDownloadType;
                    bool m_supportDownloadTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_
