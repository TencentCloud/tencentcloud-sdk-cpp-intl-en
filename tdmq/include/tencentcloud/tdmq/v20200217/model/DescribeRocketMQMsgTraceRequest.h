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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGTRACEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGTRACEREQUEST_H_

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
                * DescribeRocketMQMsgTrace request structure.
                */
                class DescribeRocketMQMsgTraceRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQMsgTraceRequest();
                    ~DescribeRocketMQMsgTraceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
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
                     * 获取Namespace
                     * @return EnvironmentId Namespace
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Namespace
                     * @param _environmentId Namespace
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
                     * 获取Topic. When the system queries RocketMQ dead letters, the value is groupId.
                     * @return TopicName Topic. When the system queries RocketMQ dead letters, the value is groupId.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic. When the system queries RocketMQ dead letters, the value is groupId.
                     * @param _topicName Topic. When the system queries RocketMQ dead letters, the value is groupId.
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
                     * 获取The value is true when querying dead letters.
                     * @return QueryDLQMsg The value is true when querying dead letters.
                     * @deprecated
                     */
                    bool GetQueryDLQMsg() const;

                    /**
                     * 设置The value is true when querying dead letters.
                     * @param _queryDLQMsg The value is true when querying dead letters.
                     * @deprecated
                     */
                    void SetQueryDLQMsg(const bool& _queryDLQMsg);

                    /**
                     * 判断参数 QueryDLQMsg 是否已赋值
                     * @return QueryDLQMsg 是否已赋值
                     * @deprecated
                     */
                    bool QueryDLQMsgHasBeenSet() const;

                    /**
                     * 获取The value is true when querying dead letters.
                     * @return QueryDeadLetterMessage The value is true when querying dead letters.
                     * 
                     */
                    std::string GetQueryDeadLetterMessage() const;

                    /**
                     * 设置The value is true when querying dead letters.
                     * @param _queryDeadLetterMessage The value is true when querying dead letters.
                     * 
                     */
                    void SetQueryDeadLetterMessage(const std::string& _queryDeadLetterMessage);

                    /**
                     * 判断参数 QueryDeadLetterMessage 是否已赋值
                     * @return QueryDeadLetterMessage 是否已赋值
                     * 
                     */
                    bool QueryDeadLetterMessageHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Topic. When the system queries RocketMQ dead letters, the value is groupId.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Message ID
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * Consumer Group and Subscription
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * The value is true when querying dead letters.
                     */
                    bool m_queryDLQMsg;
                    bool m_queryDLQMsgHasBeenSet;

                    /**
                     * The value is true when querying dead letters.
                     */
                    std::string m_queryDeadLetterMessage;
                    bool m_queryDeadLetterMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGTRACEREQUEST_H_
