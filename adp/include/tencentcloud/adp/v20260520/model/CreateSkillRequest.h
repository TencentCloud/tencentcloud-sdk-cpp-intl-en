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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateSkill request structure.
                */
                class CreateSkillRequest : public AbstractModel
                {
                public:
                    CreateSkillRequest();
                    ~CreateSkillRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Skill creation method, required; only allow</p><p>Enumeration values:</p><ul><li>1: FILE_UPLOAD (file upload)</li><li>3: AIGC (AIGC generation)</li></ul>
                     * @return CreateType <p>Skill creation method, required; only allow</p><p>Enumeration values:</p><ul><li>1: FILE_UPLOAD (file upload)</li><li>3: AIGC (AIGC generation)</li></ul>
                     * 
                     */
                    int64_t GetCreateType() const;

                    /**
                     * 设置<p>Skill creation method, required; only allow</p><p>Enumeration values:</p><ul><li>1: FILE_UPLOAD (file upload)</li><li>3: AIGC (AIGC generation)</li></ul>
                     * @param _createType <p>Skill creation method, required; only allow</p><p>Enumeration values:</p><ul><li>1: FILE_UPLOAD (file upload)</li><li>3: AIGC (AIGC generation)</li></ul>
                     * 
                     */
                    void SetCreateType(const int64_t& _createType);

                    /**
                     * 判断参数 CreateType 是否已赋值
                     * @return CreateType 是否已赋值
                     * 
                     */
                    bool CreateTypeHasBeenSet() const;

                    /**
                     * 获取<p>skill package file address (zip); required for both FILE_UPLOAD and AIGC</p>
                     * @return FileUrl <p>skill package file address (zip); required for both FILE_UPLOAD and AIGC</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>skill package file address (zip); required for both FILE_UPLOAD and AIGC</p>
                     * @param _fileUrl <p>skill package file address (zip); required for both FILE_UPLOAD and AIGC</p>
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取<p>Workspace ID</p>
                     * @return SpaceId <p>Workspace ID</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Workspace ID</p>
                     * @param _spaceId <p>Workspace ID</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>skill show description</p>
                     * @return DisplayDescription <p>skill show description</p>
                     * 
                     */
                    std::string GetDisplayDescription() const;

                    /**
                     * 设置<p>skill show description</p>
                     * @param _displayDescription <p>skill show description</p>
                     * 
                     */
                    void SetDisplayDescription(const std::string& _displayDescription);

                    /**
                     * 判断参数 DisplayDescription 是否已赋值
                     * @return DisplayDescription 是否已赋值
                     * 
                     */
                    bool DisplayDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>skill display name</p>
                     * @return DisplayName <p>skill display name</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>skill display name</p>
                     * @param _displayName <p>skill display name</p>
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
                     * 获取<p>Icon address</p>
                     * @return IconUrl <p>Icon address</p>
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置<p>Icon address</p>
                     * @param _iconUrl <p>Icon address</p>
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取<p>Unique business identifier name of the skill (unique within the same enterprise); if not passed, it will be parsed from the skill package</p>
                     * @return Name <p>Unique business identifier name of the skill (unique within the same enterprise); if not passed, it will be parsed from the skill package</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Unique business identifier name of the skill (unique within the same enterprise); if not passed, it will be parsed from the skill package</p>
                     * @param _name <p>Unique business identifier name of the skill (unique within the same enterprise); if not passed, it will be parsed from the skill package</p>
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
                     * 获取<p>Version number</p>
                     * @return SkillVersion <p>Version number</p>
                     * 
                     */
                    std::string GetSkillVersion() const;

                    /**
                     * 设置<p>Version number</p>
                     * @param _skillVersion <p>Version number</p>
                     * 
                     */
                    void SetSkillVersion(const std::string& _skillVersion);

                    /**
                     * 判断参数 SkillVersion 是否已赋值
                     * @return SkillVersion 是否已赋值
                     * 
                     */
                    bool SkillVersionHasBeenSet() const;

                    /**
                     * 获取<p>Version change description</p>
                     * @return UpdateDescription <p>Version change description</p>
                     * 
                     */
                    std::string GetUpdateDescription() const;

                    /**
                     * 设置<p>Version change description</p>
                     * @param _updateDescription <p>Version change description</p>
                     * 
                     */
                    void SetUpdateDescription(const std::string& _updateDescription);

                    /**
                     * 判断参数 UpdateDescription 是否已赋值
                     * @return UpdateDescription 是否已赋值
                     * 
                     */
                    bool UpdateDescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Skill creation method, required; only allow</p><p>Enumeration values:</p><ul><li>1: FILE_UPLOAD (file upload)</li><li>3: AIGC (AIGC generation)</li></ul>
                     */
                    int64_t m_createType;
                    bool m_createTypeHasBeenSet;

                    /**
                     * <p>skill package file address (zip); required for both FILE_UPLOAD and AIGC</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>Workspace ID</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>skill show description</p>
                     */
                    std::string m_displayDescription;
                    bool m_displayDescriptionHasBeenSet;

                    /**
                     * <p>skill display name</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>Icon address</p>
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * <p>Unique business identifier name of the skill (unique within the same enterprise); if not passed, it will be parsed from the skill package</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Version number</p>
                     */
                    std::string m_skillVersion;
                    bool m_skillVersionHasBeenSet;

                    /**
                     * <p>Version change description</p>
                     */
                    std::string m_updateDescription;
                    bool m_updateDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLREQUEST_H_
