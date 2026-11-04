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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMCPAPP_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMCPAPP_H_

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
                * MCP App content for reconstructing an interactive app from a historical session
                */
                class ConversationMcpApp : public AbstractModel
                {
                public:
                    ConversationMcpApp();
                    ~ConversationMcpApp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Capacity boundary: A single request is read-only for resources belonging to this plugin</p>
                     * @return PluginId <p>Capacity boundary: A single request is read-only for resources belonging to this plugin</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>Capacity boundary: A single request is read-only for resources belonging to this plugin</p>
                     * @param _pluginId <p>Capacity boundary: A single request is read-only for resources belonging to this plugin</p>
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
                     * 获取<p>ui:// resource, based on which the frontend calls ReadMCPResource to pull HTML</p>
                     * @return ResourceUri <p>ui:// resource, based on which the frontend calls ReadMCPResource to pull HTML</p>
                     * 
                     */
                    std::string GetResourceUri() const;

                    /**
                     * 设置<p>ui:// resource, based on which the frontend calls ReadMCPResource to pull HTML</p>
                     * @param _resourceUri <p>ui:// resource, based on which the frontend calls ReadMCPResource to pull HTML</p>
                     * 
                     */
                    void SetResourceUri(const std::string& _resourceUri);

                    /**
                     * 判断参数 ResourceUri 是否已赋值
                     * @return ResourceUri 是否已赋值
                     * 
                     */
                    bool ResourceUriHasBeenSet() const;

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
                     * 获取<p>JSON: The complete original CallToolResult for replay when rebuilding historical sessions</p>
                     * @return ToolResult <p>JSON: The complete original CallToolResult for replay when rebuilding historical sessions</p>
                     * 
                     */
                    std::string GetToolResult() const;

                    /**
                     * 设置<p>JSON: The complete original CallToolResult for replay when rebuilding historical sessions</p>
                     * @param _toolResult <p>JSON: The complete original CallToolResult for replay when rebuilding historical sessions</p>
                     * 
                     */
                    void SetToolResult(const std::string& _toolResult);

                    /**
                     * 判断参数 ToolResult 是否已赋值
                     * @return ToolResult 是否已赋值
                     * 
                     */
                    bool ToolResultHasBeenSet() const;

                private:

                    /**
                     * <p>Capacity boundary: A single request is read-only for resources belonging to this plugin</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>ui:// resource, based on which the frontend calls ReadMCPResource to pull HTML</p>
                     */
                    std::string m_resourceUri;
                    bool m_resourceUriHasBeenSet;

                    /**
                     * <p>thread on the agent-exec side</p>
                     */
                    std::string m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * <p>JSON: The complete original CallToolResult for replay when rebuilding historical sessions</p>
                     */
                    std::string m_toolResult;
                    bool m_toolResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMCPAPP_H_
