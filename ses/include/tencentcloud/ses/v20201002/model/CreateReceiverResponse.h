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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_CREATERECEIVERRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_CREATERECEIVERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * CreateReceiver response structure.
                */
                class CreateReceiverResponse : public AbstractModel
                {
                public:
                    CreateReceiverResponse();
                    ~CreateReceiverResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Recipient group ID, by which recipient email addresses are uploaded
                     * @return ReceiverId Recipient group ID, by which recipient email addresses are uploaded
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

                private:

                    /**
                     * Recipient group ID, by which recipient email addresses are uploaded
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_CREATERECEIVERRESPONSE_H_
