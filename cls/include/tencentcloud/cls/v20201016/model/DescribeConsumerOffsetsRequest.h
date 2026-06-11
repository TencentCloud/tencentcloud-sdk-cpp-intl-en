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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMEROFFSETSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMEROFFSETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeConsumerOffsets request structure.
                */
                class DescribeConsumerOffsetsRequest : public AbstractModel
                {
                public:
                    DescribeConsumerOffsetsRequest();
                    ~DescribeConsumerOffsetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Consumer group flag corresponding to a log topic.
                     * @return ConsumerGroup Consumer group flag corresponding to a log topic.
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置Consumer group flag corresponding to a log topic.
                     * @param _consumerGroup Consumer group flag corresponding to a log topic.
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取Timestamp (second-level).
                     * @return From Timestamp (second-level).
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Timestamp (second-level).
                     * @param _from Timestamp (second-level).
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取Logset ID (corresponding to a log topic).
                     * @return LogsetId Logset ID (corresponding to a log topic).
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID (corresponding to a log topic).
                     * @param _logsetId Logset ID (corresponding to a log topic).
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Log topic id
                     * @return TopicId Log topic id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic id
                     * @param _topicId Log topic id
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Partition ID
                     * @return PartitionId Partition ID
                     * 
                     */
                    std::string GetPartitionId() const;

                    /**
                     * 设置Partition ID
                     * @param _partitionId Partition ID
                     * 
                     */
                    void SetPartitionId(const std::string& _partitionId);

                    /**
                     * 判断参数 PartitionId 是否已赋值
                     * @return PartitionId 是否已赋值
                     * 
                     */
                    bool PartitionIdHasBeenSet() const;

                private:

                    /**
                     * Consumer group flag corresponding to a log topic.
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * Timestamp (second-level).
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Logset ID (corresponding to a log topic).
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Log topic id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Partition ID
                     */
                    std::string m_partitionId;
                    bool m_partitionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMEROFFSETSREQUEST_H_
