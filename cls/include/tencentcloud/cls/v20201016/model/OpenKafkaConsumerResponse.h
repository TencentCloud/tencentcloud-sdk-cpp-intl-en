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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_OPENKAFKACONSUMERRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_OPENKAFKACONSUMERRESPONSE_H_

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
                * OpenKafkaConsumer response structure.
                */
                class OpenKafkaConsumerResponse : public AbstractModel
                {
                public:
                    OpenKafkaConsumerResponse();
                    ~OpenKafkaConsumerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取`TopicId` to be consumed
                     * @return TopicID `TopicId` to be consumed
                     * 
                     */
                    std::string GetTopicID() const;

                    /**
                     * 判断参数 TopicID 是否已赋值
                     * @return TopicID 是否已赋值
                     * 
                     */
                    bool TopicIDHasBeenSet() const;

                private:

                    /**
                     * `TopicId` to be consumed
                     */
                    std::string m_topicID;
                    bool m_topicIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_OPENKAFKACONSUMERRESPONSE_H_
