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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CKAFKADELIVERYPARAMS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CKAFKADELIVERYPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * Parameter of the Kafka topic to be delivered to
                */
                class CkafkaDeliveryParams : public AbstractModel
                {
                public:
                    CkafkaDeliveryParams();
                    ~CkafkaDeliveryParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ckafka topic name
                     * @return TopicName ckafka topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置ckafka topic name
                     * @param _topicName ckafka topic name
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
                     * 获取Six-Segment QCS description of CKafka resource
                     * @return ResourceDescription Six-Segment QCS description of CKafka resource
                     * 
                     */
                    std::string GetResourceDescription() const;

                    /**
                     * 设置Six-Segment QCS description of CKafka resource
                     * @param _resourceDescription Six-Segment QCS description of CKafka resource
                     * 
                     */
                    void SetResourceDescription(const std::string& _resourceDescription);

                    /**
                     * 判断参数 ResourceDescription 是否已赋值
                     * @return ResourceDescription 是否已赋值
                     * 
                     */
                    bool ResourceDescriptionHasBeenSet() const;

                private:

                    /**
                     * ckafka topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Six-Segment QCS description of CKafka resource
                     */
                    std::string m_resourceDescription;
                    bool m_resourceDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CKAFKADELIVERYPARAMS_H_
