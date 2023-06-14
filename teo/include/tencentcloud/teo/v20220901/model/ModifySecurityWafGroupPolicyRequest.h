/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYWAFGROUPPOLICYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYWAFGROUPPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/WafRule.h>
#include <tencentcloud/teo/v20220901/model/AiRule.h>
#include <tencentcloud/teo/v20220901/model/WafGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifySecurityWafGroupPolicy request structure.
                */
                class ModifySecurityWafGroupPolicyRequest : public AbstractModel
                {
                public:
                    ModifySecurityWafGroupPolicyRequest();
                    ~ModifySecurityWafGroupPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The site ID. You must specify either "ZoneId+Entity" or "TemplateId".
                     * @return ZoneId The site ID. You must specify either "ZoneId+Entity" or "TemplateId".
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID. You must specify either "ZoneId+Entity" or "TemplateId".
                     * @param _zoneId The site ID. You must specify either "ZoneId+Entity" or "TemplateId".
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The subdomain name. You must specify either "ZoneId+Entity" or "TemplateId". 
                     * @return Entity The subdomain name. You must specify either "ZoneId+Entity" or "TemplateId". 
                     * 
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置The subdomain name. You must specify either "ZoneId+Entity" or "TemplateId". 
                     * @param _entity The subdomain name. You must specify either "ZoneId+Entity" or "TemplateId". 
                     * 
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     * 
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>If not specified, it defaults to the setting that was last configured.
                     * @return Switch Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>If not specified, it defaults to the setting that was last configured.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>If not specified, it defaults to the setting that was last configured.
                     * @param _switch Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>If not specified, it defaults to the setting that was last configured.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取The rule level. Values:
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
<li>`custom`: Custom</li>If not specified, it defaults to the setting that was last configured.
                     * @return Level The rule level. Values:
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
<li>`custom`: Custom</li>If not specified, it defaults to the setting that was last configured.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置The rule level. Values:
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
<li>`custom`: Custom</li>If not specified, it defaults to the setting that was last configured.
                     * @param _level The rule level. Values:
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
<li>`custom`: Custom</li>If not specified, it defaults to the setting that was last configured.
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取The rule action. Values:
<li>`block`: Block</li>
<li>`observe`: Observe</li>If not specified, it defaults to the setting that was last configured.
                     * @return Mode The rule action. Values:
<li>`block`: Block</li>
<li>`observe`: Observe</li>If not specified, it defaults to the setting that was last configured.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置The rule action. Values:
<li>`block`: Block</li>
<li>`observe`: Observe</li>If not specified, it defaults to the setting that was last configured.
                     * @param _mode The rule action. Values:
<li>`block`: Block</li>
<li>`observe`: Observe</li>If not specified, it defaults to the setting that was last configured.
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取The settings of the managed rule. If not specified, it defaults to the settings that were last configured.
                     * @return WafRules The settings of the managed rule. If not specified, it defaults to the settings that were last configured.
                     * 
                     */
                    WafRule GetWafRules() const;

                    /**
                     * 设置The settings of the managed rule. If not specified, it defaults to the settings that were last configured.
                     * @param _wafRules The settings of the managed rule. If not specified, it defaults to the settings that were last configured.
                     * 
                     */
                    void SetWafRules(const WafRule& _wafRules);

                    /**
                     * 判断参数 WafRules 是否已赋值
                     * @return WafRules 是否已赋值
                     * 
                     */
                    bool WafRulesHasBeenSet() const;

                    /**
                     * 获取The settings of the AI rule engine. If not specified, it defaults to the settings that were last configured.
                     * @return AiRule The settings of the AI rule engine. If not specified, it defaults to the settings that were last configured.
                     * 
                     */
                    AiRule GetAiRule() const;

                    /**
                     * 设置The settings of the AI rule engine. If not specified, it defaults to the settings that were last configured.
                     * @param _aiRule The settings of the AI rule engine. If not specified, it defaults to the settings that were last configured.
                     * 
                     */
                    void SetAiRule(const AiRule& _aiRule);

                    /**
                     * 判断参数 AiRule 是否已赋值
                     * @return AiRule 是否已赋值
                     * 
                     */
                    bool AiRuleHasBeenSet() const;

                    /**
                     * 获取The settings of the managed rule group. If not specified, it defaults to the settings that were last configured.
                     * @return WafGroups The settings of the managed rule group. If not specified, it defaults to the settings that were last configured.
                     * 
                     */
                    std::vector<WafGroup> GetWafGroups() const;

                    /**
                     * 设置The settings of the managed rule group. If not specified, it defaults to the settings that were last configured.
                     * @param _wafGroups The settings of the managed rule group. If not specified, it defaults to the settings that were last configured.
                     * 
                     */
                    void SetWafGroups(const std::vector<WafGroup>& _wafGroups);

                    /**
                     * 判断参数 WafGroups 是否已赋值
                     * @return WafGroups 是否已赋值
                     * 
                     */
                    bool WafGroupsHasBeenSet() const;

                    /**
                     * 获取The template ID. You must specify either this field or "ZoneId+Entity".
                     * @return TemplateId The template ID. You must specify either this field or "ZoneId+Entity".
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置The template ID. You must specify either this field or "ZoneId+Entity".
                     * @param _templateId The template ID. You must specify either this field or "ZoneId+Entity".
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * The site ID. You must specify either "ZoneId+Entity" or "TemplateId".
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The subdomain name. You must specify either "ZoneId+Entity" or "TemplateId". 
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>If not specified, it defaults to the setting that was last configured.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The rule level. Values:
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
<li>`custom`: Custom</li>If not specified, it defaults to the setting that was last configured.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * The rule action. Values:
<li>`block`: Block</li>
<li>`observe`: Observe</li>If not specified, it defaults to the setting that was last configured.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * The settings of the managed rule. If not specified, it defaults to the settings that were last configured.
                     */
                    WafRule m_wafRules;
                    bool m_wafRulesHasBeenSet;

                    /**
                     * The settings of the AI rule engine. If not specified, it defaults to the settings that were last configured.
                     */
                    AiRule m_aiRule;
                    bool m_aiRuleHasBeenSet;

                    /**
                     * The settings of the managed rule group. If not specified, it defaults to the settings that were last configured.
                     */
                    std::vector<WafGroup> m_wafGroups;
                    bool m_wafGroupsHasBeenSet;

                    /**
                     * The template ID. You must specify either this field or "ZoneId+Entity".
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYWAFGROUPPOLICYREQUEST_H_
