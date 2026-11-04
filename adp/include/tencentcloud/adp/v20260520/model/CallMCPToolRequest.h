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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CALLMCPTOOLREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CALLMCPTOOLREQUEST_H_

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
                * CallMCPTool request structure.
                */
                class CallMCPToolRequest : public AbstractModel
                {
                public:
                    CallMCPToolRequest();
                    ~CallMCPToolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Capacity boundary: one request can only call the tool on this plugin</p>
                     * @return PluginId <p>Capacity boundary: one request can only call the tool on this plugin</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>Capacity boundary: one request can only call the tool on this plugin</p>
                     * @param _pluginId <p>Capacity boundary: one request can only call the tool on this plugin</p>
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
                     * 获取<p>thread on the agent-exec side</p>
                     * @return ThreadId <p>thread on the agent-exec side</p>
                     * 
                     */
                    std::string GetThreadId() const;

                    /**
                     * 设置<p>thread on the agent-exec side</p>
                     * @param _threadId <p>thread on the agent-exec side</p>
                     * 
                     */
                    void SetThreadId(const std::string& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     * 
                     */
                    bool ThreadIdHasBeenSet() const;

                    /**
                     * 获取<p>Tool Name, used for locating the tool_id in the configured tool_list of the plugin</p>
                     * @return ToolName <p>Tool Name, used for locating the tool_id in the configured tool_list of the plugin</p>
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置<p>Tool Name, used for locating the tool_id in the configured tool_list of the plugin</p>
                     * @param _toolName <p>Tool Name, used for locating the tool_id in the configured tool_list of the plugin</p>
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
                     * 获取<p>JSON: Original tool input parameters, passed through to the MCP Server as-is</p>
                     * @return Arguments <p>JSON: Original tool input parameters, passed through to the MCP Server as-is</p>
                     * 
                     */
                    std::string GetArguments() const;

                    /**
                     * 设置<p>JSON: Original tool input parameters, passed through to the MCP Server as-is</p>
                     * @param _arguments <p>JSON: Original tool input parameters, passed through to the MCP Server as-is</p>
                     * 
                     */
                    void SetArguments(const std::string& _arguments);

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                private:

                    /**
                     * <p>Capacity boundary: one request can only call the tool on this plugin</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>thread on the agent-exec side</p>
                     */
                    std::string m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * <p>Tool Name, used for locating the tool_id in the configured tool_list of the plugin</p>
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * <p>JSON: Original tool input parameters, passed through to the MCP Server as-is</p>
                     */
                    std::string m_arguments;
                    bool m_argumentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CALLMCPTOOLREQUEST_H_
