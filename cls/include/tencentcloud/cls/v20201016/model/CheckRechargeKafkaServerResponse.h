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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CHECKRECHARGEKAFKASERVERRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CHECKRECHARGEKAFKASERVERRESPONSE_H_

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
                * CheckRechargeKafkaServer response structure.
                */
                class CheckRechargeKafkaServerResponse : public AbstractModel
                {
                public:
                    CheckRechargeKafkaServerResponse();
                    ~CheckRechargeKafkaServerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Accessibility status of the Kafka cluster.

-0: Normal access. 
-1: broker connection failure
-2: sasl authentication failure
-3: ckafka role not authorized
-4: topic list does not exist.
-5: No data available in the topic.
-6: User has no ckafka permission.
-7: The consumption group already exists.
-8: The kafka instance does not exist or is terminated.
-9: Broker list is empty
-10: Incorrect Broker address format.
-11: Broker port is not an integer.
                     * @return Status Accessibility status of the Kafka cluster.

-0: Normal access. 
-1: broker connection failure
-2: sasl authentication failure
-3: ckafka role not authorized
-4: topic list does not exist.
-5: No data available in the topic.
-6: User has no ckafka permission.
-7: The consumption group already exists.
-8: The kafka instance does not exist or is terminated.
-9: Broker list is empty
-10: Incorrect Broker address format.
-11: Broker port is not an integer.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Accessibility status of the Kafka cluster.

-0: Normal access. 
-1: broker connection failure
-2: sasl authentication failure
-3: ckafka role not authorized
-4: topic list does not exist.
-5: No data available in the topic.
-6: User has no ckafka permission.
-7: The consumption group already exists.
-8: The kafka instance does not exist or is terminated.
-9: Broker list is empty
-10: Incorrect Broker address format.
-11: Broker port is not an integer.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CHECKRECHARGEKAFKASERVERRESPONSE_H_
