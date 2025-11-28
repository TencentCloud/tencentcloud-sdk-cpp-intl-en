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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQTOPIC_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQTOPIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Display field of the returned CMQ topic information
                */
                class CmqTopic : public AbstractModel
                {
                public:
                    CmqTopic();
                    ~CmqTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic ID.
                     * @return TopicId Topic ID.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID.
                     * @param _topicId Topic ID.
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Topic name.
                     * @return TopicName Topic name.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name.
                     * @param _topicName Topic name.
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
                     * 获取Maximum lifetime of messages in a topic. After the time specified by this parameter has elapsed since sending to this topic, the message will be deleted whether or not it has been successfully pushed to the user. Measured in seconds and fixed at one day (86,400 seconds). This attribute cannot be modified.
                     * @return MsgRetentionSeconds Maximum lifetime of messages in a topic. After the time specified by this parameter has elapsed since sending to this topic, the message will be deleted whether or not it has been successfully pushed to the user. Measured in seconds and fixed at one day (86,400 seconds). This attribute cannot be modified.
                     * 
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置Maximum lifetime of messages in a topic. After the time specified by this parameter has elapsed since sending to this topic, the message will be deleted whether or not it has been successfully pushed to the user. Measured in seconds and fixed at one day (86,400 seconds). This attribute cannot be modified.
                     * @param _msgRetentionSeconds Maximum lifetime of messages in a topic. After the time specified by this parameter has elapsed since sending to this topic, the message will be deleted whether or not it has been successfully pushed to the user. Measured in seconds and fixed at one day (86,400 seconds). This attribute cannot be modified.
                     * 
                     */
                    void SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds);

                    /**
                     * 判断参数 MsgRetentionSeconds 是否已赋值
                     * @return MsgRetentionSeconds 是否已赋值
                     * 
                     */
                    bool MsgRetentionSecondsHasBeenSet() const;

                    /**
                     * 获取Maximum message length. value range: 1024-1048576 bytes (1-1024 kb). default value: 1048576.
                     * @return MaxMsgSize Maximum message length. value range: 1024-1048576 bytes (1-1024 kb). default value: 1048576.
                     * 
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置Maximum message length. value range: 1024-1048576 bytes (1-1024 kb). default value: 1048576.
                     * @param _maxMsgSize Maximum message length. value range: 1024-1048576 bytes (1-1024 kb). default value: 1048576.
                     * 
                     */
                    void SetMaxMsgSize(const uint64_t& _maxMsgSize);

                    /**
                     * 判断参数 MaxMsgSize 是否已赋值
                     * @return MaxMsgSize 是否已赋值
                     * 
                     */
                    bool MaxMsgSizeHasBeenSet() const;

                    /**
                     * 获取Number of messages published per second.
                     * @return Qps Number of messages published per second.
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置Number of messages published per second.
                     * @param _qps Number of messages published per second.
                     * 
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取Describes the filtering policy selected by users when creating subscriptions.
FilterType = 1 means when users use Tag filtering with FilterTag.
FilterType = 2 indicates user use BindingKey for filtering.
                     * @return FilterType Describes the filtering policy selected by users when creating subscriptions.
FilterType = 1 means when users use Tag filtering with FilterTag.
FilterType = 2 indicates user use BindingKey for filtering.
                     * 
                     */
                    uint64_t GetFilterType() const;

                    /**
                     * 设置Describes the filtering policy selected by users when creating subscriptions.
FilterType = 1 means when users use Tag filtering with FilterTag.
FilterType = 2 indicates user use BindingKey for filtering.
                     * @param _filterType Describes the filtering policy selected by users when creating subscriptions.
FilterType = 1 means when users use Tag filtering with FilterTag.
FilterType = 2 indicates user use BindingKey for filtering.
                     * 
                     */
                    void SetFilterType(const uint64_t& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取Topic creation time. Returns a Unix timestamp, accurate to milliseconds.
                     * @return CreateTime Topic creation time. Returns a Unix timestamp, accurate to milliseconds.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Topic creation time. Returns a Unix timestamp, accurate to milliseconds.
                     * @param _createTime Topic creation time. Returns a Unix timestamp, accurate to milliseconds.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The last time the topic attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
                     * @return LastModifyTime The last time the topic attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
                     * 
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置The last time the topic attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
                     * @param _lastModifyTime The last time the topic attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
                     * 
                     */
                    void SetLastModifyTime(const uint64_t& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     * 
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取Number of messages in the current topic (message backlog).
                     * @return MsgCount Number of messages in the current topic (message backlog).
                     * 
                     */
                    uint64_t GetMsgCount() const;

                    /**
                     * 设置Number of messages in the current topic (message backlog).
                     * @param _msgCount Number of messages in the current topic (message backlog).
                     * 
                     */
                    void SetMsgCount(const uint64_t& _msgCount);

                    /**
                     * 判断参数 MsgCount 是否已赋值
                     * @return MsgCount 是否已赋值
                     * 
                     */
                    bool MsgCountHasBeenSet() const;

                    /**
                     * 获取Creator `Uin`. The `resource` field for CAM authentication is composed of this field.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateUin Creator `Uin`. The `resource` field for CAM authentication is composed of this field.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置Creator `Uin`. The `resource` field for CAM authentication is composed of this field.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createUin Creator `Uin`. The `resource` field for CAM authentication is composed of this field.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Associated tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags Associated tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Associated tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tags Associated tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Message trace. true: enabled; false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Trace Message trace. true: enabled; false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetTrace() const;

                    /**
                     * 设置Message trace. true: enabled; false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _trace Message trace. true: enabled; false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTrace(const bool& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     * 
                     */
                    bool TraceHasBeenSet() const;

                    /**
                     * 获取Tenant ID
                     * @return TenantId Tenant ID
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置Tenant ID
                     * @param _tenantId Tenant ID
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取Specifies the namespace name.
                     * @return NamespaceName Specifies the namespace name.
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Specifies the namespace name.
                     * @param _namespaceName Specifies the namespace name.
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取Cluster status. 0: Creating, 1: Normal, 2: Deleting, 3: Deleted, 4: Isolating, 5: Creation failed, 6: Deletion failed
                     * @return Status Cluster status. 0: Creating, 1: Normal, 2: Deleting, 3: Deleted, 4: Isolating, 5: Creation failed, 6: Deletion failed
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Cluster status. 0: Creating, 1: Normal, 2: Deleting, 3: Deleted, 4: Isolating, 5: Creation failed, 6: Deletion failed
                     * @param _status Cluster status. 0: Creating, 1: Normal, 2: Deleting, 3: Deleted, 4: Isolating, 5: Creation failed, 6: Deletion failed
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取0: Pulsar, 1: RocketMQ
                     * @return BrokerType 0: Pulsar, 1: RocketMQ
                     * 
                     */
                    int64_t GetBrokerType() const;

                    /**
                     * 设置0: Pulsar, 1: RocketMQ
                     * @param _brokerType 0: Pulsar, 1: RocketMQ
                     * 
                     */
                    void SetBrokerType(const int64_t& _brokerType);

                    /**
                     * 判断参数 BrokerType 是否已赋值
                     * @return BrokerType 是否已赋值
                     * 
                     */
                    bool BrokerTypeHasBeenSet() const;

                    /**
                     * 获取Number of Subscriptions
                     * @return SubscriptionCount Number of Subscriptions
                     * 
                     */
                    int64_t GetSubscriptionCount() const;

                    /**
                     * 设置Number of Subscriptions
                     * @param _subscriptionCount Number of Subscriptions
                     * 
                     */
                    void SetSubscriptionCount(const int64_t& _subscriptionCount);

                    /**
                     * 判断参数 SubscriptionCount 是否已赋值
                     * @return SubscriptionCount 是否已赋值
                     * 
                     */
                    bool SubscriptionCountHasBeenSet() const;

                private:

                    /**
                     * Topic ID.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Topic name.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Maximum lifetime of messages in a topic. After the time specified by this parameter has elapsed since sending to this topic, the message will be deleted whether or not it has been successfully pushed to the user. Measured in seconds and fixed at one day (86,400 seconds). This attribute cannot be modified.
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * Maximum message length. value range: 1024-1048576 bytes (1-1024 kb). default value: 1048576.
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * Number of messages published per second.
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * Describes the filtering policy selected by users when creating subscriptions.
FilterType = 1 means when users use Tag filtering with FilterTag.
FilterType = 2 indicates user use BindingKey for filtering.
                     */
                    uint64_t m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * Topic creation time. Returns a Unix timestamp, accurate to milliseconds.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The last time the topic attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * Number of messages in the current topic (message backlog).
                     */
                    uint64_t m_msgCount;
                    bool m_msgCountHasBeenSet;

                    /**
                     * Creator `Uin`. The `resource` field for CAM authentication is composed of this field.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Associated tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Message trace. true: enabled; false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_trace;
                    bool m_traceHasBeenSet;

                    /**
                     * Tenant ID
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * Specifies the namespace name.
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * Cluster status. 0: Creating, 1: Normal, 2: Deleting, 3: Deleted, 4: Isolating, 5: Creation failed, 6: Deletion failed
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 0: Pulsar, 1: RocketMQ
                     */
                    int64_t m_brokerType;
                    bool m_brokerTypeHasBeenSet;

                    /**
                     * Number of Subscriptions
                     */
                    int64_t m_subscriptionCount;
                    bool m_subscriptionCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQTOPIC_H_
