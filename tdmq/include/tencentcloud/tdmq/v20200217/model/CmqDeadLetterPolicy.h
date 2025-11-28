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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQDEADLETTERPOLICY_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQDEADLETTERPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * cmq DeadLetterPolicy
                */
                class CmqDeadLetterPolicy : public AbstractModel
                {
                public:
                    CmqDeadLetterPolicy();
                    ~CmqDeadLetterPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dead letter queue.
                     * @return DeadLetterQueue Dead letter queue.
                     * 
                     */
                    std::string GetDeadLetterQueue() const;

                    /**
                     * 设置Dead letter queue.
                     * @param _deadLetterQueue Dead letter queue.
                     * 
                     */
                    void SetDeadLetterQueue(const std::string& _deadLetterQueue);

                    /**
                     * 判断参数 DeadLetterQueue 是否已赋值
                     * @return DeadLetterQueue 是否已赋值
                     * 
                     */
                    bool DeadLetterQueueHasBeenSet() const;

                    /**
                     * 获取Dead letter queue policy. 0: maximum number of receipt. 1: maximum unconsumed time.
                     * @return Policy Dead letter queue policy. 0: maximum number of receipt. 1: maximum unconsumed time.
                     * 
                     */
                    uint64_t GetPolicy() const;

                    /**
                     * 设置Dead letter queue policy. 0: maximum number of receipt. 1: maximum unconsumed time.
                     * @param _policy Dead letter queue policy. 0: maximum number of receipt. 1: maximum unconsumed time.
                     * 
                     */
                    void SetPolicy(const uint64_t& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Maximum unconsumed expiration time. Required if policy is 1. Range: 300-43,200 seconds, must be less than the maximum message retention time MsgRetentionSeconds.
                     * @return MaxTimeToLive Maximum unconsumed expiration time. Required if policy is 1. Range: 300-43,200 seconds, must be less than the maximum message retention time MsgRetentionSeconds.
                     * 
                     */
                    uint64_t GetMaxTimeToLive() const;

                    /**
                     * 设置Maximum unconsumed expiration time. Required if policy is 1. Range: 300-43,200 seconds, must be less than the maximum message retention time MsgRetentionSeconds.
                     * @param _maxTimeToLive Maximum unconsumed expiration time. Required if policy is 1. Range: 300-43,200 seconds, must be less than the maximum message retention time MsgRetentionSeconds.
                     * 
                     */
                    void SetMaxTimeToLive(const uint64_t& _maxTimeToLive);

                    /**
                     * 判断参数 MaxTimeToLive 是否已赋值
                     * @return MaxTimeToLive 是否已赋值
                     * 
                     */
                    bool MaxTimeToLiveHasBeenSet() const;

                    /**
                     * 获取Maximum number of receipt. required when Policy is 0. value range: 1 to 1000.
                     * @return MaxReceiveCount Maximum number of receipt. required when Policy is 0. value range: 1 to 1000.
                     * 
                     */
                    uint64_t GetMaxReceiveCount() const;

                    /**
                     * 设置Maximum number of receipt. required when Policy is 0. value range: 1 to 1000.
                     * @param _maxReceiveCount Maximum number of receipt. required when Policy is 0. value range: 1 to 1000.
                     * 
                     */
                    void SetMaxReceiveCount(const uint64_t& _maxReceiveCount);

                    /**
                     * 判断参数 MaxReceiveCount 是否已赋值
                     * @return MaxReceiveCount 是否已赋值
                     * 
                     */
                    bool MaxReceiveCountHasBeenSet() const;

                private:

                    /**
                     * Dead letter queue.
                     */
                    std::string m_deadLetterQueue;
                    bool m_deadLetterQueueHasBeenSet;

                    /**
                     * Dead letter queue policy. 0: maximum number of receipt. 1: maximum unconsumed time.
                     */
                    uint64_t m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Maximum unconsumed expiration time. Required if policy is 1. Range: 300-43,200 seconds, must be less than the maximum message retention time MsgRetentionSeconds.
                     */
                    uint64_t m_maxTimeToLive;
                    bool m_maxTimeToLiveHasBeenSet;

                    /**
                     * Maximum number of receipt. required when Policy is 0. value range: 1 to 1000.
                     */
                    uint64_t m_maxReceiveCount;
                    bool m_maxReceiveCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQDEADLETTERPOLICY_H_
