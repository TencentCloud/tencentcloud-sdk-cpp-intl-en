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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_STARTOPSTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_STARTOPSTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * StartOpsTasks request structure.
                */
                class StartOpsTasksRequest : public AbstractModel
                {
                public:
                    StartOpsTasksRequest();
                    ~StartOpsTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Task Id list.
                     * @return TaskIds Task Id list.
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置Task Id list.
                     * @param _taskIds Task Id list.
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取Whether to supplement intermediate instances from the last pause to the current time at startup. default false indicates no supplement.
                     * @return EnableDataBackfill Whether to supplement intermediate instances from the last pause to the current time at startup. default false indicates no supplement.
                     * 
                     */
                    bool GetEnableDataBackfill() const;

                    /**
                     * 设置Whether to supplement intermediate instances from the last pause to the current time at startup. default false indicates no supplement.
                     * @param _enableDataBackfill Whether to supplement intermediate instances from the last pause to the current time at startup. default false indicates no supplement.
                     * 
                     */
                    void SetEnableDataBackfill(const bool& _enableDataBackfill);

                    /**
                     * 判断参数 EnableDataBackfill 是否已赋值
                     * @return EnableDataBackfill 是否已赋值
                     * 
                     */
                    bool EnableDataBackfillHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task Id list.
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Whether to supplement intermediate instances from the last pause to the current time at startup. default false indicates no supplement.
                     */
                    bool m_enableDataBackfill;
                    bool m_enableDataBackfillHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_STARTOPSTASKSREQUEST_H_
