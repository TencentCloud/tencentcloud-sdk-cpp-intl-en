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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_DESCRIBETASKSTATUSREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_DESCRIBETASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * DescribeTaskStatus request structure.
                */
                class DescribeTaskStatusRequest : public AbstractModel
                {
                public:
                    DescribeTaskStatusRequest();
                    ~DescribeTaskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID obtained from the CreateRecTask API, which is used to obtain the task status and results.
** Note: A task is valid for 24 hours. Do not query the results with the tasks that have existed for more than 24 hours. **
                     * @return TaskId Task ID obtained from the CreateRecTask API, which is used to obtain the task status and results.
** Note: A task is valid for 24 hours. Do not query the results with the tasks that have existed for more than 24 hours. **
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置Task ID obtained from the CreateRecTask API, which is used to obtain the task status and results.
** Note: A task is valid for 24 hours. Do not query the results with the tasks that have existed for more than 24 hours. **
                     * @param _taskId Task ID obtained from the CreateRecTask API, which is used to obtain the task status and results.
** Note: A task is valid for 24 hours. Do not query the results with the tasks that have existed for more than 24 hours. **
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Task ID obtained from the CreateRecTask API, which is used to obtain the task status and results.
** Note: A task is valid for 24 hours. Do not query the results with the tasks that have existed for more than 24 hours. **
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_DESCRIBETASKSTATUSREQUEST_H_
