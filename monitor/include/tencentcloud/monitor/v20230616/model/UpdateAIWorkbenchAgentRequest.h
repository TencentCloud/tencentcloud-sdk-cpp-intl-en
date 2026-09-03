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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_UPDATEAIWORKBENCHAGENTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_UPDATEAIWORKBENCHAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/InstructionConfig.h>
#include <tencentcloud/monitor/v20230616/model/EnvVar.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * UpdateAIWorkbenchAgent request structure.
                */
                class UpdateAIWorkbenchAgentRequest : public AbstractModel
                {
                public:
                    UpdateAIWorkbenchAgentRequest();
                    ~UpdateAIWorkbenchAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Agent ID</p>
                     * @return AgentId <p>Agent ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Agent ID</p>
                     * @param _agentId <p>Agent ID</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent name</p>
                     * @return Name <p>Agent name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Agent name</p>
                     * @param _name <p>Agent name</p>
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
                     * 获取<p>Agent Category.</p>
                     * @return Category <p>Agent Category.</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>Agent Category.</p>
                     * @param _category <p>Agent Category.</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>Agent Tag.</p>
                     * @return Tags <p>Agent Tag.</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>Agent Tag.</p>
                     * @param _tags <p>Agent Tag.</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Agent prompt</p>
                     * @return Instruction <p>Agent prompt</p>
                     * 
                     */
                    InstructionConfig GetInstruction() const;

                    /**
                     * 设置<p>Agent prompt</p>
                     * @param _instruction <p>Agent prompt</p>
                     * 
                     */
                    void SetInstruction(const InstructionConfig& _instruction);

                    /**
                     * 判断参数 Instruction 是否已赋值
                     * @return Instruction 是否已赋值
                     * 
                     */
                    bool InstructionHasBeenSet() const;

                    /**
                     * 获取<p>List of associated skill IDs.</p>
                     * @return SkillIds <p>List of associated skill IDs.</p>
                     * 
                     */
                    std::vector<std::string> GetSkillIds() const;

                    /**
                     * 设置<p>List of associated skill IDs.</p>
                     * @param _skillIds <p>List of associated skill IDs.</p>
                     * 
                     */
                    void SetSkillIds(const std::vector<std::string>& _skillIds);

                    /**
                     * 判断参数 SkillIds 是否已赋值
                     * @return SkillIds 是否已赋值
                     * 
                     */
                    bool SkillIdsHasBeenSet() const;

                    /**
                     * 获取<p>Source</p>
                     * @return Source <p>Source</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>Source</p>
                     * @param _source <p>Source</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>Status.</p>
                     * @return Status <p>Status.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status.</p>
                     * @param _status <p>Status.</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>ID of the associated resource map</p>
                     * @return ResourceMapId <p>ID of the associated resource map</p>
                     * 
                     */
                    std::string GetResourceMapId() const;

                    /**
                     * 设置<p>ID of the associated resource map</p>
                     * @param _resourceMapId <p>ID of the associated resource map</p>
                     * 
                     */
                    void SetResourceMapId(const std::string& _resourceMapId);

                    /**
                     * 判断参数 ResourceMapId 是否已赋值
                     * @return ResourceMapId 是否已赋值
                     * 
                     */
                    bool ResourceMapIdHasBeenSet() const;

                    /**
                     * 获取<p>Associated mcp</p>
                     * @return MCPIds <p>Associated mcp</p>
                     * 
                     */
                    std::vector<std::string> GetMCPIds() const;

                    /**
                     * 设置<p>Associated mcp</p>
                     * @param _mCPIds <p>Associated mcp</p>
                     * 
                     */
                    void SetMCPIds(const std::vector<std::string>& _mCPIds);

                    /**
                     * 判断参数 MCPIds 是否已赋值
                     * @return MCPIds 是否已赋值
                     * 
                     */
                    bool MCPIdsHasBeenSet() const;

                    /**
                     * 获取<p>Environment variables required by the agent at runtime</p>
                     * @return EnvVars <p>Environment variables required by the agent at runtime</p>
                     * 
                     */
                    std::vector<EnvVar> GetEnvVars() const;

                    /**
                     * 设置<p>Environment variables required by the agent at runtime</p>
                     * @param _envVars <p>Environment variables required by the agent at runtime</p>
                     * 
                     */
                    void SetEnvVars(const std::vector<EnvVar>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                private:

                    /**
                     * <p>Agent ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>Agent name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Agent description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Agent Category.</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>Agent Tag.</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Agent prompt</p>
                     */
                    InstructionConfig m_instruction;
                    bool m_instructionHasBeenSet;

                    /**
                     * <p>List of associated skill IDs.</p>
                     */
                    std::vector<std::string> m_skillIds;
                    bool m_skillIdsHasBeenSet;

                    /**
                     * <p>Source</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>Status.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>ID of the associated resource map</p>
                     */
                    std::string m_resourceMapId;
                    bool m_resourceMapIdHasBeenSet;

                    /**
                     * <p>Associated mcp</p>
                     */
                    std::vector<std::string> m_mCPIds;
                    bool m_mCPIdsHasBeenSet;

                    /**
                     * <p>Environment variables required by the agent at runtime</p>
                     */
                    std::vector<EnvVar> m_envVars;
                    bool m_envVarsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_UPDATEAIWORKBENCHAGENTREQUEST_H_
