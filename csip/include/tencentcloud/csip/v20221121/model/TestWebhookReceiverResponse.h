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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TESTWEBHOOKRECEIVERRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TESTWEBHOOKRECEIVERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * TestWebhookReceiver response structure.
                */
                class TestWebhookReceiverResponse : public AbstractModel
                {
                public:
                    TestWebhookReceiverResponse();
                    ~TestWebhookReceiverResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Test result (base64 decode required to get plaintext)</p>
                     * @return RespData <p>Test result (base64 decode required to get plaintext)</p>
                     * 
                     */
                    std::string GetRespData() const;

                    /**
                     * 判断参数 RespData 是否已赋值
                     * @return RespData 是否已赋值
                     * 
                     */
                    bool RespDataHasBeenSet() const;

                private:

                    /**
                     * <p>Test result (base64 decode required to get plaintext)</p>
                     */
                    std::string m_respData;
                    bool m_respDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TESTWEBHOOKRECEIVERRESPONSE_H_
