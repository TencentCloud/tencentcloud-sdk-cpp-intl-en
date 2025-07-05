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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEPROJECTREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
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
                     * 获取Project name, up to 24 characters.
                     * @return ProjectName Project name, up to 24 characters.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name, up to 24 characters.
                     * @param _projectName Project name, up to 24 characters.
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
                     * 获取Project description, up to 120 characters, default is empty if not filled.
                     * @return ProjectDescription Project description, up to 120 characters, default is empty if not filled.
                     * 
                     */
                    std::string GetProjectDescription() const;

                    /**
                     * 设置Project description, up to 120 characters, default is empty if not filled.
                     * @param _projectDescription Project description, up to 120 characters, default is empty if not filled.
                     * 
                     */
                    void SetProjectDescription(const std::string& _projectDescription);

                    /**
                     * 判断参数 ProjectDescription 是否已赋值
                     * @return ProjectDescription 是否已赋值
                     * 
                     */
                    bool ProjectDescriptionHasBeenSet() const;

                    /**
                     * 获取Permission mode, black for blocklist, white for allowlist. defaults to black if not specified.
                     * @return PolicyMode Permission mode, black for blocklist, white for allowlist. defaults to black if not specified.
                     * 
                     */
                    std::string GetPolicyMode() const;

                    /**
                     * 设置Permission mode, black for blocklist, white for allowlist. defaults to black if not specified.
                     * @param _policyMode Permission mode, black for blocklist, white for allowlist. defaults to black if not specified.
                     * 
                     */
                    void SetPolicyMode(const std::string& _policyMode);

                    /**
                     * 判断参数 PolicyMode 是否已赋值
                     * @return PolicyMode 是否已赋值
                     * 
                     */
                    bool PolicyModeHasBeenSet() const;

                private:

                    /**
                     * Project name, up to 24 characters.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Project description, up to 120 characters, default is empty if not filled.
                     */
                    std::string m_projectDescription;
                    bool m_projectDescriptionHasBeenSet;

                    /**
                     * Permission mode, black for blocklist, white for allowlist. defaults to black if not specified.
                     */
                    std::string m_policyMode;
                    bool m_policyModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEPROJECTREQUEST_H_
