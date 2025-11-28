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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATETOPICRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATETOPICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateTopic response structure.
                */
                class CreateTopicResponse : public AbstractModel
                {
                public:
                    CreateTopicResponse();
                    ~CreateTopicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment (namespace) name.
                     * @return EnvironmentId Environment (namespace) name.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Topic name.
                     * @return TopicName Topic name.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Valid value: 0 or 1. Non-partitioned topic: No partitions. A value greater than 1: The partition count of a partitioned topic. `0` is returned for existing non-partitioned topics, and `1` is returned for incremental non-partitioned topics.
                     * @return Partitions Valid value: 0 or 1. Non-partitioned topic: No partitions. A value greater than 1: The partition count of a partitioned topic. `0` is returned for existing non-partitioned topics, and `1` is returned for incremental non-partitioned topics.
                     * 
                     */
                    uint64_t GetPartitions() const;

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取Remarks, within 128 characters.
                     * @return Remark Remarks, within 128 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取0: standard message.
Global sequential message.
2: local ordered messages.
Specifies the retry queue.
4: dead letter queue.
                     * @return TopicType 0: standard message.
Global sequential message.
2: local ordered messages.
Specifies the retry queue.
4: dead letter queue.
                     * 
                     */
                    uint64_t GetTopicType() const;

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                private:

                    /**
                     * Environment (namespace) name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Topic name.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Valid value: 0 or 1. Non-partitioned topic: No partitions. A value greater than 1: The partition count of a partitioned topic. `0` is returned for existing non-partitioned topics, and `1` is returned for incremental non-partitioned topics.
                     */
                    uint64_t m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * Remarks, within 128 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 0: standard message.
Global sequential message.
2: local ordered messages.
Specifies the retry queue.
4: dead letter queue.
                     */
                    uint64_t m_topicType;
                    bool m_topicTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATETOPICRESPONSE_H_
