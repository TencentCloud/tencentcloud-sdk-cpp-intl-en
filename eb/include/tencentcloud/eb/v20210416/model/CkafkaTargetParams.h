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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CKAFKATARGETPARAMS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CKAFKATARGETPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/RetryPolicy.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * CKafka delivery target description
                */
                class CkafkaTargetParams : public AbstractModel
                {
                public:
                    CkafkaTargetParams();
                    ~CkafkaTargetParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CKafka topic to be delivered to
                     * @return TopicName CKafka topic to be delivered to
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置CKafka topic to be delivered to
                     * @param _topicName CKafka topic to be delivered to
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
                     * 获取Retry policy
                     * @return RetryPolicy Retry policy
                     * 
                     */
                    RetryPolicy GetRetryPolicy() const;

                    /**
                     * 设置Retry policy
                     * @param _retryPolicy Retry policy
                     * 
                     */
                    void SetRetryPolicy(const RetryPolicy& _retryPolicy);

                    /**
                     * 判断参数 RetryPolicy 是否已赋值
                     * @return RetryPolicy 是否已赋值
                     * 
                     */
                    bool RetryPolicyHasBeenSet() const;

                private:

                    /**
                     * CKafka topic to be delivered to
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Retry policy
                     */
                    RetryPolicy m_retryPolicy;
                    bool m_retryPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CKAFKATARGETPARAMS_H_
