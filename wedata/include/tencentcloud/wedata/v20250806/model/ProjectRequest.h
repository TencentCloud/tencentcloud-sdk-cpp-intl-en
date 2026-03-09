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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTREQUEST_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * This API is used to obtain project information.
                */
                class ProjectRequest : public AbstractModel
                {
                public:
                    ProjectRequest();
                    ~ProjectRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project id, english name, starts with a letter, can contain letters, numbers, and underscores, and must not exceed 32 characters.
                     * @return ProjectName Project id, english name, starts with a letter, can contain letters, numbers, and underscores, and must not exceed 32 characters.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project id, english name, starts with a letter, can contain letters, numbers, and underscores, and must not exceed 32 characters.
                     * @param _projectName Project id, english name, starts with a letter, can contain letters, numbers, and underscores, and must not exceed 32 characters.
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
                     * 获取The project display name can be a chinese name, starts with a letter, and can contain letters, numbers, and underscores, with a maximum of 32 characters.
                     * @return DisplayName The project display name can be a chinese name, starts with a letter, and can contain letters, numbers, and underscores, with a maximum of 32 characters.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置The project display name can be a chinese name, starts with a letter, and can contain letters, numbers, and underscores, with a maximum of 32 characters.
                     * @param _displayName The project display name can be a chinese name, starts with a letter, and can contain letters, numbers, and underscores, with a maximum of 32 characters.
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
                     * 获取Project mode, SIMPLE (default): SIMPLE mode STANDARD: STANDARD mode.
                     * @return ProjectModel Project mode, SIMPLE (default): SIMPLE mode STANDARD: STANDARD mode.
                     * 
                     */
                    std::string GetProjectModel() const;

                    /**
                     * 设置Project mode, SIMPLE (default): SIMPLE mode STANDARD: STANDARD mode.
                     * @param _projectModel Project mode, SIMPLE (default): SIMPLE mode STANDARD: STANDARD mode.
                     * 
                     */
                    void SetProjectModel(const std::string& _projectModel);

                    /**
                     * 判断参数 ProjectModel 是否已赋值
                     * @return ProjectModel 是否已赋值
                     * 
                     */
                    bool ProjectModelHasBeenSet() const;

                private:

                    /**
                     * Project id, english name, starts with a letter, can contain letters, numbers, and underscores, and must not exceed 32 characters.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * The project display name can be a chinese name, starts with a letter, and can contain letters, numbers, and underscores, with a maximum of 32 characters.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Project mode, SIMPLE (default): SIMPLE mode STANDARD: STANDARD mode.
                     */
                    std::string m_projectModel;
                    bool m_projectModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTREQUEST_H_
