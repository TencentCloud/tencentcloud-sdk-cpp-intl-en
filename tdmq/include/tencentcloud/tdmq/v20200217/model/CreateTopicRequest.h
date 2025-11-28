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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATETOPICREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATETOPICREQUEST_H_

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
                * CreateTopic request structure.
                */
                class CreateTopicRequest : public AbstractModel
                {
                public:
                    CreateTopicRequest();
                    ~CreateTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment (namespace) name.
                     * @return EnvironmentId Environment (namespace) name.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment (namespace) name.
                     * @param _environmentId Environment (namespace) name.
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
                     * 获取Topic name, which can contain up to 64 letters, digits, hyphens, and underscores.
                     * @return TopicName Topic name, which can contain up to 64 letters, digits, hyphens, and underscores.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name, which can contain up to 64 letters, digits, hyphens, and underscores.
                     * @param _topicName Topic name, which can contain up to 64 letters, digits, hyphens, and underscores.
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
                     * 获取The input parameter is 1, which means creating a non-partitioned topic with no partition. if the input parameter is greater than 1, it indicates the number of partitions for a partitioned topic, and the maximum cannot exceed 32.
                     * @return Partitions The input parameter is 1, which means creating a non-partitioned topic with no partition. if the input parameter is greater than 1, it indicates the number of partitions for a partitioned topic, and the maximum cannot exceed 32.
                     * 
                     */
                    uint64_t GetPartitions() const;

                    /**
                     * 设置The input parameter is 1, which means creating a non-partitioned topic with no partition. if the input parameter is greater than 1, it indicates the number of partitions for a partitioned topic, and the maximum cannot exceed 32.
                     * @param _partitions The input parameter is 1, which means creating a non-partitioned topic with no partition. if the input parameter is greater than 1, it indicates the number of partitions for a partitioned topic, and the maximum cannot exceed 32.
                     * 
                     */
                    void SetPartitions(const uint64_t& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取Pulsar cluster ID
                     * @return ClusterId Pulsar cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar cluster ID
                     * @param _clusterId Pulsar cluster ID
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
                     * 获取Remarks (up to 128 characters).
                     * @return Remark Remarks (up to 128 characters).
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks (up to 128 characters).
                     * @param _remark Remarks (up to 128 characters).
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取This input parameter will be disused soon. You can use `PulsarTopicType` instead.
0: General message;
1: Globally sequential message;
2: Partitionally sequential message;
3: Retry letter topic;
4: Dead letter topic.
                     * @return TopicType This input parameter will be disused soon. You can use `PulsarTopicType` instead.
0: General message;
1: Globally sequential message;
2: Partitionally sequential message;
3: Retry letter topic;
4: Dead letter topic.
                     * 
                     */
                    uint64_t GetTopicType() const;

                    /**
                     * 设置This input parameter will be disused soon. You can use `PulsarTopicType` instead.
0: General message;
1: Globally sequential message;
2: Partitionally sequential message;
3: Retry letter topic;
4: Dead letter topic.
                     * @param _topicType This input parameter will be disused soon. You can use `PulsarTopicType` instead.
0: General message;
1: Globally sequential message;
2: Partitionally sequential message;
3: Retry letter topic;
4: Dead letter topic.
                     * 
                     */
                    void SetTopicType(const uint64_t& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取Pulsar topic type.
`0`: Non-persistent and non-partitioned
`1`: Non-persistent and partitioned
`2`: Persistent and non-partitioned
`3`: Persistent and partitioned
                     * @return PulsarTopicType Pulsar topic type.
`0`: Non-persistent and non-partitioned
`1`: Non-persistent and partitioned
`2`: Persistent and non-partitioned
`3`: Persistent and partitioned
                     * 
                     */
                    int64_t GetPulsarTopicType() const;

                    /**
                     * 设置Pulsar topic type.
`0`: Non-persistent and non-partitioned
`1`: Non-persistent and partitioned
`2`: Persistent and non-partitioned
`3`: Persistent and partitioned
                     * @param _pulsarTopicType Pulsar topic type.
`0`: Non-persistent and non-partitioned
`1`: Non-persistent and partitioned
`2`: Persistent and non-partitioned
`3`: Persistent and partitioned
                     * 
                     */
                    void SetPulsarTopicType(const int64_t& _pulsarTopicType);

                    /**
                     * 判断参数 PulsarTopicType 是否已赋值
                     * @return PulsarTopicType 是否已赋值
                     * 
                     */
                    bool PulsarTopicTypeHasBeenSet() const;

                    /**
                     * 获取Retention period for unconsumed messages in seconds. value ranges from 60 seconds to 15 days.
                     * @return MsgTTL Retention period for unconsumed messages in seconds. value ranges from 60 seconds to 15 days.
                     * 
                     */
                    uint64_t GetMsgTTL() const;

                    /**
                     * 设置Retention period for unconsumed messages in seconds. value ranges from 60 seconds to 15 days.
                     * @param _msgTTL Retention period for unconsumed messages in seconds. value ranges from 60 seconds to 15 days.
                     * 
                     */
                    void SetMsgTTL(const uint64_t& _msgTTL);

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                    /**
                     * 获取Default if not passed is native policy. DefaultPolicy means when the subscription reaches the maximum unacknowledged messages of 5000, the server will stop pushing messages to all consumers under the current subscription. DynamicPolicy means dynamically adjust the maximum unacknowledged messages of the subscription, with the specific quota being the maximum between 5000 and the number of consumers multiplied by 20. the default maximum unacknowledged message count per consumer is 20. exceeding this limit only affects that consumer and does not affect other consumers.
                     * @return UnackPolicy Default if not passed is native policy. DefaultPolicy means when the subscription reaches the maximum unacknowledged messages of 5000, the server will stop pushing messages to all consumers under the current subscription. DynamicPolicy means dynamically adjust the maximum unacknowledged messages of the subscription, with the specific quota being the maximum between 5000 and the number of consumers multiplied by 20. the default maximum unacknowledged message count per consumer is 20. exceeding this limit only affects that consumer and does not affect other consumers.
                     * 
                     */
                    std::string GetUnackPolicy() const;

                    /**
                     * 设置Default if not passed is native policy. DefaultPolicy means when the subscription reaches the maximum unacknowledged messages of 5000, the server will stop pushing messages to all consumers under the current subscription. DynamicPolicy means dynamically adjust the maximum unacknowledged messages of the subscription, with the specific quota being the maximum between 5000 and the number of consumers multiplied by 20. the default maximum unacknowledged message count per consumer is 20. exceeding this limit only affects that consumer and does not affect other consumers.
                     * @param _unackPolicy Default if not passed is native policy. DefaultPolicy means when the subscription reaches the maximum unacknowledged messages of 5000, the server will stop pushing messages to all consumers under the current subscription. DynamicPolicy means dynamically adjust the maximum unacknowledged messages of the subscription, with the specific quota being the maximum between 5000 and the number of consumers multiplied by 20. the default maximum unacknowledged message count per consumer is 20. exceeding this limit only affects that consumer and does not affect other consumers.
                     * 
                     */
                    void SetUnackPolicy(const std::string& _unackPolicy);

                    /**
                     * 判断参数 UnackPolicy 是否已赋值
                     * @return UnackPolicy 是否已赋值
                     * 
                     */
                    bool UnackPolicyHasBeenSet() const;

                    /**
                     * 获取Whether exception consumer isolation is enabled.
                     * @return IsolateConsumerEnable Whether exception consumer isolation is enabled.
                     * 
                     */
                    bool GetIsolateConsumerEnable() const;

                    /**
                     * 设置Whether exception consumer isolation is enabled.
                     * @param _isolateConsumerEnable Whether exception consumer isolation is enabled.
                     * 
                     */
                    void SetIsolateConsumerEnable(const bool& _isolateConsumerEnable);

                    /**
                     * 判断参数 IsolateConsumerEnable 是否已赋值
                     * @return IsolateConsumerEnable 是否已赋值
                     * 
                     */
                    bool IsolateConsumerEnableHasBeenSet() const;

                    /**
                     * 获取Specifies the consumer Ack timeout period in seconds. value range: 60-(3600*24).
                     * @return AckTimeOut Specifies the consumer Ack timeout period in seconds. value range: 60-(3600*24).
                     * 
                     */
                    int64_t GetAckTimeOut() const;

                    /**
                     * 设置Specifies the consumer Ack timeout period in seconds. value range: 60-(3600*24).
                     * @param _ackTimeOut Specifies the consumer Ack timeout period in seconds. value range: 60-(3600*24).
                     * 
                     */
                    void SetAckTimeOut(const int64_t& _ackTimeOut);

                    /**
                     * 判断参数 AckTimeOut 是否已赋值
                     * @return AckTimeOut 是否已赋值
                     * 
                     */
                    bool AckTimeOutHasBeenSet() const;

                private:

                    /**
                     * Environment (namespace) name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Topic name, which can contain up to 64 letters, digits, hyphens, and underscores.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * The input parameter is 1, which means creating a non-partitioned topic with no partition. if the input parameter is greater than 1, it indicates the number of partitions for a partitioned topic, and the maximum cannot exceed 32.
                     */
                    uint64_t m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * Pulsar cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Remarks (up to 128 characters).
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * This input parameter will be disused soon. You can use `PulsarTopicType` instead.
0: General message;
1: Globally sequential message;
2: Partitionally sequential message;
3: Retry letter topic;
4: Dead letter topic.
                     */
                    uint64_t m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * Pulsar topic type.
`0`: Non-persistent and non-partitioned
`1`: Non-persistent and partitioned
`2`: Persistent and non-partitioned
`3`: Persistent and partitioned
                     */
                    int64_t m_pulsarTopicType;
                    bool m_pulsarTopicTypeHasBeenSet;

                    /**
                     * Retention period for unconsumed messages in seconds. value ranges from 60 seconds to 15 days.
                     */
                    uint64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * Default if not passed is native policy. DefaultPolicy means when the subscription reaches the maximum unacknowledged messages of 5000, the server will stop pushing messages to all consumers under the current subscription. DynamicPolicy means dynamically adjust the maximum unacknowledged messages of the subscription, with the specific quota being the maximum between 5000 and the number of consumers multiplied by 20. the default maximum unacknowledged message count per consumer is 20. exceeding this limit only affects that consumer and does not affect other consumers.
                     */
                    std::string m_unackPolicy;
                    bool m_unackPolicyHasBeenSet;

                    /**
                     * Whether exception consumer isolation is enabled.
                     */
                    bool m_isolateConsumerEnable;
                    bool m_isolateConsumerEnableHasBeenSet;

                    /**
                     * Specifies the consumer Ack timeout period in seconds. value range: 60-(3600*24).
                     */
                    int64_t m_ackTimeOut;
                    bool m_ackTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATETOPICREQUEST_H_
