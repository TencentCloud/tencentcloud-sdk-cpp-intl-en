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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEEKYCWEBHOOKREQUEST_H_
