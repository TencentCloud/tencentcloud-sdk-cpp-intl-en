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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSPEC_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentProfile.h>
#include <tencentcloud/adp/v20260520/model/AgentModelConfig.h>
#include <tencentcloud/adp/v20260520/model/AgentToolConfig.h>
#include <tencentcloud/adp/v20260520/model/AgentPluginConfig.h>
#include <tencentcloud/adp/v20260520/model/AgentSkillConfig.h>
#include <tencentcloud/adp/v20260520/model/AgentAdvancedConfig.h>
#include <tencentcloud/adp/v20260520/model/AgentExternalToolConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Editable configuration of the Agent
                */
                class AgentSpec : public AbstractModel
                {
                public:
                    AgentSpec();
                    ~AgentSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Agent Basic Configuration</p>
                     * @return Profile <p>Agent Basic Configuration</p>
                     * 
                     */
                    AgentProfile GetProfile() const;

                    /**
                     * 设置<p>Agent Basic Configuration</p>
                     * @param _profile <p>Agent Basic Configuration</p>
                     * 
                     */
                    void SetProfile(const AgentProfile& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取<p>System prompt</p>
                     * @return Instructions <p>System prompt</p>
                     * 
                     */
                    std::string GetInstructions() const;

                    /**
                     * 设置<p>System prompt</p>
                     * @param _instructions <p>System prompt</p>
                     * 
                     */
                    void SetInstructions(const std::string& _instructions);

                    /**
                     * 判断参数 Instructions 是否已赋值
                     * @return Instructions 是否已赋值
                     * 
                     */
                    bool InstructionsHasBeenSet() const;

                    /**
                     * 获取<p>Primary model configuration</p>
                     * @return Model <p>Primary model configuration</p>
                     * 
                     */
                    AgentModelConfig GetModel() const;

                    /**
                     * 设置<p>Primary model configuration</p>
                     * @param _model <p>Primary model configuration</p>
                     * 
                     */
                    void SetModel(const AgentModelConfig& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>Tool information</p>
                     * @return ToolList <p>Tool information</p>
                     * 
                     */
                    std::vector<AgentToolConfig> GetToolList() const;

                    /**
                     * 设置<p>Tool information</p>
                     * @param _toolList <p>Tool information</p>
                     * 
                     */
                    void SetToolList(const std::vector<AgentToolConfig>& _toolList);

                    /**
                     * 判断参数 ToolList 是否已赋值
                     * @return ToolList 是否已赋值
                     * 
                     */
                    bool ToolListHasBeenSet() const;

                    /**
                     * 获取<p>Plugin information.</p>
                     * @return PluginList <p>Plugin information.</p>
                     * 
                     */
                    std::vector<AgentPluginConfig> GetPluginList() const;

                    /**
                     * 设置<p>Plugin information.</p>
                     * @param _pluginList <p>Plugin information.</p>
                     * 
                     */
                    void SetPluginList(const std::vector<AgentPluginConfig>& _pluginList);

                    /**
                     * 判断参数 PluginList 是否已赋值
                     * @return PluginList 是否已赋值
                     * 
                     */
                    bool PluginListHasBeenSet() const;

                    /**
                     * 获取<p>Skill information.</p>
                     * @return SkillList <p>Skill information.</p>
                     * 
                     */
                    std::vector<AgentSkillConfig> GetSkillList() const;

                    /**
                     * 设置<p>Skill information.</p>
                     * @param _skillList <p>Skill information.</p>
                     * 
                     */
                    void SetSkillList(const std::vector<AgentSkillConfig>& _skillList);

                    /**
                     * 判断参数 SkillList 是否已赋值
                     * @return SkillList 是否已赋值
                     * 
                     */
                    bool SkillListHasBeenSet() const;

                    /**
                     * 获取<p>Advanced settings</p>
                     * @return AdvancedConfig <p>Advanced settings</p>
                     * 
                     */
                    AgentAdvancedConfig GetAdvancedConfig() const;

                    /**
                     * 设置<p>Advanced settings</p>
                     * @param _advancedConfig <p>Advanced settings</p>
                     * 
                     */
                    void SetAdvancedConfig(const AgentAdvancedConfig& _advancedConfig);

                    /**
                     * 判断参数 AdvancedConfig 是否已赋值
                     * @return AdvancedConfig 是否已赋值
                     * 
                     */
                    bool AdvancedConfigHasBeenSet() const;

                    /**
                     * 获取<p>List of Function Tools executed by the caller</p><p>Input parameter limit: only available in client user state Agent scenarios. B-end configuration state Agent ignores this field and</p>
                     * @return ExternalToolList <p>List of Function Tools executed by the caller</p><p>Input parameter limit: only available in client user state Agent scenarios. B-end configuration state Agent ignores this field and</p>
                     * 
                     */
                    std::vector<AgentExternalToolConfig> GetExternalToolList() const;

                    /**
                     * 设置<p>List of Function Tools executed by the caller</p><p>Input parameter limit: only available in client user state Agent scenarios. B-end configuration state Agent ignores this field and</p>
                     * @param _externalToolList <p>List of Function Tools executed by the caller</p><p>Input parameter limit: only available in client user state Agent scenarios. B-end configuration state Agent ignores this field and</p>
                     * 
                     */
                    void SetExternalToolList(const std::vector<AgentExternalToolConfig>& _externalToolList);

                    /**
                     * 判断参数 ExternalToolList 是否已赋值
                     * @return ExternalToolList 是否已赋值
                     * 
                     */
                    bool ExternalToolListHasBeenSet() const;

                private:

                    /**
                     * <p>Agent Basic Configuration</p>
                     */
                    AgentProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * <p>System prompt</p>
                     */
                    std::string m_instructions;
                    bool m_instructionsHasBeenSet;

                    /**
                     * <p>Primary model configuration</p>
                     */
                    AgentModelConfig m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>Tool information</p>
                     */
                    std::vector<AgentToolConfig> m_toolList;
                    bool m_toolListHasBeenSet;

                    /**
                     * <p>Plugin information.</p>
                     */
                    std::vector<AgentPluginConfig> m_pluginList;
                    bool m_pluginListHasBeenSet;

                    /**
                     * <p>Skill information.</p>
                     */
                    std::vector<AgentSkillConfig> m_skillList;
                    bool m_skillListHasBeenSet;

                    /**
                     * <p>Advanced settings</p>
                     */
                    AgentAdvancedConfig m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                    /**
                     * <p>List of Function Tools executed by the caller</p><p>Input parameter limit: only available in client user state Agent scenarios. B-end configuration state Agent ignores this field and</p>
                     */
                    std::vector<AgentExternalToolConfig> m_externalToolList;
                    bool m_externalToolListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSPEC_H_
