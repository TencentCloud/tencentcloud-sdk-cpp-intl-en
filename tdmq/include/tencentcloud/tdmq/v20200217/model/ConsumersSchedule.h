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
                     * 获取Current partition ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Partitions Current partition ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetPartitions() const;

                    /**
                     * 设置Current partition ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Partitions Current partition ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPartitions(const uint64_t& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取Number of messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NumberOfEntries Number of messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetNumberOfEntries() const;

                    /**
                     * 设置Number of messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param NumberOfEntries Number of messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNumberOfEntries(const uint64_t& _numberOfEntries);

                    /**
                     * 判断参数 NumberOfEntries 是否已赋值
                     * @return NumberOfEntries 是否已赋值
                     */
                    bool NumberOfEntriesHasBeenSet() const;

                    /**
                     * 获取Number of retained messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgBacklog Number of retained messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMsgBacklog() const;

                    /**
                     * 设置Number of retained messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MsgBacklog Number of retained messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgBacklog(const uint64_t& _msgBacklog);

                    /**
                     * 判断参数 MsgBacklog 是否已赋值
                     * @return MsgBacklog 是否已赋值
                     */
                    bool MsgBacklogHasBeenSet() const;

                    /**
                     * 获取Sum of the numbers of messages delivered by the consumer per second.
                     * @return MsgRateOut Sum of the numbers of messages delivered by the consumer per second.
                     */
                    std::string GetMsgRateOut() const;

                    /**
                     * 设置Sum of the numbers of messages delivered by the consumer per second.
                     * @param MsgRateOut Sum of the numbers of messages delivered by the consumer per second.
                     */
                    void SetMsgRateOut(const std::string& _msgRateOut);

                    /**
                     * 判断参数 MsgRateOut 是否已赋值
                     * @return MsgRateOut 是否已赋值
                     */
                    bool MsgRateOutHasBeenSet() const;

                    /**
                     * 获取Number of bytes of messages consumed by the consumer per second.
                     * @return MsgThroughputOut Number of bytes of messages consumed by the consumer per second.
                     */
                    std::string GetMsgThroughputOut() const;

                    /**
                     * 设置Number of bytes of messages consumed by the consumer per second.
                     * @param MsgThroughputOut Number of bytes of messages consumed by the consumer per second.
                     */
                    void SetMsgThroughputOut(const std::string& _msgThroughputOut);

                    /**
                     * 判断参数 MsgThroughputOut 是否已赋值
                     * @return MsgThroughputOut 是否已赋值
                     */
                    bool MsgThroughputOutHasBeenSet() const;

                    /**
                     * 获取Percentage of messages discarded due to timeout.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgRateExpired Percentage of messages discarded due to timeout.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgRateExpired() const;

                    /**
                     * 设置Percentage of messages discarded due to timeout.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MsgRateExpired Percentage of messages discarded due to timeout.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgRateExpired(const std::string& _msgRateExpired);

                    /**
                     * 判断参数 MsgRateExpired 是否已赋值
                     * @return MsgRateExpired 是否已赋值
                     */
                    bool MsgRateExpiredHasBeenSet() const;

                private:

                    /**
                     * Current partition ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * Number of messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_numberOfEntries;
                    bool m_numberOfEntriesHasBeenSet;

                    /**
                     * Number of retained messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_msgBacklog;
                    bool m_msgBacklogHasBeenSet;

                    /**
                     * Sum of the numbers of messages delivered by the consumer per second.
                     */
                    std::string m_msgRateOut;
                    bool m_msgRateOutHasBeenSet;

                    /**
                     * Number of bytes of messages consumed by the consumer per second.
                     */
                    std::string m_msgThroughputOut;
                    bool m_msgThroughputOutHasBeenSet;

                    /**
                     * Percentage of messages discarded due to timeout.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgRateExpired;
                    bool m_msgRateExpiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERSSCHEDULE_H_
