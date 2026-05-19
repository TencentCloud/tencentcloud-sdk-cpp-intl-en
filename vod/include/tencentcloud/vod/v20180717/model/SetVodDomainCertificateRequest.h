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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SETVODDOMAINCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SETVODDOMAINCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SetVodDomainCertificate request structure.
                */
                class SetVodDomainCertificateRequest : public AbstractModel
                {
                public:
                    SetVodDomainCertificateRequest();
                    ~SetVodDomainCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name.
                     * @return Domain Domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name.
                     * @param _domain Domain name.
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
                     * 获取Operation type of this API call. Valid values:
<li>Set: Certificate required for setting domain HTTPS.</li>
<li>Clear: Clear domain HTTPS configuration. After clearance, the domain cannot support HTTPS access.</li>
                     * @return Operation Operation type of this API call. Valid values:
<li>Set: Certificate required for setting domain HTTPS.</li>
<li>Clear: Clear domain HTTPS configuration. After clearance, the domain cannot support HTTPS access.</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation type of this API call. Valid values:
<li>Set: Certificate required for setting domain HTTPS.</li>
<li>Clear: Clear domain HTTPS configuration. After clearance, the domain cannot support HTTPS access.</li>
                     * @param _operation Operation type of this API call. Valid values:
<li>Set: Certificate required for setting domain HTTPS.</li>
<li>Clear: Clear domain HTTPS configuration. After clearance, the domain cannot support HTTPS access.</li>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取[Tencent Cloud SSL](https://www.tencentcloud.com/document/product/400/7572?from_cn_redirect=1) Uploaded certificate ID. No need to specify this field when clearing domain HTTPS configuration.
                     * @return CertID [Tencent Cloud SSL](https://www.tencentcloud.com/document/product/400/7572?from_cn_redirect=1) Uploaded certificate ID. No need to specify this field when clearing domain HTTPS configuration.
                     * 
                     */
                    std::string GetCertID() const;

                    /**
                     * 设置[Tencent Cloud SSL](https://www.tencentcloud.com/document/product/400/7572?from_cn_redirect=1) Uploaded certificate ID. No need to specify this field when clearing domain HTTPS configuration.
                     * @param _certID [Tencent Cloud SSL](https://www.tencentcloud.com/document/product/400/7572?from_cn_redirect=1) Uploaded certificate ID. No need to specify this field when clearing domain HTTPS configuration.
                     * 
                     */
                    void SetCertID(const std::string& _certID);

                    /**
                     * 判断参数 CertID 是否已赋值
                     * @return CertID 是否已赋值
                     * 
                     */
                    bool CertIDHasBeenSet() const;

                private:

                    /**
                     * Domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Operation type of this API call. Valid values:
<li>Set: Certificate required for setting domain HTTPS.</li>
<li>Clear: Clear domain HTTPS configuration. After clearance, the domain cannot support HTTPS access.</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * [Tencent Cloud SSL](https://www.tencentcloud.com/document/product/400/7572?from_cn_redirect=1) Uploaded certificate ID. No need to specify this field when clearing domain HTTPS configuration.
                     */
                    std::string m_certID;
                    bool m_certIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SETVODDOMAINCERTIFICATEREQUEST_H_
