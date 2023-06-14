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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVIRUSSCANAGAINREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVIRUSSCANAGAINREQUEST_H_

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
                * CreateVirusScanAgain request structure.
                */
                class CreateVirusScanAgainRequest : public AbstractModel
                {
                public:
                    CreateVirusScanAgainRequest();
                    ~CreateVirusScanAgainRequest() = default;
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
                     * 获取Set of IDs of containers to be scanned
                     * @return ContainerIds Set of IDs of containers to be scanned
                     * 
                     */
                    std::vector<std::string> GetContainerIds() const;

                    /**
                     * 设置Set of IDs of containers to be scanned
                     * @param _containerIds Set of IDs of containers to be scanned
                     * 
                     */
                    void SetContainerIds(const std::vector<std::string>& _containerIds);

                    /**
                     * 判断参数 ContainerIds 是否已赋值
                     * @return ContainerIds 是否已赋值
                     * 
                     */
                    bool ContainerIdsHasBeenSet() const;

                    /**
                     * 获取Whether to scan all timed-out containers
                     * @return TimeoutAll Whether to scan all timed-out containers
                     * 
                     */
                    bool GetTimeoutAll() const;

                    /**
                     * 设置Whether to scan all timed-out containers
                     * @param _timeoutAll Whether to scan all timed-out containers
                     * 
                     */
                    void SetTimeoutAll(const bool& _timeoutAll);

                    /**
                     * 判断参数 TimeoutAll 是否已赋值
                     * @return TimeoutAll 是否已赋值
                     * 
                     */
                    bool TimeoutAllHasBeenSet() const;

                    /**
                     * 获取New timeout period
                     * @return Timeout New timeout period
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置New timeout period
                     * @param _timeout New timeout period
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Set of IDs of containers to be scanned
                     */
                    std::vector<std::string> m_containerIds;
                    bool m_containerIdsHasBeenSet;

                    /**
                     * Whether to scan all timed-out containers
                     */
                    bool m_timeoutAll;
                    bool m_timeoutAllHasBeenSet;

                    /**
                     * New timeout period
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVIRUSSCANAGAINREQUEST_H_
