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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEEKYCWEBHOOKRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEEKYCWEBHOOKRESPONSE_H_

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
                * CreateEKYCWebhook response structure.
                */
                class CreateEKYCWebhookResponse : public AbstractModel
                {
                public:
                    CreateEKYCWebhookResponse();
                    ~CreateEKYCWebhookResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Returned results</p>
                     * @return Result <p>Returned results</p>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>ID of the created Webhook configuration</p>
                     * @return WebhookId <p>ID of the created Webhook configuration</p>
                     * 
                     */
                    int64_t GetWebhookId() const;

                    /**
                     * 判断参数 WebhookId 是否已赋值
                     * @return WebhookId 是否已赋值
                     * 
                     */
                    bool WebhookIdHasBeenSet() const;

                    /**
                     * 获取<p>Whether to add a callback signature key</p><p>Default value: false</p>
                     * @return HasSignatureKey <p>Whether to add a callback signature key</p><p>Default value: false</p>
                     * 
                     */
                    bool GetHasSignatureKey() const;

                    /**
                     * 判断参数 HasSignatureKey 是否已赋值
                     * @return HasSignatureKey 是否已赋值
                     * 
                     */
                    bool HasSignatureKeyHasBeenSet() const;

                    /**
                     * 获取<p>Callback signature key</p>
                     * @return SignatureKey <p>Callback signature key</p>
                     * 
                     */
                    std::string GetSignatureKey() const;

                    /**
                     * 判断参数 SignatureKey 是否已赋值
                     * @return SignatureKey 是否已赋值
                     * 
                     */
                    bool SignatureKeyHasBeenSet() const;

                private:

                    /**
                     * <p>Returned results</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>ID of the created Webhook configuration</p>
                     */
                    int64_t m_webhookId;
                    bool m_webhookIdHasBeenSet;

                    /**
                     * <p>Whether to add a callback signature key</p><p>Default value: false</p>
                     */
                    bool m_hasSignatureKey;
                    bool m_hasSignatureKeyHasBeenSet;

                    /**
                     * <p>Callback signature key</p>
                     */
                    std::string m_signatureKey;
                    bool m_signatureKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEEKYCWEBHOOKRESPONSE_H_
