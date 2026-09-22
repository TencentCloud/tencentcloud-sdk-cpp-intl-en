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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEEKYCWEBHOOKREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEEKYCWEBHOOKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CreateEKYCWebhook request structure.
                */
                class CreateEKYCWebhookRequest : public AbstractModel
                {
                public:
                    CreateEKYCWebhookRequest();
                    ~CreateEKYCWebhookRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Webhook name, used for console display</p>
                     * @return WebhookName <p>Webhook name, used for console display</p>
                     * 
                     */
                    std::string GetWebhookName() const;

                    /**
                     * 设置<p>Webhook name, used for console display</p>
                     * @param _webhookName <p>Webhook name, used for console display</p>
                     * 
                     */
                    void SetWebhookName(const std::string& _webhookName);

                    /**
                     * 判断参数 WebhookName 是否已赋值
                     * @return WebhookName 是否已赋值
                     * 
                     */
                    bool WebhookNameHasBeenSet() const;

                    /**
                     * 获取<p>Callback URL, which must use the HTTPS protocol</p>
                     * @return WebhookURL <p>Callback URL, which must use the HTTPS protocol</p>
                     * 
                     */
                    std::string GetWebhookURL() const;

                    /**
                     * 设置<p>Callback URL, which must use the HTTPS protocol</p>
                     * @param _webhookURL <p>Callback URL, which must use the HTTPS protocol</p>
                     * 
                     */
                    void SetWebhookURL(const std::string& _webhookURL);

                    /**
                     * 判断参数 WebhookURL 是否已赋值
                     * @return WebhookURL 是否已赋值
                     * 
                     */
                    bool WebhookURLHasBeenSet() const;

                    /**
                     * 获取<p>Business scenario. Default if not passed: AML_SCREENING_RESULT_CHANGE. For parameter values, see the enumeration below.</p><p>Enumeration values:</p><ul><li>AML_SCREENING_RESULT_CHANGE: AML anti-money laundering screening result change notification (default value)    </li><li>NONDOC_VERIFICATION_RESULT: Non-document (NonDoc) verification result notification</li></ul>
                     * @return Scene <p>Business scenario. Default if not passed: AML_SCREENING_RESULT_CHANGE. For parameter values, see the enumeration below.</p><p>Enumeration values:</p><ul><li>AML_SCREENING_RESULT_CHANGE: AML anti-money laundering screening result change notification (default value)    </li><li>NONDOC_VERIFICATION_RESULT: Non-document (NonDoc) verification result notification</li></ul>
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置<p>Business scenario. Default if not passed: AML_SCREENING_RESULT_CHANGE. For parameter values, see the enumeration below.</p><p>Enumeration values:</p><ul><li>AML_SCREENING_RESULT_CHANGE: AML anti-money laundering screening result change notification (default value)    </li><li>NONDOC_VERIFICATION_RESULT: Non-document (NonDoc) verification result notification</li></ul>
                     * @param _scene <p>Business scenario. Default if not passed: AML_SCREENING_RESULT_CHANGE. For parameter values, see the enumeration below.</p><p>Enumeration values:</p><ul><li>AML_SCREENING_RESULT_CHANGE: AML anti-money laundering screening result change notification (default value)    </li><li>NONDOC_VERIFICATION_RESULT: Non-document (NonDoc) verification result notification</li></ul>
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取<p>Callback signature key, up to 128 characters. Used for HMAC-SHA256 signature verification of subsequent callback messages. If not passed, signature is not enabled. We recommend using OpenSSL random bytes to generate the key. Recommended command: openssl rand -base64 32</p><blockquote><p>Our side uses your configured <code>SignatureKey</code> to calculate an HMAC-SHA256 signature over "timestamp (<code>X-Webhook-Timestamp</code>) + <code>.</code> + request body", and puts the hexadecimal result in the request header <code>X-Webhook-Signature</code>. The message itself is unencrypted and transmitted over HTTPS. Use the same key to recalculate and compare the signature by the same rule to confirm that the notification source is trustworthy and the content has not been tampered with.</p></blockquote>
                     * @return SignatureKey <p>Callback signature key, up to 128 characters. Used for HMAC-SHA256 signature verification of subsequent callback messages. If not passed, signature is not enabled. We recommend using OpenSSL random bytes to generate the key. Recommended command: openssl rand -base64 32</p><blockquote><p>Our side uses your configured <code>SignatureKey</code> to calculate an HMAC-SHA256 signature over "timestamp (<code>X-Webhook-Timestamp</code>) + <code>.</code> + request body", and puts the hexadecimal result in the request header <code>X-Webhook-Signature</code>. The message itself is unencrypted and transmitted over HTTPS. Use the same key to recalculate and compare the signature by the same rule to confirm that the notification source is trustworthy and the content has not been tampered with.</p></blockquote>
                     * 
                     */
                    std::string GetSignatureKey() const;

                    /**
                     * 设置<p>Callback signature key, up to 128 characters. Used for HMAC-SHA256 signature verification of subsequent callback messages. If not passed, signature is not enabled. We recommend using OpenSSL random bytes to generate the key. Recommended command: openssl rand -base64 32</p><blockquote><p>Our side uses your configured <code>SignatureKey</code> to calculate an HMAC-SHA256 signature over "timestamp (<code>X-Webhook-Timestamp</code>) + <code>.</code> + request body", and puts the hexadecimal result in the request header <code>X-Webhook-Signature</code>. The message itself is unencrypted and transmitted over HTTPS. Use the same key to recalculate and compare the signature by the same rule to confirm that the notification source is trustworthy and the content has not been tampered with.</p></blockquote>
                     * @param _signatureKey <p>Callback signature key, up to 128 characters. Used for HMAC-SHA256 signature verification of subsequent callback messages. If not passed, signature is not enabled. We recommend using OpenSSL random bytes to generate the key. Recommended command: openssl rand -base64 32</p><blockquote><p>Our side uses your configured <code>SignatureKey</code> to calculate an HMAC-SHA256 signature over "timestamp (<code>X-Webhook-Timestamp</code>) + <code>.</code> + request body", and puts the hexadecimal result in the request header <code>X-Webhook-Signature</code>. The message itself is unencrypted and transmitted over HTTPS. Use the same key to recalculate and compare the signature by the same rule to confirm that the notification source is trustworthy and the content has not been tampered with.</p></blockquote>
                     * 
                     */
                    void SetSignatureKey(const std::string& _signatureKey);

                    /**
                     * 判断参数 SignatureKey 是否已赋值
                     * @return SignatureKey 是否已赋值
                     * 
                     */
                    bool SignatureKeyHasBeenSet() const;

                private:

                    /**
                     * <p>Webhook name, used for console display</p>
                     */
                    std::string m_webhookName;
                    bool m_webhookNameHasBeenSet;

                    /**
                     * <p>Callback URL, which must use the HTTPS protocol</p>
                     */
                    std::string m_webhookURL;
                    bool m_webhookURLHasBeenSet;

                    /**
                     * <p>Business scenario. Default if not passed: AML_SCREENING_RESULT_CHANGE. For parameter values, see the enumeration below.</p><p>Enumeration values:</p><ul><li>AML_SCREENING_RESULT_CHANGE: AML anti-money laundering screening result change notification (default value)    </li><li>NONDOC_VERIFICATION_RESULT: Non-document (NonDoc) verification result notification</li></ul>
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * <p>Callback signature key, up to 128 characters. Used for HMAC-SHA256 signature verification of subsequent callback messages. If not passed, signature is not enabled. We recommend using OpenSSL random bytes to generate the key. Recommended command: openssl rand -base64 32</p><blockquote><p>Our side uses your configured <code>SignatureKey</code> to calculate an HMAC-SHA256 signature over "timestamp (<code>X-Webhook-Timestamp</code>) + <code>.</code> + request body", and puts the hexadecimal result in the request header <code>X-Webhook-Signature</code>. The message itself is unencrypted and transmitted over HTTPS. Use the same key to recalculate and compare the signature by the same rule to confirm that the notification source is trustworthy and the content has not been tampered with.</p></blockquote>
                     */
                    std::string m_signatureKey;
                    bool m_signatureKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEEKYCWEBHOOKREQUEST_H_
