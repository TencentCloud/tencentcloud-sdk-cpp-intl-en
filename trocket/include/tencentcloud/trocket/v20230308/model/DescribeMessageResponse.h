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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGERESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/MessageTrackItem.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeMessage response structure.
                */
                class DescribeMessageResponse : public AbstractModel
                {
                public:
                    DescribeMessageResponse();
                    ~DescribeMessageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Message body.
                     * @return Body Message body.
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取Detailed parameters.
                     * @return Properties Detailed parameters.
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取Production time.
                     * @return ProduceTime Production time.
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 判断参数 ProduceTime 是否已赋值
                     * @return ProduceTime 是否已赋值
                     * 
                     */
                    bool ProduceTimeHasBeenSet() const;

                    /**
                     * 获取Message ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MessageId Message ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Producer address.
                     * @return ProducerAddr Producer address.
                     * 
                     */
                    std::string GetProducerAddr() const;

                    /**
                     * 判断参数 ProducerAddr 是否已赋值
                     * @return ProducerAddr 是否已赋值
                     * 
                     */
                    bool ProducerAddrHasBeenSet() const;

                    /**
                     * 获取List of message consumption situations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MessageTracks List of message consumption situations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MessageTrackItem> GetMessageTracks() const;

                    /**
                     * 判断参数 MessageTracks 是否已赋值
                     * @return MessageTracks 是否已赋值
                     * 
                     */
                    bool MessageTracksHasBeenSet() const;

                    /**
                     * 获取Topic name
                     * @return ShowTopicName Topic name
                     * 
                     */
                    std::string GetShowTopicName() const;

                    /**
                     * 判断参数 ShowTopicName 是否已赋值
                     * @return ShowTopicName 是否已赋值
                     * 
                     */
                    bool ShowTopicNameHasBeenSet() const;

                    /**
                     * 获取Total number of items in the message consumption status list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MessageTracksCount Total number of items in the message consumption status list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMessageTracksCount() const;

                    /**
                     * 判断参数 MessageTracksCount 是否已赋值
                     * @return MessageTracksCount 是否已赋值
                     * 
                     */
                    bool MessageTracksCountHasBeenSet() const;

                private:

                    /**
                     * Message body.
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * Detailed parameters.
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * Production time.
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * Message ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * Producer address.
                     */
                    std::string m_producerAddr;
                    bool m_producerAddrHasBeenSet;

                    /**
                     * List of message consumption situations.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MessageTrackItem> m_messageTracks;
                    bool m_messageTracksHasBeenSet;

                    /**
                     * Topic name
                     */
                    std::string m_showTopicName;
                    bool m_showTopicNameHasBeenSet;

                    /**
                     * Total number of items in the message consumption status list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_messageTracksCount;
                    bool m_messageTracksCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGERESPONSE_H_
