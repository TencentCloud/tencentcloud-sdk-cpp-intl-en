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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTBASEINFOOPSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTBASEINFOOPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Basic Information
                */
                class ProjectBaseInfoOpsRequest : public AbstractModel
                {
                public:
                    ProjectBaseInfoOpsRequest();
                    ~ProjectBaseInfoOpsRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Project Identifier
                     * @return ProjectIdent Project Identifier
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置Project Identifier
                     * @param _projectIdent Project Identifier
                     * 
                     */
                    void SetProjectIdent(const std::string& _projectIdent);

                    /**
                     * 判断参数 ProjectIdent 是否已赋值
                     * @return ProjectIdent 是否已赋值
                     * 
                     */
                    bool ProjectIdentHasBeenSet() const;

                    /**
                     * 获取Project name
                     * @return ProjectName Project name
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name
                     * @param _projectName Project name
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
                     * 获取Whether admin
                     * @return IsAdmin Whether admin
                     * 
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置Whether admin
                     * @param _isAdmin Whether admin
                     * 
                     */
                    void SetIsAdmin(const bool& _isAdmin);

                    /**
                     * 判断参数 IsAdmin 是否已赋值
                     * @return IsAdmin 是否已赋值
                     * 
                     */
                    bool IsAdminHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project Identifier
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * Project name
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Whether admin
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTBASEINFOOPSREQUEST_H_
