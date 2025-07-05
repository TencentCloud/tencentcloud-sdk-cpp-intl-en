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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_SUBSCRIBEDINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_SUBSCRIBEDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/PartitionOffset.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Subscribed message entity
                */
                class SubscribedInfo : public AbstractModel
                {
                public:
                    SubscribedInfo();
                    ~SubscribedInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subscribed topic name
                     * @return TopicName Subscribed topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Subscribed topic name
                     * @param _topicName Subscribed topic name
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Subscribed partition
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Partition Subscribed partition
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetPartition() const;

                    /**
                     * 设置Subscribed partition
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _partition Subscribed partition
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartition(const std::vector<int64_t>& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取Partition offset information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PartitionOffset Partition offset information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PartitionOffset> GetPartitionOffset() const;

                    /**
                     * 设置Partition offset information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _partitionOffset Partition offset information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartitionOffset(const std::vector<PartitionOffset>& _partitionOffset);

                    /**
                     * 判断参数 PartitionOffset 是否已赋值
                     * @return PartitionOffset 是否已赋值
                     * 
                     */
                    bool PartitionOffsetHasBeenSet() const;

                    /**
                     * 获取ID of the subscribed topic. 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TopicId ID of the subscribed topic. 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the subscribed topic. 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _topicId ID of the subscribed topic. 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * Subscribed topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Subscribed partition
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Partition offset information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PartitionOffset> m_partitionOffset;
                    bool m_partitionOffsetHasBeenSet;

                    /**
                     * ID of the subscribed topic. 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SUBSCRIBEDINFO_H_
