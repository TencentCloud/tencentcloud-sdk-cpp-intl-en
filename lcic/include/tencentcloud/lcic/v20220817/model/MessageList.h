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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MESSAGELIST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MESSAGELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/MessageItem.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * The list of historical messages.
                */
                class MessageList : public AbstractModel
                {
                public:
                    MessageList();
                    ~MessageList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The message timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Timestamp The message timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置The message timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timestamp The message timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取The sender.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FromAccount The sender.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFromAccount() const;

                    /**
                     * 设置The sender.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fromAccount The sender.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFromAccount(const std::string& _fromAccount);

                    /**
                     * 判断参数 FromAccount 是否已赋值
                     * @return FromAccount 是否已赋值
                     * 
                     */
                    bool FromAccountHasBeenSet() const;

                    /**
                     * 获取The message sequence, which is unique across a class. The earlier a message is sent, the lower the sequence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Seq The message sequence, which is unique across a class. The earlier a message is sent, the lower the sequence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSeq() const;

                    /**
                     * 设置The message sequence, which is unique across a class. The earlier a message is sent, the lower the sequence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _seq The message sequence, which is unique across a class. The earlier a message is sent, the lower the sequence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSeq(const int64_t& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取The message content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MessageBody The message content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MessageItem> GetMessageBody() const;

                    /**
                     * 设置The message content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _messageBody The message content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessageBody(const std::vector<MessageItem>& _messageBody);

                    /**
                     * 判断参数 MessageBody 是否已赋值
                     * @return MessageBody 是否已赋值
                     * 
                     */
                    bool MessageBodyHasBeenSet() const;

                private:

                    /**
                     * The message timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * The sender.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fromAccount;
                    bool m_fromAccountHasBeenSet;

                    /**
                     * The message sequence, which is unique across a class. The earlier a message is sent, the lower the sequence.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * The message content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MessageItem> m_messageBody;
                    bool m_messageBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MESSAGELIST_H_
