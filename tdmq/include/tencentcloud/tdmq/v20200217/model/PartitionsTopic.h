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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PARTITIONSTOPIC_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PARTITIONSTOPIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Partitioned topic
                */
                class PartitionsTopic : public AbstractModel
                {
                public:
                    PartitionsTopic();
                    ~PartitionsTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Average size of the messages published in the last interval in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AverageMsgSize Average size of the messages published in the last interval in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAverageMsgSize() const;

                    /**
                     * 设置Average size of the messages published in the last interval in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AverageMsgSize Average size of the messages published in the last interval in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAverageMsgSize(const std::string& _averageMsgSize);

                    /**
                     * 判断参数 AverageMsgSize 是否已赋值
                     * @return AverageMsgSize 是否已赋值
                     */
                    bool AverageMsgSizeHasBeenSet() const;

                    /**
                     * 获取The number of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerCount The number of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetConsumerCount() const;

                    /**
                     * 设置The number of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ConsumerCount The number of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConsumerCount(const std::string& _consumerCount);

                    /**
                     * 判断参数 ConsumerCount 是否已赋值
                     * @return ConsumerCount 是否已赋值
                     */
                    bool ConsumerCountHasBeenSet() const;

                    /**
                     * 获取The total number of recorded messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastConfirmedEntry The total number of recorded messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLastConfirmedEntry() const;

                    /**
                     * 设置The total number of recorded messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LastConfirmedEntry The total number of recorded messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastConfirmedEntry(const std::string& _lastConfirmedEntry);

                    /**
                     * 判断参数 LastConfirmedEntry 是否已赋值
                     * @return LastConfirmedEntry 是否已赋值
                     */
                    bool LastConfirmedEntryHasBeenSet() const;

                    /**
                     * 获取Time when the last ledger was created.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastLedgerCreatedTimestamp Time when the last ledger was created.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLastLedgerCreatedTimestamp() const;

                    /**
                     * 设置Time when the last ledger was created.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LastLedgerCreatedTimestamp Time when the last ledger was created.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastLedgerCreatedTimestamp(const std::string& _lastLedgerCreatedTimestamp);

                    /**
                     * 判断参数 LastLedgerCreatedTimestamp 是否已赋值
                     * @return LastLedgerCreatedTimestamp 是否已赋值
                     */
                    bool LastLedgerCreatedTimestampHasBeenSet() const;

                    /**
                     * 获取The number of messages published by local and replicated publishers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgRateIn The number of messages published by local and replicated publishers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgRateIn() const;

                    /**
                     * 设置The number of messages published by local and replicated publishers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MsgRateIn The number of messages published by local and replicated publishers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgRateIn(const std::string& _msgRateIn);

                    /**
                     * 判断参数 MsgRateIn 是否已赋值
                     * @return MsgRateIn 是否已赋值
                     */
                    bool MsgRateInHasBeenSet() const;

                    /**
                     * 获取The total number of messages delivered by local and replicated consumers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgRateOut The total number of messages delivered by local and replicated consumers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgRateOut() const;

                    /**
                     * 设置The total number of messages delivered by local and replicated consumers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MsgRateOut The total number of messages delivered by local and replicated consumers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgRateOut(const std::string& _msgRateOut);

                    /**
                     * 判断参数 MsgRateOut 是否已赋值
                     * @return MsgRateOut 是否已赋值
                     */
                    bool MsgRateOutHasBeenSet() const;

                    /**
                     * 获取The size (in bytes) of messages published by local and replicated publishers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgThroughputIn The size (in bytes) of messages published by local and replicated publishers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgThroughputIn() const;

                    /**
                     * 设置The size (in bytes) of messages published by local and replicated publishers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MsgThroughputIn The size (in bytes) of messages published by local and replicated publishers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgThroughputIn(const std::string& _msgThroughputIn);

                    /**
                     * 判断参数 MsgThroughputIn 是否已赋值
                     * @return MsgThroughputIn 是否已赋值
                     */
                    bool MsgThroughputInHasBeenSet() const;

                    /**
                     * 获取The size (in bytes) of messages delivered by local and replicated consumers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgThroughputOut The size (in bytes) of messages delivered by local and replicated consumers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgThroughputOut() const;

                    /**
                     * 设置The size (in bytes) of messages delivered by local and replicated consumers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MsgThroughputOut The size (in bytes) of messages delivered by local and replicated consumers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgThroughputOut(const std::string& _msgThroughputOut);

                    /**
                     * 判断参数 MsgThroughputOut 是否已赋值
                     * @return MsgThroughputOut 是否已赋值
                     */
                    bool MsgThroughputOutHasBeenSet() const;

                    /**
                     * 获取The total number of recorded messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NumberOfEntries The total number of recorded messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNumberOfEntries() const;

                    /**
                     * 设置The total number of recorded messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NumberOfEntries The total number of recorded messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNumberOfEntries(const std::string& _numberOfEntries);

                    /**
                     * 判断参数 NumberOfEntries 是否已赋值
                     * @return NumberOfEntries 是否已赋值
                     */
                    bool NumberOfEntriesHasBeenSet() const;

                    /**
                     * 获取Subpartition ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Partitions Subpartition ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPartitions() const;

                    /**
                     * 设置Subpartition ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Partitions Subpartition ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPartitions(const int64_t& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取The number of producers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProducerCount The number of producers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProducerCount() const;

                    /**
                     * 设置The number of producers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ProducerCount The number of producers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProducerCount(const std::string& _producerCount);

                    /**
                     * 判断参数 ProducerCount 是否已赋值
                     * @return ProducerCount 是否已赋值
                     */
                    bool ProducerCountHasBeenSet() const;

                    /**
                     * 获取Total size of all stored messages in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalSize Total size of all stored messages in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTotalSize() const;

                    /**
                     * 设置Total size of all stored messages in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TotalSize Total size of all stored messages in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTotalSize(const std::string& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取Topic type description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicType Topic type description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTopicType() const;

                    /**
                     * 设置Topic type description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TopicType Topic type description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTopicType(const uint64_t& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     */
                    bool TopicTypeHasBeenSet() const;

                private:

                    /**
                     * Average size of the messages published in the last interval in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_averageMsgSize;
                    bool m_averageMsgSizeHasBeenSet;

                    /**
                     * The number of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumerCount;
                    bool m_consumerCountHasBeenSet;

                    /**
                     * The total number of recorded messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastConfirmedEntry;
                    bool m_lastConfirmedEntryHasBeenSet;

                    /**
                     * Time when the last ledger was created.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastLedgerCreatedTimestamp;
                    bool m_lastLedgerCreatedTimestampHasBeenSet;

                    /**
                     * The number of messages published by local and replicated publishers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgRateIn;
                    bool m_msgRateInHasBeenSet;

                    /**
                     * The total number of messages delivered by local and replicated consumers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgRateOut;
                    bool m_msgRateOutHasBeenSet;

                    /**
                     * The size (in bytes) of messages published by local and replicated publishers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgThroughputIn;
                    bool m_msgThroughputInHasBeenSet;

                    /**
                     * The size (in bytes) of messages delivered by local and replicated consumers per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgThroughputOut;
                    bool m_msgThroughputOutHasBeenSet;

                    /**
                     * The total number of recorded messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_numberOfEntries;
                    bool m_numberOfEntriesHasBeenSet;

                    /**
                     * Subpartition ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * The number of producers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_producerCount;
                    bool m_producerCountHasBeenSet;

                    /**
                     * Total size of all stored messages in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * Topic type description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_topicType;
                    bool m_topicTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PARTITIONSTOPIC_H_
