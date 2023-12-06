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
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
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
                     * 获取The operation type of this API call, optional value:
<li>Set: Set the certificate required for the domain name HTTPS;</li>
<li>Clear: Clear the domain name HTTPS configuration, after clearing, the domain name cannot support </li>
                     * @return Operation The operation type of this API call, optional value:
<li>Set: Set the certificate required for the domain name HTTPS;</li>
<li>Clear: Clear the domain name HTTPS configuration, after clearing, the domain name cannot support </li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置The operation type of this API call, optional value:
<li>Set: Set the certificate required for the domain name HTTPS;</li>
<li>Clear: Clear the domain name HTTPS configuration, after clearing, the domain name cannot support </li>
                     * @param _operation The operation type of this API call, optional value:
<li>Set: Set the certificate required for the domain name HTTPS;</li>
<li>Clear: Clear the domain name HTTPS configuration, after clearing, the domain name cannot support </li>
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
                     * 获取<b>VOD [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.</b>
                     * @return SubAppId <b>VOD [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.</b>
                     * @param _subAppId <b>VOD [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.</b>
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
                     * 获取[Tencent Cloud SSL](https://intl.cloud.tencent.com/document/product/400/7572?from_cn_redirect=1) uploaded certificate ID. No need to fill in this field when clearing domain HTTPS configuration
                     * @return CertID [Tencent Cloud SSL](https://intl.cloud.tencent.com/document/product/400/7572?from_cn_redirect=1) uploaded certificate ID. No need to fill in this field when clearing domain HTTPS configuration
                     * 
                     */
                    std::string GetCertID() const;

                    /**
                     * 设置[Tencent Cloud SSL](https://intl.cloud.tencent.com/document/product/400/7572?from_cn_redirect=1) uploaded certificate ID. No need to fill in this field when clearing domain HTTPS configuration
                     * @param _certID [Tencent Cloud SSL](https://intl.cloud.tencent.com/document/product/400/7572?from_cn_redirect=1) uploaded certificate ID. No need to fill in this field when clearing domain HTTPS configuration
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
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The operation type of this API call, optional value:
<li>Set: Set the certificate required for the domain name HTTPS;</li>
<li>Clear: Clear the domain name HTTPS configuration, after clearing, the domain name cannot support </li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <b>VOD [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * [Tencent Cloud SSL](https://intl.cloud.tencent.com/document/product/400/7572?from_cn_redirect=1) uploaded certificate ID. No need to fill in this field when clearing domain HTTPS configuration
                     */
                    std::string m_certID;
                    bool m_certIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SETVODDOMAINCERTIFICATEREQUEST_H_
