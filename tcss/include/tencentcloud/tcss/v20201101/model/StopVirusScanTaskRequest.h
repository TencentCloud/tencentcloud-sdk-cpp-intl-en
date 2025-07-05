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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_STOPVIRUSSCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_STOPVIRUSSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * StopVirusScanTask request structure.
                */
                class StopVirusScanTaskRequest : public AbstractModel
                {
                public:
                    StopVirusScanTaskRequest();
                    ~StopVirusScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取ID of the container to be stopped. If it is left empty, the entire task will be stopped.
                     * @return ContainerIds ID of the container to be stopped. If it is left empty, the entire task will be stopped.
                     * 
                     */
                    std::vector<std::string> GetContainerIds() const;

                    /**
                     * 设置ID of the container to be stopped. If it is left empty, the entire task will be stopped.
                     * @param _containerIds ID of the container to be stopped. If it is left empty, the entire task will be stopped.
                     * 
                     */
                    void SetContainerIds(const std::vector<std::string>& _containerIds);

                    /**
                     * 判断参数 ContainerIds 是否已赋值
                     * @return ContainerIds 是否已赋值
                     * 
                     */
                    bool ContainerIdsHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * ID of the container to be stopped. If it is left empty, the entire task will be stopped.
                     */
                    std::vector<std::string> m_containerIds;
                    bool m_containerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_STOPVIRUSSCANTASKREQUEST_H_
