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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CONNECTION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CONNECTION_H_

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
                * Producer connection instance
                */
                class Connection : public AbstractModel
                {
                public:
                    Connection();
                    ~Connection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Producer address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Address Producer address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Producer address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Address Producer address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Topic partition.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Partitions Topic partition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPartitions() const;

                    /**
                     * 设置Topic partition.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Partitions Topic partition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPartitions(const int64_t& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取Producer version.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClientVersion Producer version.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClientVersion() const;

                    /**
                     * 设置Producer version.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ClientVersion Producer version.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClientVersion(const std::string& _clientVersion);

                    /**
                     * 判断参数 ClientVersion 是否已赋值
                     * @return ClientVersion 是否已赋值
                     */
                    bool ClientVersionHasBeenSet() const;

                    /**
                     * 获取Producer name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProducerName Producer name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProducerName() const;

                    /**
                     * 设置Producer name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ProducerName Producer name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProducerName(const std::string& _producerName);

                    /**
                     * 判断参数 ProducerName 是否已赋值
                     * @return ProducerName 是否已赋值
                     */
                    bool ProducerNameHasBeenSet() const;

                    /**
                     * 获取Producer ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProducerId Producer ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProducerId() const;

                    /**
                     * 设置Producer ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ProducerId Producer ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProducerId(const std::string& _producerId);

                    /**
                     * 判断参数 ProducerId 是否已赋值
                     * @return ProducerId 是否已赋值
                     */
                    bool ProducerIdHasBeenSet() const;

                    /**
                     * 获取Average message size in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AverageMsgSize Average message size in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAverageMsgSize() const;

                    /**
                     * 设置Average message size in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AverageMsgSize Average message size in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAverageMsgSize(const std::string& _averageMsgSize);

                    /**
                     * 判断参数 AverageMsgSize 是否已赋值
                     * @return AverageMsgSize 是否已赋值
                     */
                    bool AverageMsgSizeHasBeenSet() const;

                    /**
                     * 获取Production rate in bytes/sec.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgThroughputIn Production rate in bytes/sec.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgThroughputIn() const;

                    /**
                     * 设置Production rate in bytes/sec.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MsgThroughputIn Production rate in bytes/sec.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgThroughputIn(const std::string& _msgThroughputIn);

                    /**
                     * 判断参数 MsgThroughputIn 是否已赋值
                     * @return MsgThroughputIn 是否已赋值
                     */
                    bool MsgThroughputInHasBeenSet() const;

                private:

                    /**
                     * Producer address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Topic partition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * Producer version.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientVersion;
                    bool m_clientVersionHasBeenSet;

                    /**
                     * Producer name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_producerName;
                    bool m_producerNameHasBeenSet;

                    /**
                     * Producer ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_producerId;
                    bool m_producerIdHasBeenSet;

                    /**
                     * Average message size in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_averageMsgSize;
                    bool m_averageMsgSizeHasBeenSet;

                    /**
                     * Production rate in bytes/sec.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgThroughputIn;
                    bool m_msgThroughputInHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CONNECTION_H_
