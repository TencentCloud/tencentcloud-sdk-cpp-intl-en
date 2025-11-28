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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETECMQQUEUEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETECMQQUEUEREQUEST_H_

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
                * DeleteCmqQueue request structure.
                */
                class DeleteCmqQueueRequest : public AbstractModel
                {
                public:
                    DeleteCmqQueueRequest();
                    ~DeleteCmqQueueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queue name, unique under the same account in a single region. queue name is a string of no more than 64 characters, beginning with a letter, the remainder can contain letters, digits, and hyphens (-).
                     * @return QueueName Queue name, unique under the same account in a single region. queue name is a string of no more than 64 characters, beginning with a letter, the remainder can contain letters, digits, and hyphens (-).
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Queue name, unique under the same account in a single region. queue name is a string of no more than 64 characters, beginning with a letter, the remainder can contain letters, digits, and hyphens (-).
                     * @param _queueName Queue name, unique under the same account in a single region. queue name is a string of no more than 64 characters, beginning with a letter, the remainder can contain letters, digits, and hyphens (-).
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                private:

                    /**
                     * Queue name, unique under the same account in a single region. queue name is a string of no more than 64 characters, beginning with a letter, the remainder can contain letters, digits, and hyphens (-).
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETECMQQUEUEREQUEST_H_
