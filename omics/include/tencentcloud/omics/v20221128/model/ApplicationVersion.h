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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_APPLICATIONVERSION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_APPLICATIONVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Application version
                */
                class ApplicationVersion : public AbstractModel
                {
                public:
                    ApplicationVersion();
                    ~ApplicationVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Version type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Version type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Version type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Version type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationVersionId Version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationVersionId() const;

                    /**
                     * 设置Version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationVersionId Version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationVersionId(const std::string& _applicationVersionId);

                    /**
                     * 判断参数 ApplicationVersionId 是否已赋值
                     * @return ApplicationVersionId 是否已赋值
                     * 
                     */
                    bool ApplicationVersionIdHasBeenSet() const;

                    /**
                     * 获取Release name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Release name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Release name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Release name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Release description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Release description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Release description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Release description
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
                     * 获取Entry file
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Entrypoint Entry file
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEntrypoint() const;

                    /**
                     * 设置Entry file
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _entrypoint Entry file
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEntrypoint(const std::string& _entrypoint);

                    /**
                     * 判断参数 Entrypoint 是否已赋值
                     * @return Entrypoint 是否已赋值
                     * 
                     */
                    bool EntrypointHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
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
                     * 获取Creator name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatorName Creator name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatorName() const;

                    /**
                     * 设置Creator name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _creatorName Creator name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatorName(const std::string& _creatorName);

                    /**
                     * 判断参数 CreatorName 是否已赋值
                     * @return CreatorName 是否已赋值
                     * 
                     */
                    bool CreatorNameHasBeenSet() const;

                    /**
                     * 获取Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatorId Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _creatorId Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取Git information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GitInfo Git information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetGitInfo() const;

                    /**
                     * 设置Git information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gitInfo Git information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetGitInfo(const std::string& _gitInfo);

                    /**
                     * 判断参数 GitInfo 是否已赋值
                     * @return GitInfo 是否已赋值
                     * @deprecated
                     */
                    bool GitInfoHasBeenSet() const;

                private:

                    /**
                     * Version type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationVersionId;
                    bool m_applicationVersionIdHasBeenSet;

                    /**
                     * Release name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Release description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Entry file
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_entrypoint;
                    bool m_entrypointHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Creator name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creatorName;
                    bool m_creatorNameHasBeenSet;

                    /**
                     * Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * Git information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gitInfo;
                    bool m_gitInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_APPLICATIONVERSION_H_
