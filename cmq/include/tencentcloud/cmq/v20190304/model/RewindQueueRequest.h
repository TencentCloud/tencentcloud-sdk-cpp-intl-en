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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_REWINDQUEUEREQUEST_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_REWINDQUEUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * RewindQueue request structure.
                */
                class RewindQueueRequest : public AbstractModel
                {
                public:
                    RewindQueueRequest();
                    ~RewindQueueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queue name, which is unique under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * @return QueueName Queue name, which is unique under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Queue name, which is unique under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * @param QueueName Queue name, which is unique under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取After this time is set, the `(Batch)receiveMessage` API will consume the messages received after this timestamp in the order in which they are produced.
                     * @return StartConsumeTime After this time is set, the `(Batch)receiveMessage` API will consume the messages received after this timestamp in the order in which they are produced.
                     */
                    uint64_t GetStartConsumeTime() const;

                    /**
                     * 设置After this time is set, the `(Batch)receiveMessage` API will consume the messages received after this timestamp in the order in which they are produced.
                     * @param StartConsumeTime After this time is set, the `(Batch)receiveMessage` API will consume the messages received after this timestamp in the order in which they are produced.
                     */
                    void SetStartConsumeTime(const uint64_t& _startConsumeTime);

                    /**
                     * 判断参数 StartConsumeTime 是否已赋值
                     * @return StartConsumeTime 是否已赋值
                     */
                    bool StartConsumeTimeHasBeenSet() const;

                private:

                    /**
                     * Queue name, which is unique under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * After this time is set, the `(Batch)receiveMessage` API will consume the messages received after this timestamp in the order in which they are produced.
                     */
                    uint64_t m_startConsumeTime;
                    bool m_startConsumeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_REWINDQUEUEREQUEST_H_
