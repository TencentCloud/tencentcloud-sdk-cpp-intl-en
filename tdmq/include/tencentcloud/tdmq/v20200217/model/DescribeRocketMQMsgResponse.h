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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQMessageTrack.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQMsg response structure.
                */
                class DescribeRocketMQMsgResponse : public AbstractModel
                {
                public:
                    DescribeRocketMQMsgResponse();
                    ~DescribeRocketMQMsgResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Message body
                     * @return Body Message body
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
                     * 获取Details parameter
                     * @return Properties Details parameter
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
                     * 获取Production time
                     * @return ProduceTime Production time
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
                     * 获取Message ID
                     * @return MsgId Message ID
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取Producer address
                     * @return ProducerAddr Producer address
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
                     * 获取Consumption details of a consumer group
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return MessageTracks Consumption details of a consumer group
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RocketMQMessageTrack> GetMessageTracks() const;

                    /**
                     * 判断参数 MessageTracks 是否已赋值
                     * @return MessageTracks 是否已赋值
                     * 
                     */
                    bool MessageTracksHasBeenSet() const;

                    /**
                     * 获取Topic name displayed on the details page
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return ShowTopicName Topic name displayed on the details page
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetShowTopicName() const;

                    /**
                     * 判断参数 ShowTopicName 是否已赋值
                     * @return ShowTopicName 是否已赋值
                     * 
                     */
                    bool ShowTopicNameHasBeenSet() const;

                private:

                    /**
                     * Message body
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * Details parameter
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * Production time
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * Message ID
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * Producer address
                     */
                    std::string m_producerAddr;
                    bool m_producerAddrHasBeenSet;

                    /**
                     * Consumption details of a consumer group
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RocketMQMessageTrack> m_messageTracks;
                    bool m_messageTracksHasBeenSet;

                    /**
                     * Topic name displayed on the details page
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_showTopicName;
                    bool m_showTopicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGRESPONSE_H_
