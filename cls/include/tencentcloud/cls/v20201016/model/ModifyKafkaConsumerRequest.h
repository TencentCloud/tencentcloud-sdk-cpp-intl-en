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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYKAFKACONSUMERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYKAFKACONSUMERREQUEST_H_

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
                * ModifyKafkaConsumer request structure.
                */
                class ModifyKafkaConsumerRequest : public AbstractModel
                {
                public:
                    ModifyKafkaConsumerRequest();
                    ~ModifyKafkaConsumerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log Topic ID
                     * @return FromTopicId Log Topic ID
                     * 
                     */
                    std::string GetFromTopicId() const;

                    /**
                     * 设置Log Topic ID
                     * @param _fromTopicId Log Topic ID
                     * 
                     */
                    void SetFromTopicId(const std::string& _fromTopicId);

                    /**
                     * 判断参数 FromTopicId 是否已赋值
                     * @return FromTopicId 是否已赋值
                     * 
                     */
                    bool FromTopicIdHasBeenSet() const;

                    /**
                     * 获取Compression mode [0: NONE; 2: SNAPPY; 3: LZ4]
                     * @return Compression Compression mode [0: NONE; 2: SNAPPY; 3: LZ4]
                     * 
                     */
                    int64_t GetCompression() const;

                    /**
                     * 设置Compression mode [0: NONE; 2: SNAPPY; 3: LZ4]
                     * @param _compression Compression mode [0: NONE; 2: SNAPPY; 3: LZ4]
                     * 
                     */
                    void SetCompression(const int64_t& _compression);

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
                     * 设置Kafka protocol consumer data format
                     * @param _consumerContent Kafka protocol consumer data format
                     * 
                     */
                    void SetConsumerContent(const KafkaConsumerContent& _consumerContent);

                    /**
                     * 判断参数 ConsumerContent 是否已赋值
                     * @return ConsumerContent 是否已赋值
                     * 
                     */
                    bool ConsumerContentHasBeenSet() const;

                private:

                    /**
                     * Log Topic ID
                     */
                    std::string m_fromTopicId;
                    bool m_fromTopicIdHasBeenSet;

                    /**
                     * Compression mode [0: NONE; 2: SNAPPY; 3: LZ4]
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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYKAFKACONSUMERREQUEST_H_
