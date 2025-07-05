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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CLOSEKAFKACONSUMERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CLOSEKAFKACONSUMERREQUEST_H_

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
                * CloseKafkaConsumer request structure.
                */
                class CloseKafkaConsumerRequest : public AbstractModel
                {
                public:
                    CloseKafkaConsumerRequest();
                    ~CloseKafkaConsumerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID
                     * @return FromTopicId Log topic ID
                     * 
                     */
                    std::string GetFromTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _fromTopicId Log topic ID
                     * 
                     */
                    void SetFromTopicId(const std::string& _fromTopicId);

                    /**
                     * 判断参数 FromTopicId 是否已赋值
                     * @return FromTopicId 是否已赋值
                     * 
                     */
                    bool FromTopicIdHasBeenSet() const;

                private:

                    /**
                     * Log topic ID
                     */
                    std::string m_fromTopicId;
                    bool m_fromTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CLOSEKAFKACONSUMERREQUEST_H_
