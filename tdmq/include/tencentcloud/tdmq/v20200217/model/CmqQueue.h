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
                     * 获取Limit of the number of messages produced per second. The value for consumed messages is 1.1 times this value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Qps Limit of the number of messages produced per second. The value for consumed messages is 1.1 times this value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置Limit of the number of messages produced per second. The value for consumed messages is 1.1 times this value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _qps Limit of the number of messages produced per second. The value for consumed messages is 1.1 times this value.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Bps Bandwidth limit.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetBps() const;

                    /**
                     * 设置Bandwidth limit.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bps Bandwidth limit.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum retention period for inflight messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxDelaySeconds Maximum retention period for inflight messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaxDelaySeconds() const;

                    /**
                     * 设置Maximum retention period for inflight messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxDelaySeconds Maximum retention period for inflight messages.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Long polling wait time for message reception. Value range: 0–30 seconds. Default value: 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PollingWaitSeconds Long polling wait time for message reception. Value range: 0–30 seconds. Default value: 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPollingWaitSeconds() const;

                    /**
                     * 设置Long polling wait time for message reception. Value range: 0–30 seconds. Default value: 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _pollingWaitSeconds Long polling wait time for message reception. Value range: 0–30 seconds. Default value: 0.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Message retention period. Value range: 60–1296000 seconds (i.e., 1 minute–15 days). Default value: 345600 (i.e., 4 days).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgRetentionSeconds Message retention period. Value range: 60–1296000 seconds (i.e., 1 minute–15 days). Default value: 345600 (i.e., 4 days).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置Message retention period. Value range: 60–1296000 seconds (i.e., 1 minute–15 days). Default value: 345600 (i.e., 4 days).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _msgRetentionSeconds Message retention period. Value range: 60–1296000 seconds (i.e., 1 minute–15 days). Default value: 345600 (i.e., 4 days).
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Message visibility timeout period. Value range: 1–43200 seconds (i.e., 12 hours). Default value: 30.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VisibilityTimeout Message visibility timeout period. Value range: 1–43200 seconds (i.e., 12 hours). Default value: 30.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVisibilityTimeout() const;

                    /**
                     * 设置Message visibility timeout period. Value range: 1–43200 seconds (i.e., 12 hours). Default value: 30.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _visibilityTimeout Message visibility timeout period. Value range: 1–43200 seconds (i.e., 12 hours). Default value: 30.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum message length. Value range: 1024–1048576 bytes (i.e., 1–1024 KB). Default value: 65536.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxMsgSize Maximum message length. Value range: 1024–1048576 bytes (i.e., 1–1024 KB). Default value: 65536.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置Maximum message length. Value range: 1024–1048576 bytes (i.e., 1–1024 KB). Default value: 65536.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxMsgSize Maximum message length. Value range: 1024–1048576 bytes (i.e., 1–1024 KB). Default value: 65536.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum time range during which a message can be rewound in the queue, which ranges from 0 to 43,200 seconds. 0 indicates that message rewind is disabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RewindSeconds Maximum time range during which a message can be rewound in the queue, which ranges from 0 to 43,200 seconds. 0 indicates that message rewind is disabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRewindSeconds() const;

                    /**
                     * 设置Maximum time range during which a message can be rewound in the queue, which ranges from 0 to 43,200 seconds. 0 indicates that message rewind is disabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rewindSeconds Maximum time range during which a message can be rewound in the queue, which ranges from 0 to 43,200 seconds. 0 indicates that message rewind is disabled.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Queue creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Queue creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Queue creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Queue creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time when the queue attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastModifyTime Time when the queue attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置Time when the queue attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _lastModifyTime Time when the queue attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total number of messages in `Active` status (i.e., unconsumed) in the queue, which is an approximate value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ActiveMsgNum Total number of messages in `Active` status (i.e., unconsumed) in the queue, which is an approximate value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetActiveMsgNum() const;

                    /**
                     * 设置Total number of messages in `Active` status (i.e., unconsumed) in the queue, which is an approximate value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _activeMsgNum Total number of messages in `Active` status (i.e., unconsumed) in the queue, which is an approximate value.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total number of messages in `Inactive` status (i.e., being consumed) in the queue, which is an approximate value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InactiveMsgNum Total number of messages in `Inactive` status (i.e., being consumed) in the queue, which is an approximate value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetInactiveMsgNum() const;

                    /**
                     * 设置Total number of messages in `Inactive` status (i.e., being consumed) in the queue, which is an approximate value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _inactiveMsgNum Total number of messages in `Inactive` status (i.e., being consumed) in the queue, which is an approximate value.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TenantId Tenant ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置Tenant ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tenantId Tenant ID
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Namespace name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NamespaceName Namespace name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Namespace name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _namespaceName Namespace name
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Status Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _status Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The maximum number of unacknowledged messages.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MaxUnackedMsgNum The maximum number of unacknowledged messages.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxUnackedMsgNum() const;

                    /**
                     * 设置The maximum number of unacknowledged messages.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _maxUnackedMsgNum The maximum number of unacknowledged messages.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Maximum size of heaped messages in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MaxMsgBacklogSize Maximum size of heaped messages in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxMsgBacklogSize() const;

                    /**
                     * 设置Maximum size of heaped messages in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _maxMsgBacklogSize Maximum size of heaped messages in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Queue storage space configured for message rewind. Value range: 1,024-10,240 MB (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RetentionSizeInMB Queue storage space configured for message rewind. Value range: 1,024-10,240 MB (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRetentionSizeInMB() const;

                    /**
                     * 设置Queue storage space configured for message rewind. Value range: 1,024-10,240 MB (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _retentionSizeInMB Queue storage space configured for message rewind. Value range: 1,024-10,240 MB (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * Limit of the number of messages produced per second. The value for consumed messages is 1.1 times this value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * Bandwidth limit.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_bps;
                    bool m_bpsHasBeenSet;

                    /**
                     * Maximum retention period for inflight messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxDelaySeconds;
                    bool m_maxDelaySecondsHasBeenSet;

                    /**
                     * Maximum number of heaped messages. The value range is 1,000,000–10,000,000 during the beta test and can be 1,000,000–1,000,000,000 after the product is officially released. The default value is 10,000,000 during the beta test and will be 100,000,000 after the product is officially released.
                     */
                    uint64_t m_maxMsgHeapNum;
                    bool m_maxMsgHeapNumHasBeenSet;

                    /**
                     * Long polling wait time for message reception. Value range: 0–30 seconds. Default value: 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_pollingWaitSeconds;
                    bool m_pollingWaitSecondsHasBeenSet;

                    /**
                     * Message retention period. Value range: 60–1296000 seconds (i.e., 1 minute–15 days). Default value: 345600 (i.e., 4 days).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * Message visibility timeout period. Value range: 1–43200 seconds (i.e., 12 hours). Default value: 30.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_visibilityTimeout;
                    bool m_visibilityTimeoutHasBeenSet;

                    /**
                     * Maximum message length. Value range: 1024–1048576 bytes (i.e., 1–1024 KB). Default value: 65536.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * Maximum time range during which a message can be rewound in the queue, which ranges from 0 to 43,200 seconds. 0 indicates that message rewind is disabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_rewindSeconds;
                    bool m_rewindSecondsHasBeenSet;

                    /**
                     * Queue creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Time when the queue attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * Total number of messages in `Active` status (i.e., unconsumed) in the queue, which is an approximate value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_activeMsgNum;
                    bool m_activeMsgNumHasBeenSet;

                    /**
                     * Total number of messages in `Inactive` status (i.e., being consumed) in the queue, which is an approximate value.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * Namespace name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The maximum number of unacknowledged messages.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxUnackedMsgNum;
                    bool m_maxUnackedMsgNumHasBeenSet;

                    /**
                     * Maximum size of heaped messages in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxMsgBacklogSize;
                    bool m_maxMsgBacklogSizeHasBeenSet;

                    /**
                     * Queue storage space configured for message rewind. Value range: 1,024-10,240 MB (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_retentionSizeInMB;
                    bool m_retentionSizeInMBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQQUEUE_H_
