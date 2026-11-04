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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TOOL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ToolBilling.h>
#include <tencentcloud/adp/v20260520/model/ToolConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Tool
                */
                class Tool : public AbstractModel
                {
                public:
                    Tool();
                    ~Tool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tool billing information</p>
                     * @return Billing <p>Tool billing information</p>
                     * 
                     */
                    ToolBilling GetBilling() const;

                    /**
                     * 设置<p>Tool billing information</p>
                     * @param _billing <p>Tool billing information</p>
                     * 
                     */
                    void SetBilling(const ToolBilling& _billing);

                    /**
                     * 判断参数 Billing 是否已赋值
                     * @return Billing 是否已赋值
                     * 
                     */
                    bool BillingHasBeenSet() const;

                    /**
                     * 获取<p>Tool call count</p><p>Unit: count</p>
                     * @return CallCount <p>Tool call count</p><p>Unit: count</p>
                     * 
                     */
                    uint64_t GetCallCount() const;

                    /**
                     * 设置<p>Tool call count</p><p>Unit: count</p>
                     * @param _callCount <p>Tool call count</p><p>Unit: count</p>
                     * 
                     */
                    void SetCallCount(const uint64_t& _callCount);

                    /**
                     * 判断参数 CallCount 是否已赋值
                     * @return CallCount 是否已赋值
                     * 
                     */
                    bool CallCountHasBeenSet() const;

                    /**
                     * 获取<p>Tool description</p>
                     * @return Description <p>Tool description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Tool description</p>
                     * @param _description <p>Tool description</p>
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
                     * 获取<p>Plug-in ID</p>
                     * @return PluginId <p>Plug-in ID</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>Plug-in ID</p>
                     * @param _pluginId <p>Plug-in ID</p>
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
                     * 获取<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>TOOL_ACCESS_MODE_UNKNOWN</td><td>0</td><td>Not specified</td></tr><tr><td>TOOL_ACCESS_MODE_READ_ONLY</td><td>1</td><td>Read-only</td></tr><tr><td>TOOL_ACCESS_MODE_WRITE_DELETE</td><td>2</td><td>Write/Delete</td></tr></tbody></table>
                     * @return ToolAccessMode <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>TOOL_ACCESS_MODE_UNKNOWN</td><td>0</td><td>Not specified</td></tr><tr><td>TOOL_ACCESS_MODE_READ_ONLY</td><td>1</td><td>Read-only</td></tr><tr><td>TOOL_ACCESS_MODE_WRITE_DELETE</td><td>2</td><td>Write/Delete</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetToolAccessMode() const;

                    /**
                     * 设置<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>TOOL_ACCESS_MODE_UNKNOWN</td><td>0</td><td>Not specified</td></tr><tr><td>TOOL_ACCESS_MODE_READ_ONLY</td><td>1</td><td>Read-only</td></tr><tr><td>TOOL_ACCESS_MODE_WRITE_DELETE</td><td>2</td><td>Write/Delete</td></tr></tbody></table>
                     * @param _toolAccessMode <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>TOOL_ACCESS_MODE_UNKNOWN</td><td>0</td><td>Not specified</td></tr><tr><td>TOOL_ACCESS_MODE_READ_ONLY</td><td>1</td><td>Read-only</td></tr><tr><td>TOOL_ACCESS_MODE_WRITE_DELETE</td><td>2</td><td>Write/Delete</td></tr></tbody></table>
                     * 
                     */
                    void SetToolAccessMode(const int64_t& _toolAccessMode);

                    /**
                     * 判断参数 ToolAccessMode 是否已赋值
                     * @return ToolAccessMode 是否已赋值
                     * 
                     */
                    bool ToolAccessModeHasBeenSet() const;

                    /**
                     * 获取<p>Tool configuration info</p>
                     * @return ToolConfig <p>Tool configuration info</p>
                     * 
                     */
                    ToolConfig GetToolConfig() const;

                    /**
                     * 设置<p>Tool configuration info</p>
                     * @param _toolConfig <p>Tool configuration info</p>
                     * 
                     */
                    void SetToolConfig(const ToolConfig& _toolConfig);

                    /**
                     * 判断参数 ToolConfig 是否已赋值
                     * @return ToolConfig 是否已赋值
                     * 
                     */
                    bool ToolConfigHasBeenSet() const;

                    /**
                     * 获取<p>Tool ID</p>
                     * @return ToolId <p>Tool ID</p>
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置<p>Tool ID</p>
                     * @param _toolId <p>Tool ID</p>
                     * 
                     */
                    void SetToolId(const std::string& _toolId);

                    /**
                     * 判断参数 ToolId 是否已赋值
                     * @return ToolId 是否已赋值
                     * 
                     */
                    bool ToolIdHasBeenSet() const;

                private:

                    /**
                     * <p>Tool billing information</p>
                     */
                    ToolBilling m_billing;
                    bool m_billingHasBeenSet;

                    /**
                     * <p>Tool call count</p><p>Unit: count</p>
                     */
                    uint64_t m_callCount;
                    bool m_callCountHasBeenSet;

                    /**
                     * <p>Tool description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Tool name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Plug-in ID</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>TOOL_ACCESS_MODE_UNKNOWN</td><td>0</td><td>Not specified</td></tr><tr><td>TOOL_ACCESS_MODE_READ_ONLY</td><td>1</td><td>Read-only</td></tr><tr><td>TOOL_ACCESS_MODE_WRITE_DELETE</td><td>2</td><td>Write/Delete</td></tr></tbody></table>
                     */
                    int64_t m_toolAccessMode;
                    bool m_toolAccessModeHasBeenSet;

                    /**
                     * <p>Tool configuration info</p>
                     */
                    ToolConfig m_toolConfig;
                    bool m_toolConfigHasBeenSet;

                    /**
                     * <p>Tool ID</p>
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TOOL_H_
