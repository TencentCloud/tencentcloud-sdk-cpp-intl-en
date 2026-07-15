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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIPOSTERSUITECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIPOSTERSUITECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RecipeItem.h>
#include <tencentcloud/mps/v20190612/model/CustomVariable.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent image set configuration.
                */
                class AiPosterSuiteConfig : public AbstractModel
                {
                public:
                    AiPosterSuiteConfig();
                    ~AiPosterSuiteConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Image output mode.</p><p>Enumeration values:</p><ul><li>auto: fully automatic mode. CustomVariables can be passed in this mode.</li><li>modify: modification mode. The corresponding description needs to be provided in the AddOnParameter.ExtPrompt field in this mode. CustomVariables cannot be passed in this mode.</li></ul><p>Default value: auto.</p>
                     * @return Mode <p>Image output mode.</p><p>Enumeration values:</p><ul><li>auto: fully automatic mode. CustomVariables can be passed in this mode.</li><li>modify: modification mode. The corresponding description needs to be provided in the AddOnParameter.ExtPrompt field in this mode. CustomVariables cannot be passed in this mode.</li></ul><p>Default value: auto.</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Image output mode.</p><p>Enumeration values:</p><ul><li>auto: fully automatic mode. CustomVariables can be passed in this mode.</li><li>modify: modification mode. The corresponding description needs to be provided in the AddOnParameter.ExtPrompt field in this mode. CustomVariables cannot be passed in this mode.</li></ul><p>Default value: auto.</p>
                     * @param _mode <p>Image output mode.</p><p>Enumeration values:</p><ul><li>auto: fully automatic mode. CustomVariables can be passed in this mode.</li><li>modify: modification mode. The corresponding description needs to be provided in the AddOnParameter.ExtPrompt field in this mode. CustomVariables cannot be passed in this mode.</li></ul><p>Default value: auto.</p>
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
                     * 获取<p>Ecommerce platform visual template ID.</p><p>If you need a personalized visual template, submit a ticket.</p>
                     * @return Definition <p>Ecommerce platform visual template ID.</p><p>If you need a personalized visual template, submit a ticket.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>Ecommerce platform visual template ID.</p><p>If you need a personalized visual template, submit a ticket.</p>
                     * @param _definition <p>Ecommerce platform visual template ID.</p><p>If you need a personalized visual template, submit a ticket.</p>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>Sub-image configuration.</p>
                     * @return Recipe <p>Sub-image configuration.</p>
                     * 
                     */
                    std::vector<RecipeItem> GetRecipe() const;

                    /**
                     * 设置<p>Sub-image configuration.</p>
                     * @param _recipe <p>Sub-image configuration.</p>
                     * 
                     */
                    void SetRecipe(const std::vector<RecipeItem>& _recipe);

                    /**
                     * 判断参数 Recipe 是否已赋值
                     * @return Recipe 是否已赋值
                     * 
                     */
                    bool RecipeHasBeenSet() const;

                    /**
                     * 获取<p>Sub-image text language.</p><p>Enumeration values:</p><ul><li>zh-CN: Simplified Chinese.</li><li>en-US: American English.</li></ul><p>Default value: zh-CN.</p><p>If you need more languages, submit a ticket.</p>
                     * @return Language <p>Sub-image text language.</p><p>Enumeration values:</p><ul><li>zh-CN: Simplified Chinese.</li><li>en-US: American English.</li></ul><p>Default value: zh-CN.</p><p>If you need more languages, submit a ticket.</p>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>Sub-image text language.</p><p>Enumeration values:</p><ul><li>zh-CN: Simplified Chinese.</li><li>en-US: American English.</li></ul><p>Default value: zh-CN.</p><p>If you need more languages, submit a ticket.</p>
                     * @param _language <p>Sub-image text language.</p><p>Enumeration values:</p><ul><li>zh-CN: Simplified Chinese.</li><li>en-US: American English.</li></ul><p>Default value: zh-CN.</p><p>If you need more languages, submit a ticket.</p>
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取<p>Sub-image aspect ratio.</p><p>Enumeration values:</p><ul><li>1:1: 1:1.</li><li>3:4: 3:4.</li><li>4:3: 4:3.</li><li>9:16: 9:16.</li><li>16:9: 16:9.</li></ul><p>Default value: 1:1.</p>
                     * @return PanelRatio <p>Sub-image aspect ratio.</p><p>Enumeration values:</p><ul><li>1:1: 1:1.</li><li>3:4: 3:4.</li><li>4:3: 4:3.</li><li>9:16: 9:16.</li><li>16:9: 16:9.</li></ul><p>Default value: 1:1.</p>
                     * 
                     */
                    std::string GetPanelRatio() const;

                    /**
                     * 设置<p>Sub-image aspect ratio.</p><p>Enumeration values:</p><ul><li>1:1: 1:1.</li><li>3:4: 3:4.</li><li>4:3: 4:3.</li><li>9:16: 9:16.</li><li>16:9: 16:9.</li></ul><p>Default value: 1:1.</p>
                     * @param _panelRatio <p>Sub-image aspect ratio.</p><p>Enumeration values:</p><ul><li>1:1: 1:1.</li><li>3:4: 3:4.</li><li>4:3: 4:3.</li><li>9:16: 9:16.</li><li>16:9: 16:9.</li></ul><p>Default value: 1:1.</p>
                     * 
                     */
                    void SetPanelRatio(const std::string& _panelRatio);

                    /**
                     * 判断参数 PanelRatio 是否已赋值
                     * @return PanelRatio 是否已赋值
                     * 
                     */
                    bool PanelRatioHasBeenSet() const;

                    /**
                     * 获取<p>Sub-image resolution.</p><p>Enumeration values:</p><ul><li>720: 720.</li><li>1K: 1K.</li><li>2K: 2K.</li><li>4K: 4K.</li></ul><p>Default value: 1K.</p>
                     * @return PanelResolution <p>Sub-image resolution.</p><p>Enumeration values:</p><ul><li>720: 720.</li><li>1K: 1K.</li><li>2K: 2K.</li><li>4K: 4K.</li></ul><p>Default value: 1K.</p>
                     * 
                     */
                    std::string GetPanelResolution() const;

                    /**
                     * 设置<p>Sub-image resolution.</p><p>Enumeration values:</p><ul><li>720: 720.</li><li>1K: 1K.</li><li>2K: 2K.</li><li>4K: 4K.</li></ul><p>Default value: 1K.</p>
                     * @param _panelResolution <p>Sub-image resolution.</p><p>Enumeration values:</p><ul><li>720: 720.</li><li>1K: 1K.</li><li>2K: 2K.</li><li>4K: 4K.</li></ul><p>Default value: 1K.</p>
                     * 
                     */
                    void SetPanelResolution(const std::string& _panelResolution);

                    /**
                     * 判断参数 PanelResolution 是否已赋值
                     * @return PanelResolution 是否已赋值
                     * 
                     */
                    bool PanelResolutionHasBeenSet() const;

                    /**
                     * 获取<p>User-defined variable.</p>
                     * @return CustomVariables <p>User-defined variable.</p>
                     * 
                     */
                    std::vector<CustomVariable> GetCustomVariables() const;

                    /**
                     * 设置<p>User-defined variable.</p>
                     * @param _customVariables <p>User-defined variable.</p>
                     * 
                     */
                    void SetCustomVariables(const std::vector<CustomVariable>& _customVariables);

                    /**
                     * 判断参数 CustomVariables 是否已赋值
                     * @return CustomVariables 是否已赋值
                     * 
                     */
                    bool CustomVariablesHasBeenSet() const;

                    /**
                     * 获取<p>Model name.</p><p>Enumeration value:</p><ul><li>WAND-suite-1.0-flash: WAND-suite-1.0-flash.</li></ul>
                     * @return Model <p>Model name.</p><p>Enumeration value:</p><ul><li>WAND-suite-1.0-flash: WAND-suite-1.0-flash.</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>Model name.</p><p>Enumeration value:</p><ul><li>WAND-suite-1.0-flash: WAND-suite-1.0-flash.</li></ul>
                     * @param _model <p>Model name.</p><p>Enumeration value:</p><ul><li>WAND-suite-1.0-flash: WAND-suite-1.0-flash.</li></ul>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * <p>Image output mode.</p><p>Enumeration values:</p><ul><li>auto: fully automatic mode. CustomVariables can be passed in this mode.</li><li>modify: modification mode. The corresponding description needs to be provided in the AddOnParameter.ExtPrompt field in this mode. CustomVariables cannot be passed in this mode.</li></ul><p>Default value: auto.</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Ecommerce platform visual template ID.</p><p>If you need a personalized visual template, submit a ticket.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Sub-image configuration.</p>
                     */
                    std::vector<RecipeItem> m_recipe;
                    bool m_recipeHasBeenSet;

                    /**
                     * <p>Sub-image text language.</p><p>Enumeration values:</p><ul><li>zh-CN: Simplified Chinese.</li><li>en-US: American English.</li></ul><p>Default value: zh-CN.</p><p>If you need more languages, submit a ticket.</p>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>Sub-image aspect ratio.</p><p>Enumeration values:</p><ul><li>1:1: 1:1.</li><li>3:4: 3:4.</li><li>4:3: 4:3.</li><li>9:16: 9:16.</li><li>16:9: 16:9.</li></ul><p>Default value: 1:1.</p>
                     */
                    std::string m_panelRatio;
                    bool m_panelRatioHasBeenSet;

                    /**
                     * <p>Sub-image resolution.</p><p>Enumeration values:</p><ul><li>720: 720.</li><li>1K: 1K.</li><li>2K: 2K.</li><li>4K: 4K.</li></ul><p>Default value: 1K.</p>
                     */
                    std::string m_panelResolution;
                    bool m_panelResolutionHasBeenSet;

                    /**
                     * <p>User-defined variable.</p>
                     */
                    std::vector<CustomVariable> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                    /**
                     * <p>Model name.</p><p>Enumeration value:</p><ul><li>WAND-suite-1.0-flash: WAND-suite-1.0-flash.</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIPOSTERSUITECONFIG_H_
