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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineCategory.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Baseline detection item.
                */
                class BaselineItem : public AbstractModel
                {
                public:
                    BaselineItem();
                    ~BaselineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Baseline detection item ID.</p>
                     * @return ID <p>Baseline detection item ID.</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Baseline detection item ID.</p>
                     * @param _iD <p>Baseline detection item ID.</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Built-in rule ID.</p>
                     * @return RuleID <p>Built-in rule ID.</p>
                     * 
                     */
                    uint64_t GetRuleID() const;

                    /**
                     * 设置<p>Built-in rule ID.</p>
                     * @param _ruleID <p>Built-in rule ID.</p>
                     * 
                     */
                    void SetRuleID(const uint64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>Detection object description, such as configuration file path, kernel parameter, and Kubernetes Resources.</p>
                     * @return CheckObject <p>Detection object description, such as configuration file path, kernel parameter, and Kubernetes Resources.</p>
                     * 
                     */
                    std::vector<std::string> GetCheckObject() const;

                    /**
                     * 设置<p>Detection object description, such as configuration file path, kernel parameter, and Kubernetes Resources.</p>
                     * @param _checkObject <p>Detection object description, such as configuration file path, kernel parameter, and Kubernetes Resources.</p>
                     * 
                     */
                    void SetCheckObject(const std::vector<std::string>& _checkObject);

                    /**
                     * 判断参数 CheckObject 是否已赋值
                     * @return CheckObject 是否已赋值
                     * 
                     */
                    bool CheckObjectHasBeenSet() const;

                    /**
                     * 获取<p>Risk level. Value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     * @return RiskLevel <p>Risk level. Value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level. Value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     * @param _riskLevel <p>Risk level. Value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>Detection item name (Chinese).</p>
                     * @return Name <p>Detection item name (Chinese).</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Detection item name (Chinese).</p>
                     * @param _name <p>Detection item name (Chinese).</p>
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
                     * 获取<p>Detection item description (Chinese, explaining the detection background and determination logic).</p>
                     * @return Description <p>Detection item description (Chinese, explaining the detection background and determination logic).</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Detection item description (Chinese, explaining the detection background and determination logic).</p>
                     * @param _description <p>Detection item description (Chinese, explaining the detection background and determination logic).</p>
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
                     * 获取<p>Detection item repair advice (Chinese, including recommended configuration reference values or hardening commands).</p>
                     * @return FixSuggestion <p>Detection item repair advice (Chinese, including recommended configuration reference values or hardening commands).</p>
                     * 
                     */
                    std::string GetFixSuggestion() const;

                    /**
                     * 设置<p>Detection item repair advice (Chinese, including recommended configuration reference values or hardening commands).</p>
                     * @param _fixSuggestion <p>Detection item repair advice (Chinese, including recommended configuration reference values or hardening commands).</p>
                     * 
                     */
                    void SetFixSuggestion(const std::string& _fixSuggestion);

                    /**
                     * 判断参数 FixSuggestion 是否已赋值
                     * @return FixSuggestion 是否已赋值
                     * 
                     */
                    bool FixSuggestionHasBeenSet() const;

                    /**
                     * 获取<p>Reference link list of detection items.</p>
                     * @return ReferenceLink <p>Reference link list of detection items.</p>
                     * 
                     */
                    std::string GetReferenceLink() const;

                    /**
                     * 设置<p>Reference link list of detection items.</p>
                     * @param _referenceLink <p>Reference link list of detection items.</p>
                     * 
                     */
                    void SetReferenceLink(const std::string& _referenceLink);

                    /**
                     * 判断参数 ReferenceLink 是否已赋值
                     * @return ReferenceLink 是否已赋值
                     * 
                     */
                    bool ReferenceLinkHasBeenSet() const;

                    /**
                     * 获取<p>Classification information of the parent category in the associated system.</p>
                     * @return SystemCategory <p>Classification information of the parent category in the associated system.</p>
                     * 
                     */
                    BaselineCategory GetSystemCategory() const;

                    /**
                     * 设置<p>Classification information of the parent category in the associated system.</p>
                     * @param _systemCategory <p>Classification information of the parent category in the associated system.</p>
                     * 
                     */
                    void SetSystemCategory(const BaselineCategory& _systemCategory);

                    /**
                     * 判断参数 SystemCategory 是否已赋值
                     * @return SystemCategory 是否已赋值
                     * 
                     */
                    bool SystemCategoryHasBeenSet() const;

                    /**
                     * 获取<p>Classification information of the subcategory it belongs to.</p>
                     * @return Category <p>Classification information of the subcategory it belongs to.</p>
                     * 
                     */
                    BaselineCategory GetCategory() const;

                    /**
                     * 设置<p>Classification information of the subcategory it belongs to.</p>
                     * @param _category <p>Classification information of the subcategory it belongs to.</p>
                     * 
                     */
                    void SetCategory(const BaselineCategory& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>Whether one-click repair is supported. true: supported, false: unsupported.</p>
                     * @return SupportFix <p>Whether one-click repair is supported. true: supported, false: unsupported.</p>
                     * 
                     */
                    bool GetSupportFix() const;

                    /**
                     * 设置<p>Whether one-click repair is supported. true: supported, false: unsupported.</p>
                     * @param _supportFix <p>Whether one-click repair is supported. true: supported, false: unsupported.</p>
                     * 
                     */
                    void SetSupportFix(const bool& _supportFix);

                    /**
                     * 判断参数 SupportFix 是否已赋值
                     * @return SupportFix 是否已赋值
                     * 
                     */
                    bool SupportFixHasBeenSet() const;

                    /**
                     * 获取<p>Whether user-defined judgment values are supported. true: supported; false: not supported.</p>
                     * @return SupportCustomValue <p>Whether user-defined judgment values are supported. true: supported; false: not supported.</p>
                     * 
                     */
                    bool GetSupportCustomValue() const;

                    /**
                     * 设置<p>Whether user-defined judgment values are supported. true: supported; false: not supported.</p>
                     * @param _supportCustomValue <p>Whether user-defined judgment values are supported. true: supported; false: not supported.</p>
                     * 
                     */
                    void SetSupportCustomValue(const bool& _supportCustomValue);

                    /**
                     * 判断参数 SupportCustomValue 是否已赋值
                     * @return SupportCustomValue 是否已赋值
                     * 
                     */
                    bool SupportCustomValueHasBeenSet() const;

                    /**
                     * 获取<p>Operating system/component version list applicable to this detection item.</p>
                     * @return AffectedVersionList <p>Operating system/component version list applicable to this detection item.</p>
                     * 
                     */
                    std::vector<std::string> GetAffectedVersionList() const;

                    /**
                     * 设置<p>Operating system/component version list applicable to this detection item.</p>
                     * @param _affectedVersionList <p>Operating system/component version list applicable to this detection item.</p>
                     * 
                     */
                    void SetAffectedVersionList(const std::vector<std::string>& _affectedVersionList);

                    /**
                     * 判断参数 AffectedVersionList 是否已赋值
                     * @return AffectedVersionList 是否已赋值
                     * 
                     */
                    bool AffectedVersionListHasBeenSet() const;

                    /**
                     * 获取<p>Parameter definition when editing a custom judgment value (for example, permissible range, control type).</p>
                     * @return WebEditParam <p>Parameter definition when editing a custom judgment value (for example, permissible range, control type).</p>
                     * 
                     */
                    std::string GetWebEditParam() const;

                    /**
                     * 设置<p>Parameter definition when editing a custom judgment value (for example, permissible range, control type).</p>
                     * @param _webEditParam <p>Parameter definition when editing a custom judgment value (for example, permissible range, control type).</p>
                     * 
                     */
                    void SetWebEditParam(const std::string& _webEditParam);

                    /**
                     * 判断参数 WebEditParam 是否已赋值
                     * @return WebEditParam 是否已赋值
                     * 
                     */
                    bool WebEditParamHasBeenSet() const;

                    /**
                     * 获取<p>Default detection item judgment value list.</p>
                     * @return DefaultValueList <p>Default detection item judgment value list.</p>
                     * 
                     */
                    std::vector<std::string> GetDefaultValueList() const;

                    /**
                     * 设置<p>Default detection item judgment value list.</p>
                     * @param _defaultValueList <p>Default detection item judgment value list.</p>
                     * 
                     */
                    void SetDefaultValueList(const std::vector<std::string>& _defaultValueList);

                    /**
                     * 判断参数 DefaultValueList 是否已赋值
                     * @return DefaultValueList 是否已赋值
                     * 
                     */
                    bool DefaultValueListHasBeenSet() const;

                    /**
                     * 获取<p>Whether customized by the user. true: customized; false: use default values.</p>
                     * @return IsCustomConf <p>Whether customized by the user. true: customized; false: use default values.</p>
                     * 
                     */
                    bool GetIsCustomConf() const;

                    /**
                     * 设置<p>Whether customized by the user. true: customized; false: use default values.</p>
                     * @param _isCustomConf <p>Whether customized by the user. true: customized; false: use default values.</p>
                     * 
                     */
                    void SetIsCustomConf(const bool& _isCustomConf);

                    /**
                     * 判断参数 IsCustomConf 是否已赋值
                     * @return IsCustomConf 是否已赋值
                     * 
                     */
                    bool IsCustomConfHasBeenSet() const;

                    /**
                     * 获取<p>User-customized configuration record ID. The value is 0 if not customized.</p>
                     * @return CustomItemID <p>User-customized configuration record ID. The value is 0 if not customized.</p>
                     * 
                     */
                    uint64_t GetCustomItemID() const;

                    /**
                     * 设置<p>User-customized configuration record ID. The value is 0 if not customized.</p>
                     * @param _customItemID <p>User-customized configuration record ID. The value is 0 if not customized.</p>
                     * 
                     */
                    void SetCustomItemID(const uint64_t& _customItemID);

                    /**
                     * 判断参数 CustomItemID 是否已赋值
                     * @return CustomItemID 是否已赋值
                     * 
                     */
                    bool CustomItemIDHasBeenSet() const;

                private:

                    /**
                     * <p>Baseline detection item ID.</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Built-in rule ID.</p>
                     */
                    uint64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>Detection object description, such as configuration file path, kernel parameter, and Kubernetes Resources.</p>
                     */
                    std::vector<std::string> m_checkObject;
                    bool m_checkObjectHasBeenSet;

                    /**
                     * <p>Risk level. Value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Detection item name (Chinese).</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Detection item description (Chinese, explaining the detection background and determination logic).</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Detection item repair advice (Chinese, including recommended configuration reference values or hardening commands).</p>
                     */
                    std::string m_fixSuggestion;
                    bool m_fixSuggestionHasBeenSet;

                    /**
                     * <p>Reference link list of detection items.</p>
                     */
                    std::string m_referenceLink;
                    bool m_referenceLinkHasBeenSet;

                    /**
                     * <p>Classification information of the parent category in the associated system.</p>
                     */
                    BaselineCategory m_systemCategory;
                    bool m_systemCategoryHasBeenSet;

                    /**
                     * <p>Classification information of the subcategory it belongs to.</p>
                     */
                    BaselineCategory m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>Whether one-click repair is supported. true: supported, false: unsupported.</p>
                     */
                    bool m_supportFix;
                    bool m_supportFixHasBeenSet;

                    /**
                     * <p>Whether user-defined judgment values are supported. true: supported; false: not supported.</p>
                     */
                    bool m_supportCustomValue;
                    bool m_supportCustomValueHasBeenSet;

                    /**
                     * <p>Operating system/component version list applicable to this detection item.</p>
                     */
                    std::vector<std::string> m_affectedVersionList;
                    bool m_affectedVersionListHasBeenSet;

                    /**
                     * <p>Parameter definition when editing a custom judgment value (for example, permissible range, control type).</p>
                     */
                    std::string m_webEditParam;
                    bool m_webEditParamHasBeenSet;

                    /**
                     * <p>Default detection item judgment value list.</p>
                     */
                    std::vector<std::string> m_defaultValueList;
                    bool m_defaultValueListHasBeenSet;

                    /**
                     * <p>Whether customized by the user. true: customized; false: use default values.</p>
                     */
                    bool m_isCustomConf;
                    bool m_isCustomConfHasBeenSet;

                    /**
                     * <p>User-customized configuration record ID. The value is 0 if not customized.</p>
                     */
                    uint64_t m_customItemID;
                    bool m_customItemIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEITEM_H_
