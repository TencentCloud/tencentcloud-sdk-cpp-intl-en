/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_QUEUESET_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_QUEUESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cmq/v20190304/model/DeadLetterSource.h>
#include <tencentcloud/cmq/v20190304/model/DeadLetterPolicy.h>
#include <tencentcloud/cmq/v20190304/model/TransactionPolicy.h>
#include <tencentcloud/cmq/v20190304/model/Tag.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * Batch queue attribute information
                */
                class QueueSet : public AbstractModel
                {
                public:
                    QueueSet();
                    ~QueueSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取QueueId
                     * @return QueueId QueueId
                     */
                    std::string GetQueueId() const;

                    /**
                     * 设置QueueId
                     * @param QueueId QueueId
                     */
                    void SetQueueId(const std::string& _queueId);

                    /**
                     * 判断参数 QueueId 是否已赋值
                     * @return QueueId 是否已赋值
                     */
                    bool QueueIdHasBeenSet() const;

                    /**
                     * 获取QueueName
                     * @return QueueName QueueName
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置QueueName
                     * @param QueueName QueueName
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取Qps
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Qps Qps
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置Qps
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Qps Qps
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取Bps
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Bps Bps
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetBps() const;

                    /**
                     * 设置Bps
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Bps Bps
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBps(const uint64_t& _bps);

                    /**
                     * 判断参数 Bps 是否已赋值
                     * @return Bps 是否已赋值
                     */
                    bool BpsHasBeenSet() const;

                    /**
                     * 获取MaxDelaySeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxDelaySeconds MaxDelaySeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMaxDelaySeconds() const;

                    /**
                     * 设置MaxDelaySeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxDelaySeconds MaxDelaySeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxDelaySeconds(const uint64_t& _maxDelaySeconds);

                    /**
                     * 判断参数 MaxDelaySeconds 是否已赋值
                     * @return MaxDelaySeconds 是否已赋值
                     */
                    bool MaxDelaySecondsHasBeenSet() const;

                    /**
                     * 获取MaxMsgHeapNum
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxMsgHeapNum MaxMsgHeapNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMaxMsgHeapNum() const;

                    /**
                     * 设置MaxMsgHeapNum
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxMsgHeapNum MaxMsgHeapNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxMsgHeapNum(const uint64_t& _maxMsgHeapNum);

                    /**
                     * 判断参数 MaxMsgHeapNum 是否已赋值
                     * @return MaxMsgHeapNum 是否已赋值
                     */
                    bool MaxMsgHeapNumHasBeenSet() const;

                    /**
                     * 获取PollingWaitSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PollingWaitSeconds PollingWaitSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetPollingWaitSeconds() const;

                    /**
                     * 设置PollingWaitSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PollingWaitSeconds PollingWaitSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPollingWaitSeconds(const uint64_t& _pollingWaitSeconds);

                    /**
                     * 判断参数 PollingWaitSeconds 是否已赋值
                     * @return PollingWaitSeconds 是否已赋值
                     */
                    bool PollingWaitSecondsHasBeenSet() const;

                    /**
                     * 获取MsgRetentionSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgRetentionSeconds MsgRetentionSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置MsgRetentionSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MsgRetentionSeconds MsgRetentionSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds);

                    /**
                     * 判断参数 MsgRetentionSeconds 是否已赋值
                     * @return MsgRetentionSeconds 是否已赋值
                     */
                    bool MsgRetentionSecondsHasBeenSet() const;

                    /**
                     * 获取VisibilityTimeout
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VisibilityTimeout VisibilityTimeout
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetVisibilityTimeout() const;

                    /**
                     * 设置VisibilityTimeout
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param VisibilityTimeout VisibilityTimeout
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVisibilityTimeout(const uint64_t& _visibilityTimeout);

                    /**
                     * 判断参数 VisibilityTimeout 是否已赋值
                     * @return VisibilityTimeout 是否已赋值
                     */
                    bool VisibilityTimeoutHasBeenSet() const;

                    /**
                     * 获取MaxMsgSize
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxMsgSize MaxMsgSize
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置MaxMsgSize
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxMsgSize MaxMsgSize
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxMsgSize(const uint64_t& _maxMsgSize);

                    /**
                     * 判断参数 MaxMsgSize 是否已赋值
                     * @return MaxMsgSize 是否已赋值
                     */
                    bool MaxMsgSizeHasBeenSet() const;

                    /**
                     * 获取RewindSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RewindSeconds RewindSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetRewindSeconds() const;

                    /**
                     * 设置RewindSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RewindSeconds RewindSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRewindSeconds(const uint64_t& _rewindSeconds);

                    /**
                     * 判断参数 RewindSeconds 是否已赋值
                     * @return RewindSeconds 是否已赋值
                     */
                    bool RewindSecondsHasBeenSet() const;

                    /**
                     * 获取CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreateTime CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastModifyTime LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LastModifyTime LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastModifyTime(const uint64_t& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取ActiveMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ActiveMsgNum ActiveMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetActiveMsgNum() const;

                    /**
                     * 设置ActiveMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ActiveMsgNum ActiveMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetActiveMsgNum(const uint64_t& _activeMsgNum);

                    /**
                     * 判断参数 ActiveMsgNum 是否已赋值
                     * @return ActiveMsgNum 是否已赋值
                     */
                    bool ActiveMsgNumHasBeenSet() const;

                    /**
                     * 获取InactiveMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InactiveMsgNum InactiveMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetInactiveMsgNum() const;

                    /**
                     * 设置InactiveMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InactiveMsgNum InactiveMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInactiveMsgNum(const uint64_t& _inactiveMsgNum);

                    /**
                     * 判断参数 InactiveMsgNum 是否已赋值
                     * @return InactiveMsgNum 是否已赋值
                     */
                    bool InactiveMsgNumHasBeenSet() const;

                    /**
                     * 获取DelayMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DelayMsgNum DelayMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetDelayMsgNum() const;

                    /**
                     * 设置DelayMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DelayMsgNum DelayMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDelayMsgNum(const uint64_t& _delayMsgNum);

                    /**
                     * 判断参数 DelayMsgNum 是否已赋值
                     * @return DelayMsgNum 是否已赋值
                     */
                    bool DelayMsgNumHasBeenSet() const;

                    /**
                     * 获取RewindMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RewindMsgNum RewindMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetRewindMsgNum() const;

                    /**
                     * 设置RewindMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RewindMsgNum RewindMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRewindMsgNum(const uint64_t& _rewindMsgNum);

                    /**
                     * 判断参数 RewindMsgNum 是否已赋值
                     * @return RewindMsgNum 是否已赋值
                     */
                    bool RewindMsgNumHasBeenSet() const;

                    /**
                     * 获取MinMsgTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MinMsgTime MinMsgTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMinMsgTime() const;

                    /**
                     * 设置MinMsgTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MinMsgTime MinMsgTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMinMsgTime(const uint64_t& _minMsgTime);

                    /**
                     * 判断参数 MinMsgTime 是否已赋值
                     * @return MinMsgTime 是否已赋值
                     */
                    bool MinMsgTimeHasBeenSet() const;

                    /**
                     * 获取Transaction
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Transaction Transaction
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetTransaction() const;

                    /**
                     * 设置Transaction
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Transaction Transaction
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTransaction(const bool& _transaction);

                    /**
                     * 判断参数 Transaction 是否已赋值
                     * @return Transaction 是否已赋值
                     */
                    bool TransactionHasBeenSet() const;

                    /**
                     * 获取DeadLetterSource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeadLetterSource DeadLetterSource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DeadLetterSource> GetDeadLetterSource() const;

                    /**
                     * 设置DeadLetterSource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DeadLetterSource DeadLetterSource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDeadLetterSource(const std::vector<DeadLetterSource>& _deadLetterSource);

                    /**
                     * 判断参数 DeadLetterSource 是否已赋值
                     * @return DeadLetterSource 是否已赋值
                     */
                    bool DeadLetterSourceHasBeenSet() const;

                    /**
                     * 获取DeadLetterPolicy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeadLetterPolicy DeadLetterPolicy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DeadLetterPolicy GetDeadLetterPolicy() const;

                    /**
                     * 设置DeadLetterPolicy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DeadLetterPolicy DeadLetterPolicy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDeadLetterPolicy(const DeadLetterPolicy& _deadLetterPolicy);

                    /**
                     * 判断参数 DeadLetterPolicy 是否已赋值
                     * @return DeadLetterPolicy 是否已赋值
                     */
                    bool DeadLetterPolicyHasBeenSet() const;

                    /**
                     * 获取TransactionPolicy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TransactionPolicy TransactionPolicy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TransactionPolicy GetTransactionPolicy() const;

                    /**
                     * 设置TransactionPolicy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TransactionPolicy TransactionPolicy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTransactionPolicy(const TransactionPolicy& _transactionPolicy);

                    /**
                     * 判断参数 TransactionPolicy 是否已赋值
                     * @return TransactionPolicy 是否已赋值
                     */
                    bool TransactionPolicyHasBeenSet() const;

                    /**
                     * 获取Creator `uin`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateUin Creator `uin`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置Creator `uin`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreateUin Creator `uin`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Tag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Tags Tag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Message trace flag. true: enabled, false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Trace Message trace flag. true: enabled, false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetTrace() const;

                    /**
                     * 设置Message trace flag. true: enabled, false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Trace Message trace flag. true: enabled, false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTrace(const bool& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     */
                    bool TraceHasBeenSet() const;

                private:

                    /**
                     * QueueId
                     */
                    std::string m_queueId;
                    bool m_queueIdHasBeenSet;

                    /**
                     * QueueName
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Qps
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * Bps
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_bps;
                    bool m_bpsHasBeenSet;

                    /**
                     * MaxDelaySeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxDelaySeconds;
                    bool m_maxDelaySecondsHasBeenSet;

                    /**
                     * MaxMsgHeapNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxMsgHeapNum;
                    bool m_maxMsgHeapNumHasBeenSet;

                    /**
                     * PollingWaitSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_pollingWaitSeconds;
                    bool m_pollingWaitSecondsHasBeenSet;

                    /**
                     * MsgRetentionSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * VisibilityTimeout
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_visibilityTimeout;
                    bool m_visibilityTimeoutHasBeenSet;

                    /**
                     * MaxMsgSize
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * RewindSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_rewindSeconds;
                    bool m_rewindSecondsHasBeenSet;

                    /**
                     * CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * ActiveMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_activeMsgNum;
                    bool m_activeMsgNumHasBeenSet;

                    /**
                     * InactiveMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_inactiveMsgNum;
                    bool m_inactiveMsgNumHasBeenSet;

                    /**
                     * DelayMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_delayMsgNum;
                    bool m_delayMsgNumHasBeenSet;

                    /**
                     * RewindMsgNum
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_rewindMsgNum;
                    bool m_rewindMsgNumHasBeenSet;

                    /**
                     * MinMsgTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_minMsgTime;
                    bool m_minMsgTimeHasBeenSet;

                    /**
                     * Transaction
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_transaction;
                    bool m_transactionHasBeenSet;

                    /**
                     * DeadLetterSource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DeadLetterSource> m_deadLetterSource;
                    bool m_deadLetterSourceHasBeenSet;

                    /**
                     * DeadLetterPolicy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DeadLetterPolicy m_deadLetterPolicy;
                    bool m_deadLetterPolicyHasBeenSet;

                    /**
                     * TransactionPolicy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TransactionPolicy m_transactionPolicy;
                    bool m_transactionPolicyHasBeenSet;

                    /**
                     * Creator `uin`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Tag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Message trace flag. true: enabled, false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_trace;
                    bool m_traceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_QUEUESET_H_
