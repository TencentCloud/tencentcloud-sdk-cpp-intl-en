/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_PROJECTINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_PROJECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Content of the `ProjectInfo` parameter. `ProjectInfo` is an element of `Certificates` array which is returned by `DescribeCertificates`.
                */
                class ProjectInfo : public AbstractModel
                {
                public:
                    ProjectInfo();
                    ~ProjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectName Project name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _projectName Project name
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取UIN of the project creator
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectCreatorUin UIN of the project creator
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProjectCreatorUin() const;

                    /**
                     * 设置UIN of the project creator
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _projectCreatorUin UIN of the project creator
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectCreatorUin(const uint64_t& _projectCreatorUin);

                    /**
                     * 判断参数 ProjectCreatorUin 是否已赋值
                     * @return ProjectCreatorUin 是否已赋值
                     * 
                     */
                    bool ProjectCreatorUinHasBeenSet() const;

                    /**
                     * 获取Project creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectCreateTime Project creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectCreateTime() const;

                    /**
                     * 设置Project creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _projectCreateTime Project creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectCreateTime(const std::string& _projectCreateTime);

                    /**
                     * 判断参数 ProjectCreateTime 是否已赋值
                     * @return ProjectCreateTime 是否已赋值
                     * 
                     */
                    bool ProjectCreateTimeHasBeenSet() const;

                    /**
                     * 获取Brief project information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectResume Brief project information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectResume() const;

                    /**
                     * 设置Brief project information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _projectResume Brief project information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectResume(const std::string& _projectResume);

                    /**
                     * 判断参数 ProjectResume 是否已赋值
                     * @return ProjectResume 是否已赋值
                     * 
                     */
                    bool ProjectResumeHasBeenSet() const;

                    /**
                     * 获取User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OwnerUin User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _ownerUin User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * Project name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * UIN of the project creator
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_projectCreatorUin;
                    bool m_projectCreatorUinHasBeenSet;

                    /**
                     * Project creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectCreateTime;
                    bool m_projectCreateTimeHasBeenSet;

                    /**
                     * Brief project information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectResume;
                    bool m_projectResumeHasBeenSet;

                    /**
                     * User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_PROJECTINFO_H_
