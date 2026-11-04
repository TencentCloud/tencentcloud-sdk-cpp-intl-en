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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MCPTOOLUIMETA_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MCPTOOLUIMETA_H_

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
                * Corresponds to the MCP protocol _meta.ui, defining the meta information of the interactive interface for MCP Apps tools (this period only consumes resourceUri and visibility).
                */
                class MCPToolUIMeta : public AbstractModel
                {
                public:
                    MCPToolUIMeta();
                    ~MCPToolUIMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Associated UI resource URI in UI:// scheme, format: UI://&lt;plug-in flag&gt;/&lt;resource name&gt;-&lt;version&gt;. This field is the entry to the interactive UI of MCP Apps. If not empty, it means the tool supports Apps (shown as "text + interactive UI"). If empty, it is a plain text tool. It is automatically identified and filled based on the tool sync result and does not support manual editing.</p>
                     * @return ResourceUri <p>Associated UI resource URI in UI:// scheme, format: UI://&lt;plug-in flag&gt;/&lt;resource name&gt;-&lt;version&gt;. This field is the entry to the interactive UI of MCP Apps. If not empty, it means the tool supports Apps (shown as "text + interactive UI"). If empty, it is a plain text tool. It is automatically identified and filled based on the tool sync result and does not support manual editing.</p>
                     * 
                     */
                    std::string GetResourceUri() const;

                    /**
                     * 设置<p>Associated UI resource URI in UI:// scheme, format: UI://&lt;plug-in flag&gt;/&lt;resource name&gt;-&lt;version&gt;. This field is the entry to the interactive UI of MCP Apps. If not empty, it means the tool supports Apps (shown as "text + interactive UI"). If empty, it is a plain text tool. It is automatically identified and filled based on the tool sync result and does not support manual editing.</p>
                     * @param _resourceUri <p>Associated UI resource URI in UI:// scheme, format: UI://&lt;plug-in flag&gt;/&lt;resource name&gt;-&lt;version&gt;. This field is the entry to the interactive UI of MCP Apps. If not empty, it means the tool supports Apps (shown as "text + interactive UI"). If empty, it is a plain text tool. It is automatically identified and filled based on the tool sync result and does not support manual editing.</p>
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
                     * 获取<p>Visibility declaration for tool callers. Value range: model (callable by models), app (callable by UI). Multiple selections allowed, for example [&quot;model&quot;,&quot;app&quot;]. Independent of ResourceUri (SEP-1865) and can exist independently. For example, a backend app-only tool is [&quot;app&quot;]. When ResourceUri is non-empty and this field is not specified, it is normalized to [&quot;model&quot;,&quot;app&quot;] by default. Existing non-Apps tools remain empty.</p><p>Enumeration values:</p><ul><li>model: Supports model</li><li>app: Supports app</li></ul>
                     * @return Visibility <p>Visibility declaration for tool callers. Value range: model (callable by models), app (callable by UI). Multiple selections allowed, for example [&quot;model&quot;,&quot;app&quot;]. Independent of ResourceUri (SEP-1865) and can exist independently. For example, a backend app-only tool is [&quot;app&quot;]. When ResourceUri is non-empty and this field is not specified, it is normalized to [&quot;model&quot;,&quot;app&quot;] by default. Existing non-Apps tools remain empty.</p><p>Enumeration values:</p><ul><li>model: Supports model</li><li>app: Supports app</li></ul>
                     * 
                     */
                    std::vector<std::string> GetVisibility() const;

                    /**
                     * 设置<p>Visibility declaration for tool callers. Value range: model (callable by models), app (callable by UI). Multiple selections allowed, for example [&quot;model&quot;,&quot;app&quot;]. Independent of ResourceUri (SEP-1865) and can exist independently. For example, a backend app-only tool is [&quot;app&quot;]. When ResourceUri is non-empty and this field is not specified, it is normalized to [&quot;model&quot;,&quot;app&quot;] by default. Existing non-Apps tools remain empty.</p><p>Enumeration values:</p><ul><li>model: Supports model</li><li>app: Supports app</li></ul>
                     * @param _visibility <p>Visibility declaration for tool callers. Value range: model (callable by models), app (callable by UI). Multiple selections allowed, for example [&quot;model&quot;,&quot;app&quot;]. Independent of ResourceUri (SEP-1865) and can exist independently. For example, a backend app-only tool is [&quot;app&quot;]. When ResourceUri is non-empty and this field is not specified, it is normalized to [&quot;model&quot;,&quot;app&quot;] by default. Existing non-Apps tools remain empty.</p><p>Enumeration values:</p><ul><li>model: Supports model</li><li>app: Supports app</li></ul>
                     * 
                     */
                    void SetVisibility(const std::vector<std::string>& _visibility);

                    /**
                     * 判断参数 Visibility 是否已赋值
                     * @return Visibility 是否已赋值
                     * 
                     */
                    bool VisibilityHasBeenSet() const;

                private:

                    /**
                     * <p>Associated UI resource URI in UI:// scheme, format: UI://&lt;plug-in flag&gt;/&lt;resource name&gt;-&lt;version&gt;. This field is the entry to the interactive UI of MCP Apps. If not empty, it means the tool supports Apps (shown as "text + interactive UI"). If empty, it is a plain text tool. It is automatically identified and filled based on the tool sync result and does not support manual editing.</p>
                     */
                    std::string m_resourceUri;
                    bool m_resourceUriHasBeenSet;

                    /**
                     * <p>Visibility declaration for tool callers. Value range: model (callable by models), app (callable by UI). Multiple selections allowed, for example [&quot;model&quot;,&quot;app&quot;]. Independent of ResourceUri (SEP-1865) and can exist independently. For example, a backend app-only tool is [&quot;app&quot;]. When ResourceUri is non-empty and this field is not specified, it is normalized to [&quot;model&quot;,&quot;app&quot;] by default. Existing non-Apps tools remain empty.</p><p>Enumeration values:</p><ul><li>model: Supports model</li><li>app: Supports app</li></ul>
                     */
                    std::vector<std::string> m_visibility;
                    bool m_visibilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MCPTOOLUIMETA_H_
