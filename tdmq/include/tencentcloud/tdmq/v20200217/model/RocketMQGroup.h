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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQGROUP_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQGROUP_H_

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
                * RocketMQ consumer group information
                */
                class RocketMQGroup : public AbstractModel
                {
                public:
                    RocketMQGroup();
                    ~RocketMQGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Consumer group name.
                     * @return Name Consumer group name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Consumer group name.
                     * @param _name Consumer group name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The number of online consumers.
                     * @return ConsumerNum The number of online consumers.
                     * 
                     */
                    uint64_t GetConsumerNum() const;

                    /**
                     * 设置The number of online consumers.
                     * @param _consumerNum The number of online consumers.
                     * 
                     */
                    void SetConsumerNum(const uint64_t& _consumerNum);

                    /**
                     * 判断参数 ConsumerNum 是否已赋值
                     * @return ConsumerNum 是否已赋值
                     * 
                     */
                    bool ConsumerNumHasBeenSet() const;

                    /**
                     * 获取Consumption TPS.
                     * @return TPS Consumption TPS.
                     * 
                     */
                    uint64_t GetTPS() const;

                    /**
                     * 设置Consumption TPS.
                     * @param _tPS Consumption TPS.
                     * 
                     */
                    void SetTPS(const uint64_t& _tPS);

                    /**
                     * 判断参数 TPS 是否已赋值
                     * @return TPS 是否已赋值
                     * 
                     */
                    bool TPSHasBeenSet() const;

                    /**
                     * 获取The total number of heaped messages.
                     * @return TotalAccumulative The total number of heaped messages.
                     * 
                     */
                    int64_t GetTotalAccumulative() const;

                    /**
                     * 设置The total number of heaped messages.
                     * @param _totalAccumulative The total number of heaped messages.
                     * 
                     */
                    void SetTotalAccumulative(const int64_t& _totalAccumulative);

                    /**
                     * 判断参数 TotalAccumulative 是否已赋值
                     * @return TotalAccumulative 是否已赋值
                     * 
                     */
                    bool TotalAccumulativeHasBeenSet() const;

                    /**
                     * 获取0: Cluster consumption mode; 1: Broadcast consumption mode; -1: Unknown.
                     * @return ConsumptionMode 0: Cluster consumption mode; 1: Broadcast consumption mode; -1: Unknown.
                     * 
                     */
                    int64_t GetConsumptionMode() const;

                    /**
                     * 设置0: Cluster consumption mode; 1: Broadcast consumption mode; -1: Unknown.
                     * @param _consumptionMode 0: Cluster consumption mode; 1: Broadcast consumption mode; -1: Unknown.
                     * 
                     */
                    void SetConsumptionMode(const int64_t& _consumptionMode);

                    /**
                     * 判断参数 ConsumptionMode 是否已赋值
                     * @return ConsumptionMode 是否已赋值
                     * 
                     */
                    bool ConsumptionModeHasBeenSet() const;

                    /**
                     * 获取Whether to allow consumption.
                     * @return ReadEnabled Whether to allow consumption.
                     * 
                     */
                    bool GetReadEnabled() const;

                    /**
                     * 设置Whether to allow consumption.
                     * @param _readEnabled Whether to allow consumption.
                     * 
                     */
                    void SetReadEnabled(const bool& _readEnabled);

                    /**
                     * 判断参数 ReadEnabled 是否已赋值
                     * @return ReadEnabled 是否已赋值
                     * 
                     */
                    bool ReadEnabledHasBeenSet() const;

                    /**
                     * 获取The number of partitions in a retry topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RetryPartitionNum The number of partitions in a retry topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRetryPartitionNum() const;

                    /**
                     * 设置The number of partitions in a retry topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retryPartitionNum The number of partitions in a retry topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetryPartitionNum(const uint64_t& _retryPartitionNum);

                    /**
                     * 判断参数 RetryPartitionNum 是否已赋值
                     * @return RetryPartitionNum 是否已赋值
                     * 
                     */
                    bool RetryPartitionNumHasBeenSet() const;

                    /**
                     * 获取Creation time in milliseconds.
                     * @return CreateTime Creation time in milliseconds.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time in milliseconds.
                     * @param _createTime Creation time in milliseconds.
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
                     * 获取Modification time in milliseconds.
                     * @return UpdateTime Modification time in milliseconds.
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置Modification time in milliseconds.
                     * @param _updateTime Modification time in milliseconds.
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Client protocol.
                     * @return ClientProtocol Client protocol.
                     * 
                     */
                    std::string GetClientProtocol() const;

                    /**
                     * 设置Client protocol.
                     * @param _clientProtocol Client protocol.
                     * 
                     */
                    void SetClientProtocol(const std::string& _clientProtocol);

                    /**
                     * 判断参数 ClientProtocol 是否已赋值
                     * @return ClientProtocol 是否已赋值
                     * 
                     */
                    bool ClientProtocolHasBeenSet() const;

                    /**
                     * 获取Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Consumer type. Enumerated values: `ACTIVELY` or `PASSIVELY`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerType Consumer type. Enumerated values: `ACTIVELY` or `PASSIVELY`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConsumerType() const;

                    /**
                     * 设置Consumer type. Enumerated values: `ACTIVELY` or `PASSIVELY`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumerType Consumer type. Enumerated values: `ACTIVELY` or `PASSIVELY`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConsumerType(const std::string& _consumerType);

                    /**
                     * 判断参数 ConsumerType 是否已赋值
                     * @return ConsumerType 是否已赋值
                     * 
                     */
                    bool ConsumerTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable broadcast consumption.
                     * @return BroadcastEnabled Whether to enable broadcast consumption.
                     * 
                     */
                    bool GetBroadcastEnabled() const;

                    /**
                     * 设置Whether to enable broadcast consumption.
                     * @param _broadcastEnabled Whether to enable broadcast consumption.
                     * 
                     */
                    void SetBroadcastEnabled(const bool& _broadcastEnabled);

                    /**
                     * 判断参数 BroadcastEnabled 是否已赋值
                     * @return BroadcastEnabled 是否已赋值
                     * 
                     */
                    bool BroadcastEnabledHasBeenSet() const;

                    /**
                     * 获取Group type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupType Group type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置Group type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupType Group type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取The number of retries
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RetryMaxTimes The number of retries
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRetryMaxTimes() const;

                    /**
                     * 设置The number of retries
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retryMaxTimes The number of retries
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetryMaxTimes(const uint64_t& _retryMaxTimes);

                    /**
                     * 判断参数 RetryMaxTimes 是否已赋值
                     * @return RetryMaxTimes 是否已赋值
                     * 
                     */
                    bool RetryMaxTimesHasBeenSet() const;

                private:

                    /**
                     * Consumer group name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The number of online consumers.
                     */
                    uint64_t m_consumerNum;
                    bool m_consumerNumHasBeenSet;

                    /**
                     * Consumption TPS.
                     */
                    uint64_t m_tPS;
                    bool m_tPSHasBeenSet;

                    /**
                     * The total number of heaped messages.
                     */
                    int64_t m_totalAccumulative;
                    bool m_totalAccumulativeHasBeenSet;

                    /**
                     * 0: Cluster consumption mode; 1: Broadcast consumption mode; -1: Unknown.
                     */
                    int64_t m_consumptionMode;
                    bool m_consumptionModeHasBeenSet;

                    /**
                     * Whether to allow consumption.
                     */
                    bool m_readEnabled;
                    bool m_readEnabledHasBeenSet;

                    /**
                     * The number of partitions in a retry topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_retryPartitionNum;
                    bool m_retryPartitionNumHasBeenSet;

                    /**
                     * Creation time in milliseconds.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time in milliseconds.
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Client protocol.
                     */
                    std::string m_clientProtocol;
                    bool m_clientProtocolHasBeenSet;

                    /**
                     * Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Consumer type. Enumerated values: `ACTIVELY` or `PASSIVELY`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumerType;
                    bool m_consumerTypeHasBeenSet;

                    /**
                     * Whether to enable broadcast consumption.
                     */
                    bool m_broadcastEnabled;
                    bool m_broadcastEnabledHasBeenSet;

                    /**
                     * Group type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * The number of retries
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_retryMaxTimes;
                    bool m_retryMaxTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQGROUP_H_
