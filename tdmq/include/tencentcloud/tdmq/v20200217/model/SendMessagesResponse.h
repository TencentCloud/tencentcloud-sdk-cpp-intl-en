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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDMESSAGESRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDMESSAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * SendMessages response structure.
                */
                class SendMessagesResponse : public AbstractModel
                {
                public:
                    SendMessagesResponse();
                    ~SendMessagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取messageID, which must be globally unique and is the metadata information used to identify the message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MessageId messageID, which must be globally unique and is the metadata information used to identify the message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取Returned error message. If an empty string is returned, no error occurred.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMsg Returned error message. If an empty string is returned, no error occurred.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * messageID, which must be globally unique and is the metadata information used to identify the message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * Returned error message. If an empty string is returned, no error occurred.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDMESSAGESRESPONSE_H_
