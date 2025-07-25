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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEWEBHOOKTRIGGERRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEWEBHOOKTRIGGERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/WebhookTrigger.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateWebhookTrigger response structure.
                */
                class CreateWebhookTriggerResponse : public AbstractModel
                {
                public:
                    CreateWebhookTriggerResponse();
                    ~CreateWebhookTriggerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Newly created trigger
                     * @return Trigger Newly created trigger
                     * 
                     */
                    WebhookTrigger GetTrigger() const;

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                private:

                    /**
                     * Newly created trigger
                     */
                    WebhookTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEWEBHOOKTRIGGERRESPONSE_H_
