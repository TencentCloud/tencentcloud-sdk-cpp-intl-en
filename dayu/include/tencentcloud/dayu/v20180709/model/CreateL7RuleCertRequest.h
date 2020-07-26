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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7RULECERTREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7RULECERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateL7RuleCert request structure.
                */
                class CreateL7RuleCertRequest : public AbstractModel
                {
                public:
                    CreateL7RuleCertRequest();
                    ~CreateL7RuleCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * @param Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID
                     * @return Id Anti-DDoS instance ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param Id Anti-DDoS instance ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param RuleId Rule ID
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Certificate type, which is required if the protocol is HTTPS. Valid value: [2 (Tencent Cloud-hosted certificate)]
                     * @return CertType Certificate type, which is required if the protocol is HTTPS. Valid value: [2 (Tencent Cloud-hosted certificate)]
                     */
                    uint64_t GetCertType() const;

                    /**
                     * 设置Certificate type, which is required if the protocol is HTTPS. Valid value: [2 (Tencent Cloud-hosted certificate)]
                     * @param CertType Certificate type, which is required if the protocol is HTTPS. Valid value: [2 (Tencent Cloud-hosted certificate)]
                     */
                    void SetCertType(const uint64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取If the certificate is a Tencent Cloud-hosted certificate, this field must be entered with the hosted certificate ID.
                     * @return SSLId If the certificate is a Tencent Cloud-hosted certificate, this field must be entered with the hosted certificate ID.
                     */
                    std::string GetSSLId() const;

                    /**
                     * 设置If the certificate is a Tencent Cloud-hosted certificate, this field must be entered with the hosted certificate ID.
                     * @param SSLId If the certificate is a Tencent Cloud-hosted certificate, this field must be entered with the hosted certificate ID.
                     */
                    void SetSSLId(const std::string& _sSLId);

                    /**
                     * 判断参数 SSLId 是否已赋值
                     * @return SSLId 是否已赋值
                     */
                    bool SSLIdHasBeenSet() const;

                    /**
                     * 获取[Disused] If the certificate is an external certificate, this field must be entered with the certificate content. 
                     * @return Cert [Disused] If the certificate is an external certificate, this field must be entered with the certificate content. 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置[Disused] If the certificate is an external certificate, this field must be entered with the certificate content. 
                     * @param Cert [Disused] If the certificate is an external certificate, this field must be entered with the certificate content. 
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取[Disused] If the certificate is an external certificate, this field must be entered with the certificate key. 
                     * @return PrivateKey [Disused] If the certificate is an external certificate, this field must be entered with the certificate key. 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置[Disused] If the certificate is an external certificate, this field must be entered with the certificate key. 
                     * @param PrivateKey [Disused] If the certificate is an external certificate, this field must be entered with the certificate key. 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     */
                    bool PrivateKeyHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Certificate type, which is required if the protocol is HTTPS. Valid value: [2 (Tencent Cloud-hosted certificate)]
                     */
                    uint64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * If the certificate is a Tencent Cloud-hosted certificate, this field must be entered with the hosted certificate ID.
                     */
                    std::string m_sSLId;
                    bool m_sSLIdHasBeenSet;

                    /**
                     * [Disused] If the certificate is an external certificate, this field must be entered with the certificate content. 
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * [Disused] If the certificate is an external certificate, this field must be entered with the certificate key. 
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7RULECERTREQUEST_H_
