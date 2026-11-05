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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_READMCPRESOURCEREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_READMCPRESOURCEREQUEST_H_

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
                * ReadMCPResource request structure.
                */
                class ReadMCPResourceRequest : public AbstractModel
                {
                public:
                    ReadMCPResourceRequest();
                    ~ReadMCPResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Capacity boundary: one request can only read the resources belonging to this plugin</p>
                     * @return PluginId <p>Capacity boundary: one request can only read the resources belonging to this plugin</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>Capacity boundary: one request can only read the resources belonging to this plugin</p>
                     * @param _pluginId <p>Capacity boundary: one request can only read the resources belonging to this plugin</p>
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
                     * 获取<p>Resource URI, source: _meta.ui.resourceUri of the tool</p>
                     * @return Uri <p>Resource URI, source: _meta.ui.resourceUri of the tool</p>
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置<p>Resource URI, source: _meta.ui.resourceUri of the tool</p>
                     * @param _uri <p>Resource URI, source: _meta.ui.resourceUri of the tool</p>
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                private:

                    /**
                     * <p>Capacity boundary: one request can only read the resources belonging to this plugin</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>thread on the agent-exec side</p>
                     */
                    std::string m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * <p>Resource URI, source: _meta.ui.resourceUri of the tool</p>
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_READMCPRESOURCEREQUEST_H_
