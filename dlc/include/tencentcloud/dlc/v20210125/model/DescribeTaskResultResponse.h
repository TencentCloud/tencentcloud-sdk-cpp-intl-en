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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKRESULTRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TaskResultInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeTaskResult response structure.
                */
                class DescribeTaskResultResponse : public AbstractModel
                {
                public:
                    DescribeTaskResultResponse();
                    ~DescribeTaskResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The queried task information. If the returned value is empty, the task with the entered task ID does not exist. The task result will be returned only if the task status is `2` (succeeded).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskInfo The queried task information. If the returned value is empty, the task with the entered task ID does not exist. The task result will be returned only if the task status is `2` (succeeded).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskResultInfo GetTaskInfo() const;

                    /**
                     * 判断参数 TaskInfo 是否已赋值
                     * @return TaskInfo 是否已赋值
                     * 
                     */
                    bool TaskInfoHasBeenSet() const;

                private:

                    /**
                     * The queried task information. If the returned value is empty, the task with the entered task ID does not exist. The task result will be returned only if the task status is `2` (succeeded).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaskResultInfo m_taskInfo;
                    bool m_taskInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKRESULTRESPONSE_H_
