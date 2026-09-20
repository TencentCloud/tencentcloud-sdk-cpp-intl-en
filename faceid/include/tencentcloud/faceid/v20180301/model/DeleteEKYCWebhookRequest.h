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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DELETEEKYCWEBHOOKREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DELETEEKYCWEBHOOKREQUEST_H_

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
                * DeleteEKYCWebhook request structure.
                */
                class DeleteEKYCWebhookRequest : public AbstractModel
                {
                public:
                    DeleteEKYCWebhookRequest();
                    ~DeleteEKYCWebhookRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the Webhook configuration to delete</p>
                     * @return WebhookId <p>ID of the Webhook configuration to delete</p>
                     * 
                     */
                    int64_t GetWebhookId() const;

                    /**
                     * 设置<p>ID of the Webhook configuration to delete</p>
                     * @param _webhookId <p>ID of the Webhook configuration to delete</p>
                     * 
                     */
                    void SetWebhookId(const int64_t& _webhookId);

                    /**
                     * 判断参数 WebhookId 是否已赋值
                     * @return WebhookId 是否已赋值
                     * 
                     */
                    bool WebhookIdHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the Webhook configuration to delete</p>
                     */
                    int64_t m_webhookId;
                    bool m_webhookIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DELETEEKYCWEBHOOKREQUEST_H_
