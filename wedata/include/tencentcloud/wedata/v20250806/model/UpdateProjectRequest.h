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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEPROJECTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEPROJECTREQUEST_H_

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
                * UpdateProject request structure.
                */
                class UpdateProjectRequest : public AbstractModel
                {
                public:
                    UpdateProjectRequest();
                    ~UpdateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Modify the project ID.
                     * @return ProjectId Modify the project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Modify the project ID.
                     * @param _projectId Modify the project ID.
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
                     * 获取Project display name can be a chinese name and must be unique within the tenant scope.
                     * @return DisplayName Project display name can be a chinese name and must be unique within the tenant scope.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Project display name can be a chinese name and must be unique within the tenant scope.
                     * @param _displayName Project display name can be a chinese name and must be unique within the tenant scope.
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Description Remarks
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Remarks
                     * @param _description Remarks
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
                     * 获取Project leader id.
                     * @return ProjectOwnerUin Project leader id.
                     * 
                     */
                    std::string GetProjectOwnerUin() const;

                    /**
                     * 设置Project leader id.
                     * @param _projectOwnerUin Project leader id.
                     * 
                     */
                    void SetProjectOwnerUin(const std::string& _projectOwnerUin);

                    /**
                     * 判断参数 ProjectOwnerUin 是否已赋值
                     * @return ProjectOwnerUin 是否已赋值
                     * 
                     */
                    bool ProjectOwnerUinHasBeenSet() const;

                private:

                    /**
                     * Modify the project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project display name can be a chinese name and must be unique within the tenant scope.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Project leader id.
                     */
                    std::string m_projectOwnerUin;
                    bool m_projectOwnerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEPROJECTREQUEST_H_
