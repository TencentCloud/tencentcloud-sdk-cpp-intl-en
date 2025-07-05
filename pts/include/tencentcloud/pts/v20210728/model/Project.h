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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_PROJECT_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_PROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/TagSpec.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Project.
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
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Project name.
                     * @return Name Project name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Project name.
                     * @param _name Project name.
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
                     * 获取Project description.

Note: This field may return null, indicating that no valid value is found.
                     * @return Description Project description.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Project description.

Note: This field may return null, indicating that no valid value is found.
                     * @param _description Project description.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Tags.

Note: This field may return null, indicating that no valid value is found.
                     * @return Tags Tags.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<TagSpec> GetTags() const;

                    /**
                     * 设置Tags.

Note: This field may return null, indicating that no valid value is found.
                     * @param _tags Tags.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetTags(const std::vector<TagSpec>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Project status.
                     * @return Status Project status.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Project status.
                     * @param _status Project status.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Create time.
                     * @return CreatedAt Create time.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Create time.
                     * @param _createdAt Create time.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdatedAt Update time.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time.
                     * @param _updatedAt Update time.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取App ID.
                     * @return AppId App ID.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置App ID.
                     * @param _appId App ID.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Uin.
                     * @return Uin Uin.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Uin.
                     * @param _uin Uin.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub account uin.
                     * @return SubAccountUin Sub account uin.
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置Sub account uin.
                     * @param _subAccountUin Sub account uin.
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Project description.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Tags.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<TagSpec> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Project status.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Create time.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * App ID.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Uin.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub account uin.
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_PROJECT_H_
