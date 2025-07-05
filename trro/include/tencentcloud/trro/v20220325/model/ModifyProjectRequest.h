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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPROJECTREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPROJECTREQUEST_H_

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
                * ModifyProject request structure.
                */
                class ModifyProjectRequest : public AbstractModel
                {
                public:
                    ModifyProjectRequest();
                    ~ModifyProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project id of the target project to modify.
                     * @return ProjectId Project id of the target project to modify.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project id of the target project to modify.
                     * @param _projectId Project id of the target project to modify.
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
                     * 获取Modified project name, leave blank if not modifying.
                     * @return ProjectName Modified project name, leave blank if not modifying.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Modified project name, leave blank if not modifying.
                     * @param _projectName Modified project name, leave blank if not modifying.
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
                     * 获取Modified project description, leave blank if not modifying.
                     * @return ProjectDescription Modified project description, leave blank if not modifying.
                     * 
                     */
                    std::string GetProjectDescription() const;

                    /**
                     * 设置Modified project description, leave blank if not modifying.
                     * @param _projectDescription Modified project description, leave blank if not modifying.
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
                     * 获取The modified permission mode, black for blocklist, white for allowlist. if not specified, no modification will be made.
                     * @return PolicyMode The modified permission mode, black for blocklist, white for allowlist. if not specified, no modification will be made.
                     * 
                     */
                    std::string GetPolicyMode() const;

                    /**
                     * 设置The modified permission mode, black for blocklist, white for allowlist. if not specified, no modification will be made.
                     * @param _policyMode The modified permission mode, black for blocklist, white for allowlist. if not specified, no modification will be made.
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
                     * Project id of the target project to modify.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Modified project name, leave blank if not modifying.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Modified project description, leave blank if not modifying.
                     */
                    std::string m_projectDescription;
                    bool m_projectDescriptionHasBeenSet;

                    /**
                     * The modified permission mode, black for blocklist, white for allowlist. if not specified, no modification will be made.
                     */
                    std::string m_policyMode;
                    bool m_policyModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPROJECTREQUEST_H_
