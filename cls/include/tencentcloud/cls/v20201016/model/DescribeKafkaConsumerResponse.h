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
                     * 获取<p>Whether Kafka Protocol Consumption is enabled</p>
                     * @return Status <p>Whether Kafka Protocol Consumption is enabled</p>
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
                     * 获取<p>Topic parameter used by KafkaConsumer during consumption</p>
                     * @return TopicID <p>Topic parameter used by KafkaConsumer during consumption</p>
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
                     * 获取<p>Compression mode [0:NONE;2:SNAPPY;3:LZ4]</p>
                     * @return Compression <p>Compression mode [0:NONE;2:SNAPPY;3:LZ4]</p>
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
                     * 获取<p>kafka protocol consumption data format</p>
                     * @return ConsumerContent <p>kafka protocol consumption data format</p>
                     * 
                     */
                    KafkaConsumerContent GetConsumerContent() const;

                    /**
                     * 判断参数 ConsumerContent 是否已赋值
                     * @return ConsumerContent 是否已赋值
                     * 
                     */
                    bool ConsumerContentHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable the delivery service log. 1: Disabled, 2: Enabled.</p>
                     * @return HasServicesLog <p>Whether to enable the delivery service log. 1: Disabled, 2: Enabled.</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                    /**
                     * 获取<p>Range type of consumption, 0: latest, 1: history + latest</p>
                     * @return ScopeType <p>Range type of consumption, 0: latest, 1: history + latest</p>
                     * 
                     */
                    uint64_t GetScopeType() const;

                    /**
                     * 判断参数 ScopeType 是否已赋值
                     * @return ScopeType 是否已赋值
                     * 
                     */
                    bool ScopeTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Whether Kafka Protocol Consumption is enabled</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Topic parameter used by KafkaConsumer during consumption</p>
                     */
                    std::string m_topicID;
                    bool m_topicIDHasBeenSet;

                    /**
                     * <p>Compression mode [0:NONE;2:SNAPPY;3:LZ4]</p>
                     */
                    int64_t m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * <p>kafka protocol consumption data format</p>
                     */
                    KafkaConsumerContent m_consumerContent;
                    bool m_consumerContentHasBeenSet;

                    /**
                     * <p>Whether to enable the delivery service log. 1: Disabled, 2: Enabled.</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * <p>Range type of consumption, 0: latest, 1: history + latest</p>
                     */
                    uint64_t m_scopeType;
                    bool m_scopeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKACONSUMERRESPONSE_H_
