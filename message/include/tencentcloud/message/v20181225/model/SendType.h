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

#ifndef TENCENTCLOUD_MESSAGE_V20181225_MODEL_SENDTYPE_H_
#define TENCENTCLOUD_MESSAGE_V20181225_MODEL_SENDTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Message
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * Message type sending channel.
                */
                class SendType : public AbstractModel
                {
                public:
                    SendType();
                    ~SendType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Message type.
                     * @return MsgType Message type.
                     * 
                     */
                    uint64_t GetMsgType() const;

                    /**
                     * 设置Message type.
                     * @param _msgType Message type.
                     * 
                     */
                    void SetMsgType(const uint64_t& _msgType);

                    /**
                     * 判断参数 MsgType 是否已赋值
                     * @return MsgType 是否已赋值
                     * 
                     */
                    bool MsgTypeHasBeenSet() const;

                    /**
                     * 获取Delivery channel.
                     * @return SendChannel Delivery channel.
                     * 
                     */
                    uint64_t GetSendChannel() const;

                    /**
                     * 设置Delivery channel.
                     * @param _sendChannel Delivery channel.
                     * 
                     */
                    void SetSendChannel(const uint64_t& _sendChannel);

                    /**
                     * 判断参数 SendChannel 是否已赋值
                     * @return SendChannel 是否已赋值
                     * 
                     */
                    bool SendChannelHasBeenSet() const;

                private:

                    /**
                     * Message type.
                     */
                    uint64_t m_msgType;
                    bool m_msgTypeHasBeenSet;

                    /**
                     * Delivery channel.
                     */
                    uint64_t m_sendChannel;
                    bool m_sendChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MESSAGE_V20181225_MODEL_SENDTYPE_H_
