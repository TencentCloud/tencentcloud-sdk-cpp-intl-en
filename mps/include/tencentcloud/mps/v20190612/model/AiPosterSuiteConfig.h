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
                * 
                */
                class AiPosterSuiteConfig : public AbstractModel
                {
                public:
                    AiPosterSuiteConfig();
                    ~AiPosterSuiteConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Mode 
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置
                     * @param _mode 
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
                     * 获取
                     * @return Definition 
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置
                     * @param _definition 
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
                     * 获取
                     * @return Recipe 
                     * 
                     */
                    std::vector<RecipeItem> GetRecipe() const;

                    /**
                     * 设置
                     * @param _recipe 
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
                     * 获取
                     * @return Language 
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置
                     * @param _language 
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
                     * 获取
                     * @return PanelRatio 
                     * 
                     */
                    std::string GetPanelRatio() const;

                    /**
                     * 设置
                     * @param _panelRatio 
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
                     * 获取
                     * @return PanelResolution 
                     * 
                     */
                    std::string GetPanelResolution() const;

                    /**
                     * 设置
                     * @param _panelResolution 
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
                     * 获取
                     * @return CustomVariables 
                     * 
                     */
                    std::vector<CustomVariable> GetCustomVariables() const;

                    /**
                     * 设置
                     * @param _customVariables 
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
                     * 获取
                     * @return Model 
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置
                     * @param _model 
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
                     * 
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<RecipeItem> m_recipe;
                    bool m_recipeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_panelRatio;
                    bool m_panelRatioHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_panelResolution;
                    bool m_panelResolutionHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<CustomVariable> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIPOSTERSUITECONFIG_H_
