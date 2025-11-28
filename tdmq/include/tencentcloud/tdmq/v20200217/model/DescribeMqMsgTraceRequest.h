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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMQMSGTRACEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMQMSGTRACEREQUEST_H_

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
                * DescribeMqMsgTrace request structure.
                */
                class DescribeMqMsgTraceRequest : public AbstractModel
                {
                public:
                    DescribeMqMsgTraceRequest();
                    ~DescribeMqMsgTraceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取pulsar,rocketmq,rabbitmq,cmq
                     * @return Protocol pulsar,rocketmq,rabbitmq,cmq
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置pulsar,rocketmq,rabbitmq,cmq
                     * @param _protocol pulsar,rocketmq,rabbitmq,cmq
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Message ID
                     * @return MsgId Message ID
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置Message ID
                     * @param _msgId Message ID
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
                     * 获取Cluster id. cmq is empty.
                     * @return ClusterId Cluster id. cmq is empty.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster id. cmq is empty.
                     * @param _clusterId Cluster id. cmq is empty.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Namespace. cmq is empty.
                     * @return EnvironmentId Namespace. cmq is empty.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Namespace. cmq is empty.
                     * @param _environmentId Namespace. cmq is empty.
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Topic. empty for cmq. group id when querying rocketmq dead letters.
                     * @return TopicName Topic. empty for cmq. group id when querying rocketmq dead letters.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic. empty for cmq. group id when querying rocketmq dead letters.
                     * @param _topicName Topic. empty for cmq. group id when querying rocketmq dead letters.
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取cmq is required. fill in the blank for other protocols.
                     * @return QueueName cmq is required. fill in the blank for other protocols.
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置cmq is required. fill in the blank for other protocols.
                     * @param _queueName cmq is required. fill in the blank for other protocols.
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取Consumer Group and Subscription
                     * @return GroupName Consumer Group and Subscription
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Consumer Group and Subscription
                     * @param _groupName Consumer Group and Subscription
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取The value is true when querying dead letters, and only valid for RocketMQ.
                     * @return QueryDlqMsg The value is true when querying dead letters, and only valid for RocketMQ.
                     * 
                     */
                    bool GetQueryDlqMsg() const;

                    /**
                     * 设置The value is true when querying dead letters, and only valid for RocketMQ.
                     * @param _queryDlqMsg The value is true when querying dead letters, and only valid for RocketMQ.
                     * 
                     */
                    void SetQueryDlqMsg(const bool& _queryDlqMsg);

                    /**
                     * 判断参数 QueryDlqMsg 是否已赋值
                     * @return QueryDlqMsg 是否已赋值
                     * 
                     */
                    bool QueryDlqMsgHasBeenSet() const;

                    /**
                     * 获取Message production time.
                     * @return ProduceTime Message production time.
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 设置Message production time.
                     * @param _produceTime Message production time.
                     * 
                     */
                    void SetProduceTime(const std::string& _produceTime);

                    /**
                     * 判断参数 ProduceTime 是否已赋值
                     * @return ProduceTime 是否已赋值
                     * 
                     */
                    bool ProduceTimeHasBeenSet() const;

                private:

                    /**
                     * pulsar,rocketmq,rabbitmq,cmq
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Message ID
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * Cluster id. cmq is empty.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Namespace. cmq is empty.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Topic. empty for cmq. group id when querying rocketmq dead letters.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * cmq is required. fill in the blank for other protocols.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Consumer Group and Subscription
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * The value is true when querying dead letters, and only valid for RocketMQ.
                     */
                    bool m_queryDlqMsg;
                    bool m_queryDlqMsgHasBeenSet;

                    /**
                     * Message production time.
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMQMSGTRACEREQUEST_H_
