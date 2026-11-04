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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPROFILE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPROFILE_H_

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
                * Basic configuration of the Agent
                */
                class AgentProfile : public AbstractModel
                {
                public:
                    AgentProfile();
                    ~AgentProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Agent Name</p>
                     * @return Name <p>Agent Name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Agent Name</p>
                     * @param _name <p>Agent Name</p>
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
                     * 获取<p>Icon URL</p>
                     * @return IconUrl <p>Icon URL</p>
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置<p>Icon URL</p>
                     * @param _iconUrl <p>Icon URL</p>
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
                     * 获取<p>Agent role: 0=primary / 1=secondary</p>
                     * @return Role <p>Agent role: 0=primary / 1=secondary</p>
                     * 
                     */
                    int64_t GetRole() const;

                    /**
                     * 设置<p>Agent role: 0=primary / 1=secondary</p>
                     * @param _role <p>Agent role: 0=primary / 1=secondary</p>
                     * 
                     */
                    void SetRole(const int64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取<p>Agent description</p>
                     * @return Description <p>Agent description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Agent description</p>
                     * @param _description <p>Agent description</p>
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
                     * 获取<p>Application name.</p>
                     * @return AppName <p>Application name.</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>Application name.</p>
                     * @param _appName <p>Application name.</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>Developer</p>
                     * @return Developer <p>Developer</p>
                     * 
                     */
                    std::string GetDeveloper() const;

                    /**
                     * 设置<p>Developer</p>
                     * @param _developer <p>Developer</p>
                     * 
                     */
                    void SetDeveloper(const std::string& _developer);

                    /**
                     * 判断参数 Developer 是否已赋值
                     * @return Developer 是否已赋值
                     * 
                     */
                    bool DeveloperHasBeenSet() const;

                    /**
                     * 获取<p>Primary AgentId, read-only, cannot be updated through API modification</p>
                     * @return ParentAgentId <p>Primary AgentId, read-only, cannot be updated through API modification</p>
                     * 
                     */
                    std::string GetParentAgentId() const;

                    /**
                     * 设置<p>Primary AgentId, read-only, cannot be updated through API modification</p>
                     * @param _parentAgentId <p>Primary AgentId, read-only, cannot be updated through API modification</p>
                     * 
                     */
                    void SetParentAgentId(const std::string& _parentAgentId);

                    /**
                     * 判断参数 ParentAgentId 是否已赋值
                     * @return ParentAgentId 是否已赋值
                     * 
                     */
                    bool ParentAgentIdHasBeenSet() const;

                private:

                    /**
                     * <p>Agent Name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Icon URL</p>
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * <p>Agent role: 0=primary / 1=secondary</p>
                     */
                    int64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>Agent description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Application name.</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>Developer</p>
                     */
                    std::string m_developer;
                    bool m_developerHasBeenSet;

                    /**
                     * <p>Primary AgentId, read-only, cannot be updated through API modification</p>
                     */
                    std::string m_parentAgentId;
                    bool m_parentAgentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPROFILE_H_
