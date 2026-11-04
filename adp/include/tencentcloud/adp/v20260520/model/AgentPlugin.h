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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGIN_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentPluginConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Plugin information of the Agent
                */
                class AgentPlugin : public AbstractModel
                {
                public:
                    AgentPlugin();
                    ~AgentPlugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Basic plug-in configuration</p>
                     * @return Config <p>Basic plug-in configuration</p>
                     * 
                     */
                    AgentPluginConfig GetConfig() const;

                    /**
                     * 设置<p>Basic plug-in configuration</p>
                     * @param _config <p>Basic plug-in configuration</p>
                     * 
                     */
                    void SetConfig(const AgentPluginConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>Plugin name.</p>
                     * @return Name <p>Plugin name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Plugin name.</p>
                     * @param _name <p>Plugin name.</p>
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
                     * 获取<p>Plug-in icon url</p>
                     * @return IconUrl <p>Plug-in icon url</p>
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置<p>Plug-in icon url</p>
                     * @param _iconUrl <p>Plug-in icon url</p>
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取<p>Plugin description</p>
                     * @return Description <p>Plugin description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Plugin description</p>
                     * @param _description <p>Plugin description</p>
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
                     * 获取<p>Plug-in product type</p><p>Enumeration values:</p><ul><li>0: ordinary plug-in</li><li>1: connector plug-in</li></ul>
                     * @return PluginClass <p>Plug-in product type</p><p>Enumeration values:</p><ul><li>0: ordinary plug-in</li><li>1: connector plug-in</li></ul>
                     * 
                     */
                    int64_t GetPluginClass() const;

                    /**
                     * 设置<p>Plug-in product type</p><p>Enumeration values:</p><ul><li>0: ordinary plug-in</li><li>1: connector plug-in</li></ul>
                     * @param _pluginClass <p>Plug-in product type</p><p>Enumeration values:</p><ul><li>0: ordinary plug-in</li><li>1: connector plug-in</li></ul>
                     * 
                     */
                    void SetPluginClass(const int64_t& _pluginClass);

                    /**
                     * 判断参数 PluginClass 是否已赋值
                     * @return PluginClass 是否已赋值
                     * 
                     */
                    bool PluginClassHasBeenSet() const;

                    /**
                     * 获取<p>Plug-in status</p><p>Enumeration values:</p><ul><li>0: unknown</li><li>1: available</li><li>2: unavailable</li></ul>
                     * @return Status <p>Plug-in status</p><p>Enumeration values:</p><ul><li>0: unknown</li><li>1: available</li><li>2: unavailable</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Plug-in status</p><p>Enumeration values:</p><ul><li>0: unknown</li><li>1: available</li><li>2: unavailable</li></ul>
                     * @param _status <p>Plug-in status</p><p>Enumeration values:</p><ul><li>0: unknown</li><li>1: available</li><li>2: unavailable</li></ul>
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
                     * 获取<p>Plug-in authentication configuration status</p><p>Enumeration values:</p><ul><li>0: No authorization required</li><li>1: Unconfigured</li><li>2: Configured</li></ul>
                     * @return AuthConfigStatus <p>Plug-in authentication configuration status</p><p>Enumeration values:</p><ul><li>0: No authorization required</li><li>1: Unconfigured</li><li>2: Configured</li></ul>
                     * 
                     */
                    int64_t GetAuthConfigStatus() const;

                    /**
                     * 设置<p>Plug-in authentication configuration status</p><p>Enumeration values:</p><ul><li>0: No authorization required</li><li>1: Unconfigured</li><li>2: Configured</li></ul>
                     * @param _authConfigStatus <p>Plug-in authentication configuration status</p><p>Enumeration values:</p><ul><li>0: No authorization required</li><li>1: Unconfigured</li><li>2: Configured</li></ul>
                     * 
                     */
                    void SetAuthConfigStatus(const int64_t& _authConfigStatus);

                    /**
                     * 判断参数 AuthConfigStatus 是否已赋值
                     * @return AuthConfigStatus 是否已赋值
                     * 
                     */
                    bool AuthConfigStatusHasBeenSet() const;

                private:

                    /**
                     * <p>Basic plug-in configuration</p>
                     */
                    AgentPluginConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>Plugin name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Plug-in icon url</p>
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * <p>Plugin description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Plug-in product type</p><p>Enumeration values:</p><ul><li>0: ordinary plug-in</li><li>1: connector plug-in</li></ul>
                     */
                    int64_t m_pluginClass;
                    bool m_pluginClassHasBeenSet;

                    /**
                     * <p>Plug-in status</p><p>Enumeration values:</p><ul><li>0: unknown</li><li>1: available</li><li>2: unavailable</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Plug-in authentication configuration status</p><p>Enumeration values:</p><ul><li>0: No authorization required</li><li>1: Unconfigured</li><li>2: Configured</li></ul>
                     */
                    int64_t m_authConfigStatus;
                    bool m_authConfigStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGIN_H_
