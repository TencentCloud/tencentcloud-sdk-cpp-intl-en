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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MONITORINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MONITORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Partition details of Kafka consumer group
                */
                class MonitorInfo : public AbstractModel
                {
                public:
                    MonitorInfo();
                    ~MonitorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The number of the current partition, starting from 0.
                     * @return PartitionNo The number of the current partition, starting from 0.
                     * 
                     */
                    int64_t GetPartitionNo() const;

                    /**
                     * 设置The number of the current partition, starting from 0.
                     * @param _partitionNo The number of the current partition, starting from 0.
                     * 
                     */
                    void SetPartitionNo(const int64_t& _partitionNo);

                    /**
                     * 判断参数 PartitionNo 是否已赋值
                     * @return PartitionNo 是否已赋值
                     * 
                     */
                    bool PartitionNoHasBeenSet() const;

                    /**
                     * 获取The offset of the current partition.
                     * @return ConsumerGroupOffset The offset of the current partition.
                     * 
                     */
                    int64_t GetConsumerGroupOffset() const;

                    /**
                     * 设置The offset of the current partition.
                     * @param _consumerGroupOffset The offset of the current partition.
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
                     * 获取The amount of unconsumed data in the current partition.
                     * @return ConsumerGroupLag The amount of unconsumed data in the current partition.
                     * 
                     */
                    int64_t GetConsumerGroupLag() const;

                    /**
                     * 设置The amount of unconsumed data in the current partition.
                     * @param _consumerGroupLag The amount of unconsumed data in the current partition.
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
                     * 获取The consumption delay of the current partition (in seconds).
                     * @return Latency The consumption delay of the current partition (in seconds).
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置The consumption delay of the current partition (in seconds).
                     * @param _latency The consumption delay of the current partition (in seconds).
                     * 
                     */
                    void SetLatency(const int64_t& _latency);

                    /**
                     * 判断参数 Latency 是否已赋值
                     * @return Latency 是否已赋值
                     * 
                     */
                    bool LatencyHasBeenSet() const;

                private:

                    /**
                     * The number of the current partition, starting from 0.
                     */
                    int64_t m_partitionNo;
                    bool m_partitionNoHasBeenSet;

                    /**
                     * The offset of the current partition.
                     */
                    int64_t m_consumerGroupOffset;
                    bool m_consumerGroupOffsetHasBeenSet;

                    /**
                     * The amount of unconsumed data in the current partition.
                     */
                    int64_t m_consumerGroupLag;
                    bool m_consumerGroupLagHasBeenSet;

                    /**
                     * The consumption delay of the current partition (in seconds).
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MONITORINFO_H_
