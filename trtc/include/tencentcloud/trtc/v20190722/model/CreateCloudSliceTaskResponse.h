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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDSLICETASKRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDSLICETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * CreateCloudSliceTask response structure.
                */
                class CreateCloudSliceTaskResponse : public AbstractModel
                {
                public:
                    CreateCloudSliceTaskResponse();
                    ~CreateCloudSliceTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID assigned by the cloud slicing service. It is a unique identifier for the lifecycle of a slicing task, which loses its significance after the task is completed. The task ID needs to be retained by the business system as a parameter for future operations related to this task.
                     * @return TaskId Task ID assigned by the cloud slicing service. It is a unique identifier for the lifecycle of a slicing task, which loses its significance after the task is completed. The task ID needs to be retained by the business system as a parameter for future operations related to this task.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Task ID assigned by the cloud slicing service. It is a unique identifier for the lifecycle of a slicing task, which loses its significance after the task is completed. The task ID needs to be retained by the business system as a parameter for future operations related to this task.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDSLICETASKRESPONSE_H_
