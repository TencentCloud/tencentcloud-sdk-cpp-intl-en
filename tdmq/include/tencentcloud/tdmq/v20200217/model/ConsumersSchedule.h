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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERSSCHEDULE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERSSCHEDULE_H_

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
                * Consumption progress details
                */
                class ConsumersSchedule : public AbstractModel
                {
                public:
                    ConsumersSchedule();
                    ~ConsumersSchedule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the current partition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Partitions ID of the current partition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPartitions() const;

                    /**
                     * 设置ID of the current partition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _partitions ID of the current partition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartitions(const uint64_t& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取The number of messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NumberOfEntries The number of messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetNumberOfEntries() const;

                    /**
                     * 设置The number of messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _numberOfEntries The number of messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNumberOfEntries(const uint64_t& _numberOfEntries);

                    /**
                     * 判断参数 NumberOfEntries 是否已赋值
                     * @return NumberOfEntries 是否已赋值
                     * 
                     */
                    bool NumberOfEntriesHasBeenSet() const;

                    /**
                     * 获取The number of heaped messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgBacklog The number of heaped messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMsgBacklog() const;

                    /**
                     * 设置The number of heaped messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _msgBacklog The number of heaped messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMsgBacklog(const uint64_t& _msgBacklog);

                    /**
                     * 判断参数 MsgBacklog 是否已赋值
                     * @return MsgBacklog 是否已赋值
                     * 
                     */
                    bool MsgBacklogHasBeenSet() const;

                    /**
                     * 获取The total number of messages delivered by the consumer per second.
                     * @return MsgRateOut The total number of messages delivered by the consumer per second.
                     * 
                     */
                    std::string GetMsgRateOut() const;

                    /**
                     * 设置The total number of messages delivered by the consumer per second.
                     * @param _msgRateOut The total number of messages delivered by the consumer per second.
                     * 
                     */
                    void SetMsgRateOut(const std::string& _msgRateOut);

                    /**
                     * 判断参数 MsgRateOut 是否已赋值
                     * @return MsgRateOut 是否已赋值
                     * 
                     */
                    bool MsgRateOutHasBeenSet() const;

                    /**
                     * 获取The size (in bytes) of messages consumed by the consumer per second.
                     * @return MsgThroughputOut The size (in bytes) of messages consumed by the consumer per second.
                     * 
                     */
                    std::string GetMsgThroughputOut() const;

                    /**
                     * 设置The size (in bytes) of messages consumed by the consumer per second.
                     * @param _msgThroughputOut The size (in bytes) of messages consumed by the consumer per second.
                     * 
                     */
                    void SetMsgThroughputOut(const std::string& _msgThroughputOut);

                    /**
                     * 判断参数 MsgThroughputOut 是否已赋值
                     * @return MsgThroughputOut 是否已赋值
                     * 
                     */
                    bool MsgThroughputOutHasBeenSet() const;

                    /**
                     * 获取Percentage of messages discarded due to timeout.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgRateExpired Percentage of messages discarded due to timeout.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMsgRateExpired() const;

                    /**
                     * 设置Percentage of messages discarded due to timeout.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _msgRateExpired Percentage of messages discarded due to timeout.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMsgRateExpired(const std::string& _msgRateExpired);

                    /**
                     * 判断参数 MsgRateExpired 是否已赋值
                     * @return MsgRateExpired 是否已赋值
                     * 
                     */
                    bool MsgRateExpiredHasBeenSet() const;

                private:

                    /**
                     * ID of the current partition.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * The number of messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_numberOfEntries;
                    bool m_numberOfEntriesHasBeenSet;

                    /**
                     * The number of heaped messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_msgBacklog;
                    bool m_msgBacklogHasBeenSet;

                    /**
                     * The total number of messages delivered by the consumer per second.
                     */
                    std::string m_msgRateOut;
                    bool m_msgRateOutHasBeenSet;

                    /**
                     * The size (in bytes) of messages consumed by the consumer per second.
                     */
                    std::string m_msgThroughputOut;
                    bool m_msgThroughputOutHasBeenSet;

                    /**
                     * Percentage of messages discarded due to timeout.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgRateExpired;
                    bool m_msgRateExpiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERSSCHEDULE_H_
