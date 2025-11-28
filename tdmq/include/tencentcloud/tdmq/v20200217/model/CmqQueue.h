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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQQUEUE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQQUEUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/CmqDeadLetterSource.h>
#include <tencentcloud/tdmq/v20200217/model/CmqDeadLetterPolicy.h>
#include <tencentcloud/tdmq/v20200217/model/CmqTransactionPolicy.h>
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
                * Batch queue attribute information of CMQ
                */
                class CmqQueue : public AbstractModel
                {
                public:
                    CmqQueue();
                    ~CmqQueue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Message queue ID.
                     * @return QueueId Message queue ID.
                     * 
                     */
                    std::string GetQueueId() const;

                    /**
                     * 设置Message queue ID.
                     * @param _queueId Message queue ID.
                     * 
                     */
                    void SetQueueId(const std::string& _queueId);

                    /**
                     * 判断参数 QueueId 是否已赋值
                     * @return QueueId 是否已赋值
                     * 
                     */
                    bool QueueIdHasBeenSet() const;

                    /**
                     * 获取Message queue name.
                     * @return QueueName Message queue name.
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Message queue name.
                     * @param _queueName Message queue name.
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
                     * 获取Limit on the number of messages produced per second. The size of consumed messages is 1.1 times this value.
                     * @return Qps Limit on the number of messages produced per second. The size of consumed messages is 1.1 times this value.
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置Limit on the number of messages produced per second. The size of consumed messages is 1.1 times this value.
                     * @param _qps Limit on the number of messages produced per second. The size of consumed messages is 1.1 times this value.
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
                     * 获取Bandwidth limit.
                     * @return Bps Bandwidth limit.
                     * 
                     */
                    uint64_t GetBps() const;

                    /**
                     * 设置Bandwidth limit.
                     * @param _bps Bandwidth limit.
                     * 
                     */
                    void SetBps(const uint64_t& _bps);

                    /**
                     * 判断参数 Bps 是否已赋值
                     * @return Bps 是否已赋值
                     * 
                     */
                    bool BpsHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum retention time for in-flight messages, which must be less than the message retention period.
                     * @return MaxDelaySeconds Specifies the maximum retention time for in-flight messages, which must be less than the message retention period.
                     * 
                     */
                    uint64_t GetMaxDelaySeconds() const;

                    /**
                     * 设置Specifies the maximum retention time for in-flight messages, which must be less than the message retention period.
                     * @param _maxDelaySeconds Specifies the maximum retention time for in-flight messages, which must be less than the message retention period.
                     * 
                     */
                    void SetMaxDelaySeconds(const uint64_t& _maxDelaySeconds);

                    /**
                     * 判断参数 MaxDelaySeconds 是否已赋值
                     * @return MaxDelaySeconds 是否已赋值
                     * 
                     */
                    bool MaxDelaySecondsHasBeenSet() const;

                    /**
                     * 获取Maximum number of heaped messages. The value range is 1,000,000–10,000,000 during the beta test and can be 1,000,000–1,000,000,000 after the product is officially released. The default value is 10,000,000 during the beta test and will be 100,000,000 after the product is officially released.
                     * @return MaxMsgHeapNum Maximum number of heaped messages. The value range is 1,000,000–10,000,000 during the beta test and can be 1,000,000–1,000,000,000 after the product is officially released. The default value is 10,000,000 during the beta test and will be 100,000,000 after the product is officially released.
                     * 
                     */
                    uint64_t GetMaxMsgHeapNum() const;

                    /**
                     * 设置Maximum number of heaped messages. The value range is 1,000,000–10,000,000 during the beta test and can be 1,000,000–1,000,000,000 after the product is officially released. The default value is 10,000,000 during the beta test and will be 100,000,000 after the product is officially released.
                     * @param _maxMsgHeapNum Maximum number of heaped messages. The value range is 1,000,000–10,000,000 during the beta test and can be 1,000,000–1,000,000,000 after the product is officially released. The default value is 10,000,000 during the beta test and will be 100,000,000 after the product is officially released.
                     * 
                     */
                    void SetMaxMsgHeapNum(const uint64_t& _maxMsgHeapNum);

                    /**
                     * 判断参数 MaxMsgHeapNum 是否已赋值
                     * @return MaxMsgHeapNum 是否已赋值
                     * 
                     */
                    bool MaxMsgHeapNumHasBeenSet() const;

                    /**
                     * 获取Long polling waiting time for message receipt. Value range 0-30 seconds, default value 0.
                     * @return PollingWaitSeconds Long polling waiting time for message receipt. Value range 0-30 seconds, default value 0.
                     * 
                     */
                    uint64_t GetPollingWaitSeconds() const;

                    /**
                     * 设置Long polling waiting time for message receipt. Value range 0-30 seconds, default value 0.
                     * @param _pollingWaitSeconds Long polling waiting time for message receipt. Value range 0-30 seconds, default value 0.
                     * 
                     */
                    void SetPollingWaitSeconds(const uint64_t& _pollingWaitSeconds);

                    /**
                     * 判断参数 PollingWaitSeconds 是否已赋值
                     * @return PollingWaitSeconds 是否已赋值
                     * 
                     */
                    bool PollingWaitSecondsHasBeenSet() const;

                    /**
                     * 获取Message retention period. The value range is 60-1,296,000 seconds (1 min-15 days), with a default value of 345,600 seconds (4 days).
                     * @return MsgRetentionSeconds Message retention period. The value range is 60-1,296,000 seconds (1 min-15 days), with a default value of 345,600 seconds (4 days).
                     * 
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置Message retention period. The value range is 60-1,296,000 seconds (1 min-15 days), with a default value of 345,600 seconds (4 days).
                     * @param _msgRetentionSeconds Message retention period. The value range is 60-1,296,000 seconds (1 min-15 days), with a default value of 345,600 seconds (4 days).
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
                     * 获取Message visibility timeout period. The value range is 1-43,200 seconds (within 12 hours), with a default value of 30.
                     * @return VisibilityTimeout Message visibility timeout period. The value range is 1-43,200 seconds (within 12 hours), with a default value of 30.
                     * 
                     */
                    uint64_t GetVisibilityTimeout() const;

                    /**
                     * 设置Message visibility timeout period. The value range is 1-43,200 seconds (within 12 hours), with a default value of 30.
                     * @param _visibilityTimeout Message visibility timeout period. The value range is 1-43,200 seconds (within 12 hours), with a default value of 30.
                     * 
                     */
                    void SetVisibilityTimeout(const uint64_t& _visibilityTimeout);

                    /**
                     * 判断参数 VisibilityTimeout 是否已赋值
                     * @return VisibilityTimeout 是否已赋值
                     * 
                     */
                    bool VisibilityTimeoutHasBeenSet() const;

                    /**
                     * 获取Maximum message length. Range: 1,024-1,048,576 bytes (i.e., 1K-1,024K). Default value is 65,536.
                     * @return MaxMsgSize Maximum message length. Range: 1,024-1,048,576 bytes (i.e., 1K-1,024K). Default value is 65,536.
                     * 
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置Maximum message length. Range: 1,024-1,048,576 bytes (i.e., 1K-1,024K). Default value is 65,536.
                     * @param _maxMsgSize Maximum message length. Range: 1,024-1,048,576 bytes (i.e., 1K-1,024K). Default value is 65,536.
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
                     * 获取Maximum message backtracking time for backtracking queues, range 0-43,200 seconds. 0 means message backtracking is not enabled.
                     * @return RewindSeconds Maximum message backtracking time for backtracking queues, range 0-43,200 seconds. 0 means message backtracking is not enabled.
                     * 
                     */
                    uint64_t GetRewindSeconds() const;

                    /**
                     * 设置Maximum message backtracking time for backtracking queues, range 0-43,200 seconds. 0 means message backtracking is not enabled.
                     * @param _rewindSeconds Maximum message backtracking time for backtracking queues, range 0-43,200 seconds. 0 means message backtracking is not enabled.
                     * 
                     */
                    void SetRewindSeconds(const uint64_t& _rewindSeconds);

                    /**
                     * 判断参数 RewindSeconds 是否已赋值
                     * @return RewindSeconds 是否已赋值
                     * 
                     */
                    bool RewindSecondsHasBeenSet() const;

                    /**
                     * 获取Creation time of queues. Returns a Unix timestamp, accurate to milliseconds.
                     * @return CreateTime Creation time of queues. Returns a Unix timestamp, accurate to milliseconds.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time of queues. Returns a Unix timestamp, accurate to milliseconds.
                     * @param _createTime Creation time of queues. Returns a Unix timestamp, accurate to milliseconds.
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
                     * 获取The last time the queue attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
                     * @return LastModifyTime The last time the queue attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
                     * 
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置The last time the queue attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
                     * @param _lastModifyTime The last time the queue attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
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
                     * 获取Total number of active messages (not being consumed) in queue, an approximate value.
                     * @return ActiveMsgNum Total number of active messages (not being consumed) in queue, an approximate value.
                     * 
                     */
                    uint64_t GetActiveMsgNum() const;

                    /**
                     * 设置Total number of active messages (not being consumed) in queue, an approximate value.
                     * @param _activeMsgNum Total number of active messages (not being consumed) in queue, an approximate value.
                     * 
                     */
                    void SetActiveMsgNum(const uint64_t& _activeMsgNum);

                    /**
                     * 判断参数 ActiveMsgNum 是否已赋值
                     * @return ActiveMsgNum 是否已赋值
                     * 
                     */
                    bool ActiveMsgNumHasBeenSet() const;

                    /**
                     * 获取Total number of inactive messages (being consumed) in queue, an approximate value.
                     * @return InactiveMsgNum Total number of inactive messages (being consumed) in queue, an approximate value.
                     * 
                     */
                    uint64_t GetInactiveMsgNum() const;

                    /**
                     * 设置Total number of inactive messages (being consumed) in queue, an approximate value.
                     * @param _inactiveMsgNum Total number of inactive messages (being consumed) in queue, an approximate value.
                     * 
                     */
                    void SetInactiveMsgNum(const uint64_t& _inactiveMsgNum);

                    /**
                     * 判断参数 InactiveMsgNum 是否已赋值
                     * @return InactiveMsgNum 是否已赋值
                     * 
                     */
                    bool InactiveMsgNumHasBeenSet() const;

                    /**
                     * 获取Number of delayed messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DelayMsgNum Number of delayed messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDelayMsgNum() const;

                    /**
                     * 设置Number of delayed messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _delayMsgNum Number of delayed messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDelayMsgNum(const uint64_t& _delayMsgNum);

                    /**
                     * 判断参数 DelayMsgNum 是否已赋值
                     * @return DelayMsgNum 是否已赋值
                     * 
                     */
                    bool DelayMsgNumHasBeenSet() const;

                    /**
                     * 获取Number of retained messages which have been deleted by the `DelMsg` API but are still within their rewind time range.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RewindMsgNum Number of retained messages which have been deleted by the `DelMsg` API but are still within their rewind time range.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRewindMsgNum() const;

                    /**
                     * 设置Number of retained messages which have been deleted by the `DelMsg` API but are still within their rewind time range.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rewindMsgNum Number of retained messages which have been deleted by the `DelMsg` API but are still within their rewind time range.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRewindMsgNum(const uint64_t& _rewindMsgNum);

                    /**
                     * 判断参数 RewindMsgNum 是否已赋值
                     * @return RewindMsgNum 是否已赋值
                     * 
                     */
                    bool RewindMsgNumHasBeenSet() const;

                    /**
                     * 获取Minimum unconsumed time of message in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MinMsgTime Minimum unconsumed time of message in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMinMsgTime() const;

                    /**
                     * 设置Minimum unconsumed time of message in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _minMsgTime Minimum unconsumed time of message in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinMsgTime(const uint64_t& _minMsgTime);

                    /**
                     * 判断参数 MinMsgTime 是否已赋值
                     * @return MinMsgTime 是否已赋值
                     * 
                     */
                    bool MinMsgTimeHasBeenSet() const;

                    /**
                     * 获取Transaction message queue. true: transaction message type; false: other message types.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Transaction Transaction message queue. true: transaction message type; false: other message types.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetTransaction() const;

                    /**
                     * 设置Transaction message queue. true: transaction message type; false: other message types.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _transaction Transaction message queue. true: transaction message type; false: other message types.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransaction(const bool& _transaction);

                    /**
                     * 判断参数 Transaction 是否已赋值
                     * @return Transaction 是否已赋值
                     * 
                     */
                    bool TransactionHasBeenSet() const;

                    /**
                     * 获取Dead letter queue.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeadLetterSource Dead letter queue.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CmqDeadLetterSource> GetDeadLetterSource() const;

                    /**
                     * 设置Dead letter queue.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _deadLetterSource Dead letter queue.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeadLetterSource(const std::vector<CmqDeadLetterSource>& _deadLetterSource);

                    /**
                     * 判断参数 DeadLetterSource 是否已赋值
                     * @return DeadLetterSource 是否已赋值
                     * 
                     */
                    bool DeadLetterSourceHasBeenSet() const;

                    /**
                     * 获取Dead letter queue policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeadLetterPolicy Dead letter queue policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CmqDeadLetterPolicy GetDeadLetterPolicy() const;

                    /**
                     * 设置Dead letter queue policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _deadLetterPolicy Dead letter queue policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeadLetterPolicy(const CmqDeadLetterPolicy& _deadLetterPolicy);

                    /**
                     * 判断参数 DeadLetterPolicy 是否已赋值
                     * @return DeadLetterPolicy 是否已赋值
                     * 
                     */
                    bool DeadLetterPolicyHasBeenSet() const;

                    /**
                     * 获取Transaction message policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TransactionPolicy Transaction message policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CmqTransactionPolicy GetTransactionPolicy() const;

                    /**
                     * 设置Transaction message policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _transactionPolicy Transaction message policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransactionPolicy(const CmqTransactionPolicy& _transactionPolicy);

                    /**
                     * 判断参数 TransactionPolicy 是否已赋值
                     * @return TransactionPolicy 是否已赋值
                     * 
                     */
                    bool TransactionPolicyHasBeenSet() const;

                    /**
                     * 获取Creator `Uin`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateUin Creator `Uin`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置Creator `Uin`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createUin Creator `Uin`.
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
                     * 获取Maximum Number of Unacknowledged Messages
                     * @return MaxUnackedMsgNum Maximum Number of Unacknowledged Messages
                     * 
                     */
                    int64_t GetMaxUnackedMsgNum() const;

                    /**
                     * 设置Maximum Number of Unacknowledged Messages
                     * @param _maxUnackedMsgNum Maximum Number of Unacknowledged Messages
                     * 
                     */
                    void SetMaxUnackedMsgNum(const int64_t& _maxUnackedMsgNum);

                    /**
                     * 判断参数 MaxUnackedMsgNum 是否已赋值
                     * @return MaxUnackedMsgNum 是否已赋值
                     * 
                     */
                    bool MaxUnackedMsgNumHasBeenSet() const;

                    /**
                     * 获取Maximum Message Backlog Size (bytes)
                     * @return MaxMsgBacklogSize Maximum Message Backlog Size (bytes)
                     * 
                     */
                    int64_t GetMaxMsgBacklogSize() const;

                    /**
                     * 设置Maximum Message Backlog Size (bytes)
                     * @param _maxMsgBacklogSize Maximum Message Backlog Size (bytes)
                     * 
                     */
                    void SetMaxMsgBacklogSize(const int64_t& _maxMsgBacklogSize);

                    /**
                     * 判断参数 MaxMsgBacklogSize 是否已赋值
                     * @return MaxMsgBacklogSize 是否已赋值
                     * 
                     */
                    bool MaxMsgBacklogSizeHasBeenSet() const;

                    /**
                     * 获取Queue retrospective storage space. Value range: 1024 MB to 10240 MB. 0 indicates disabled.
                     * @return RetentionSizeInMB Queue retrospective storage space. Value range: 1024 MB to 10240 MB. 0 indicates disabled.
                     * 
                     */
                    uint64_t GetRetentionSizeInMB() const;

                    /**
                     * 设置Queue retrospective storage space. Value range: 1024 MB to 10240 MB. 0 indicates disabled.
                     * @param _retentionSizeInMB Queue retrospective storage space. Value range: 1024 MB to 10240 MB. 0 indicates disabled.
                     * 
                     */
                    void SetRetentionSizeInMB(const uint64_t& _retentionSizeInMB);

                    /**
                     * 判断参数 RetentionSizeInMB 是否已赋值
                     * @return RetentionSizeInMB 是否已赋值
                     * 
                     */
                    bool RetentionSizeInMBHasBeenSet() const;

                private:

                    /**
                     * Message queue ID.
                     */
                    std::string m_queueId;
                    bool m_queueIdHasBeenSet;

                    /**
                     * Message queue name.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Limit on the number of messages produced per second. The size of consumed messages is 1.1 times this value.
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * Bandwidth limit.
                     */
                    uint64_t m_bps;
                    bool m_bpsHasBeenSet;

                    /**
                     * Specifies the maximum retention time for in-flight messages, which must be less than the message retention period.
                     */
                    uint64_t m_maxDelaySeconds;
                    bool m_maxDelaySecondsHasBeenSet;

                    /**
                     * Maximum number of heaped messages. The value range is 1,000,000–10,000,000 during the beta test and can be 1,000,000–1,000,000,000 after the product is officially released. The default value is 10,000,000 during the beta test and will be 100,000,000 after the product is officially released.
                     */
                    uint64_t m_maxMsgHeapNum;
                    bool m_maxMsgHeapNumHasBeenSet;

                    /**
                     * Long polling waiting time for message receipt. Value range 0-30 seconds, default value 0.
                     */
                    uint64_t m_pollingWaitSeconds;
                    bool m_pollingWaitSecondsHasBeenSet;

                    /**
                     * Message retention period. The value range is 60-1,296,000 seconds (1 min-15 days), with a default value of 345,600 seconds (4 days).
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * Message visibility timeout period. The value range is 1-43,200 seconds (within 12 hours), with a default value of 30.
                     */
                    uint64_t m_visibilityTimeout;
                    bool m_visibilityTimeoutHasBeenSet;

                    /**
                     * Maximum message length. Range: 1,024-1,048,576 bytes (i.e., 1K-1,024K). Default value is 65,536.
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * Maximum message backtracking time for backtracking queues, range 0-43,200 seconds. 0 means message backtracking is not enabled.
                     */
                    uint64_t m_rewindSeconds;
                    bool m_rewindSecondsHasBeenSet;

                    /**
                     * Creation time of queues. Returns a Unix timestamp, accurate to milliseconds.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The last time the queue attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * Total number of active messages (not being consumed) in queue, an approximate value.
                     */
                    uint64_t m_activeMsgNum;
                    bool m_activeMsgNumHasBeenSet;

                    /**
                     * Total number of inactive messages (being consumed) in queue, an approximate value.
                     */
                    uint64_t m_inactiveMsgNum;
                    bool m_inactiveMsgNumHasBeenSet;

                    /**
                     * Number of delayed messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_delayMsgNum;
                    bool m_delayMsgNumHasBeenSet;

                    /**
                     * Number of retained messages which have been deleted by the `DelMsg` API but are still within their rewind time range.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_rewindMsgNum;
                    bool m_rewindMsgNumHasBeenSet;

                    /**
                     * Minimum unconsumed time of message in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_minMsgTime;
                    bool m_minMsgTimeHasBeenSet;

                    /**
                     * Transaction message queue. true: transaction message type; false: other message types.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_transaction;
                    bool m_transactionHasBeenSet;

                    /**
                     * Dead letter queue.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CmqDeadLetterSource> m_deadLetterSource;
                    bool m_deadLetterSourceHasBeenSet;

                    /**
                     * Dead letter queue policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CmqDeadLetterPolicy m_deadLetterPolicy;
                    bool m_deadLetterPolicyHasBeenSet;

                    /**
                     * Transaction message policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CmqTransactionPolicy m_transactionPolicy;
                    bool m_transactionPolicyHasBeenSet;

                    /**
                     * Creator `Uin`.
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
                     * Maximum Number of Unacknowledged Messages
                     */
                    int64_t m_maxUnackedMsgNum;
                    bool m_maxUnackedMsgNumHasBeenSet;

                    /**
                     * Maximum Message Backlog Size (bytes)
                     */
                    int64_t m_maxMsgBacklogSize;
                    bool m_maxMsgBacklogSizeHasBeenSet;

                    /**
                     * Queue retrospective storage space. Value range: 1024 MB to 10240 MB. 0 indicates disabled.
                     */
                    uint64_t m_retentionSizeInMB;
                    bool m_retentionSizeInMBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQQUEUE_H_
