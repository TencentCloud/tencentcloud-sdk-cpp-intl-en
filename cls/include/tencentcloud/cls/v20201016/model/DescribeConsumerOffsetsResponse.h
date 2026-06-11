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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMEROFFSETSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMEROFFSETSRESPONSE_H_

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
                * DescribeConsumerOffsets response structure.
                */
                class DescribeConsumerOffsetsResponse : public AbstractModel
                {
                public:
                    DescribeConsumerOffsetsResponse();
                    ~DescribeConsumerOffsetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Consumer group flag.
                     * @return ConsumerGroup Consumer group flag.
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取Consumption offset information.
                     * @return TopicPartitionOffsetsInfo Consumption offset information.
                     * 
                     */
                    std::vector<TopicPartitionOffsetInfo> GetTopicPartitionOffsetsInfo() const;

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
                     * Consumption offset information.
                     */
                    std::vector<TopicPartitionOffsetInfo> m_topicPartitionOffsetsInfo;
                    bool m_topicPartitionOffsetsInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMEROFFSETSRESPONSE_H_
