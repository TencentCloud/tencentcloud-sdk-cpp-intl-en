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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_DEADLETTERPOLICY_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_DEADLETTERPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * DeadLetterPolicy
                */
                class DeadLetterPolicy : public AbstractModel
                {
                public:
                    DeadLetterPolicy();
                    ~DeadLetterPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DeadLetterQueueName
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeadLetterQueueName DeadLetterQueueName
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDeadLetterQueueName() const;

                    /**
                     * 设置DeadLetterQueueName
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DeadLetterQueueName DeadLetterQueueName
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDeadLetterQueueName(const std::string& _deadLetterQueueName);

                    /**
                     * 判断参数 DeadLetterQueueName 是否已赋值
                     * @return DeadLetterQueueName 是否已赋值
                     */
                    bool DeadLetterQueueNameHasBeenSet() const;

                    /**
                     * 获取DeadLetterQueue
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeadLetterQueue DeadLetterQueue
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDeadLetterQueue() const;

                    /**
                     * 设置DeadLetterQueue
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DeadLetterQueue DeadLetterQueue
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDeadLetterQueue(const std::string& _deadLetterQueue);

                    /**
                     * 判断参数 DeadLetterQueue 是否已赋值
                     * @return DeadLetterQueue 是否已赋值
                     */
                    bool DeadLetterQueueHasBeenSet() const;

                    /**
                     * 获取Policy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Policy Policy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetPolicy() const;

                    /**
                     * 设置Policy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Policy Policy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPolicy(const uint64_t& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取MaxTimeToLive
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxTimeToLive MaxTimeToLive
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMaxTimeToLive() const;

                    /**
                     * 设置MaxTimeToLive
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxTimeToLive MaxTimeToLive
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxTimeToLive(const uint64_t& _maxTimeToLive);

                    /**
                     * 判断参数 MaxTimeToLive 是否已赋值
                     * @return MaxTimeToLive 是否已赋值
                     */
                    bool MaxTimeToLiveHasBeenSet() const;

                    /**
                     * 获取MaxReceiveCount
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxReceiveCount MaxReceiveCount
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMaxReceiveCount() const;

                    /**
                     * 设置MaxReceiveCount
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxReceiveCount MaxReceiveCount
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxReceiveCount(const uint64_t& _maxReceiveCount);

                    /**
                     * 判断参数 MaxReceiveCount 是否已赋值
                     * @return MaxReceiveCount 是否已赋值
                     */
                    bool MaxReceiveCountHasBeenSet() const;

                private:

                    /**
                     * DeadLetterQueueName
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deadLetterQueueName;
                    bool m_deadLetterQueueNameHasBeenSet;

                    /**
                     * DeadLetterQueue
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deadLetterQueue;
                    bool m_deadLetterQueueHasBeenSet;

                    /**
                     * Policy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * MaxTimeToLive
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxTimeToLive;
                    bool m_maxTimeToLiveHasBeenSet;

                    /**
                     * MaxReceiveCount
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxReceiveCount;
                    bool m_maxReceiveCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_DEADLETTERPOLICY_H_
