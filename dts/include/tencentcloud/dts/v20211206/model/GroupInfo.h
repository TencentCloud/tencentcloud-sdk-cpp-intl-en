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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_GROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/MonitorInfo.h>
#include <tencentcloud/dts/v20211206/model/PartitionAssignment.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Kafka consumer group details
                */
                class GroupInfo : public AbstractModel
                {
                public:
                    GroupInfo();
                    ~GroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Consumer group account
                     * @return Account Consumer group account
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置Consumer group account
                     * @param _account Consumer group account
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取Consumer group name
                     * @return ConsumerGroupName Consumer group name
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置Consumer group name
                     * @param _consumerGroupName Consumer group name
                     * 
                     */
                    void SetConsumerGroupName(const std::string& _consumerGroupName);

                    /**
                     * 判断参数 ConsumerGroupName 是否已赋值
                     * @return ConsumerGroupName 是否已赋值
                     * 
                     */
                    bool ConsumerGroupNameHasBeenSet() const;

                    /**
                     * 获取Consumer group descriptionNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Consumer group descriptionNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Consumer group descriptionNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Consumer group descriptionNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Consumer group offset. This field is for compatibility with the previous single partition scenario, where the value is the offset of the last partition. For the offset of each partition, please refer to the StateOfPartition field.
                     * @return ConsumerGroupOffset Consumer group offset. This field is for compatibility with the previous single partition scenario, where the value is the offset of the last partition. For the offset of each partition, please refer to the StateOfPartition field.
                     * 
                     */
                    int64_t GetConsumerGroupOffset() const;

                    /**
                     * 设置Consumer group offset. This field is for compatibility with the previous single partition scenario, where the value is the offset of the last partition. For the offset of each partition, please refer to the StateOfPartition field.
                     * @param _consumerGroupOffset Consumer group offset. This field is for compatibility with the previous single partition scenario, where the value is the offset of the last partition. For the offset of each partition, please refer to the StateOfPartition field.
                     * 
                     */
                    void SetConsumerGroupOffset(const int64_t& _consumerGroupOffset);

                    /**
                     * 判断参数 ConsumerGroupOffset 是否已赋值
                     * @return ConsumerGroupOffset 是否已赋值
                     * 
                     */
                    bool ConsumerGroupOffsetHasBeenSet() const;

                    /**
                     * 获取The amount of data that has not been consumed by the consumer group. This field is for compatibility with the previous single partition scenario, where the value is the amount of unconsumed data in the last partition. For the amount of unconsumed data in each partition, refer to the StateOfPartition field.
                     * @return ConsumerGroupLag The amount of data that has not been consumed by the consumer group. This field is for compatibility with the previous single partition scenario, where the value is the amount of unconsumed data in the last partition. For the amount of unconsumed data in each partition, refer to the StateOfPartition field.
                     * 
                     */
                    int64_t GetConsumerGroupLag() const;

                    /**
                     * 设置The amount of data that has not been consumed by the consumer group. This field is for compatibility with the previous single partition scenario, where the value is the amount of unconsumed data in the last partition. For the amount of unconsumed data in each partition, refer to the StateOfPartition field.
                     * @param _consumerGroupLag The amount of data that has not been consumed by the consumer group. This field is for compatibility with the previous single partition scenario, where the value is the amount of unconsumed data in the last partition. For the amount of unconsumed data in each partition, refer to the StateOfPartition field.
                     * 
                     */
                    void SetConsumerGroupLag(const int64_t& _consumerGroupLag);

                    /**
                     * 判断参数 ConsumerGroupLag 是否已赋值
                     * @return ConsumerGroupLag 是否已赋值
                     * 
                     */
                    bool ConsumerGroupLagHasBeenSet() const;

                    /**
                     * 获取Consumption delay (in seconds)
                     * @return Latency Consumption delay (in seconds)
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置Consumption delay (in seconds)
                     * @param _latency Consumption delay (in seconds)
                     * 
                     */
                    void SetLatency(const int64_t& _latency);

                    /**
                     * 判断参数 Latency 是否已赋值
                     * @return Latency 是否已赋值
                     * 
                     */
                    bool LatencyHasBeenSet() const;

                    /**
                     * 获取Consumption status of each partition
                     * @return StateOfPartition Consumption status of each partition
                     * 
                     */
                    std::vector<MonitorInfo> GetStateOfPartition() const;

                    /**
                     * 设置Consumption status of each partition
                     * @param _stateOfPartition Consumption status of each partition
                     * 
                     */
                    void SetStateOfPartition(const std::vector<MonitorInfo>& _stateOfPartition);

                    /**
                     * 判断参数 StateOfPartition 是否已赋值
                     * @return StateOfPartition 是否已赋值
                     * 
                     */
                    bool StateOfPartitionHasBeenSet() const;

                    /**
                     * 获取Consumer group creation time, the format is: YYYY-MM-DD hh:mm:ss.
                     * @return CreatedAt Consumer group creation time, the format is: YYYY-MM-DD hh:mm:ss.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Consumer group creation time, the format is: YYYY-MM-DD hh:mm:ss.
                     * @param _createdAt Consumer group creation time, the format is: YYYY-MM-DD hh:mm:ss.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Consumer group update time, the format is: YYYY-MM-DD hh:mm:ss.
                     * @return UpdatedAt Consumer group update time, the format is: YYYY-MM-DD hh:mm:ss.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Consumer group update time, the format is: YYYY-MM-DD hh:mm:ss.
                     * @param _updatedAt Consumer group update time, the format is: YYYY-MM-DD hh:mm:ss.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Consumer group states, including Dead, Empty, Stable, etc. Only Dead and Empty states can perform reset operations.
                     * @return ConsumerGroupState Consumer group states, including Dead, Empty, Stable, etc. Only Dead and Empty states can perform reset operations.
                     * 
                     */
                    std::string GetConsumerGroupState() const;

                    /**
                     * 设置Consumer group states, including Dead, Empty, Stable, etc. Only Dead and Empty states can perform reset operations.
                     * @param _consumerGroupState Consumer group states, including Dead, Empty, Stable, etc. Only Dead and Empty states can perform reset operations.
                     * 
                     */
                    void SetConsumerGroupState(const std::string& _consumerGroupState);

                    /**
                     * 判断参数 ConsumerGroupState 是否已赋值
                     * @return ConsumerGroupState 是否已赋值
                     * 
                     */
                    bool ConsumerGroupStateHasBeenSet() const;

                    /**
                     * 获取The partition is being consumed by each consumer.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PartitionAssignment The partition is being consumed by each consumer.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PartitionAssignment> GetPartitionAssignment() const;

                    /**
                     * 设置The partition is being consumed by each consumer.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _partitionAssignment The partition is being consumed by each consumer.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartitionAssignment(const std::vector<PartitionAssignment>& _partitionAssignment);

                    /**
                     * 判断参数 PartitionAssignment 是否已赋值
                     * @return PartitionAssignment 是否已赋值
                     * 
                     */
                    bool PartitionAssignmentHasBeenSet() const;

                private:

                    /**
                     * Consumer group account
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * Consumer group name
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * Consumer group descriptionNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Consumer group offset. This field is for compatibility with the previous single partition scenario, where the value is the offset of the last partition. For the offset of each partition, please refer to the StateOfPartition field.
                     */
                    int64_t m_consumerGroupOffset;
                    bool m_consumerGroupOffsetHasBeenSet;

                    /**
                     * The amount of data that has not been consumed by the consumer group. This field is for compatibility with the previous single partition scenario, where the value is the amount of unconsumed data in the last partition. For the amount of unconsumed data in each partition, refer to the StateOfPartition field.
                     */
                    int64_t m_consumerGroupLag;
                    bool m_consumerGroupLagHasBeenSet;

                    /**
                     * Consumption delay (in seconds)
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * Consumption status of each partition
                     */
                    std::vector<MonitorInfo> m_stateOfPartition;
                    bool m_stateOfPartitionHasBeenSet;

                    /**
                     * Consumer group creation time, the format is: YYYY-MM-DD hh:mm:ss.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Consumer group update time, the format is: YYYY-MM-DD hh:mm:ss.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Consumer group states, including Dead, Empty, Stable, etc. Only Dead and Empty states can perform reset operations.
                     */
                    std::string m_consumerGroupState;
                    bool m_consumerGroupStateHasBeenSet;

                    /**
                     * The partition is being consumed by each consumer.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PartitionAssignment> m_partitionAssignment;
                    bool m_partitionAssignmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_GROUPINFO_H_
