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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_STARTJOBREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_STARTJOBREQUEST_H_

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
                * StartJob request structure.
                */
                class StartJobRequest : public AbstractModel
                {
                public:
                    StartJobRequest();
                    ~StartJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scenario ID.
                     * @return ScenarioId Scenario ID.
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置Scenario ID.
                     * @param _scenarioId Scenario ID.
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取Job initiator.
                     * @return JobOwner Job initiator.
                     * 
                     */
                    std::string GetJobOwner() const;

                    /**
                     * 设置Job initiator.
                     * @param _jobOwner Job initiator.
                     * 
                     */
                    void SetJobOwner(const std::string& _jobOwner);

                    /**
                     * 判断参数 JobOwner 是否已赋值
                     * @return JobOwner 是否已赋值
                     * 
                     */
                    bool JobOwnerHasBeenSet() const;

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
                     * 获取If is debug mode.
                     * @return Debug If is debug mode.
                     * 
                     */
                    bool GetDebug() const;

                    /**
                     * 设置If is debug mode.
                     * @param _debug If is debug mode.
                     * 
                     */
                    void SetDebug(const bool& _debug);

                    /**
                     * 判断参数 Debug 是否已赋值
                     * @return Debug 是否已赋值
                     * 
                     */
                    bool DebugHasBeenSet() const;

                    /**
                     * 获取Note.
                     * @return Note Note.
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Note.
                     * @param _note Note.
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                private:

                    /**
                     * Scenario ID.
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * Job initiator.
                     */
                    std::string m_jobOwner;
                    bool m_jobOwnerHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * If is debug mode.
                     */
                    bool m_debug;
                    bool m_debugHasBeenSet;

                    /**
                     * Note.
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_STARTJOBREQUEST_H_
