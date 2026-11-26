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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEDOMAIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OwnershipVerification.h>
#include <tencentcloud/teo/v20220901/model/HostsCertificate.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Domain information of the inference service.
                */
                class InferenceDomain : public AbstractModel
                {
                public:
                    InferenceDomain();
                    ~InferenceDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Domain name.</p>
                     * @return Domain <p>Domain name.</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Domain name.</p>
                     * @param _domain <p>Domain name.</p>
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
                     * 获取<p>Domain name status.</p><p>Enumeration values:</p><ul><li>Online: effective;</li><li>Process: deploying;</li><li>Offline: disabled;</li><li>Init: not applied, site to be activated;</li><li>Forbidden: domain name disabled.</li></ul>
                     * @return Status <p>Domain name status.</p><p>Enumeration values:</p><ul><li>Online: effective;</li><li>Process: deploying;</li><li>Offline: disabled;</li><li>Init: not applied, site to be activated;</li><li>Forbidden: domain name disabled.</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Domain name status.</p><p>Enumeration values:</p><ul><li>Online: effective;</li><li>Process: deploying;</li><li>Offline: disabled;</li><li>Init: not applied, site to be activated;</li><li>Forbidden: domain name disabled.</li></ul>
                     * @param _status <p>Domain name status.</p><p>Enumeration values:</p><ul><li>Online: effective;</li><li>Process: deploying;</li><li>Offline: disabled;</li><li>Init: not applied, site to be activated;</li><li>Forbidden: domain name disabled.</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Authentication switch for inference task requests.</p><p>Enumeration values:</p><ul><li>Off: Disable authentication;</li><li>On: Enable authentication.</li></ul><p>Default value: On.</p>
                     * @return AuthSwitch <p>Authentication switch for inference task requests.</p><p>Enumeration values:</p><ul><li>Off: Disable authentication;</li><li>On: Enable authentication.</li></ul><p>Default value: On.</p>
                     * 
                     */
                    std::string GetAuthSwitch() const;

                    /**
                     * 设置<p>Authentication switch for inference task requests.</p><p>Enumeration values:</p><ul><li>Off: Disable authentication;</li><li>On: Enable authentication.</li></ul><p>Default value: On.</p>
                     * @param _authSwitch <p>Authentication switch for inference task requests.</p><p>Enumeration values:</p><ul><li>Off: Disable authentication;</li><li>On: Enable authentication.</li></ul><p>Default value: On.</p>
                     * 
                     */
                    void SetAuthSwitch(const std::string& _authSwitch);

                    /**
                     * 判断参数 AuthSwitch 是否已赋值
                     * @return AuthSwitch 是否已赋值
                     * 
                     */
                    bool AuthSwitchHasBeenSet() const;

                    /**
                     * 获取<p>CNAME address.</p><p>To validate the CNAME configuration status of a domain, see the <a href="https://www.tencentcloud.com/document/api/1552/94491?from_cn_redirect=1"> CheckCnameStatus </a> api.</p>
                     * @return Cname <p>CNAME address.</p><p>To validate the CNAME configuration status of a domain, see the <a href="https://www.tencentcloud.com/document/api/1552/94491?from_cn_redirect=1"> CheckCnameStatus </a> api.</p>
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置<p>CNAME address.</p><p>To validate the CNAME configuration status of a domain, see the <a href="https://www.tencentcloud.com/document/api/1552/94491?from_cn_redirect=1"> CheckCnameStatus </a> api.</p>
                     * @param _cname <p>CNAME address.</p><p>To validate the CNAME configuration status of a domain, see the <a href="https://www.tencentcloud.com/document/api/1552/94491?from_cn_redirect=1"> CheckCnameStatus </a> api.</p>
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
                     * 获取<p>When the domain name needs to perform ownership verification to continue providing services, this object will carry the information required for the corresponding verification method.</p><p>To verify ownership, see the <a href="https://www.tencentcloud.com/document/api/1552/98879?from_cn_redirect=1"> VerifyOwnership </a> API.</p>
                     * @return OwnershipVerification <p>When the domain name needs to perform ownership verification to continue providing services, this object will carry the information required for the corresponding verification method.</p><p>To verify ownership, see the <a href="https://www.tencentcloud.com/document/api/1552/98879?from_cn_redirect=1"> VerifyOwnership </a> API.</p>
                     * 
                     */
                    OwnershipVerification GetOwnershipVerification() const;

                    /**
                     * 设置<p>When the domain name needs to perform ownership verification to continue providing services, this object will carry the information required for the corresponding verification method.</p><p>To verify ownership, see the <a href="https://www.tencentcloud.com/document/api/1552/98879?from_cn_redirect=1"> VerifyOwnership </a> API.</p>
                     * @param _ownershipVerification <p>When the domain name needs to perform ownership verification to continue providing services, this object will carry the information required for the corresponding verification method.</p><p>To verify ownership, see the <a href="https://www.tencentcloud.com/document/api/1552/98879?from_cn_redirect=1"> VerifyOwnership </a> API.</p>
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
                     * 获取<p>Domain name certificate information.</p><p>To apply for a free certificate, see the <a href="https://www.tencentcloud.com/document/api/1552/124807?from_cn_redirect=1">ApplyFreeCertificate</a> API;<br>To check the free certificate application result, see the <a href="https://www.tencentcloud.com/document/api/1552/124806?from_cn_redirect=1">CheckFreeCertificateVerification</a> API;<br>To configure the domain name certificate, see the <a href="https://www.tencentcloud.com/document/api/1552/80764?from_cn_redirect=1">ModifyHostsCertificate</a> API.</p>
                     * @return Certificate <p>Domain name certificate information.</p><p>To apply for a free certificate, see the <a href="https://www.tencentcloud.com/document/api/1552/124807?from_cn_redirect=1">ApplyFreeCertificate</a> API;<br>To check the free certificate application result, see the <a href="https://www.tencentcloud.com/document/api/1552/124806?from_cn_redirect=1">CheckFreeCertificateVerification</a> API;<br>To configure the domain name certificate, see the <a href="https://www.tencentcloud.com/document/api/1552/80764?from_cn_redirect=1">ModifyHostsCertificate</a> API.</p>
                     * 
                     */
                    HostsCertificate GetCertificate() const;

                    /**
                     * 设置<p>Domain name certificate information.</p><p>To apply for a free certificate, see the <a href="https://www.tencentcloud.com/document/api/1552/124807?from_cn_redirect=1">ApplyFreeCertificate</a> API;<br>To check the free certificate application result, see the <a href="https://www.tencentcloud.com/document/api/1552/124806?from_cn_redirect=1">CheckFreeCertificateVerification</a> API;<br>To configure the domain name certificate, see the <a href="https://www.tencentcloud.com/document/api/1552/80764?from_cn_redirect=1">ModifyHostsCertificate</a> API.</p>
                     * @param _certificate <p>Domain name certificate information.</p><p>To apply for a free certificate, see the <a href="https://www.tencentcloud.com/document/api/1552/124807?from_cn_redirect=1">ApplyFreeCertificate</a> API;<br>To check the free certificate application result, see the <a href="https://www.tencentcloud.com/document/api/1552/124806?from_cn_redirect=1">CheckFreeCertificateVerification</a> API;<br>To configure the domain name certificate, see the <a href="https://www.tencentcloud.com/document/api/1552/80764?from_cn_redirect=1">ModifyHostsCertificate</a> API.</p>
                     * 
                     */
                    void SetCertificate(const HostsCertificate& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last modified.</p>
                     * @return UpdateTime <p>Last modified.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Last modified.</p>
                     * @param _updateTime <p>Last modified.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Domain name.</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Domain name status.</p><p>Enumeration values:</p><ul><li>Online: effective;</li><li>Process: deploying;</li><li>Offline: disabled;</li><li>Init: not applied, site to be activated;</li><li>Forbidden: domain name disabled.</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Authentication switch for inference task requests.</p><p>Enumeration values:</p><ul><li>Off: Disable authentication;</li><li>On: Enable authentication.</li></ul><p>Default value: On.</p>
                     */
                    std::string m_authSwitch;
                    bool m_authSwitchHasBeenSet;

                    /**
                     * <p>CNAME address.</p><p>To validate the CNAME configuration status of a domain, see the <a href="https://www.tencentcloud.com/document/api/1552/94491?from_cn_redirect=1"> CheckCnameStatus </a> api.</p>
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * <p>When the domain name needs to perform ownership verification to continue providing services, this object will carry the information required for the corresponding verification method.</p><p>To verify ownership, see the <a href="https://www.tencentcloud.com/document/api/1552/98879?from_cn_redirect=1"> VerifyOwnership </a> API.</p>
                     */
                    OwnershipVerification m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                    /**
                     * <p>Domain name certificate information.</p><p>To apply for a free certificate, see the <a href="https://www.tencentcloud.com/document/api/1552/124807?from_cn_redirect=1">ApplyFreeCertificate</a> API;<br>To check the free certificate application result, see the <a href="https://www.tencentcloud.com/document/api/1552/124806?from_cn_redirect=1">CheckFreeCertificateVerification</a> API;<br>To configure the domain name certificate, see the <a href="https://www.tencentcloud.com/document/api/1552/80764?from_cn_redirect=1">ModifyHostsCertificate</a> API.</p>
                     */
                    HostsCertificate m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last modified.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEDOMAIN_H_
