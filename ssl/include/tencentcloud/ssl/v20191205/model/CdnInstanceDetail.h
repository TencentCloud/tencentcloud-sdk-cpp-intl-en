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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CDNINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CDNINSTANCEDETAIL_H_

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
                * Details of a CDN instance
                */
                class CdnInstanceDetail : public AbstractModel
                {
                public:
                    CdnInstanceDetail();
                    ~CdnInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The domain.
                     * @return Domain The domain.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain.
                     * @param _domain The domain.
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
                     * 获取The ID of the deployed certificate.
                     * @return CertId The ID of the deployed certificate.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置The ID of the deployed certificate.
                     * @param _certId The ID of the deployed certificate.
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Domain name status: rejected - the domain name failed the review or its registration has expired/been canceled; processing - deploying; online - started; offline - closed.
                     * @return Status Domain name status: rejected - the domain name failed the review or its registration has expired/been canceled; processing - deploying; online - started; offline - closed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Domain name status: rejected - the domain name failed the review or its registration has expired/been canceled; processing - deploying; online - started; offline - closed.
                     * @param _status Domain name status: rejected - the domain name failed the review or its registration has expired/been canceled; processing - deploying; online - started; offline - closed.
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
                     * 获取Domain billing status, where on indicates enable and off indicates disable.
                     * @return HttpsBillingSwitch Domain billing status, where on indicates enable and off indicates disable.
                     * 
                     */
                    std::string GetHttpsBillingSwitch() const;

                    /**
                     * 设置Domain billing status, where on indicates enable and off indicates disable.
                     * @param _httpsBillingSwitch Domain billing status, where on indicates enable and off indicates disable.
                     * 
                     */
                    void SetHttpsBillingSwitch(const std::string& _httpsBillingSwitch);

                    /**
                     * 判断参数 HttpsBillingSwitch 是否已赋值
                     * @return HttpsBillingSwitch 是否已赋值
                     * 
                     */
                    bool HttpsBillingSwitchHasBeenSet() const;

                private:

                    /**
                     * The domain.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The ID of the deployed certificate.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Domain name status: rejected - the domain name failed the review or its registration has expired/been canceled; processing - deploying; online - started; offline - closed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Domain billing status, where on indicates enable and off indicates disable.
                     */
                    std::string m_httpsBillingSwitch;
                    bool m_httpsBillingSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CDNINSTANCEDETAIL_H_
