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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMKEYWORDLIBRARY_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMKEYWORDLIBRARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * LLM waf custom lexicon entity
                */
                class LLMKeywordLibrary : public AbstractModel
                {
                public:
                    LLMKeywordLibrary();
                    ~LLMKeywordLibrary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Lexicon name.
                     * @return Name Lexicon name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Lexicon name.
                     * @param _name Lexicon name.
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
                     * 获取Lexicon description.
                     * @return Description Lexicon description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Lexicon description.
                     * @param _description Lexicon description.
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
                     * 获取Lexicon type. Valid values: custom and builtin.
                     * @return Type Lexicon type. Valid values: custom and builtin.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Lexicon type. Valid values: custom and builtin.
                     * @param _type Lexicon type. Valid values: custom and builtin.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Keyword list.
                     * @return Keywords Keyword list.
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置Keyword list.
                     * @param _keywords Keyword list.
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取Lexicon rule id.
                     * @return RuleId Lexicon rule id.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Lexicon rule id.
                     * @param _ruleId Lexicon rule id.
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取List of referenced rule IDs.
                     * @return ReferencedRules List of referenced rule IDs.
                     * 
                     */
                    std::vector<std::string> GetReferencedRules() const;

                    /**
                     * 设置List of referenced rule IDs.
                     * @param _referencedRules List of referenced rule IDs.
                     * 
                     */
                    void SetReferencedRules(const std::vector<std::string>& _referencedRules);

                    /**
                     * 判断参数 ReferencedRules 是否已赋值
                     * @return ReferencedRules 是否已赋值
                     * 
                     */
                    bool ReferencedRulesHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Lexicon category. Valid values: black (default) and white. An empty value is treated as black.
                     * @return Category Lexicon category. Valid values: black (default) and white. An empty value is treated as black.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Lexicon category. Valid values: black (default) and white. An empty value is treated as black.
                     * @param _category Lexicon category. Valid values: black (default) and white. An empty value is treated as black.
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * Lexicon name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Lexicon description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Lexicon type. Valid values: custom and builtin.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Keyword list.
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * Lexicon rule id.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * List of referenced rule IDs.
                     */
                    std::vector<std::string> m_referencedRules;
                    bool m_referencedRulesHasBeenSet;

                    /**
                     * Update time.
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Lexicon category. Valid values: black (default) and white. An empty value is treated as black.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMKEYWORDLIBRARY_H_
