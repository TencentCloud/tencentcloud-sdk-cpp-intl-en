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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMER_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMER_H_

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
                *  Consumer
                */
                class Consumer : public AbstractModel
                {
                public:
                    Consumer();
                    ~Consumer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The time when the consumer started connecting.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConnectedSince The time when the consumer started connecting.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetConnectedSince() const;

                    /**
                     * 设置The time when the consumer started connecting.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ConnectedSince The time when the consumer started connecting.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConnectedSince(const std::string& _connectedSince);

                    /**
                     * 判断参数 ConnectedSince 是否已赋值
                     * @return ConnectedSince 是否已赋值
                     */
                    bool ConnectedSinceHasBeenSet() const;

                    /**
                     * 获取Consumer address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerAddr Consumer address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetConsumerAddr() const;

                    /**
                     * 设置Consumer address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ConsumerAddr Consumer address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConsumerAddr(const std::string& _consumerAddr);

                    /**
                     * 判断参数 ConsumerAddr 是否已赋值
                     * @return ConsumerAddr 是否已赋值
                     */
                    bool ConsumerAddrHasBeenSet() const;

                    /**
                     * 获取Consumer name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerName Consumer name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetConsumerName() const;

                    /**
                     * 设置Consumer name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ConsumerName Consumer name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConsumerName(const std::string& _consumerName);

                    /**
                     * 判断参数 ConsumerName 是否已赋值
                     * @return ConsumerName 是否已赋值
                     */
                    bool ConsumerNameHasBeenSet() const;

                    /**
                     * 获取Consumer version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientVersion Consumer version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClientVersion() const;

                    /**
                     * 设置Consumer version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ClientVersion Consumer version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClientVersion(const std::string& _clientVersion);

                    /**
                     * 判断参数 ClientVersion 是否已赋值
                     * @return ClientVersion 是否已赋值
                     */
                    bool ClientVersionHasBeenSet() const;

                    /**
                     * 获取Serial number of the topic partition connected to the consumer.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Partition Serial number of the topic partition connected to the consumer.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置Serial number of the topic partition connected to the consumer.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Partition Serial number of the topic partition connected to the consumer.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     */
                    bool PartitionHasBeenSet() const;

                private:

                    /**
                     * The time when the consumer started connecting.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_connectedSince;
                    bool m_connectedSinceHasBeenSet;

                    /**
                     * Consumer address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumerAddr;
                    bool m_consumerAddrHasBeenSet;

                    /**
                     * Consumer name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumerName;
                    bool m_consumerNameHasBeenSet;

                    /**
                     * Consumer version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientVersion;
                    bool m_clientVersionHasBeenSet;

                    /**
                     * Serial number of the topic partition connected to the consumer.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMER_H_
