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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGREQUEST_H_

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
                * DescribeRocketMQMsg request structure.
                */
                class DescribeRocketMQMsgRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQMsgRequest();
                    ~DescribeRocketMQMsgRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取Namespace ID
                     * @return EnvironmentId Namespace ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Namespace ID
                     * @param _environmentId Namespace ID
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
                     * 获取Topic name. Pass in the group ID when querying a dead letter queue.
                     * @return TopicName Topic name. Pass in the group ID when querying a dead letter queue.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name. Pass in the group ID when querying a dead letter queue.
                     * @param _topicName Topic name. Pass in the group ID when querying a dead letter queue.
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
                     * 获取ID of a TDMQ for Pulsar message
                     * @return PulsarMsgId ID of a TDMQ for Pulsar message
                     * 
                     */
                    std::string GetPulsarMsgId() const;

                    /**
                     * 设置ID of a TDMQ for Pulsar message
                     * @param _pulsarMsgId ID of a TDMQ for Pulsar message
                     * 
                     */
                    void SetPulsarMsgId(const std::string& _pulsarMsgId);

                    /**
                     * 判断参数 PulsarMsgId 是否已赋值
                     * @return PulsarMsgId 是否已赋值
                     * 
                     */
                    bool PulsarMsgIdHasBeenSet() const;

                    /**
                     * 获取The value of this parameter is `true` when you query a dead letter queue. It only applies to TDMQ for RocketMQ.
                     * @return QueryDlqMsg The value of this parameter is `true` when you query a dead letter queue. It only applies to TDMQ for RocketMQ.
                     * @deprecated
                     */
                    bool GetQueryDlqMsg() const;

                    /**
                     * 设置The value of this parameter is `true` when you query a dead letter queue. It only applies to TDMQ for RocketMQ.
                     * @param _queryDlqMsg The value of this parameter is `true` when you query a dead letter queue. It only applies to TDMQ for RocketMQ.
                     * @deprecated
                     */
                    void SetQueryDlqMsg(const bool& _queryDlqMsg);

                    /**
                     * 判断参数 QueryDlqMsg 是否已赋值
                     * @return QueryDlqMsg 是否已赋值
                     * @deprecated
                     */
                    bool QueryDlqMsgHasBeenSet() const;

                    /**
                     * 获取The value is true when querying dead letters, and only valid for RocketMQ.
                     * @return QueryDeadLetterMessage The value is true when querying dead letters, and only valid for RocketMQ.
                     * 
                     */
                    bool GetQueryDeadLetterMessage() const;

                    /**
                     * 设置The value is true when querying dead letters, and only valid for RocketMQ.
                     * @param _queryDeadLetterMessage The value is true when querying dead letters, and only valid for RocketMQ.
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
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Pagination limit
                     * @return Limit Pagination limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit
                     * @param _limit Pagination limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filters consumption details based on the consumer group name.
                     * @return FilterTrackGroup Filters consumption details based on the consumer group name.
                     * 
                     */
                    std::string GetFilterTrackGroup() const;

                    /**
                     * 设置Filters consumption details based on the consumer group name.
                     * @param _filterTrackGroup Filters consumption details based on the consumer group name.
                     * 
                     */
                    void SetFilterTrackGroup(const std::string& _filterTrackGroup);

                    /**
                     * 判断参数 FilterTrackGroup 是否已赋值
                     * @return FilterTrackGroup 是否已赋值
                     * 
                     */
                    bool FilterTrackGroupHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Namespace ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Topic name. Pass in the group ID when querying a dead letter queue.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Message ID
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * ID of a TDMQ for Pulsar message
                     */
                    std::string m_pulsarMsgId;
                    bool m_pulsarMsgIdHasBeenSet;

                    /**
                     * The value of this parameter is `true` when you query a dead letter queue. It only applies to TDMQ for RocketMQ.
                     */
                    bool m_queryDlqMsg;
                    bool m_queryDlqMsgHasBeenSet;

                    /**
                     * The value is true when querying dead letters, and only valid for RocketMQ.
                     */
                    bool m_queryDeadLetterMessage;
                    bool m_queryDeadLetterMessageHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filters consumption details based on the consumer group name.
                     */
                    std::string m_filterTrackGroup;
                    bool m_filterTrackGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGREQUEST_H_
