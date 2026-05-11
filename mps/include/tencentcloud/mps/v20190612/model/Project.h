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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PROJECT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TermBase.h>
#include <tencentcloud/mps/v20190612/model/Speakers.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Episode project information.
                */
                class Project : public AbstractModel
                {
                public:
                    Project();
                    ~Project() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Project ID.</p>
                     * @return ProjectId <p>Project ID.</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>Project ID.</p>
                     * @param _projectId <p>Project ID.</p>
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
                     * 获取<p>Project name.</p>
                     * @return ProjectName <p>Project name.</p>
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置<p>Project name.</p>
                     * @param _projectName <p>Project name.</p>
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取<p>Project description.</p>
                     * @return Description <p>Project description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Project description.</p>
                     * @param _description <p>Project description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Project term base.</p>
                     * @return TermBase <p>Project term base.</p>
                     * 
                     */
                    std::vector<TermBase> GetTermBase() const;

                    /**
                     * 设置<p>Project term base.</p>
                     * @param _termBase <p>Project term base.</p>
                     * 
                     */
                    void SetTermBase(const std::vector<TermBase>& _termBase);

                    /**
                     * 判断参数 TermBase 是否已赋值
                     * @return TermBase 是否已赋值
                     * 
                     */
                    bool TermBaseHasBeenSet() const;

                    /**
                     * 获取<p>List of characters.</p>
                     * @return Speakers <p>List of characters.</p>
                     * 
                     */
                    std::vector<Speakers> GetSpeakers() const;

                    /**
                     * 设置<p>List of characters.</p>
                     * @param _speakers <p>List of characters.</p>
                     * 
                     */
                    void SetSpeakers(const std::vector<Speakers>& _speakers);

                    /**
                     * 判断参数 Speakers 是否已赋值
                     * @return Speakers 是否已赋值
                     * 
                     */
                    bool SpeakersHasBeenSet() const;

                    /**
                     * 获取<p>Creation time (Unix timestamp).</p>
                     * @return CreatedAt <p>Creation time (Unix timestamp).</p>
                     * 
                     */
                    int64_t GetCreatedAt() const;

                    /**
                     * 设置<p>Creation time (Unix timestamp).</p>
                     * @param _createdAt <p>Creation time (Unix timestamp).</p>
                     * 
                     */
                    void SetCreatedAt(const int64_t& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>Update time (Unix timestamp).</p>
                     * @return UpdatedAt <p>Update time (Unix timestamp).</p>
                     * 
                     */
                    int64_t GetUpdatedAt() const;

                    /**
                     * 设置<p>Update time (Unix timestamp).</p>
                     * @param _updatedAt <p>Update time (Unix timestamp).</p>
                     * 
                     */
                    void SetUpdatedAt(const int64_t& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>Project ID.</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Project name.</p>
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>Project description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Project term base.</p>
                     */
                    std::vector<TermBase> m_termBase;
                    bool m_termBaseHasBeenSet;

                    /**
                     * <p>List of characters.</p>
                     */
                    std::vector<Speakers> m_speakers;
                    bool m_speakersHasBeenSet;

                    /**
                     * <p>Creation time (Unix timestamp).</p>
                     */
                    int64_t m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>Update time (Unix timestamp).</p>
                     */
                    int64_t m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROJECT_H_
