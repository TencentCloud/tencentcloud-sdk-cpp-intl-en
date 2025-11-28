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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYCMQQUEUEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYCMQQUEUEATTRIBUTEREQUEST_H_

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
                * ModifyCmqQueueAttribute request structure.
                */
                class ModifyCmqQueueAttributeRequest : public AbstractModel
                {
                public:
                    ModifyCmqQueueAttributeRequest();
                    ~ModifyCmqQueueAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queue name, which must be unique under the same account in the same region. A queue name is a string of up to 64 characters, starting with a letter, and the remaining part can include letters, digits, and hyphens (-).
                     * @return QueueName Queue name, which must be unique under the same account in the same region. A queue name is a string of up to 64 characters, starting with a letter, and the remaining part can include letters, digits, and hyphens (-).
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Queue name, which must be unique under the same account in the same region. A queue name is a string of up to 64 characters, starting with a letter, and the remaining part can include letters, digits, and hyphens (-).
                     * @param _queueName Queue name, which must be unique under the same account in the same region. A queue name is a string of up to 64 characters, starting with a letter, and the remaining part can include letters, digits, and hyphens (-).
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
                     * @return PollingWaitSeconds Long polling wait time for message reception. Value range: 0–30 seconds. Default value: 0.
                     * 
                     */
                    uint64_t GetPollingWaitSeconds() const;

                    /**
                     * 设置Long polling wait time for message reception. Value range: 0–30 seconds. Default value: 0.
                     * @param _pollingWaitSeconds Long polling wait time for message reception. Value range: 0–30 seconds. Default value: 0.
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
                     * 获取Message visibility timeout period. Value range: 1–43200 seconds (i.e., 12 hours). Default value: 30.
                     * @return VisibilityTimeout Message visibility timeout period. Value range: 1–43200 seconds (i.e., 12 hours). Default value: 30.
                     * 
                     */
                    uint64_t GetVisibilityTimeout() const;

                    /**
                     * 设置Message visibility timeout period. Value range: 1–43200 seconds (i.e., 12 hours). Default value: 30.
                     * @param _visibilityTimeout Message visibility timeout period. Value range: 1–43200 seconds (i.e., 12 hours). Default value: 30.
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
                     * 获取Max message size, which defaults to 1,024 KB for the queue of TDMQ for CMQ and cannot be modified.
                     * @return MaxMsgSize Max message size, which defaults to 1,024 KB for the queue of TDMQ for CMQ and cannot be modified.
                     * 
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置Max message size, which defaults to 1,024 KB for the queue of TDMQ for CMQ and cannot be modified.
                     * @param _maxMsgSize Max message size, which defaults to 1,024 KB for the queue of TDMQ for CMQ and cannot be modified.
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
                     * 获取The max period during which a message is retained before it is automatically acknowledged. Value range: 30-43,200 seconds (30 seconds to 12 hours). Default value: 3600 seconds (1 hour).
                     * @return MsgRetentionSeconds The max period during which a message is retained before it is automatically acknowledged. Value range: 30-43,200 seconds (30 seconds to 12 hours). Default value: 3600 seconds (1 hour).
                     * 
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置The max period during which a message is retained before it is automatically acknowledged. Value range: 30-43,200 seconds (30 seconds to 12 hours). Default value: 3600 seconds (1 hour).
                     * @param _msgRetentionSeconds The max period during which a message is retained before it is automatically acknowledged. Value range: 30-43,200 seconds (30 seconds to 12 hours). Default value: 3600 seconds (1 hour).
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
                     * 获取Rewindable time of messages in the queue. Value range: 0-1,296,000s (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
                     * @return RewindSeconds Rewindable time of messages in the queue. Value range: 0-1,296,000s (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
                     * 
                     */
                    uint64_t GetRewindSeconds() const;

                    /**
                     * 设置Rewindable time of messages in the queue. Value range: 0-1,296,000s (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
                     * @param _rewindSeconds Rewindable time of messages in the queue. Value range: 0-1,296,000s (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
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
                     * 获取First query time
                     * @return FirstQueryInterval First query time
                     * 
                     */
                    uint64_t GetFirstQueryInterval() const;

                    /**
                     * 设置First query time
                     * @param _firstQueryInterval First query time
                     * 
                     */
                    void SetFirstQueryInterval(const uint64_t& _firstQueryInterval);

                    /**
                     * 判断参数 FirstQueryInterval 是否已赋值
                     * @return FirstQueryInterval 是否已赋值
                     * 
                     */
                    bool FirstQueryIntervalHasBeenSet() const;

                    /**
                     * 获取Maximum number of queries
                     * @return MaxQueryCount Maximum number of queries
                     * 
                     */
                    uint64_t GetMaxQueryCount() const;

                    /**
                     * 设置Maximum number of queries
                     * @param _maxQueryCount Maximum number of queries
                     * 
                     */
                    void SetMaxQueryCount(const uint64_t& _maxQueryCount);

                    /**
                     * 判断参数 MaxQueryCount 是否已赋值
                     * @return MaxQueryCount 是否已赋值
                     * 
                     */
                    bool MaxQueryCountHasBeenSet() const;

                    /**
                     * 获取Dead letter queue name
                     * @return DeadLetterQueueName Dead letter queue name
                     * 
                     */
                    std::string GetDeadLetterQueueName() const;

                    /**
                     * 设置Dead letter queue name
                     * @param _deadLetterQueueName Dead letter queue name
                     * 
                     */
                    void SetDeadLetterQueueName(const std::string& _deadLetterQueueName);

                    /**
                     * 判断参数 DeadLetterQueueName 是否已赋值
                     * @return DeadLetterQueueName 是否已赋值
                     * 
                     */
                    bool DeadLetterQueueNameHasBeenSet() const;

                    /**
                     * 获取Specifies the essential parameter when policy is 1. maximum unconsumed expiration time. value range: 300-43200 in seconds, must be less than the maximum message retention time MsgRetentionSeconds.
                     * @return MaxTimeToLive Specifies the essential parameter when policy is 1. maximum unconsumed expiration time. value range: 300-43200 in seconds, must be less than the maximum message retention time MsgRetentionSeconds.
                     * 
                     */
                    uint64_t GetMaxTimeToLive() const;

                    /**
                     * 设置Specifies the essential parameter when policy is 1. maximum unconsumed expiration time. value range: 300-43200 in seconds, must be less than the maximum message retention time MsgRetentionSeconds.
                     * @param _maxTimeToLive Specifies the essential parameter when policy is 1. maximum unconsumed expiration time. value range: 300-43200 in seconds, must be less than the maximum message retention time MsgRetentionSeconds.
                     * 
                     */
                    void SetMaxTimeToLive(const uint64_t& _maxTimeToLive);

                    /**
                     * 判断参数 MaxTimeToLive 是否已赋值
                     * @return MaxTimeToLive 是否已赋值
                     * 
                     */
                    bool MaxTimeToLiveHasBeenSet() const;

                    /**
                     * 获取Maximum number of receipts
                     * @return MaxReceiveCount Maximum number of receipts
                     * 
                     */
                    uint64_t GetMaxReceiveCount() const;

                    /**
                     * 设置Maximum number of receipts
                     * @param _maxReceiveCount Maximum number of receipts
                     * 
                     */
                    void SetMaxReceiveCount(const uint64_t& _maxReceiveCount);

                    /**
                     * 判断参数 MaxReceiveCount 是否已赋值
                     * @return MaxReceiveCount 是否已赋值
                     * 
                     */
                    bool MaxReceiveCountHasBeenSet() const;

                    /**
                     * 获取Dead letter queue policy
                     * @return Policy Dead letter queue policy
                     * 
                     */
                    uint64_t GetPolicy() const;

                    /**
                     * 设置Dead letter queue policy
                     * @param _policy Dead letter queue policy
                     * 
                     */
                    void SetPolicy(const uint64_t& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Whether to enable message trace. true: yes; false: no. If this field is left empty, the feature will not be enabled.
                     * @return Trace Whether to enable message trace. true: yes; false: no. If this field is left empty, the feature will not be enabled.
                     * 
                     */
                    bool GetTrace() const;

                    /**
                     * 设置Whether to enable message trace. true: yes; false: no. If this field is left empty, the feature will not be enabled.
                     * @param _trace Whether to enable message trace. true: yes; false: no. If this field is left empty, the feature will not be enabled.
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
                     * 获取Whether to enable transaction. 1: yes; 0: no
                     * @return Transaction Whether to enable transaction. 1: yes; 0: no
                     * 
                     */
                    uint64_t GetTransaction() const;

                    /**
                     * 设置Whether to enable transaction. 1: yes; 0: no
                     * @param _transaction Whether to enable transaction. 1: yes; 0: no
                     * 
                     */
                    void SetTransaction(const uint64_t& _transaction);

                    /**
                     * 判断参数 Transaction 是否已赋值
                     * @return Transaction 是否已赋值
                     * 
                     */
                    bool TransactionHasBeenSet() const;

                    /**
                     * 获取Queue storage space configured for message rewind. Value range: 10,240-512,000 MB (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
                     * @return RetentionSizeInMB Queue storage space configured for message rewind. Value range: 10,240-512,000 MB (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
                     * 
                     */
                    uint64_t GetRetentionSizeInMB() const;

                    /**
                     * 设置Queue storage space configured for message rewind. Value range: 10,240-512,000 MB (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
                     * @param _retentionSizeInMB Queue storage space configured for message rewind. Value range: 10,240-512,000 MB (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
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
                     * Queue name, which must be unique under the same account in the same region. A queue name is a string of up to 64 characters, starting with a letter, and the remaining part can include letters, digits, and hyphens (-).
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Maximum number of heaped messages. The value range is 1,000,000–10,000,000 during the beta test and can be 1,000,000–1,000,000,000 after the product is officially released. The default value is 10,000,000 during the beta test and will be 100,000,000 after the product is officially released.
                     */
                    uint64_t m_maxMsgHeapNum;
                    bool m_maxMsgHeapNumHasBeenSet;

                    /**
                     * Long polling wait time for message reception. Value range: 0–30 seconds. Default value: 0.
                     */
                    uint64_t m_pollingWaitSeconds;
                    bool m_pollingWaitSecondsHasBeenSet;

                    /**
                     * Message visibility timeout period. Value range: 1–43200 seconds (i.e., 12 hours). Default value: 30.
                     */
                    uint64_t m_visibilityTimeout;
                    bool m_visibilityTimeoutHasBeenSet;

                    /**
                     * Max message size, which defaults to 1,024 KB for the queue of TDMQ for CMQ and cannot be modified.
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * The max period during which a message is retained before it is automatically acknowledged. Value range: 30-43,200 seconds (30 seconds to 12 hours). Default value: 3600 seconds (1 hour).
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * Rewindable time of messages in the queue. Value range: 0-1,296,000s (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
                     */
                    uint64_t m_rewindSeconds;
                    bool m_rewindSecondsHasBeenSet;

                    /**
                     * First query time
                     */
                    uint64_t m_firstQueryInterval;
                    bool m_firstQueryIntervalHasBeenSet;

                    /**
                     * Maximum number of queries
                     */
                    uint64_t m_maxQueryCount;
                    bool m_maxQueryCountHasBeenSet;

                    /**
                     * Dead letter queue name
                     */
                    std::string m_deadLetterQueueName;
                    bool m_deadLetterQueueNameHasBeenSet;

                    /**
                     * Specifies the essential parameter when policy is 1. maximum unconsumed expiration time. value range: 300-43200 in seconds, must be less than the maximum message retention time MsgRetentionSeconds.
                     */
                    uint64_t m_maxTimeToLive;
                    bool m_maxTimeToLiveHasBeenSet;

                    /**
                     * Maximum number of receipts
                     */
                    uint64_t m_maxReceiveCount;
                    bool m_maxReceiveCountHasBeenSet;

                    /**
                     * Dead letter queue policy
                     */
                    uint64_t m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Whether to enable message trace. true: yes; false: no. If this field is left empty, the feature will not be enabled.
                     */
                    bool m_trace;
                    bool m_traceHasBeenSet;

                    /**
                     * Whether to enable transaction. 1: yes; 0: no
                     */
                    uint64_t m_transaction;
                    bool m_transactionHasBeenSet;

                    /**
                     * Queue storage space configured for message rewind. Value range: 10,240-512,000 MB (if message rewind is enabled). The value “0” indicates that message rewind is not enabled.
                     */
                    uint64_t m_retentionSizeInMB;
                    bool m_retentionSizeInMBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYCMQQUEUEATTRIBUTEREQUEST_H_
