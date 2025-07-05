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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TCRREPOSITORYINFO_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TCRREPOSITORYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * TCR image repository information
                */
                class TcrRepositoryInfo : public AbstractModel
                {
                public:
                    TcrRepositoryInfo();
                    ~TcrRepositoryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Repository name
                     * @return Name Repository name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Repository name
                     * @param _name Repository name
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
                     * 获取Namespace name
                     * @return Namespace Namespace name
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace name
                     * @param _namespace Namespace name
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Creation time, such as `2006-01-02 15:04:05.999999999 -0700 MST`
                     * @return CreationTime Creation time, such as `2006-01-02 15:04:05.999999999 -0700 MST`
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Creation time, such as `2006-01-02 15:04:05.999999999 -0700 MST`
                     * @param _creationTime Creation time, such as `2006-01-02 15:04:05.999999999 -0700 MST`
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取Whether to make public
                     * @return Public Whether to make public
                     * 
                     */
                    bool GetPublic() const;

                    /**
                     * 设置Whether to make public
                     * @param _public Whether to make public
                     * 
                     */
                    void SetPublic(const bool& _public);

                    /**
                     * 判断参数 Public 是否已赋值
                     * @return Public 是否已赋值
                     * 
                     */
                    bool PublicHasBeenSet() const;

                    /**
                     * 获取Detailed repository description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Detailed repository description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Detailed repository description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Detailed repository description
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
                     * 获取Brief description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BriefDescription Brief description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBriefDescription() const;

                    /**
                     * 设置Brief description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _briefDescription Brief description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBriefDescription(const std::string& _briefDescription);

                    /**
                     * 判断参数 BriefDescription 是否已赋值
                     * @return BriefDescription 是否已赋值
                     * 
                     */
                    bool BriefDescriptionHasBeenSet() const;

                    /**
                     * 获取Update time, such as `2006-01-02 15:04:05.999999999 -0700 MST`
                     * @return UpdateTime Update time, such as `2006-01-02 15:04:05.999999999 -0700 MST`
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time, such as `2006-01-02 15:04:05.999999999 -0700 MST`
                     * @param _updateTime Update time, such as `2006-01-02 15:04:05.999999999 -0700 MST`
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Repository name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Namespace name
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Creation time, such as `2006-01-02 15:04:05.999999999 -0700 MST`
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Whether to make public
                     */
                    bool m_public;
                    bool m_publicHasBeenSet;

                    /**
                     * Detailed repository description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Brief description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_briefDescription;
                    bool m_briefDescriptionHasBeenSet;

                    /**
                     * Update time, such as `2006-01-02 15:04:05.999999999 -0700 MST`
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TCRREPOSITORYINFO_H_
