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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTSENDTASKSREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTSENDTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListSendTasks request structure.
                */
                class ListSendTasksRequest : public AbstractModel
                {
                public:
                    ListSendTasksRequest();
                    ~ListSendTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset, starting from 0. The value is an integer. `0` means to skip 0 entries.
                     * @return Offset Offset, starting from 0. The value is an integer. `0` means to skip 0 entries.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, starting from 0. The value is an integer. `0` means to skip 0 entries.
                     * @param _offset Offset, starting from 0. The value is an integer. `0` means to skip 0 entries.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of records to query. The value is an integer not exceeding 100.
                     * @return Limit Number of records to query. The value is an integer not exceeding 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of records to query. The value is an integer not exceeding 100.
                     * @param _limit Number of records to query. The value is an integer not exceeding 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Task status. `1`: to start; `5`: sending; `6`: sending suspended today; `7`: sending error; `10`: sent. To query tasks in all states, do not pass in this parameter.
                     * @return Status Task status. `1`: to start; `5`: sending; `6`: sending suspended today; `7`: sending error; `10`: sent. To query tasks in all states, do not pass in this parameter.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Task status. `1`: to start; `5`: sending; `6`: sending suspended today; `7`: sending error; `10`: sent. To query tasks in all states, do not pass in this parameter.
                     * @param _status Task status. `1`: to start; `5`: sending; `6`: sending suspended today; `7`: sending error; `10`: sent. To query tasks in all states, do not pass in this parameter.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Recipient group ID
                     * @return ReceiverId Recipient group ID
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置Recipient group ID
                     * @param _receiverId Recipient group ID
                     * 
                     */
                    void SetReceiverId(const uint64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

                    /**
                     * 获取Task type. `1`: immediate; `2`: scheduled; `3`: recurring. To query tasks of all types, do not pass in this parameter.
                     * @return TaskType Task type. `1`: immediate; `2`: scheduled; `3`: recurring. To query tasks of all types, do not pass in this parameter.
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置Task type. `1`: immediate; `2`: scheduled; `3`: recurring. To query tasks of all types, do not pass in this parameter.
                     * @param _taskType Task type. `1`: immediate; `2`: scheduled; `3`: recurring. To query tasks of all types, do not pass in this parameter.
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * Offset, starting from 0. The value is an integer. `0` means to skip 0 entries.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of records to query. The value is an integer not exceeding 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Task status. `1`: to start; `5`: sending; `6`: sending suspended today; `7`: sending error; `10`: sent. To query tasks in all states, do not pass in this parameter.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Recipient group ID
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * Task type. `1`: immediate; `2`: scheduled; `3`: recurring. To query tasks of all types, do not pass in this parameter.
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTSENDTASKSREQUEST_H_
