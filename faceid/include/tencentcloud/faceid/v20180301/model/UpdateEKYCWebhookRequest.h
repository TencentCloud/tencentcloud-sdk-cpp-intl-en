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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEEKYCWEBHOOKREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEEKYCWEBHOOKREQUEST_H_

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
                * UpdateEKYCWebhook request structure.
                */
                class UpdateEKYCWebhookRequest : public AbstractModel
                {
                public:
                    UpdateEKYCWebhookRequest();
                    ~UpdateEKYCWebhookRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the Webhook configuration to be updated</p>
                     * @return WebhookId <p>ID of the Webhook configuration to be updated</p>
                     * 
                     */
                    int64_t GetWebhookId() const;

                    /**
                     * 设置<p>ID of the Webhook configuration to be updated</p>
                     * @param _webhookId <p>ID of the Webhook configuration to be updated</p>
                     * 
                     */
                    void SetWebhookId(const int64_t& _webhookId);

                    /**
                     * 判断参数 WebhookId 是否已赋值
                     * @return WebhookId 是否已赋值
                     * 
                     */
                    bool WebhookIdHasBeenSet() const;

                    /**
                     * 获取<p>New Webhook name</p>
                     * @return WebhookName <p>New Webhook name</p>
                     * 
                     */
                    std::string GetWebhookName() const;

                    /**
                     * 设置<p>New Webhook name</p>
                     * @param _webhookName <p>New Webhook name</p>
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
                     * 获取New callback URL, which must use the HTTPS protocol.
                     * @return WebhookURL New callback URL, which must use the HTTPS protocol.
                     * 
                     */
                    std::string GetWebhookURL() const;

                    /**
                     * 设置New callback URL, which must use the HTTPS protocol.
                     * @param _webhookURL New callback URL, which must use the HTTPS protocol.
                     * 
                     */
                    void SetWebhookURL(const std::string& _webhookURL);

                    /**
                     * 判断参数 WebhookURL 是否已赋值
                     * @return WebhookURL 是否已赋值
                     * 
                     */
                    bool WebhookURLHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the Webhook configuration to be updated</p>
                     */
                    int64_t m_webhookId;
                    bool m_webhookIdHasBeenSet;

                    /**
                     * <p>New Webhook name</p>
                     */
                    std::string m_webhookName;
                    bool m_webhookNameHasBeenSet;

                    /**
                     * New callback URL, which must use the HTTPS protocol.
                     */
                    std::string m_webhookURL;
                    bool m_webhookURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEEKYCWEBHOOKREQUEST_H_
