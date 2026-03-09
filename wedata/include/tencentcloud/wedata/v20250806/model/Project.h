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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECT_H_

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
                class Project : public AbstractModel
                {
                public:
                    Project();
                    ~Project() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Project id, english name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectName Project id, english name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project id, english name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectName Project id, english name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Project display name, can be chinese name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DisplayName Project display name, can be chinese name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Project display name, can be chinese name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _displayName Project display name, can be chinese name.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Remarks
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Project creator id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatorUin Project creator id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置Project creator id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _creatorUin Project creator id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取Project responsible person id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectOwnerUin Project responsible person id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectOwnerUin() const;

                    /**
                     * 设置Project responsible person id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectOwnerUin Project responsible person id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectOwnerUin(const std::string& _projectOwnerUin);

                    /**
                     * 判断参数 ProjectOwnerUin 是否已赋值
                     * @return ProjectOwnerUin 是否已赋值
                     * 
                     */
                    bool ProjectOwnerUinHasBeenSet() const;

                    /**
                     * 获取Project status: 0: disabled, 1: enabled, -3: disabled, 2: enabled.
                     * @return Status Project status: 0: disabled, 1: enabled, -3: disabled, 2: enabled.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Project status: 0: disabled, 1: enabled, -3: disabled, 2: enabled.
                     * @param _status Project status: 0: disabled, 1: enabled, -3: disabled, 2: enabled.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Project mode, SIMPLE: SIMPLE mode STANDARD: STANDARD mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectModel Project mode, SIMPLE: SIMPLE mode STANDARD: STANDARD mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectModel() const;

                    /**
                     * 设置Project mode, SIMPLE: SIMPLE mode STANDARD: STANDARD mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectModel Project mode, SIMPLE: SIMPLE mode STANDARD: STANDARD mode.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project id, english name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Project display name, can be chinese name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Project creator id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * Project responsible person id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectOwnerUin;
                    bool m_projectOwnerUinHasBeenSet;

                    /**
                     * Project status: 0: disabled, 1: enabled, -3: disabled, 2: enabled.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Project mode, SIMPLE: SIMPLE mode STANDARD: STANDARD mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectModel;
                    bool m_projectModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECT_H_
