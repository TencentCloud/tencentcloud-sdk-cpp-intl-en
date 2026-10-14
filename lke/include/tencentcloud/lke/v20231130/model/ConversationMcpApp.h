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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CONVERSATIONMCPAPP_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CONVERSATIONMCPAPP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 
                */
                class ConversationMcpApp : public AbstractModel
                {
                public:
                    ConversationMcpApp();
                    ~ConversationMcpApp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return PluginId 
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置
                     * @param _pluginId 
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
                     * 获取
                     * @return ResourceUri 
                     * 
                     */
                    std::string GetResourceUri() const;

                    /**
                     * 设置
                     * @param _resourceUri 
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
                     * 获取
                     * @return ThreadId 
                     * 
                     */
                    std::string GetThreadId() const;

                    /**
                     * 设置
                     * @param _threadId 
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
                     * 获取
                     * @return ToolResult 
                     * 
                     */
                    std::string GetToolResult() const;

                    /**
                     * 设置
                     * @param _toolResult 
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
                     * 
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_resourceUri;
                    bool m_resourceUriHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_toolResult;
                    bool m_toolResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CONVERSATIONMCPAPP_H_
