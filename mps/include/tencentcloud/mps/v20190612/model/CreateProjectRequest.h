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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPROJECTREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateProject request structure.
                */
                class CreateProjectRequest : public AbstractModel
                {
                public:
                    CreateProjectRequest();
                    ~CreateProjectRequest() = default;
                    std::string ToJsonString() const;


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

                private:

                    /**
                     * <p>Project name.</p>
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>Project term base.</p>
                     */
                    std::vector<TermBase> m_termBase;
                    bool m_termBaseHasBeenSet;

                    /**
                     * <p>Project description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>List of characters.</p>
                     */
                    std::vector<Speakers> m_speakers;
                    bool m_speakersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPROJECTREQUEST_H_
