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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_CUSTOMDOMAININPUT_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_CUSTOMDOMAININPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * Domain item for binding a custom domain
                */
                class CustomDomainInput : public AbstractModel
                {
                public:
                    CustomDomainInput();
                    ~CustomDomainInput() = default;
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
                     * 获取<p>Certificate ID</p>
                     * @return CertificateId <p>Certificate ID</p>
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置<p>Certificate ID</p>
                     * @param _certificateId <p>Certificate ID</p>
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
                     * 获取<p>Verification status. Verify, Pass, Fail</p>
                     * @return Status <p>Verification status. Verify, Pass, Fail</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Verification status. Verify, Pass, Fail</p>
                     * @param _status <p>Verification status. Verify, Pass, Fail</p>
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
                     * 获取<p>Whether not to apply for a certificate.</p>
                     * @return NoCertificate <p>Whether not to apply for a certificate.</p>
                     * 
                     */
                    bool GetNoCertificate() const;

                    /**
                     * 设置<p>Whether not to apply for a certificate.</p>
                     * @param _noCertificate <p>Whether not to apply for a certificate.</p>
                     * 
                     */
                    void SetNoCertificate(const bool& _noCertificate);

                    /**
                     * 判断参数 NoCertificate 是否已赋值
                     * @return NoCertificate 是否已赋值
                     * 
                     */
                    bool NoCertificateHasBeenSet() const;

                private:

                    /**
                     * <p>Domain name.</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Certificate ID</p>
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * <p>Verification status. Verify, Pass, Fail</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Whether not to apply for a certificate.</p>
                     */
                    bool m_noCertificate;
                    bool m_noCertificateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_CUSTOMDOMAININPUT_H_
