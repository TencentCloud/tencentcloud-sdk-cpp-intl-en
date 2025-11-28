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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGELISTREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGELISTREQUEST_H_

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
                * DescribeMessageList request structure.
                */
                class DescribeMessageListRequest : public AbstractModel
                {
                public:
                    DescribeMessageListRequest();
                    ~DescribeMessageListRequest() = default;
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
                     * 获取Start time for querying messages. **It is a Unix timestamp (ms).**
                     * @return StartTime Start time for querying messages. **It is a Unix timestamp (ms).**
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time for querying messages. **It is a Unix timestamp (ms).**
                     * @param _startTime Start time for querying messages. **It is a Unix timestamp (ms).**
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time for querying messages. **It is a Unix timestamp (ms).**
                     * @return EndTime End time for querying messages. **It is a Unix timestamp (ms).**
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time for querying messages. **It is a Unix timestamp (ms).**
                     * @param _endTime End time for querying messages. **It is a Unix timestamp (ms).**
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Query identifier. For the first query, input a null string. If the query results involve pagination, use the TaskRequestId value in the previous request response as the value of this input parameter for requesting data on the next page.
                     * @return TaskRequestId Query identifier. For the first query, input a null string. If the query results involve pagination, use the TaskRequestId value in the previous request response as the value of this input parameter for requesting data on the next page.
                     * 
                     */
                    std::string GetTaskRequestId() const;

                    /**
                     * 设置Query identifier. For the first query, input a null string. If the query results involve pagination, use the TaskRequestId value in the previous request response as the value of this input parameter for requesting data on the next page.
                     * @param _taskRequestId Query identifier. For the first query, input a null string. If the query results involve pagination, use the TaskRequestId value in the previous request response as the value of this input parameter for requesting data on the next page.
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
                     * 获取Starting position of the query. Default value: 0.
                     * @return Offset Starting position of the query. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Starting position of the query. Default value: 0.
                     * @param _offset Starting position of the query. Default value: 0.
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
                     * 获取Maximum number of queried results. Default value: 20.
                     * @return Limit Maximum number of queried results. Default value: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of queried results. Default value: 20.
                     * @param _limit Maximum number of queried results. Default value: 20.
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
                     * 获取Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.comom/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     * @return ConsumerGroup Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.comom/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.comom/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     * @param _consumerGroup Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.comom/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

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
                     * 获取Message key. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from workload logs.
                     * @return MsgKey Message key. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from workload logs.
                     * 
                     */
                    std::string GetMsgKey() const;

                    /**
                     * 设置Message key. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from workload logs.
                     * @param _msgKey Message key. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from workload logs.
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
                     * 获取Query the last N messages. The value of N cannot exceed 1024. By default, -1 indicates other query conditions.
                     * @return RecentMessageNum Query the last N messages. The value of N cannot exceed 1024. By default, -1 indicates other query conditions.
                     * 
                     */
                    int64_t GetRecentMessageNum() const;

                    /**
                     * 设置Query the last N messages. The value of N cannot exceed 1024. By default, -1 indicates other query conditions.
                     * @param _recentMessageNum Query the last N messages. The value of N cannot exceed 1024. By default, -1 indicates other query conditions.
                     * 
                     */
                    void SetRecentMessageNum(const int64_t& _recentMessageNum);

                    /**
                     * 判断参数 RecentMessageNum 是否已赋值
                     * @return RecentMessageNum 是否已赋值
                     * 
                     */
                    bool RecentMessageNumHasBeenSet() const;

                    /**
                     * 获取Whether to query dead letter messages. Default value: false.
                     * @return QueryDeadLetterMessage Whether to query dead letter messages. Default value: false.
                     * 
                     */
                    bool GetQueryDeadLetterMessage() const;

                    /**
                     * 设置Whether to query dead letter messages. Default value: false.
                     * @param _queryDeadLetterMessage Whether to query dead letter messages. Default value: false.
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
                     * 获取Message tag. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from workload logs.
                     * @return Tag Message tag. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from workload logs.
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Message tag. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from workload logs.
                     * @param _tag Message tag. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from workload logs.
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

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
                     * Start time for querying messages. **It is a Unix timestamp (ms).**
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time for querying messages. **It is a Unix timestamp (ms).**
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Query identifier. For the first query, input a null string. If the query results involve pagination, use the TaskRequestId value in the previous request response as the value of this input parameter for requesting data on the next page.
                     */
                    std::string m_taskRequestId;
                    bool m_taskRequestIdHasBeenSet;

                    /**
                     * Starting position of the query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of queried results. Default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.comom/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * Message ID. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from the workload logs.
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * Message key. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from workload logs.
                     */
                    std::string m_msgKey;
                    bool m_msgKeyHasBeenSet;

                    /**
                     * Query the last N messages. The value of N cannot exceed 1024. By default, -1 indicates other query conditions.
                     */
                    int64_t m_recentMessageNum;
                    bool m_recentMessageNumHasBeenSet;

                    /**
                     * Whether to query dead letter messages. Default value: false.
                     */
                    bool m_queryDeadLetterMessage;
                    bool m_queryDeadLetterMessageHasBeenSet;

                    /**
                     * Message tag. It can be obtained from [MessageItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MessageItem) returned by the API [DescribeMessageList](https://www.tencentcloud.comom/document/api/1493/114593?from_cn_redirect=1) or from workload logs.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGELISTREQUEST_H_
