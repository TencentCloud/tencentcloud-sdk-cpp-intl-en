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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MCPTOOLMETA_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MCPTOOLMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/MCPToolUIMeta.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * _meta corresponding to the MCP protocol tool, carrying UI meta information for MCP Apps tools (only resourceUri is consumed in the current period)
                */
                class MCPToolMeta : public AbstractModel
                {
                public:
                    MCPToolMeta();
                    ~MCPToolMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>UI extended meta information of the tool, corresponding to _meta.UI in the MCP protocol, declaring the interactive UI resource (ResourceUri) associated with the tool and the caller Visibility. Returned only when the tool supports MCP Apps or declares Visibility; this field is empty for text tools. For details, see the MCPToolUIMeta structure definition.</p>
                     * @return Ui <p>UI extended meta information of the tool, corresponding to _meta.UI in the MCP protocol, declaring the interactive UI resource (ResourceUri) associated with the tool and the caller Visibility. Returned only when the tool supports MCP Apps or declares Visibility; this field is empty for text tools. For details, see the MCPToolUIMeta structure definition.</p>
                     * 
                     */
                    MCPToolUIMeta GetUi() const;

                    /**
                     * 设置<p>UI extended meta information of the tool, corresponding to _meta.UI in the MCP protocol, declaring the interactive UI resource (ResourceUri) associated with the tool and the caller Visibility. Returned only when the tool supports MCP Apps or declares Visibility; this field is empty for text tools. For details, see the MCPToolUIMeta structure definition.</p>
                     * @param _ui <p>UI extended meta information of the tool, corresponding to _meta.UI in the MCP protocol, declaring the interactive UI resource (ResourceUri) associated with the tool and the caller Visibility. Returned only when the tool supports MCP Apps or declares Visibility; this field is empty for text tools. For details, see the MCPToolUIMeta structure definition.</p>
                     * 
                     */
                    void SetUi(const MCPToolUIMeta& _ui);

                    /**
                     * 判断参数 Ui 是否已赋值
                     * @return Ui 是否已赋值
                     * 
                     */
                    bool UiHasBeenSet() const;

                private:

                    /**
                     * <p>UI extended meta information of the tool, corresponding to _meta.UI in the MCP protocol, declaring the interactive UI resource (ResourceUri) associated with the tool and the caller Visibility. Returned only when the tool supports MCP Apps or declares Visibility; this field is empty for text tools. For details, see the MCPToolUIMeta structure definition.</p>
                     */
                    MCPToolUIMeta m_ui;
                    bool m_uiHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MCPTOOLMETA_H_
