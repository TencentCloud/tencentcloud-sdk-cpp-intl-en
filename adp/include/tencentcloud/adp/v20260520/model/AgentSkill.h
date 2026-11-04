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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSKILL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSKILL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Agent skill details
                */
                class AgentSkill : public AbstractModel
                {
                public:
                    AgentSkill();
                    ~AgentSkill() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>skillId</p>
                     * @return SkillId <p>skillId</p>
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置<p>skillId</p>
                     * @param _skillId <p>skillId</p>
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
                     * 获取<p>skill name</p>
                     * @return Name <p>skill name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>skill name</p>
                     * @param _name <p>skill name</p>
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
                     * 获取<p>Skill description</p>
                     * @return Description <p>Skill description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Skill description</p>
                     * @param _description <p>Skill description</p>
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
                     * 获取<p>Skill show description</p>
                     * @return DisplayDescription <p>Skill show description</p>
                     * 
                     */
                    std::string GetDisplayDescription() const;

                    /**
                     * 设置<p>Skill show description</p>
                     * @param _displayDescription <p>Skill show description</p>
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
                     * 获取<p>skill icon url</p>
                     * @return IconUrl <p>skill icon url</p>
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置<p>skill icon url</p>
                     * @param _iconUrl <p>skill icon url</p>
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
                     * 获取<p>Skill source</p>
                     * @return SourceType <p>Skill source</p>
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置<p>Skill source</p>
                     * @param _sourceType <p>Skill source</p>
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Skill version</p>
                     * @return CurrentVersion <p>Skill version</p>
                     * 
                     */
                    std::string GetCurrentVersion() const;

                    /**
                     * 设置<p>Skill version</p>
                     * @param _currentVersion <p>Skill version</p>
                     * 
                     */
                    void SetCurrentVersion(const std::string& _currentVersion);

                    /**
                     * 判断参数 CurrentVersion 是否已赋值
                     * @return CurrentVersion 是否已赋值
                     * 
                     */
                    bool CurrentVersionHasBeenSet() const;

                private:

                    /**
                     * <p>skillId</p>
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * <p>skill name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Skill description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>skill display name</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>Skill show description</p>
                     */
                    std::string m_displayDescription;
                    bool m_displayDescriptionHasBeenSet;

                    /**
                     * <p>skill icon url</p>
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * <p>Skill source</p>
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>Skill version</p>
                     */
                    std::string m_currentVersion;
                    bool m_currentVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSKILL_H_
