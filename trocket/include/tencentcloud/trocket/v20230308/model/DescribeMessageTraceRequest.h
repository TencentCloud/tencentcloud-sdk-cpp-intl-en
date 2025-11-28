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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGETRACEREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGETRACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeMessageTrace request structure.
                */
                class DescribeMessageTraceRequest : public AbstractModel
                {
                public:
                    DescribeMessageTraceRequest();
                    ~DescribeMessageTraceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @return InstanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @param _instanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Topic name. It can be obtained from [TopicItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the API [DescribeTopicList](https://www.tencentcloud.comom/document/api/1493/96030?from_cn_redirect=1) or from the console.
                     * @return Topic Topic name. It can be obtained from [TopicItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the API [DescribeTopicList](https://www.tencentcloud.comom/document/api/1493/96030?from_cn_redirect=1) or from the console.
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Topic name. It can be obtained from [TopicItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the API [DescribeTopicList](https://www.tencentcloud.comom/document/api/1493/96030?from_cn_redirect=1) or from the console.
                     * @param _topic Topic name. It can be obtained from [TopicItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the API [DescribeTopicList](https://www.tencentcloud.comom/document/api/1493/96030?from_cn_redirect=1) or from the console.
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Message ID. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from the workload logs.
                     * @return MsgId Message ID. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from the workload logs.
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置Message ID. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from the workload logs.
                     * @param _msgId Message ID. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from the workload logs.
                     * 
                     */
                    void SetMsgId(const std::string& _msgId);

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取Whether the message is dead letter message. Default value: false.
                     * @return QueryDeadLetterMessage Whether the message is dead letter message. Default value: false.
                     * 
                     */
                    bool GetQueryDeadLetterMessage() const;

                    /**
                     * 设置Whether the message is dead letter message. Default value: false.
                     * @param _queryDeadLetterMessage Whether the message is dead letter message. Default value: false.
                     * 
                     */
                    void SetQueryDeadLetterMessage(const bool& _queryDeadLetterMessage);

                    /**
                     * 判断参数 QueryDeadLetterMessage 是否已赋值
                     * @return QueryDeadLetterMessage 是否已赋值
                     * 
                     */
                    bool QueryDeadLetterMessageHasBeenSet() const;

                    /**
                     * 获取Whether the message is delayed. Default value: false.
                     * @return QueryDelayMessage Whether the message is delayed. Default value: false.
                     * 
                     */
                    bool GetQueryDelayMessage() const;

                    /**
                     * 设置Whether the message is delayed. Default value: false.
                     * @param _queryDelayMessage Whether the message is delayed. Default value: false.
                     * 
                     */
                    void SetQueryDelayMessage(const bool& _queryDelayMessage);

                    /**
                     * 判断参数 QueryDelayMessage 是否已赋值
                     * @return QueryDelayMessage 是否已赋值
                     * 
                     */
                    bool QueryDelayMessageHasBeenSet() const;

                private:

                    /**
                     * TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Topic name. It can be obtained from [TopicItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the API [DescribeTopicList](https://www.tencentcloud.comom/document/api/1493/96030?from_cn_redirect=1) or from the console.
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Message ID. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from the workload logs.
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * Whether the message is dead letter message. Default value: false.
                     */
                    bool m_queryDeadLetterMessage;
                    bool m_queryDeadLetterMessageHasBeenSet;

                    /**
                     * Whether the message is delayed. Default value: false.
                     */
                    bool m_queryDelayMessage;
                    bool m_queryDelayMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGETRACEREQUEST_H_
