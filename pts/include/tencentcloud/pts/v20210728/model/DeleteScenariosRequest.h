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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DELETESCENARIOSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DELETESCENARIOSREQUEST_H_

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
                * DeleteScenarios request structure.
                */
                class DeleteScenariosRequest : public AbstractModel
                {
                public:
                    DeleteScenariosRequest();
                    ~DeleteScenariosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of Scenario ID to be deleted.
                     * @return ScenarioIds Array of Scenario ID to be deleted.
                     * 
                     */
                    std::vector<std::string> GetScenarioIds() const;

                    /**
                     * 设置Array of Scenario ID to be deleted.
                     * @param _scenarioIds Array of Scenario ID to be deleted.
                     * 
                     */
                    void SetScenarioIds(const std::vector<std::string>& _scenarioIds);

                    /**
                     * 判断参数 ScenarioIds 是否已赋值
                     * @return ScenarioIds 是否已赋值
                     * 
                     */
                    bool ScenarioIdsHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Whether to delete scene-related jobs. The default value is false.
                     * @return DeleteJobs Whether to delete scene-related jobs. The default value is false.
                     * 
                     */
                    bool GetDeleteJobs() const;

                    /**
                     * 设置Whether to delete scene-related jobs. The default value is false.
                     * @param _deleteJobs Whether to delete scene-related jobs. The default value is false.
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
                     * Array of Scenario ID to be deleted.
                     */
                    std::vector<std::string> m_scenarioIds;
                    bool m_scenarioIdsHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether to delete scene-related jobs. The default value is false.
                     */
                    bool m_deleteJobs;
                    bool m_deleteJobsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DELETESCENARIOSREQUEST_H_
