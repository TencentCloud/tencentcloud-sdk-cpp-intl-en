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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginDetail.h>
#include <tencentcloud/teo/v20220901/model/OwnershipVerification.h>
#include <tencentcloud/teo/v20220901/model/AccelerationDomainCertificate.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Accelerated domain name
                */
                class AccelerationDomain : public AbstractModel
                {
                public:
                    AccelerationDomain();
                    ~AccelerationDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the site.
                     * @return ZoneId ID of the site.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site.
                     * @param _zoneId ID of the site.
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
                     * 获取Accelerated domain name
                     * @return DomainName Accelerated domain name
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Accelerated domain name
                     * @param _domainName Accelerated domain name
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
                     * 获取Status of the accelerated domain name. Values:
<li>`online`: Activated</li>
<li>`process`: Being deployed</li>
<li>`offline`: Disabled</li>
<li>`forbidden`: Blocked</li>
<li>`init`: Pending activation</li>
                     * @return DomainStatus Status of the accelerated domain name. Values:
<li>`online`: Activated</li>
<li>`process`: Being deployed</li>
<li>`offline`: Disabled</li>
<li>`forbidden`: Blocked</li>
<li>`init`: Pending activation</li>
                     * 
                     */
                    std::string GetDomainStatus() const;

                    /**
                     * 设置Status of the accelerated domain name. Values:
<li>`online`: Activated</li>
<li>`process`: Being deployed</li>
<li>`offline`: Disabled</li>
<li>`forbidden`: Blocked</li>
<li>`init`: Pending activation</li>
                     * @param _domainStatus Status of the accelerated domain name. Values:
<li>`online`: Activated</li>
<li>`process`: Being deployed</li>
<li>`offline`: Disabled</li>
<li>`forbidden`: Blocked</li>
<li>`init`: Pending activation</li>
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
                     * 获取Details of the origin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginDetail Details of the origin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    OriginDetail GetOriginDetail() const;

                    /**
                     * 设置Details of the origin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _originDetail Details of the origin.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Origin-pull protocol configuration. Values:
<li>`FOLLOW`: Follow the protocol of origin</li>
<li>`HTTP`: Send requests to the origin over HTTP</li>
<li>`HTTPS`: Send requests to the origin over HTTPS</li>
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OriginProtocol Origin-pull protocol configuration. Values:
<li>`FOLLOW`: Follow the protocol of origin</li>
<li>`HTTP`: Send requests to the origin over HTTP</li>
<li>`HTTPS`: Send requests to the origin over HTTPS</li>
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置Origin-pull protocol configuration. Values:
<li>`FOLLOW`: Follow the protocol of origin</li>
<li>`HTTP`: Send requests to the origin over HTTP</li>
<li>`HTTPS`: Send requests to the origin over HTTPS</li>
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _originProtocol Origin-pull protocol configuration. Values:
<li>`FOLLOW`: Follow the protocol of origin</li>
<li>`HTTP`: Send requests to the origin over HTTP</li>
<li>`HTTPS`: Send requests to the origin over HTTPS</li>
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取The port used for HTTP origin-pull requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return HttpOriginPort The port used for HTTP origin-pull requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetHttpOriginPort() const;

                    /**
                     * 设置The port used for HTTP origin-pull requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _httpOriginPort The port used for HTTP origin-pull requests
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取The port used for HTTPS origin-pull requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return HttpsOriginPort The port used for HTTPS origin-pull requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetHttpsOriginPort() const;

                    /**
                     * 设置The port used for HTTPS origin-pull requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _httpsOriginPort The port used for HTTPS origin-pull requests
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取IPv6 status. Values:
<li>`follow`: Follow the IPv6 configuration of the site</li>
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IPv6Status IPv6 status. Values:
<li>`follow`: Follow the IPv6 configuration of the site</li>
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIPv6Status() const;

                    /**
                     * 设置IPv6 status. Values:
<li>`follow`: Follow the IPv6 configuration of the site</li>
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _iPv6Status IPv6 status. Values:
<li>`follow`: Follow the IPv6 configuration of the site</li>
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取The CNAME address.
                     * @return Cname The CNAME address.
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置The CNAME address.
                     * @param _cname The CNAME address.
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
                     * 获取Ownership verification status. Values: <li>`pending`: Pending verification</li> <li>`finished`: Verified</li>	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdentificationStatus Ownership verification status. Values: <li>`pending`: Pending verification</li> <li>`finished`: Verified</li>	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIdentificationStatus() const;

                    /**
                     * 设置Ownership verification status. Values: <li>`pending`: Pending verification</li> <li>`finished`: Verified</li>	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _identificationStatus Ownership verification status. Values: <li>`pending`: Pending verification</li> <li>`finished`: Verified</li>	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time of the accelerated domain name.
                     * @return CreatedOn Creation time of the accelerated domain name.
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Creation time of the accelerated domain name.
                     * @param _createdOn Creation time of the accelerated domain name.
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
                     * 获取Modification time of the accelerated domain name.
                     * @return ModifiedOn Modification time of the accelerated domain name.
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置Modification time of the accelerated domain name.
                     * @param _modifiedOn Modification time of the accelerated domain name.
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
                     * 获取Information required to verify the ownership of a domain name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OwnershipVerification Information required to verify the ownership of a domain name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    OwnershipVerification GetOwnershipVerification() const;

                    /**
                     * 设置Information required to verify the ownership of a domain name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _ownershipVerification Information required to verify the ownership of a domain name.
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Domain name certificate information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Certificate Domain name certificate information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    AccelerationDomainCertificate GetCertificate() const;

                    /**
                     * 设置Domain name certificate information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _certificate Domain name certificate information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertificate(const AccelerationDomainCertificate& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                private:

                    /**
                     * ID of the site.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Accelerated domain name
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Status of the accelerated domain name. Values:
<li>`online`: Activated</li>
<li>`process`: Being deployed</li>
<li>`offline`: Disabled</li>
<li>`forbidden`: Blocked</li>
<li>`init`: Pending activation</li>
                     */
                    std::string m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                    /**
                     * Details of the origin.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OriginDetail m_originDetail;
                    bool m_originDetailHasBeenSet;

                    /**
                     * Origin-pull protocol configuration. Values:
<li>`FOLLOW`: Follow the protocol of origin</li>
<li>`HTTP`: Send requests to the origin over HTTP</li>
<li>`HTTPS`: Send requests to the origin over HTTPS</li>
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * The port used for HTTP origin-pull requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_httpOriginPort;
                    bool m_httpOriginPortHasBeenSet;

                    /**
                     * The port used for HTTPS origin-pull requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_httpsOriginPort;
                    bool m_httpsOriginPortHasBeenSet;

                    /**
                     * IPv6 status. Values:
<li>`follow`: Follow the IPv6 configuration of the site</li>
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_iPv6Status;
                    bool m_iPv6StatusHasBeenSet;

                    /**
                     * The CNAME address.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * Ownership verification status. Values: <li>`pending`: Pending verification</li> <li>`finished`: Verified</li>	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_identificationStatus;
                    bool m_identificationStatusHasBeenSet;

                    /**
                     * Creation time of the accelerated domain name.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Modification time of the accelerated domain name.
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * Information required to verify the ownership of a domain name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    OwnershipVerification m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                    /**
                     * Domain name certificate information
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    AccelerationDomainCertificate m_certificate;
                    bool m_certificateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAIN_H_
