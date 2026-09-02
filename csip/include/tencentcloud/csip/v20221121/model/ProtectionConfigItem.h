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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_PROTECTIONCONFIGITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_PROTECTIONCONFIGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Recommended protection configuration item
                */
                class ProtectionConfigItem : public AbstractModel
                {
                public:
                    ProtectionConfigItem();
                    ~ProtectionConfigItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration item ID
                     * @return ConfigId Configuration item ID
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Configuration item ID
                     * @param _configId Configuration item ID
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取Configuration item name.
                     * @return ConfigName Configuration item name.
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置Configuration item name.
                     * @param _configName Configuration item name.
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取Configuration item description
                     * @return ConfigDescription Configuration item description
                     * 
                     */
                    std::string GetConfigDescription() const;

                    /**
                     * 设置Configuration item description
                     * @param _configDescription Configuration item description
                     * 
                     */
                    void SetConfigDescription(const std::string& _configDescription);

                    /**
                     * 判断参数 ConfigDescription 是否已赋值
                     * @return ConfigDescription 是否已赋值
                     * 
                     */
                    bool ConfigDescriptionHasBeenSet() const;

                    /**
                     * 获取Configuration group
Enumeration value:
auto_risk_discovery: auto risk discovery
auto-defense
client_hardening: Client hardening
                     * @return ConfigGroup Configuration group
Enumeration value:
auto_risk_discovery: auto risk discovery
auto-defense
client_hardening: Client hardening
                     * 
                     */
                    std::string GetConfigGroup() const;

                    /**
                     * 设置Configuration group
Enumeration value:
auto_risk_discovery: auto risk discovery
auto-defense
client_hardening: Client hardening
                     * @param _configGroup Configuration group
Enumeration value:
auto_risk_discovery: auto risk discovery
auto-defense
client_hardening: Client hardening
                     * 
                     */
                    void SetConfigGroup(const std::string& _configGroup);

                    /**
                     * 判断参数 ConfigGroup 是否已赋值
                     * @return ConfigGroup 是否已赋值
                     * 
                     */
                    bool ConfigGroupHasBeenSet() const;

                    /**
                     * 获取Whether enabled
                     * @return Enabled Whether enabled
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether enabled
                     * @param _enabled Whether enabled
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * Configuration item ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * Configuration item name.
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * Configuration item description
                     */
                    std::string m_configDescription;
                    bool m_configDescriptionHasBeenSet;

                    /**
                     * Configuration group
Enumeration value:
auto_risk_discovery: auto risk discovery
auto-defense
client_hardening: Client hardening
                     */
                    std::string m_configGroup;
                    bool m_configGroupHasBeenSet;

                    /**
                     * Whether enabled
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PROTECTIONCONFIGITEM_H_
