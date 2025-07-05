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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAPLUGIN_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAPLUGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/PluginToolReqParam.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Information of application-associated plug-in.
                */
                class KnowledgeQaPlugin : public AbstractModel
                {
                public:
                    KnowledgeQaPlugin();
                    ~KnowledgeQaPlugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Plugin ID.
                     * @return PluginId Plugin ID.
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置Plugin ID.
                     * @param _pluginId Plugin ID.
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取Plugin name.
                     * @return PluginName Plugin name.
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置Plugin name.
                     * @param _pluginName Plugin name.
                     * 
                     */
                    void SetPluginName(const std::string& _pluginName);

                    /**
                     * 判断参数 PluginName 是否已赋值
                     * @return PluginName 是否已赋值
                     * 
                     */
                    bool PluginNameHasBeenSet() const;

                    /**
                     * 获取Plugin icon.
                     * @return PluginIcon Plugin icon.
                     * 
                     */
                    std::string GetPluginIcon() const;

                    /**
                     * 设置Plugin icon.
                     * @param _pluginIcon Plugin icon.
                     * 
                     */
                    void SetPluginIcon(const std::string& _pluginIcon);

                    /**
                     * 判断参数 PluginIcon 是否已赋值
                     * @return PluginIcon 是否已赋值
                     * 
                     */
                    bool PluginIconHasBeenSet() const;

                    /**
                     * 获取Tool ID.
                     * @return ToolId Tool ID.
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置Tool ID.
                     * @param _toolId Tool ID.
                     * 
                     */
                    void SetToolId(const std::string& _toolId);

                    /**
                     * 判断参数 ToolId 是否已赋值
                     * @return ToolId 是否已赋值
                     * 
                     */
                    bool ToolIdHasBeenSet() const;

                    /**
                     * 获取Tool name.
                     * @return ToolName Tool name.
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置Tool name.
                     * @param _toolName Tool name.
                     * 
                     */
                    void SetToolName(const std::string& _toolName);

                    /**
                     * 判断参数 ToolName 是否已赋值
                     * @return ToolName 是否已赋值
                     * 
                     */
                    bool ToolNameHasBeenSet() const;

                    /**
                     * 获取Tool description.
                     * @return ToolDesc Tool description.
                     * 
                     */
                    std::string GetToolDesc() const;

                    /**
                     * 设置Tool description.
                     * @param _toolDesc Tool description.
                     * 
                     */
                    void SetToolDesc(const std::string& _toolDesc);

                    /**
                     * 判断参数 ToolDesc 是否已赋值
                     * @return ToolDesc 是否已赋值
                     * 
                     */
                    bool ToolDescHasBeenSet() const;

                    /**
                     * 获取Tool input parameter.
                     * @return Inputs Tool input parameter.
                     * 
                     */
                    std::vector<PluginToolReqParam> GetInputs() const;

                    /**
                     * 设置Tool input parameter.
                     * @param _inputs Tool input parameter.
                     * 
                     */
                    void SetInputs(const std::vector<PluginToolReqParam>& _inputs);

                    /**
                     * 判断参数 Inputs 是否已赋值
                     * @return Inputs 是否已赋值
                     * 
                     */
                    bool InputsHasBeenSet() const;

                    /**
                     * 获取Whether the plugin is bound to the knowledge library.
                     * @return IsBindingKnowledge Whether the plugin is bound to the knowledge library.
                     * 
                     */
                    bool GetIsBindingKnowledge() const;

                    /**
                     * 设置Whether the plugin is bound to the knowledge library.
                     * @param _isBindingKnowledge Whether the plugin is bound to the knowledge library.
                     * 
                     */
                    void SetIsBindingKnowledge(const bool& _isBindingKnowledge);

                    /**
                     * 判断参数 IsBindingKnowledge 是否已赋值
                     * @return IsBindingKnowledge 是否已赋值
                     * 
                     */
                    bool IsBindingKnowledgeHasBeenSet() const;

                private:

                    /**
                     * Plugin ID.
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * Plugin name.
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * Plugin icon.
                     */
                    std::string m_pluginIcon;
                    bool m_pluginIconHasBeenSet;

                    /**
                     * Tool ID.
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * Tool name.
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * Tool description.
                     */
                    std::string m_toolDesc;
                    bool m_toolDescHasBeenSet;

                    /**
                     * Tool input parameter.
                     */
                    std::vector<PluginToolReqParam> m_inputs;
                    bool m_inputsHasBeenSet;

                    /**
                     * Whether the plugin is bound to the knowledge library.
                     */
                    bool m_isBindingKnowledge;
                    bool m_isBindingKnowledgeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAPLUGIN_H_
