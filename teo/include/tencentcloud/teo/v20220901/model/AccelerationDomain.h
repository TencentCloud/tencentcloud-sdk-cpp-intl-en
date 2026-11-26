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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OwnershipVerification.h>
#include <tencentcloud/teo/v20220901/model/OriginDetail.h>
#include <tencentcloud/teo/v20220901/model/AccelerationDomainCertificate.h>
#include <tencentcloud/teo/v20220901/model/ComplianceRestriction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Acceleration domain name
                */
                class AccelerationDomain : public AbstractModel
                {
                public:
                    AccelerationDomain();
                    ~AccelerationDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Acceleration domain name.</p>
                     * @return DomainName <p>Acceleration domain name.</p>
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置<p>Acceleration domain name.</p>
                     * @param _domainName <p>Acceleration domain name.</p>
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取<p>Acceleration domain name status</p><p>Enumeration values:</p><ul><li>online: effective</li><li>process: deploying</li><li>offline: disabled</li><li>init: not applied, site to be activated</li></ul>
                     * @return DomainStatus <p>Acceleration domain name status</p><p>Enumeration values:</p><ul><li>online: effective</li><li>process: deploying</li><li>offline: disabled</li><li>init: not applied, site to be activated</li></ul>
                     * 
                     */
                    std::string GetDomainStatus() const;

                    /**
                     * 设置<p>Acceleration domain name status</p><p>Enumeration values:</p><ul><li>online: effective</li><li>process: deploying</li><li>offline: disabled</li><li>init: not applied, site to be activated</li></ul>
                     * @param _domainStatus <p>Acceleration domain name status</p><p>Enumeration values:</p><ul><li>online: effective</li><li>process: deploying</li><li>offline: disabled</li><li>init: not applied, site to be activated</li></ul>
                     * 
                     */
                    void SetDomainStatus(const std::string& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     * 
                     */
                    bool DomainStatusHasBeenSet() const;

                    /**
                     * 获取<p>CNAME address.</p>
                     * @return Cname <p>CNAME address.</p>
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置<p>CNAME address.</p>
                     * @param _cname <p>CNAME address.</p>
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取<p>IPv6 status. Valid values:</p><li>follow: Follow the site IPv6 configuration;</li><li>on: Enabled;</li><li>off: Disabled.</li>
                     * @return IPv6Status <p>IPv6 status. Valid values:</p><li>follow: Follow the site IPv6 configuration;</li><li>on: Enabled;</li><li>off: Disabled.</li>
                     * 
                     */
                    std::string GetIPv6Status() const;

                    /**
                     * 设置<p>IPv6 status. Valid values:</p><li>follow: Follow the site IPv6 configuration;</li><li>on: Enabled;</li><li>off: Disabled.</li>
                     * @param _iPv6Status <p>IPv6 status. Valid values:</p><li>follow: Follow the site IPv6 configuration;</li><li>on: Enabled;</li><li>off: Disabled.</li>
                     * 
                     */
                    void SetIPv6Status(const std::string& _iPv6Status);

                    /**
                     * 判断参数 IPv6Status 是否已赋值
                     * @return IPv6Status 是否已赋值
                     * 
                     */
                    bool IPv6StatusHasBeenSet() const;

                    /**
                     * 获取<p>Acceleration domain ownership verification status. Valid values: </p><li>pending: to be verified;</li><li>finished: verified.</li>
                     * @return IdentificationStatus <p>Acceleration domain ownership verification status. Valid values: </p><li>pending: to be verified;</li><li>finished: verified.</li>
                     * 
                     */
                    std::string GetIdentificationStatus() const;

                    /**
                     * 设置<p>Acceleration domain ownership verification status. Valid values: </p><li>pending: to be verified;</li><li>finished: verified.</li>
                     * @param _identificationStatus <p>Acceleration domain ownership verification status. Valid values: </p><li>pending: to be verified;</li><li>finished: verified.</li>
                     * 
                     */
                    void SetIdentificationStatus(const std::string& _identificationStatus);

                    /**
                     * 判断参数 IdentificationStatus 是否已赋值
                     * @return IdentificationStatus 是否已赋值
                     * 
                     */
                    bool IdentificationStatusHasBeenSet() const;

                    /**
                     * 获取<p>When the acceleration domain name needs to perform ownership verification to continue providing services, this object will carry the information required for the corresponding verification method.</p>
                     * @return OwnershipVerification <p>When the acceleration domain name needs to perform ownership verification to continue providing services, this object will carry the information required for the corresponding verification method.</p>
                     * 
                     */
                    OwnershipVerification GetOwnershipVerification() const;

                    /**
                     * 设置<p>When the acceleration domain name needs to perform ownership verification to continue providing services, this object will carry the information required for the corresponding verification method.</p>
                     * @param _ownershipVerification <p>When the acceleration domain name needs to perform ownership verification to continue providing services, this object will carry the information required for the corresponding verification method.</p>
                     * 
                     */
                    void SetOwnershipVerification(const OwnershipVerification& _ownershipVerification);

                    /**
                     * 判断参数 OwnershipVerification 是否已赋值
                     * @return OwnershipVerification 是否已赋值
                     * 
                     */
                    bool OwnershipVerificationHasBeenSet() const;

                    /**
                     * 获取<p>Origin server information.</p>
                     * @return OriginDetail <p>Origin server information.</p>
                     * 
                     */
                    OriginDetail GetOriginDetail() const;

                    /**
                     * 设置<p>Origin server information.</p>
                     * @param _originDetail <p>Origin server information.</p>
                     * 
                     */
                    void SetOriginDetail(const OriginDetail& _originDetail);

                    /**
                     * 判断参数 OriginDetail 是否已赋值
                     * @return OriginDetail 是否已赋值
                     * 
                     */
                    bool OriginDetailHasBeenSet() const;

                    /**
                     * 获取<p>Origin-pull protocol. Valid values:</p><li>FOLLOW: follow protocol;</li><li>HTTP: origin-pull over HTTP protocol;</li><li>HTTPS: origin-pull over HTTPS protocol.</li>
                     * @return OriginProtocol <p>Origin-pull protocol. Valid values:</p><li>FOLLOW: follow protocol;</li><li>HTTP: origin-pull over HTTP protocol;</li><li>HTTPS: origin-pull over HTTPS protocol.</li>
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置<p>Origin-pull protocol. Valid values:</p><li>FOLLOW: follow protocol;</li><li>HTTP: origin-pull over HTTP protocol;</li><li>HTTPS: origin-pull over HTTPS protocol.</li>
                     * @param _originProtocol <p>Origin-pull protocol. Valid values:</p><li>FOLLOW: follow protocol;</li><li>HTTP: origin-pull over HTTP protocol;</li><li>HTTPS: origin-pull over HTTPS protocol.</li>
                     * 
                     */
                    void SetOriginProtocol(const std::string& _originProtocol);

                    /**
                     * 判断参数 OriginProtocol 是否已赋值
                     * @return OriginProtocol 是否已赋值
                     * 
                     */
                    bool OriginProtocolHasBeenSet() const;

                    /**
                     * 获取<p>HTTP origin port.</p>
                     * @return HttpOriginPort <p>HTTP origin port.</p>
                     * 
                     */
                    uint64_t GetHttpOriginPort() const;

                    /**
                     * 设置<p>HTTP origin port.</p>
                     * @param _httpOriginPort <p>HTTP origin port.</p>
                     * 
                     */
                    void SetHttpOriginPort(const uint64_t& _httpOriginPort);

                    /**
                     * 判断参数 HttpOriginPort 是否已赋值
                     * @return HttpOriginPort 是否已赋值
                     * 
                     */
                    bool HttpOriginPortHasBeenSet() const;

                    /**
                     * 获取<p>HTTPS origin port.</p>
                     * @return HttpsOriginPort <p>HTTPS origin port.</p>
                     * 
                     */
                    uint64_t GetHttpsOriginPort() const;

                    /**
                     * 设置<p>HTTPS origin port.</p>
                     * @param _httpsOriginPort <p>HTTPS origin port.</p>
                     * 
                     */
                    void SetHttpsOriginPort(const uint64_t& _httpsOriginPort);

                    /**
                     * 判断参数 HttpsOriginPort 是否已赋值
                     * @return HttpsOriginPort 是否已赋值
                     * 
                     */
                    bool HttpsOriginPortHasBeenSet() const;

                    /**
                     * 获取<p>Acceleration domain name certificate information.</p>
                     * @return Certificate <p>Acceleration domain name certificate information.</p>
                     * 
                     */
                    AccelerationDomainCertificate GetCertificate() const;

                    /**
                     * 设置<p>Acceleration domain name certificate information.</p>
                     * @param _certificate <p>Acceleration domain name certificate information.</p>
                     * 
                     */
                    void SetCertificate(const AccelerationDomainCertificate& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreatedOn <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createdOn <p>Creation time.</p>
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取<p>Last modified.</p>
                     * @return ModifiedOn <p>Last modified.</p>
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置<p>Last modified.</p>
                     * @param _modifiedOn <p>Last modified.</p>
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取<p>List of region access restrictions on a domain name due to compliance issues.</p>
                     * @return ComplianceRestrictions <p>List of region access restrictions on a domain name due to compliance issues.</p>
                     * 
                     */
                    std::vector<ComplianceRestriction> GetComplianceRestrictions() const;

                    /**
                     * 设置<p>List of region access restrictions on a domain name due to compliance issues.</p>
                     * @param _complianceRestrictions <p>List of region access restrictions on a domain name due to compliance issues.</p>
                     * 
                     */
                    void SetComplianceRestrictions(const std::vector<ComplianceRestriction>& _complianceRestrictions);

                    /**
                     * 判断参数 ComplianceRestrictions 是否已赋值
                     * @return ComplianceRestrictions 是否已赋值
                     * 
                     */
                    bool ComplianceRestrictionsHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Acceleration domain name.</p>
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p>Acceleration domain name status</p><p>Enumeration values:</p><ul><li>online: effective</li><li>process: deploying</li><li>offline: disabled</li><li>init: not applied, site to be activated</li></ul>
                     */
                    std::string m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                    /**
                     * <p>CNAME address.</p>
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * <p>IPv6 status. Valid values:</p><li>follow: Follow the site IPv6 configuration;</li><li>on: Enabled;</li><li>off: Disabled.</li>
                     */
                    std::string m_iPv6Status;
                    bool m_iPv6StatusHasBeenSet;

                    /**
                     * <p>Acceleration domain ownership verification status. Valid values: </p><li>pending: to be verified;</li><li>finished: verified.</li>
                     */
                    std::string m_identificationStatus;
                    bool m_identificationStatusHasBeenSet;

                    /**
                     * <p>When the acceleration domain name needs to perform ownership verification to continue providing services, this object will carry the information required for the corresponding verification method.</p>
                     */
                    OwnershipVerification m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                    /**
                     * <p>Origin server information.</p>
                     */
                    OriginDetail m_originDetail;
                    bool m_originDetailHasBeenSet;

                    /**
                     * <p>Origin-pull protocol. Valid values:</p><li>FOLLOW: follow protocol;</li><li>HTTP: origin-pull over HTTP protocol;</li><li>HTTPS: origin-pull over HTTPS protocol.</li>
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * <p>HTTP origin port.</p>
                     */
                    uint64_t m_httpOriginPort;
                    bool m_httpOriginPortHasBeenSet;

                    /**
                     * <p>HTTPS origin port.</p>
                     */
                    uint64_t m_httpsOriginPort;
                    bool m_httpsOriginPortHasBeenSet;

                    /**
                     * <p>Acceleration domain name certificate information.</p>
                     */
                    AccelerationDomainCertificate m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * <p>Last modified.</p>
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * <p>List of region access restrictions on a domain name due to compliance issues.</p>
                     */
                    std::vector<ComplianceRestriction> m_complianceRestrictions;
                    bool m_complianceRestrictionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAIN_H_
