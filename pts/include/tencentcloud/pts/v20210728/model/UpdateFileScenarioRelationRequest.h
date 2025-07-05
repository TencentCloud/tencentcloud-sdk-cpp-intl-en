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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_UPDATEFILESCENARIORELATIONREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_UPDATEFILESCENARIORELATIONREQUEST_H_

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
                * UpdateFileScenarioRelation request structure.
                */
                class UpdateFileScenarioRelationRequest : public AbstractModel
                {
                public:
                    UpdateFileScenarioRelationRequest();
                    ~UpdateFileScenarioRelationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File ID. Its value should be the corresponding directory of the file in the COS bucket after it has been uploaded in the previous step.
                     * @return FileId File ID. Its value should be the corresponding directory of the file in the COS bucket after it has been uploaded in the previous step.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置File ID. Its value should be the corresponding directory of the file in the COS bucket after it has been uploaded in the previous step.
                     * @param _fileId File ID. Its value should be the corresponding directory of the file in the COS bucket after it has been uploaded in the previous step.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

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
                     * 获取Array of Scenario ID.
                     * @return ScenarioIds Array of Scenario ID.
                     * 
                     */
                    std::vector<std::string> GetScenarioIds() const;

                    /**
                     * 设置Array of Scenario ID.
                     * @param _scenarioIds Array of Scenario ID.
                     * 
                     */
                    void SetScenarioIds(const std::vector<std::string>& _scenarioIds);

                    /**
                     * 判断参数 ScenarioIds 是否已赋值
                     * @return ScenarioIds 是否已赋值
                     * 
                     */
                    bool ScenarioIdsHasBeenSet() const;

                private:

                    /**
                     * File ID. Its value should be the corresponding directory of the file in the COS bucket after it has been uploaded in the previous step.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Array of Scenario ID.
                     */
                    std::vector<std::string> m_scenarioIds;
                    bool m_scenarioIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_UPDATEFILESCENARIORELATIONREQUEST_H_
