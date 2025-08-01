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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CREATESCDNFAILEDLOGTASKREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CREATESCDNFAILEDLOGTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CreateScdnFailedLogTask request structure.
                */
                class CreateScdnFailedLogTaskRequest : public AbstractModel
                {
                public:
                    CreateScdnFailedLogTaskRequest();
                    ~CreateScdnFailedLogTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the failed task to retry
                     * @return TaskId ID of the failed task to retry
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置ID of the failed task to retry
                     * @param _taskId ID of the failed task to retry
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
                     * 获取Region. Valid values: `mainland` and `overseas`.
                     * @return Area Region. Valid values: `mainland` and `overseas`.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region. Valid values: `mainland` and `overseas`.
                     * @param _area Region. Valid values: `mainland` and `overseas`.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * ID of the failed task to retry
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Region. Valid values: `mainland` and `overseas`.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CREATESCDNFAILEDLOGTASKREQUEST_H_
