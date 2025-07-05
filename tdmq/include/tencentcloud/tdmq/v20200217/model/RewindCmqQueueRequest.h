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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_REWINDCMQQUEUEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_REWINDCMQQUEUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * RewindCmqQueue request structure.
                */
                class RewindCmqQueueRequest : public AbstractModel
                {
                public:
                    RewindCmqQueueRequest();
                    ~RewindCmqQueueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queue name, which must be unique under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
                     * @return QueueName Queue name, which must be unique under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Queue name, which must be unique under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
                     * @param _queueName Queue name, which must be unique under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取After this time is configured, the `(Batch)receiveMessage` API will consume the messages received after this timestamp in the order in which they are produced.
                     * @return StartConsumeTime After this time is configured, the `(Batch)receiveMessage` API will consume the messages received after this timestamp in the order in which they are produced.
                     * 
                     */
                    uint64_t GetStartConsumeTime() const;

                    /**
                     * 设置After this time is configured, the `(Batch)receiveMessage` API will consume the messages received after this timestamp in the order in which they are produced.
                     * @param _startConsumeTime After this time is configured, the `(Batch)receiveMessage` API will consume the messages received after this timestamp in the order in which they are produced.
                     * 
                     */
                    void SetStartConsumeTime(const uint64_t& _startConsumeTime);

                    /**
                     * 判断参数 StartConsumeTime 是否已赋值
                     * @return StartConsumeTime 是否已赋值
                     * 
                     */
                    bool StartConsumeTimeHasBeenSet() const;

                private:

                    /**
                     * Queue name, which must be unique under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * After this time is configured, the `(Batch)receiveMessage` API will consume the messages received after this timestamp in the order in which they are produced.
                     */
                    uint64_t m_startConsumeTime;
                    bool m_startConsumeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_REWINDCMQQUEUEREQUEST_H_
