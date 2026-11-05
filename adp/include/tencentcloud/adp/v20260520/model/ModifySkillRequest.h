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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYSKILLREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYSKILLREQUEST_H_

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
                * ModifySkill request structure.
                */
                class ModifySkillRequest : public AbstractModel
                {
                public:
                    ModifySkillRequest();
                    ~ModifySkillRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>SkillId</p>
                     * @return SkillId <p>SkillId</p>
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置<p>SkillId</p>
                     * @param _skillId <p>SkillId</p>
                     * 
                     */
                    void SetSkillId(const std::string& _skillId);

                    /**
                     * 判断参数 SkillId 是否已赋值
                     * @return SkillId 是否已赋值
                     * 
                     */
                    bool SkillIdHasBeenSet() const;

                    /**
                     * 获取<p>Space ID</p>
                     * @return SpaceId <p>Space ID</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Space ID</p>
                     * @param _spaceId <p>Space ID</p>
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
                     * 获取<p>skill description</p>
                     * @return DisplayDescription <p>skill description</p>
                     * 
                     */
                    std::string GetDisplayDescription() const;

                    /**
                     * 设置<p>skill description</p>
                     * @param _displayDescription <p>skill description</p>
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
                     * 获取<p>skill name</p>
                     * @return DisplayName <p>skill name</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>skill name</p>
                     * @param _displayName <p>skill name</p>
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
                     * 获取<p>skill package file address (zip); importing it triggers new version generation. It must be imported together with SkillVersion and UpdateDescription</p>
                     * @return FileUrl <p>skill package file address (zip); importing it triggers new version generation. It must be imported together with SkillVersion and UpdateDescription</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>skill package file address (zip); importing it triggers new version generation. It must be imported together with SkillVersion and UpdateDescription</p>
                     * @param _fileUrl <p>skill package file address (zip); importing it triggers new version generation. It must be imported together with SkillVersion and UpdateDescription</p>
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
                     * 获取<p>skill version number (import together with FileUrl)</p>
                     * @return SkillVersion <p>skill version number (import together with FileUrl)</p>
                     * 
                     */
                    std::string GetSkillVersion() const;

                    /**
                     * 设置<p>skill version number (import together with FileUrl)</p>
                     * @param _skillVersion <p>skill version number (import together with FileUrl)</p>
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
                     * 获取<p>Version change description (import together with FileUrl).</p>
                     * @return UpdateDescription <p>Version change description (import together with FileUrl).</p>
                     * 
                     */
                    std::string GetUpdateDescription() const;

                    /**
                     * 设置<p>Version change description (import together with FileUrl).</p>
                     * @param _updateDescription <p>Version change description (import together with FileUrl).</p>
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
                     * <p>SkillId</p>
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * <p>Space ID</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>skill description</p>
                     */
                    std::string m_displayDescription;
                    bool m_displayDescriptionHasBeenSet;

                    /**
                     * <p>skill name</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>skill package file address (zip); importing it triggers new version generation. It must be imported together with SkillVersion and UpdateDescription</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>Icon address</p>
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * <p>skill version number (import together with FileUrl)</p>
                     */
                    std::string m_skillVersion;
                    bool m_skillVersionHasBeenSet;

                    /**
                     * <p>Version change description (import together with FileUrl).</p>
                     */
                    std::string m_updateDescription;
                    bool m_updateDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYSKILLREQUEST_H_
