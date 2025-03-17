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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DELETEPROJECTSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DELETEPROJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DeleteProjects request structure.
                */
                class DeleteProjectsRequest : public AbstractModel
                {
                public:
                    DeleteProjectsRequest();
                    ~DeleteProjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of Project ID to be deleted.
                     * @return ProjectIds Array of Project ID to be deleted.
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置Array of Project ID to be deleted.
                     * @param _projectIds Array of Project ID to be deleted.
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Whether to delete project-related scenarios. The default value is false.
                     * @return DeleteScenarios Whether to delete project-related scenarios. The default value is false.
                     * 
                     */
                    bool GetDeleteScenarios() const;

                    /**
                     * 设置Whether to delete project-related scenarios. The default value is false.
                     * @param _deleteScenarios Whether to delete project-related scenarios. The default value is false.
                     * 
                     */
                    void SetDeleteScenarios(const bool& _deleteScenarios);

                    /**
                     * 判断参数 DeleteScenarios 是否已赋值
                     * @return DeleteScenarios 是否已赋值
                     * 
                     */
                    bool DeleteScenariosHasBeenSet() const;

                    /**
                     * 获取Whether to delete project-related jobs. The default value is false.
                     * @return DeleteJobs Whether to delete project-related jobs. The default value is false.
                     * 
                     */
                    bool GetDeleteJobs() const;

                    /**
                     * 设置Whether to delete project-related jobs. The default value is false.
                     * @param _deleteJobs Whether to delete project-related jobs. The default value is false.
                     * 
                     */
                    void SetDeleteJobs(const bool& _deleteJobs);

                    /**
                     * 判断参数 DeleteJobs 是否已赋值
                     * @return DeleteJobs 是否已赋值
                     * 
                     */
                    bool DeleteJobsHasBeenSet() const;

                private:

                    /**
                     * Array of Project ID to be deleted.
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Whether to delete project-related scenarios. The default value is false.
                     */
                    bool m_deleteScenarios;
                    bool m_deleteScenariosHasBeenSet;

                    /**
                     * Whether to delete project-related jobs. The default value is false.
                     */
                    bool m_deleteJobs;
                    bool m_deleteJobsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DELETEPROJECTSREQUEST_H_
