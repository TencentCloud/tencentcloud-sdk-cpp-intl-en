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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Topic parameters that can be modified in batches
                */
                class BatchModifyTopicInfo : public AbstractModel
                {
                public:
                    BatchModifyTopicInfo();
                    ~BatchModifyTopicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic name.
                     * @return TopicName Topic name.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name.
                     * @param TopicName Topic name.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取The number of partitions.
                     * @return PartitionNum The number of partitions.
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置The number of partitions.
                     * @param PartitionNum The number of partitions.
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Note Remarks.
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Remarks.
                     * @param Note Remarks.
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取Number of replicas.
                     * @return ReplicaNum Number of replicas.
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置Number of replicas.
                     * @param ReplicaNum Number of replicas.
                     */
                    void SetReplicaNum(const int64_t& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取Message deletion policy. Valid values: `delete`, `compact`.
                     * @return CleanUpPolicy Message deletion policy. Valid values: `delete`, `compact`.
                     */
                    std::string GetCleanUpPolicy() const;

                    /**
                     * 设置Message deletion policy. Valid values: `delete`, `compact`.
                     * @param CleanUpPolicy Message deletion policy. Valid values: `delete`, `compact`.
                     */
                    void SetCleanUpPolicy(const std::string& _cleanUpPolicy);

                    /**
                     * 判断参数 CleanUpPolicy 是否已赋值
                     * @return CleanUpPolicy 是否已赋值
                     */
                    bool CleanUpPolicyHasBeenSet() const;

                    /**
                     * 获取The minimum number of replicas specified by `min.insync.replicas` when the producer sets `request.required.acks` to `-1`.
                     * @return MinInsyncReplicas The minimum number of replicas specified by `min.insync.replicas` when the producer sets `request.required.acks` to `-1`.
                     */
                    int64_t GetMinInsyncReplicas() const;

                    /**
                     * 设置The minimum number of replicas specified by `min.insync.replicas` when the producer sets `request.required.acks` to `-1`.
                     * @param MinInsyncReplicas The minimum number of replicas specified by `min.insync.replicas` when the producer sets `request.required.acks` to `-1`.
                     */
                    void SetMinInsyncReplicas(const int64_t& _minInsyncReplicas);

                    /**
                     * 判断参数 MinInsyncReplicas 是否已赋值
                     * @return MinInsyncReplicas 是否已赋值
                     */
                    bool MinInsyncReplicasHasBeenSet() const;

                    /**
                     * 获取Whether to allow a non-ISR replica to be the leader.
                     * @return UncleanLeaderElectionEnable Whether to allow a non-ISR replica to be the leader.
                     */
                    bool GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置Whether to allow a non-ISR replica to be the leader.
                     * @param UncleanLeaderElectionEnable Whether to allow a non-ISR replica to be the leader.
                     */
                    void SetUncleanLeaderElectionEnable(const bool& _uncleanLeaderElectionEnable);

                    /**
                     * 判断参数 UncleanLeaderElectionEnable 是否已赋值
                     * @return UncleanLeaderElectionEnable 是否已赋值
                     */
                    bool UncleanLeaderElectionEnableHasBeenSet() const;

                    /**
                     * 获取Message retention period in topic dimension in milliseconds. Value range: 1 minute to 90 days.
                     * @return RetentionMs Message retention period in topic dimension in milliseconds. Value range: 1 minute to 90 days.
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置Message retention period in topic dimension in milliseconds. Value range: 1 minute to 90 days.
                     * @param RetentionMs Message retention period in topic dimension in milliseconds. Value range: 1 minute to 90 days.
                     */
                    void SetRetentionMs(const int64_t& _retentionMs);

                    /**
                     * 判断参数 RetentionMs 是否已赋值
                     * @return RetentionMs 是否已赋值
                     */
                    bool RetentionMsHasBeenSet() const;

                    /**
                     * 获取Message retention size in topic dimension. Value range: 1 MB - 1024 GB.
                     * @return RetentionBytes Message retention size in topic dimension. Value range: 1 MB - 1024 GB.
                     */
                    int64_t GetRetentionBytes() const;

                    /**
                     * 设置Message retention size in topic dimension. Value range: 1 MB - 1024 GB.
                     * @param RetentionBytes Message retention size in topic dimension. Value range: 1 MB - 1024 GB.
                     */
                    void SetRetentionBytes(const int64_t& _retentionBytes);

                    /**
                     * 判断参数 RetentionBytes 是否已赋值
                     * @return RetentionBytes 是否已赋值
                     */
                    bool RetentionBytesHasBeenSet() const;

                    /**
                     * 获取Segment rolling duration in milliseconds. Value range: 1-90 days.
                     * @return SegmentMs Segment rolling duration in milliseconds. Value range: 1-90 days.
                     */
                    int64_t GetSegmentMs() const;

                    /**
                     * 设置Segment rolling duration in milliseconds. Value range: 1-90 days.
                     * @param SegmentMs Segment rolling duration in milliseconds. Value range: 1-90 days.
                     */
                    void SetSegmentMs(const int64_t& _segmentMs);

                    /**
                     * 判断参数 SegmentMs 是否已赋值
                     * @return SegmentMs 是否已赋值
                     */
                    bool SegmentMsHasBeenSet() const;

                    /**
                     * 获取Message size per batch. Value range: 1 KB - 12 MB.
                     * @return MaxMessageBytes Message size per batch. Value range: 1 KB - 12 MB.
                     */
                    int64_t GetMaxMessageBytes() const;

                    /**
                     * 设置Message size per batch. Value range: 1 KB - 12 MB.
                     * @param MaxMessageBytes Message size per batch. Value range: 1 KB - 12 MB.
                     */
                    void SetMaxMessageBytes(const int64_t& _maxMessageBytes);

                    /**
                     * 判断参数 MaxMessageBytes 是否已赋值
                     * @return MaxMessageBytes 是否已赋值
                     */
                    bool MaxMessageBytesHasBeenSet() const;

                private:

                    /**
                     * Topic name.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * The number of partitions.
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Number of replicas.
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * Message deletion policy. Valid values: `delete`, `compact`.
                     */
                    std::string m_cleanUpPolicy;
                    bool m_cleanUpPolicyHasBeenSet;

                    /**
                     * The minimum number of replicas specified by `min.insync.replicas` when the producer sets `request.required.acks` to `-1`.
                     */
                    int64_t m_minInsyncReplicas;
                    bool m_minInsyncReplicasHasBeenSet;

                    /**
                     * Whether to allow a non-ISR replica to be the leader.
                     */
                    bool m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * Message retention period in topic dimension in milliseconds. Value range: 1 minute to 90 days.
                     */
                    int64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * Message retention size in topic dimension. Value range: 1 MB - 1024 GB.
                     */
                    int64_t m_retentionBytes;
                    bool m_retentionBytesHasBeenSet;

                    /**
                     * Segment rolling duration in milliseconds. Value range: 1-90 days.
                     */
                    int64_t m_segmentMs;
                    bool m_segmentMsHasBeenSet;

                    /**
                     * Message size per batch. Value range: 1 KB - 12 MB.
                     */
                    int64_t m_maxMessageBytes;
                    bool m_maxMessageBytesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICINFO_H_
