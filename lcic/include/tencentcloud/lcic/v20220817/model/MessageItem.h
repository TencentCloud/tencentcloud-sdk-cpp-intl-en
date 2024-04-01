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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MESSAGEITEM_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MESSAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/CustomMsgContent.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * The information of a message.
                */
                class MessageItem : public AbstractModel
                {
                public:
                    MessageItem();
                    ~MessageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The message type. `0`: Text; `1`: Image.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MessageType The message type. `0`: Text; `1`: Image.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMessageType() const;

                    /**
                     * 设置The message type. `0`: Text; `1`: Image.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _messageType The message type. `0`: Text; `1`: Image.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessageType(const int64_t& _messageType);

                    /**
                     * 判断参数 MessageType 是否已赋值
                     * @return MessageType 是否已赋值
                     * 
                     */
                    bool MessageTypeHasBeenSet() const;

                    /**
                     * 获取The text. This parameter is valid if `MessageType` is `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TextMessage The text. This parameter is valid if `MessageType` is `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTextMessage() const;

                    /**
                     * 设置The text. This parameter is valid if `MessageType` is `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _textMessage The text. This parameter is valid if `MessageType` is `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTextMessage(const std::string& _textMessage);

                    /**
                     * 判断参数 TextMessage 是否已赋值
                     * @return TextMessage 是否已赋值
                     * 
                     */
                    bool TextMessageHasBeenSet() const;

                    /**
                     * 获取The image URL. This parameter is valid if `MessageType` is `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageMessage The image URL. This parameter is valid if `MessageType` is `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageMessage() const;

                    /**
                     * 设置The image URL. This parameter is valid if `MessageType` is `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageMessage The image URL. This parameter is valid if `MessageType` is `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImageMessage(const std::string& _imageMessage);

                    /**
                     * 判断参数 ImageMessage 是否已赋值
                     * @return ImageMessage 是否已赋值
                     * 
                     */
                    bool ImageMessageHasBeenSet() const;

                    /**
                     * 获取Customize the message content. Vaild when message type=2.
                     * @return CustomMessage Customize the message content. Vaild when message type=2.
                     * 
                     */
                    CustomMsgContent GetCustomMessage() const;

                    /**
                     * 设置Customize the message content. Vaild when message type=2.
                     * @param _customMessage Customize the message content. Vaild when message type=2.
                     * 
                     */
                    void SetCustomMessage(const CustomMsgContent& _customMessage);

                    /**
                     * 判断参数 CustomMessage 是否已赋值
                     * @return CustomMessage 是否已赋值
                     * 
                     */
                    bool CustomMessageHasBeenSet() const;

                private:

                    /**
                     * The message type. `0`: Text; `1`: Image.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_messageType;
                    bool m_messageTypeHasBeenSet;

                    /**
                     * The text. This parameter is valid if `MessageType` is `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_textMessage;
                    bool m_textMessageHasBeenSet;

                    /**
                     * The image URL. This parameter is valid if `MessageType` is `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageMessage;
                    bool m_imageMessageHasBeenSet;

                    /**
                     * Customize the message content. Vaild when message type=2.
                     */
                    CustomMsgContent m_customMessage;
                    bool m_customMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MESSAGEITEM_H_
