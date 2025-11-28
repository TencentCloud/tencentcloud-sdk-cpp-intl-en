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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPICMSGSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPICMSGSREQUEST_H_

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
                * DescribeRocketMQTopicMsgs request structure.
                */
                class DescribeRocketMQTopicMsgsRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQTopicMsgsRequest();
                    ~DescribeRocketMQTopicMsgsRequest() = default;
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
                     * 获取Topic name, which is groupId when the system queries dead letters.
                     * @return TopicName Topic name, which is groupId when the system queries dead letters.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name, which is groupId when the system queries dead letters.
                     * @param _topicName Topic name, which is groupId when the system queries dead letters.
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
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Message ID.
                     * @return MsgId Message ID.
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置Message ID.
                     * @param _msgId Message ID.
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
                     * 获取Message key
                     * @return MsgKey Message key
                     * 
                     */
                    std::string GetMsgKey() const;

                    /**
                     * 设置Message key
                     * @param _msgKey Message key
                     * 
                     */
                    void SetMsgKey(const std::string& _msgKey);

                    /**
                     * 判断参数 MsgKey 是否已赋值
                     * @return MsgKey 是否已赋值
                     * 
                     */
                    bool MsgKeyHasBeenSet() const;

                    /**
                     * 获取Query Offset
                     * @return Offset Query Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Query Offset
                     * @param _offset Query Offset
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Query Quotas
                     * @return Limit Query Quotas
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Query Quotas
                     * @param _limit Query Quotas
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Mark a pagination transaction.
                     * @return TaskRequestId Mark a pagination transaction.
                     * 
                     */
                    std::string GetTaskRequestId() const;

                    /**
                     * 设置Mark a pagination transaction.
                     * @param _taskRequestId Mark a pagination transaction.
                     * 
                     */
                    void SetTaskRequestId(const std::string& _taskRequestId);

                    /**
                     * 判断参数 TaskRequestId 是否已赋值
                     * @return TaskRequestId 是否已赋值
                     * 
                     */
                    bool TaskRequestIdHasBeenSet() const;

                    /**
                     * 获取This value is true when the system queries dead letters, and is only valid for RocketMQ.
                     * @return QueryDlqMsg This value is true when the system queries dead letters, and is only valid for RocketMQ.
                     * @deprecated
                     */
                    bool GetQueryDlqMsg() const;

                    /**
                     * 设置This value is true when the system queries dead letters, and is only valid for RocketMQ.
                     * @param _queryDlqMsg This value is true when the system queries dead letters, and is only valid for RocketMQ.
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
                     * 获取Query the last N messages. The value of N cannot exceed 1024. By default, -1 indicates other query conditions.
                     * @return NumOfLatestMsg Query the last N messages. The value of N cannot exceed 1024. By default, -1 indicates other query conditions.
                     * 
                     */
                    int64_t GetNumOfLatestMsg() const;

                    /**
                     * 设置Query the last N messages. The value of N cannot exceed 1024. By default, -1 indicates other query conditions.
                     * @param _numOfLatestMsg Query the last N messages. The value of N cannot exceed 1024. By default, -1 indicates other query conditions.
                     * 
                     */
                    void SetNumOfLatestMsg(const int64_t& _numOfLatestMsg);

                    /**
                     * 判断参数 NumOfLatestMsg 是否已赋值
                     * @return NumOfLatestMsg 是否已赋值
                     * 
                     */
                    bool NumOfLatestMsgHasBeenSet() const;

                    /**
                     * 获取Tag expression.
                     * @return Tag Tag expression.
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Tag expression.
                     * @param _tag Tag expression.
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取This value is true when the system queries dead letters, and is only valid for RocketMQ.
                     * @return QueryDeadLetterMessage This value is true when the system queries dead letters, and is only valid for RocketMQ.
                     * 
                     */
                    bool GetQueryDeadLetterMessage() const;

                    /**
                     * 设置This value is true when the system queries dead letters, and is only valid for RocketMQ.
                     * @param _queryDeadLetterMessage This value is true when the system queries dead letters, and is only valid for RocketMQ.
                     * 
                     */
                    void SetQueryDeadLetterMessage(const bool& _queryDeadLetterMessage);

                    /**
                     * 判断参数 QueryDeadLetterMessage 是否已赋值
                     * @return QueryDeadLetterMessage 是否已赋值
                     * 
                     */
                    bool QueryDeadLetterMessageHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Topic name, which is groupId when the system queries dead letters.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Message ID.
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * Message key
                     */
                    std::string m_msgKey;
                    bool m_msgKeyHasBeenSet;

                    /**
                     * Query Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Query Quotas
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Mark a pagination transaction.
                     */
                    std::string m_taskRequestId;
                    bool m_taskRequestIdHasBeenSet;

                    /**
                     * This value is true when the system queries dead letters, and is only valid for RocketMQ.
                     */
                    bool m_queryDlqMsg;
                    bool m_queryDlqMsgHasBeenSet;

                    /**
                     * Query the last N messages. The value of N cannot exceed 1024. By default, -1 indicates other query conditions.
                     */
                    int64_t m_numOfLatestMsg;
                    bool m_numOfLatestMsgHasBeenSet;

                    /**
                     * Tag expression.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * This value is true when the system queries dead letters, and is only valid for RocketMQ.
                     */
                    bool m_queryDeadLetterMessage;
                    bool m_queryDeadLetterMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPICMSGSREQUEST_H_
