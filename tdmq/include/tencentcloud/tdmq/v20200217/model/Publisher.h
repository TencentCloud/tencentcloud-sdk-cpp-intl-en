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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLISHER_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLISHER_H_

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
                * Producer information
                */
                class Publisher : public AbstractModel
                {
                public:
                    Publisher();
                    ~Publisher() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Producer ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ProducerId Producer ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetProducerId() const;

                    /**
                     * 设置Producer ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ProducerId Producer ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetProducerId(const int64_t& _producerId);

                    /**
                     * 判断参数 ProducerId 是否已赋值
                     * @return ProducerId 是否已赋值
                     */
                    bool ProducerIdHasBeenSet() const;

                    /**
                     * 获取Producer name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ProducerName Producer name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetProducerName() const;

                    /**
                     * 设置Producer name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ProducerName Producer name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetProducerName(const std::string& _producerName);

                    /**
                     * 判断参数 ProducerName 是否已赋值
                     * @return ProducerName 是否已赋值
                     */
                    bool ProducerNameHasBeenSet() const;

                    /**
                     * 获取Producer address.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Address Producer address.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Producer address.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Address Producer address.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Client version.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ClientVersion Client version.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetClientVersion() const;

                    /**
                     * 设置Client version.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ClientVersion Client version.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetClientVersion(const std::string& _clientVersion);

                    /**
                     * 判断参数 ClientVersion 是否已赋值
                     * @return ClientVersion 是否已赋值
                     */
                    bool ClientVersionHasBeenSet() const;

                    /**
                     * 获取Message production rate (message/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MsgRateIn Message production rate (message/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double GetMsgRateIn() const;

                    /**
                     * 设置Message production rate (message/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param MsgRateIn Message production rate (message/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMsgRateIn(const double& _msgRateIn);

                    /**
                     * 判断参数 MsgRateIn 是否已赋值
                     * @return MsgRateIn 是否已赋值
                     */
                    bool MsgRateInHasBeenSet() const;

                    /**
                     * 获取Message production throughput rate (byte/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MsgThroughputIn Message production throughput rate (byte/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double GetMsgThroughputIn() const;

                    /**
                     * 设置Message production throughput rate (byte/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param MsgThroughputIn Message production throughput rate (byte/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMsgThroughputIn(const double& _msgThroughputIn);

                    /**
                     * 判断参数 MsgThroughputIn 是否已赋值
                     * @return MsgThroughputIn 是否已赋值
                     */
                    bool MsgThroughputInHasBeenSet() const;

                    /**
                     * 获取Average message size in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AverageMsgSize Average message size in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double GetAverageMsgSize() const;

                    /**
                     * 设置Average message size in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param AverageMsgSize Average message size in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAverageMsgSize(const double& _averageMsgSize);

                    /**
                     * 判断参数 AverageMsgSize 是否已赋值
                     * @return AverageMsgSize 是否已赋值
                     */
                    bool AverageMsgSizeHasBeenSet() const;

                    /**
                     * 获取Connection time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ConnectedSince Connection time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetConnectedSince() const;

                    /**
                     * 设置Connection time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ConnectedSince Connection time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetConnectedSince(const std::string& _connectedSince);

                    /**
                     * 判断参数 ConnectedSince 是否已赋值
                     * @return ConnectedSince 是否已赋值
                     */
                    bool ConnectedSinceHasBeenSet() const;

                    /**
                     * 获取Serial number of the topic partition connected to the producer.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Partition Serial number of the topic partition connected to the producer.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置Serial number of the topic partition connected to the producer.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Partition Serial number of the topic partition connected to the producer.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     */
                    bool PartitionHasBeenSet() const;

                private:

                    /**
                     * Producer ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_producerId;
                    bool m_producerIdHasBeenSet;

                    /**
                     * Producer name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_producerName;
                    bool m_producerNameHasBeenSet;

                    /**
                     * Producer address.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Client version.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_clientVersion;
                    bool m_clientVersionHasBeenSet;

                    /**
                     * Message production rate (message/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_msgRateIn;
                    bool m_msgRateInHasBeenSet;

                    /**
                     * Message production throughput rate (byte/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_msgThroughputIn;
                    bool m_msgThroughputInHasBeenSet;

                    /**
                     * Average message size in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_averageMsgSize;
                    bool m_averageMsgSizeHasBeenSet;

                    /**
                     * Connection time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_connectedSince;
                    bool m_connectedSinceHasBeenSet;

                    /**
                     * Serial number of the topic partition connected to the producer.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLISHER_H_
