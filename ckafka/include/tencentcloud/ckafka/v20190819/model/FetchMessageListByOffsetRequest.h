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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGELISTBYOFFSETREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGELISTBYOFFSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * FetchMessageListByOffset request structure.
                */
                class FetchMessageListByOffsetRequest : public AbstractModel
                {
                public:
                    FetchMessageListByOffsetRequest();
                    ~FetchMessageListByOffsetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Topic name
                     * @return Topic Topic name
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Topic name
                     * @param Topic Topic name
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Partition ID
                     * @return Partition Partition ID
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置Partition ID
                     * @param Partition Partition ID
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取Offset information
                     * @return Offset Offset information
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset information
                     * @param Offset Offset information
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The maximum number of messages that can be queried. Default value: 20. Maximum value: 20.
                     * @return SinglePartitionRecordNumber The maximum number of messages that can be queried. Default value: 20. Maximum value: 20.
                     */
                    int64_t GetSinglePartitionRecordNumber() const;

                    /**
                     * 设置The maximum number of messages that can be queried. Default value: 20. Maximum value: 20.
                     * @param SinglePartitionRecordNumber The maximum number of messages that can be queried. Default value: 20. Maximum value: 20.
                     */
                    void SetSinglePartitionRecordNumber(const int64_t& _singlePartitionRecordNumber);

                    /**
                     * 判断参数 SinglePartitionRecordNumber 是否已赋值
                     * @return SinglePartitionRecordNumber 是否已赋值
                     */
                    bool SinglePartitionRecordNumberHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Topic name
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Partition ID
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Offset information
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The maximum number of messages that can be queried. Default value: 20. Maximum value: 20.
                     */
                    int64_t m_singlePartitionRecordNumber;
                    bool m_singlePartitionRecordNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGELISTBYOFFSETREQUEST_H_
