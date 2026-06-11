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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_COMMITCONSUMEROFFSETSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_COMMITCONSUMEROFFSETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/TopicPartitionOffsetInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CommitConsumerOffsets request structure.
                */
                class CommitConsumerOffsetsRequest : public AbstractModel
                {
                public:
                    CommitConsumerOffsetsRequest();
                    ~CommitConsumerOffsetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Consumer group flag.
                     * @return ConsumerGroup Consumer group flag.
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置Consumer group flag.
                     * @param _consumerGroup Consumer group flag.
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
                     * 获取Consumption machine name.
                     * @return Consumer Consumption machine name.
                     * 
                     */
                    std::string GetConsumer() const;

                    /**
                     * 设置Consumption machine name.
                     * @param _consumer Consumption machine name.
                     * 
                     */
                    void SetConsumer(const std::string& _consumer);

                    /**
                     * 判断参数 Consumer 是否已赋值
                     * @return Consumer 是否已赋值
                     * 
                     */
                    bool ConsumerHasBeenSet() const;

                    /**
                     * 获取Logset id
                     * @return LogsetId Logset id
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset id
                     * @param _logsetId Logset id
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
                     * 获取Topic partition offset information.
                     * @return TopicPartitionOffsetsInfo Topic partition offset information.
                     * 
                     */
                    std::vector<TopicPartitionOffsetInfo> GetTopicPartitionOffsetsInfo() const;

                    /**
                     * 设置Topic partition offset information.
                     * @param _topicPartitionOffsetsInfo Topic partition offset information.
                     * 
                     */
                    void SetTopicPartitionOffsetsInfo(const std::vector<TopicPartitionOffsetInfo>& _topicPartitionOffsetsInfo);

                    /**
                     * 判断参数 TopicPartitionOffsetsInfo 是否已赋值
                     * @return TopicPartitionOffsetsInfo 是否已赋值
                     * 
                     */
                    bool TopicPartitionOffsetsInfoHasBeenSet() const;

                private:

                    /**
                     * Consumer group flag.
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * Consumption machine name.
                     */
                    std::string m_consumer;
                    bool m_consumerHasBeenSet;

                    /**
                     * Logset id
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Topic partition offset information.
                     */
                    std::vector<TopicPartitionOffsetInfo> m_topicPartitionOffsetsInfo;
                    bool m_topicPartitionOffsetsInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_COMMITCONSUMEROFFSETSREQUEST_H_
