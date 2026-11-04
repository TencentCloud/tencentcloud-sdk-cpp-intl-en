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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentToolBasicConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent tool details
                */
                class AgentTool : public AbstractModel
                {
                public:
                    AgentTool();
                    ~AgentTool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tool configuration field</p>
                     * @return Config <p>Tool configuration field</p>
                     * 
                     */
                    AgentToolBasicConfig GetConfig() const;

                    /**
                     * 设置<p>Tool configuration field</p>
                     * @param _config <p>Tool configuration field</p>
                     * 
                     */
                    void SetConfig(const AgentToolBasicConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>Tool name</p>
                     * @return Name <p>Tool name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Tool name</p>
                     * @param _name <p>Tool name</p>
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
                     * 获取<p>Tool status</p><p>Enumeration values:</p><ul><li>1: available</li><li>2: unavailable</li><li>3: invalid</li></ul>
                     * @return Status <p>Tool status</p><p>Enumeration values:</p><ul><li>1: available</li><li>2: unavailable</li><li>3: invalid</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Tool status</p><p>Enumeration values:</p><ul><li>1: available</li><li>2: unavailable</li><li>3: invalid</li></ul>
                     * @param _status <p>Tool status</p><p>Enumeration values:</p><ul><li>1: available</li><li>2: unavailable</li><li>3: invalid</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Calling method</p><p>Enumeration values:</p><ul><li>0: Non-streaming</li><li>1: Streaming</li></ul>
                     * @return StreamMode <p>Calling method</p><p>Enumeration values:</p><ul><li>0: Non-streaming</li><li>1: Streaming</li></ul>
                     * 
                     */
                    int64_t GetStreamMode() const;

                    /**
                     * 设置<p>Calling method</p><p>Enumeration values:</p><ul><li>0: Non-streaming</li><li>1: Streaming</li></ul>
                     * @param _streamMode <p>Calling method</p><p>Enumeration values:</p><ul><li>0: Non-streaming</li><li>1: Streaming</li></ul>
                     * 
                     */
                    void SetStreamMode(const int64_t& _streamMode);

                    /**
                     * 判断参数 StreamMode 是否已赋值
                     * @return StreamMode 是否已赋值
                     * 
                     */
                    bool StreamModeHasBeenSet() const;

                    /**
                     * 获取<p>Tool access mode</p><p>Enumeration values:</p><ul><li>0: Not specified</li><li>1: Read-only</li><li>2: Write/Delete</li></ul>
                     * @return ToolAccessMode <p>Tool access mode</p><p>Enumeration values:</p><ul><li>0: Not specified</li><li>1: Read-only</li><li>2: Write/Delete</li></ul>
                     * 
                     */
                    int64_t GetToolAccessMode() const;

                    /**
                     * 设置<p>Tool access mode</p><p>Enumeration values:</p><ul><li>0: Not specified</li><li>1: Read-only</li><li>2: Write/Delete</li></ul>
                     * @param _toolAccessMode <p>Tool access mode</p><p>Enumeration values:</p><ul><li>0: Not specified</li><li>1: Read-only</li><li>2: Write/Delete</li></ul>
                     * 
                     */
                    void SetToolAccessMode(const int64_t& _toolAccessMode);

                    /**
                     * 判断参数 ToolAccessMode 是否已赋值
                     * @return ToolAccessMode 是否已赋值
                     * 
                     */
                    bool ToolAccessModeHasBeenSet() const;

                private:

                    /**
                     * <p>Tool configuration field</p>
                     */
                    AgentToolBasicConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>Tool name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Tool status</p><p>Enumeration values:</p><ul><li>1: available</li><li>2: unavailable</li><li>3: invalid</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Calling method</p><p>Enumeration values:</p><ul><li>0: Non-streaming</li><li>1: Streaming</li></ul>
                     */
                    int64_t m_streamMode;
                    bool m_streamModeHasBeenSet;

                    /**
                     * <p>Tool access mode</p><p>Enumeration values:</p><ul><li>0: Not specified</li><li>1: Read-only</li><li>2: Write/Delete</li></ul>
                     */
                    int64_t m_toolAccessMode;
                    bool m_toolAccessModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOL_H_
