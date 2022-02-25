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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_TOPIC_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_TOPIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/PartitionsTopic.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Topic instance
                */
                class Topic : public AbstractModel
                {
                public:
                    Topic();
                    ~Topic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Average size of the messages published in the last interval in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AverageMsgSize Average size of the messages published in the last interval in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAverageMsgSize() const;

                    /**
                     * 设置Average size of the messages published in the last interval in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AverageMsgSize Average size of the messages published in the last interval in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAverageMsgSize(const std::string& _averageMsgSize);

                    /**
                     * 判断参数 AverageMsgSize 是否已赋值
                     * @return AverageMsgSize 是否已赋值
                     */
                    bool AverageMsgSizeHasBeenSet() const;

                    /**
                     * 获取Number of consumers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerCount Number of consumers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetConsumerCount() const;

                    /**
                     * 设置Number of consumers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ConsumerCount Number of consumers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConsumerCount(const std::string& _consumerCount);

                    /**
                     * 判断参数 ConsumerCount 是否已赋值
                     * @return ConsumerCount 是否已赋值
                     */
                    bool ConsumerCountHasBeenSet() const;

                    /**
                     * 获取Total number of recorded messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastConfirmedEntry Total number of recorded messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLastConfirmedEntry() const;

                    /**
                     * 设置Total number of recorded messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LastConfirmedEntry Total number of recorded messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastConfirmedEntry(const std::string& _lastConfirmedEntry);

                    /**
                     * 判断参数 LastConfirmedEntry 是否已赋值
                     * @return LastConfirmedEntry 是否已赋值
                     */
                    bool LastConfirmedEntryHasBeenSet() const;

                    /**
                     * 获取Time when the last ledger was created.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastLedgerCreatedTimestamp Time when the last ledger was created.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLastLedgerCreatedTimestamp() const;

                    /**
                     * 设置Time when the last ledger was created.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LastLedgerCreatedTimestamp Time when the last ledger was created.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastLedgerCreatedTimestamp(const std::string& _lastLedgerCreatedTimestamp);

                    /**
                     * 判断参数 LastLedgerCreatedTimestamp 是否已赋值
                     * @return LastLedgerCreatedTimestamp 是否已赋值
                     */
                    bool LastLedgerCreatedTimestampHasBeenSet() const;

                    /**
                     * 获取Number of messages published by local and replicated publishers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgRateIn Number of messages published by local and replicated publishers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgRateIn() const;

                    /**
                     * 设置Number of messages published by local and replicated publishers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MsgRateIn Number of messages published by local and replicated publishers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgRateIn(const std::string& _msgRateIn);

                    /**
                     * 判断参数 MsgRateIn 是否已赋值
                     * @return MsgRateIn 是否已赋值
                     */
                    bool MsgRateInHasBeenSet() const;

                    /**
                     * 获取Sum of the numbers of messages delivered by local and replicated consumers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgRateOut Sum of the numbers of messages delivered by local and replicated consumers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgRateOut() const;

                    /**
                     * 设置Sum of the numbers of messages delivered by local and replicated consumers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MsgRateOut Sum of the numbers of messages delivered by local and replicated consumers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgRateOut(const std::string& _msgRateOut);

                    /**
                     * 判断参数 MsgRateOut 是否已赋值
                     * @return MsgRateOut 是否已赋值
                     */
                    bool MsgRateOutHasBeenSet() const;

                    /**
                     * 获取Number of bytes of messages published by local and replicated publishers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgThroughputIn Number of bytes of messages published by local and replicated publishers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgThroughputIn() const;

                    /**
                     * 设置Number of bytes of messages published by local and replicated publishers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MsgThroughputIn Number of bytes of messages published by local and replicated publishers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgThroughputIn(const std::string& _msgThroughputIn);

                    /**
                     * 判断参数 MsgThroughputIn 是否已赋值
                     * @return MsgThroughputIn 是否已赋值
                     */
                    bool MsgThroughputInHasBeenSet() const;

                    /**
                     * 获取Number of bytes of messages delivered by local and replicated consumers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgThroughputOut Number of bytes of messages delivered by local and replicated consumers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgThroughputOut() const;

                    /**
                     * 设置Number of bytes of messages delivered by local and replicated consumers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MsgThroughputOut Number of bytes of messages delivered by local and replicated consumers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgThroughputOut(const std::string& _msgThroughputOut);

                    /**
                     * 判断参数 MsgThroughputOut 是否已赋值
                     * @return MsgThroughputOut 是否已赋值
                     */
                    bool MsgThroughputOutHasBeenSet() const;

                    /**
                     * 获取Total number of recorded messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NumberOfEntries Total number of recorded messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNumberOfEntries() const;

                    /**
                     * 设置Total number of recorded messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param NumberOfEntries Total number of recorded messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNumberOfEntries(const std::string& _numberOfEntries);

                    /**
                     * 判断参数 NumberOfEntries 是否已赋值
                     * @return NumberOfEntries 是否已赋值
                     */
                    bool NumberOfEntriesHasBeenSet() const;

                    /**
                     * 获取Number of partitions ≤ 0: there are no subpartitions in the topic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Partitions Number of partitions ≤ 0: there are no subpartitions in the topic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPartitions() const;

                    /**
                     * 设置Number of partitions ≤ 0: there are no subpartitions in the topic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Partitions Number of partitions ≤ 0: there are no subpartitions in the topic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPartitions(const int64_t& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取Number of producers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProducerCount Number of producers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProducerCount() const;

                    /**
                     * 设置Number of producers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ProducerCount Number of producers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProducerCount(const std::string& _producerCount);

                    /**
                     * 判断参数 ProducerCount 是否已赋值
                     * @return ProducerCount 是否已赋值
                     */
                    bool ProducerCountHasBeenSet() const;

                    /**
                     * 获取Total amount of all stored messages in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalSize Total amount of all stored messages in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTotalSize() const;

                    /**
                     * 设置Total amount of all stored messages in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TotalSize Total amount of all stored messages in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTotalSize(const std::string& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取Subpartitions in a partitioned topic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubTopicSets Subpartitions in a partitioned topic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PartitionsTopic> GetSubTopicSets() const;

                    /**
                     * 设置Subpartitions in a partitioned topic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SubTopicSets Subpartitions in a partitioned topic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubTopicSets(const std::vector<PartitionsTopic>& _subTopicSets);

                    /**
                     * 判断参数 SubTopicSets 是否已赋值
                     * @return SubTopicSets 是否已赋值
                     */
                    bool SubTopicSetsHasBeenSet() const;

                    /**
                     * 获取Topic type description:
0: general message;
1: globally sequential message;
2: partitionally sequential message;
3: retry letter queue;
4: dead letter queue;
5: transaction message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TopicType Topic type description:
0: general message;
1: globally sequential message;
2: partitionally sequential message;
3: retry letter queue;
4: dead letter queue;
5: transaction message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTopicType() const;

                    /**
                     * 设置Topic type description:
0: general message;
1: globally sequential message;
2: partitionally sequential message;
3: retry letter queue;
4: dead letter queue;
5: transaction message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TopicType Topic type description:
0: general message;
1: globally sequential message;
2: partitionally sequential message;
3: retry letter queue;
4: dead letter queue;
5: transaction message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTopicType(const uint64_t& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取Environment (namespace) name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EnvironmentId Environment (namespace) name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment (namespace) name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EnvironmentId Environment (namespace) name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Topic name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TopicName Topic name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TopicName Topic name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Remarks (up to 128 characters).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks (up to 128 characters).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks (up to 128 characters).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Remark Remarks (up to 128 characters).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreateTime Creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Modification time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Modification time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UpdateTime Modification time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Maximum number of producers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProducerLimit Maximum number of producers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProducerLimit() const;

                    /**
                     * 设置Maximum number of producers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ProducerLimit Maximum number of producers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProducerLimit(const std::string& _producerLimit);

                    /**
                     * 判断参数 ProducerLimit 是否已赋值
                     * @return ProducerLimit 是否已赋值
                     */
                    bool ProducerLimitHasBeenSet() const;

                    /**
                     * 获取Maximum number of consumers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerLimit Maximum number of consumers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetConsumerLimit() const;

                    /**
                     * 设置Maximum number of consumers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ConsumerLimit Maximum number of consumers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConsumerLimit(const std::string& _consumerLimit);

                    /**
                     * 判断参数 ConsumerLimit 是否已赋值
                     * @return ConsumerLimit 是否已赋值
                     */
                    bool ConsumerLimitHasBeenSet() const;

                    /**
                     * 获取`0`: Non-persistent and non-partitioned
`1`: Non-persistent and partitioned
`2`: Persistent and non-partitioned
`3`: Persistent and partitioned
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PulsarTopicType `0`: Non-persistent and non-partitioned
`1`: Non-persistent and partitioned
`2`: Persistent and non-partitioned
`3`: Persistent and partitioned
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetPulsarTopicType() const;

                    /**
                     * 设置`0`: Non-persistent and non-partitioned
`1`: Non-persistent and partitioned
`2`: Persistent and non-partitioned
`3`: Persistent and partitioned
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param PulsarTopicType `0`: Non-persistent and non-partitioned
`1`: Non-persistent and partitioned
`2`: Persistent and non-partitioned
`3`: Persistent and partitioned
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPulsarTopicType(const int64_t& _pulsarTopicType);

                    /**
                     * 判断参数 PulsarTopicType 是否已赋值
                     * @return PulsarTopicType 是否已赋值
                     */
                    bool PulsarTopicTypeHasBeenSet() const;

                private:

                    /**
                     * Average size of the messages published in the last interval in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_averageMsgSize;
                    bool m_averageMsgSizeHasBeenSet;

                    /**
                     * Number of consumers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumerCount;
                    bool m_consumerCountHasBeenSet;

                    /**
                     * Total number of recorded messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastConfirmedEntry;
                    bool m_lastConfirmedEntryHasBeenSet;

                    /**
                     * Time when the last ledger was created.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastLedgerCreatedTimestamp;
                    bool m_lastLedgerCreatedTimestampHasBeenSet;

                    /**
                     * Number of messages published by local and replicated publishers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgRateIn;
                    bool m_msgRateInHasBeenSet;

                    /**
                     * Sum of the numbers of messages delivered by local and replicated consumers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgRateOut;
                    bool m_msgRateOutHasBeenSet;

                    /**
                     * Number of bytes of messages published by local and replicated publishers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgThroughputIn;
                    bool m_msgThroughputInHasBeenSet;

                    /**
                     * Number of bytes of messages delivered by local and replicated consumers per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgThroughputOut;
                    bool m_msgThroughputOutHasBeenSet;

                    /**
                     * Total number of recorded messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_numberOfEntries;
                    bool m_numberOfEntriesHasBeenSet;

                    /**
                     * Number of partitions ≤ 0: there are no subpartitions in the topic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * Number of producers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_producerCount;
                    bool m_producerCountHasBeenSet;

                    /**
                     * Total amount of all stored messages in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * Subpartitions in a partitioned topic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PartitionsTopic> m_subTopicSets;
                    bool m_subTopicSetsHasBeenSet;

                    /**
                     * Topic type description:
0: general message;
1: globally sequential message;
2: partitionally sequential message;
3: retry letter queue;
4: dead letter queue;
5: transaction message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * Environment (namespace) name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Topic name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Remarks (up to 128 characters).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Maximum number of producers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_producerLimit;
                    bool m_producerLimitHasBeenSet;

                    /**
                     * Maximum number of consumers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumerLimit;
                    bool m_consumerLimitHasBeenSet;

                    /**
                     * `0`: Non-persistent and non-partitioned
`1`: Non-persistent and partitioned
`2`: Persistent and non-partitioned
`3`: Persistent and partitioned
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_pulsarTopicType;
                    bool m_pulsarTopicTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_TOPIC_H_
