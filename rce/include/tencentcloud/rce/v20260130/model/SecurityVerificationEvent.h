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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_SECURITYVERIFICATIONEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_SECURITYVERIFICATIONEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Result.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * SecurityVerification event details
                */
                class SecurityVerificationEvent : public AbstractModel
                {
                public:
                    SecurityVerificationEvent();
                    ~SecurityVerificationEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The event type being verified</p><p>Enumeration values:</p><ul><li>register</li><li>login</li><li>modify_account</li><li>modify_password</li><li>create_order</li><li>transaction</li><li>modify_order</li><li>withdraw</li><li>add_promotion</li><li>redeem</li></ul>
                     * @return VerificationEvent <p>The event type being verified</p><p>Enumeration values:</p><ul><li>register</li><li>login</li><li>modify_account</li><li>modify_password</li><li>create_order</li><li>transaction</li><li>modify_order</li><li>withdraw</li><li>add_promotion</li><li>redeem</li></ul>
                     * 
                     */
                    std::string GetVerificationEvent() const;

                    /**
                     * 设置<p>The event type being verified</p><p>Enumeration values:</p><ul><li>register</li><li>login</li><li>modify_account</li><li>modify_password</li><li>create_order</li><li>transaction</li><li>modify_order</li><li>withdraw</li><li>add_promotion</li><li>redeem</li></ul>
                     * @param _verificationEvent <p>The event type being verified</p><p>Enumeration values:</p><ul><li>register</li><li>login</li><li>modify_account</li><li>modify_password</li><li>create_order</li><li>transaction</li><li>modify_order</li><li>withdraw</li><li>add_promotion</li><li>redeem</li></ul>
                     * 
                     */
                    void SetVerificationEvent(const std::string& _verificationEvent);

                    /**
                     * 判断参数 VerificationEvent 是否已赋值
                     * @return VerificationEvent 是否已赋值
                     * 
                     */
                    bool VerificationEventHasBeenSet() const;

                    /**
                     * 获取<p>The type of security verification: sms, phone call, email, captcha, shared knowledge, human face, fingerprint, etc</p>
                     * @return VerificationType <p>The type of security verification: sms, phone call, email, captcha, shared knowledge, human face, fingerprint, etc</p>
                     * 
                     */
                    std::string GetVerificationType() const;

                    /**
                     * 设置<p>The type of security verification: sms, phone call, email, captcha, shared knowledge, human face, fingerprint, etc</p>
                     * @param _verificationType <p>The type of security verification: sms, phone call, email, captcha, shared knowledge, human face, fingerprint, etc</p>
                     * 
                     */
                    void SetVerificationType(const std::string& _verificationType);

                    /**
                     * 判断参数 VerificationType 是否已赋值
                     * @return VerificationType 是否已赋值
                     * 
                     */
                    bool VerificationTypeHasBeenSet() const;

                    /**
                     * 获取<p>The content of the security verifcation.This value should be passed when the verification type is set to sms, phone_call, email captcha or shared_knowledge</p>
                     * @return VerificationContent <p>The content of the security verifcation.This value should be passed when the verification type is set to sms, phone_call, email captcha or shared_knowledge</p>
                     * 
                     */
                    std::string GetVerificationContent() const;

                    /**
                     * 设置<p>The content of the security verifcation.This value should be passed when the verification type is set to sms, phone_call, email captcha or shared_knowledge</p>
                     * @param _verificationContent <p>The content of the security verifcation.This value should be passed when the verification type is set to sms, phone_call, email captcha or shared_knowledge</p>
                     * 
                     */
                    void SetVerificationContent(const std::string& _verificationContent);

                    /**
                     * 判断参数 VerificationContent 是否已赋值
                     * @return VerificationContent 是否已赋值
                     * 
                     */
                    bool VerificationContentHasBeenSet() const;

                    /**
                     * 获取<p>The result of security verification</p>
                     * @return VerificationResult <p>The result of security verification</p>
                     * 
                     */
                    Result GetVerificationResult() const;

                    /**
                     * 设置<p>The result of security verification</p>
                     * @param _verificationResult <p>The result of security verification</p>
                     * 
                     */
                    void SetVerificationResult(const Result& _verificationResult);

                    /**
                     * 判断参数 VerificationResult 是否已赋值
                     * @return VerificationResult 是否已赋值
                     * 
                     */
                    bool VerificationResultHasBeenSet() const;

                    /**
                     * 获取<p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * @return Cust <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * @param _cust <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>The event type being verified</p><p>Enumeration values:</p><ul><li>register</li><li>login</li><li>modify_account</li><li>modify_password</li><li>create_order</li><li>transaction</li><li>modify_order</li><li>withdraw</li><li>add_promotion</li><li>redeem</li></ul>
                     */
                    std::string m_verificationEvent;
                    bool m_verificationEventHasBeenSet;

                    /**
                     * <p>The type of security verification: sms, phone call, email, captcha, shared knowledge, human face, fingerprint, etc</p>
                     */
                    std::string m_verificationType;
                    bool m_verificationTypeHasBeenSet;

                    /**
                     * <p>The content of the security verifcation.This value should be passed when the verification type is set to sms, phone_call, email captcha or shared_knowledge</p>
                     */
                    std::string m_verificationContent;
                    bool m_verificationContentHasBeenSet;

                    /**
                     * <p>The result of security verification</p>
                     */
                    Result m_verificationResult;
                    bool m_verificationResultHasBeenSet;

                    /**
                     * <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_SECURITYVERIFICATIONEVENT_H_
