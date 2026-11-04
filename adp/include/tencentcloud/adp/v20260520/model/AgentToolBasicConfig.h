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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLBASICCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLBASICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentToolInputParameter.h>
#include <tencentcloud/adp/v20260520/model/AgentToolOutputParameter.h>
#include <tencentcloud/adp/v20260520/model/AgentPluginParameter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Basic tool foundation configuration of the Agent
                */
                class AgentToolBasicConfig : public AbstractModel
                {
                public:
                    AgentToolBasicConfig();
                    ~AgentToolBasicConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>plugin_id</p>
                     * @return PluginId <p>plugin_id</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>plugin_id</p>
                     * @param _pluginId <p>plugin_id</p>
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
                     * 获取<p>Tool id</p>
                     * @return ToolId <p>Tool id</p>
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置<p>Tool id</p>
                     * @param _toolId <p>Tool id</p>
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
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
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
                     * 获取<p>Tool input parameter list</p>
                     * @return InputList <p>Tool input parameter list</p>
                     * 
                     */
                    std::vector<AgentToolInputParameter> GetInputList() const;

                    /**
                     * 设置<p>Tool input parameter list</p>
                     * @param _inputList <p>Tool input parameter list</p>
                     * 
                     */
                    void SetInputList(const std::vector<AgentToolInputParameter>& _inputList);

                    /**
                     * 判断参数 InputList 是否已赋值
                     * @return InputList 是否已赋值
                     * 
                     */
                    bool InputListHasBeenSet() const;

                    /**
                     * 获取<p>Tool output parameter list</p>
                     * @return OutputList <p>Tool output parameter list</p>
                     * 
                     */
                    std::vector<AgentToolOutputParameter> GetOutputList() const;

                    /**
                     * 设置<p>Tool output parameter list</p>
                     * @param _outputList <p>Tool output parameter list</p>
                     * 
                     */
                    void SetOutputList(const std::vector<AgentToolOutputParameter>& _outputList);

                    /**
                     * 判断参数 OutputList 是否已赋值
                     * @return OutputList 是否已赋值
                     * 
                     */
                    bool OutputListHasBeenSet() const;

                    /**
                     * 获取<p>Tool Header parameter list</p>
                     * @return HeaderParameterList <p>Tool Header parameter list</p>
                     * 
                     */
                    std::vector<AgentPluginParameter> GetHeaderParameterList() const;

                    /**
                     * 设置<p>Tool Header parameter list</p>
                     * @param _headerParameterList <p>Tool Header parameter list</p>
                     * 
                     */
                    void SetHeaderParameterList(const std::vector<AgentPluginParameter>& _headerParameterList);

                    /**
                     * 判断参数 HeaderParameterList 是否已赋值
                     * @return HeaderParameterList 是否已赋值
                     * 
                     */
                    bool HeaderParameterListHasBeenSet() const;

                    /**
                     * 获取<p>Tool Query parameter list</p>
                     * @return QueryParameterList <p>Tool Query parameter list</p>
                     * 
                     */
                    std::vector<AgentPluginParameter> GetQueryParameterList() const;

                    /**
                     * 设置<p>Tool Query parameter list</p>
                     * @param _queryParameterList <p>Tool Query parameter list</p>
                     * 
                     */
                    void SetQueryParameterList(const std::vector<AgentPluginParameter>& _queryParameterList);

                    /**
                     * 判断参数 QueryParameterList 是否已赋值
                     * @return QueryParameterList 是否已赋值
                     * 
                     */
                    bool QueryParameterListHasBeenSet() const;

                    /**
                     * 获取<p>Tool source: 0-comes from plug-in, 1-comes from workflow</p>
                     * @return ToolSource <p>Tool source: 0-comes from plug-in, 1-comes from workflow</p>
                     * 
                     */
                    uint64_t GetToolSource() const;

                    /**
                     * 设置<p>Tool source: 0-comes from plug-in, 1-comes from workflow</p>
                     * @param _toolSource <p>Tool source: 0-comes from plug-in, 1-comes from workflow</p>
                     * 
                     */
                    void SetToolSource(const uint64_t& _toolSource);

                    /**
                     * 判断参数 ToolSource 是否已赋值
                     * @return ToolSource 是否已赋值
                     * 
                     */
                    bool ToolSourceHasBeenSet() const;

                    /**
                     * 获取<p>Whether to disable</p>
                     * @return IsDisabled <p>Whether to disable</p>
                     * 
                     */
                    bool GetIsDisabled() const;

                    /**
                     * 设置<p>Whether to disable</p>
                     * @param _isDisabled <p>Whether to disable</p>
                     * 
                     */
                    void SetIsDisabled(const bool& _isDisabled);

                    /**
                     * 判断参数 IsDisabled 是否已赋值
                     * @return IsDisabled 是否已赋值
                     * 
                     */
                    bool IsDisabledHasBeenSet() const;

                private:

                    /**
                     * <p>plugin_id</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>Tool id</p>
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Tool input parameter list</p>
                     */
                    std::vector<AgentToolInputParameter> m_inputList;
                    bool m_inputListHasBeenSet;

                    /**
                     * <p>Tool output parameter list</p>
                     */
                    std::vector<AgentToolOutputParameter> m_outputList;
                    bool m_outputListHasBeenSet;

                    /**
                     * <p>Tool Header parameter list</p>
                     */
                    std::vector<AgentPluginParameter> m_headerParameterList;
                    bool m_headerParameterListHasBeenSet;

                    /**
                     * <p>Tool Query parameter list</p>
                     */
                    std::vector<AgentPluginParameter> m_queryParameterList;
                    bool m_queryParameterListHasBeenSet;

                    /**
                     * <p>Tool source: 0-comes from plug-in, 1-comes from workflow</p>
                     */
                    uint64_t m_toolSource;
                    bool m_toolSourceHasBeenSet;

                    /**
                     * <p>Whether to disable</p>
                     */
                    bool m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLBASICCONFIG_H_
