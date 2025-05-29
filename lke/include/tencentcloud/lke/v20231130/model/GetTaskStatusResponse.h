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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETTASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETTASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/TaskParams.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetTaskStatus response structure.
                */
                class GetTaskStatusResponse : public AbstractModel
                {
                public:
                    GetTaskStatusResponse();
                    ~GetTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task type.
                     * @return TaskType Task type.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task status.
                     * @return Status Task status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task messages.
                     * @return Message Task messages.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Task parameters.
                     * @return Params Task parameters.
                     * 
                     */
                    TaskParams GetParams() const;

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task type.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task messages.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Task parameters.
                     */
                    TaskParams m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETTASKSTATUSRESPONSE_H_
