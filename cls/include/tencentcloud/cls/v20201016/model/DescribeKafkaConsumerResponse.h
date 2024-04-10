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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKACONSUMERRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKACONSUMERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/KafkaConsumerContent.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeKafkaConsumer response structure.
                */
                class DescribeKafkaConsumerResponse : public AbstractModel
                {
                public:
                    DescribeKafkaConsumerResponse();
                    ~DescribeKafkaConsumerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether Kafka Protocol Consumption is enabled
                     * @return Status Whether Kafka Protocol Consumption is enabled
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Topic Parameter used by KafkaConsumer during consumption
                     * @return TopicID Topic Parameter used by KafkaConsumer during consumption
                     * 
                     */
                    std::string GetTopicID() const;

                    /**
                     * 判断参数 TopicID 是否已赋值
                     * @return TopicID 是否已赋值
                     * 
                     */
                    bool TopicIDHasBeenSet() const;

                    /**
                     * 获取Compression mode [0:NONE；2:SNAPPY；3:LZ4]
                     * @return Compression Compression mode [0:NONE；2:SNAPPY；3:LZ4]
                     * 
                     */
                    int64_t GetCompression() const;

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取Kafka protocol consumer data format
                     * @return ConsumerContent Kafka protocol consumer data format
                     * 
                     */
                    KafkaConsumerContent GetConsumerContent() const;

                    /**
                     * 判断参数 ConsumerContent 是否已赋值
                     * @return ConsumerContent 是否已赋值
                     * 
                     */
                    bool ConsumerContentHasBeenSet() const;

                private:

                    /**
                     * Whether Kafka Protocol Consumption is enabled
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Topic Parameter used by KafkaConsumer during consumption
                     */
                    std::string m_topicID;
                    bool m_topicIDHasBeenSet;

                    /**
                     * Compression mode [0:NONE；2:SNAPPY；3:LZ4]
                     */
                    int64_t m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * Kafka protocol consumer data format
                     */
                    KafkaConsumerContent m_consumerContent;
                    bool m_consumerContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKACONSUMERRESPONSE_H_
