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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDCMQMSGREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDCMQMSGREQUEST_H_

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
                * SendCmqMsg request structure.
                */
                class SendCmqMsgRequest : public AbstractModel
                {
                public:
                    SendCmqMsgRequest();
                    ~SendCmqMsgRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queue name
                     * @return QueueName Queue name
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Queue name
                     * @param _queueName Queue name
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
                     * 获取Message content
                     * @return MsgContent Message content
                     * 
                     */
                    std::string GetMsgContent() const;

                    /**
                     * 设置Message content
                     * @param _msgContent Message content
                     * 
                     */
                    void SetMsgContent(const std::string& _msgContent);

                    /**
                     * 判断参数 MsgContent 是否已赋值
                     * @return MsgContent 是否已赋值
                     * 
                     */
                    bool MsgContentHasBeenSet() const;

                    /**
                     * 获取Delay time. expressed in seconds, default value is 0, cannot exceed the max message unacknowledgement time in queue configuration.
                     * @return DelaySeconds Delay time. expressed in seconds, default value is 0, cannot exceed the max message unacknowledgement time in queue configuration.
                     * 
                     */
                    int64_t GetDelaySeconds() const;

                    /**
                     * 设置Delay time. expressed in seconds, default value is 0, cannot exceed the max message unacknowledgement time in queue configuration.
                     * @param _delaySeconds Delay time. expressed in seconds, default value is 0, cannot exceed the max message unacknowledgement time in queue configuration.
                     * 
                     */
                    void SetDelaySeconds(const int64_t& _delaySeconds);

                    /**
                     * 判断参数 DelaySeconds 是否已赋值
                     * @return DelaySeconds 是否已赋值
                     * 
                     */
                    bool DelaySecondsHasBeenSet() const;

                private:

                    /**
                     * Queue name
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Message content
                     */
                    std::string m_msgContent;
                    bool m_msgContentHasBeenSet;

                    /**
                     * Delay time. expressed in seconds, default value is 0, cannot exceed the max message unacknowledgement time in queue configuration.
                     */
                    int64_t m_delaySeconds;
                    bool m_delaySecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDCMQMSGREQUEST_H_
