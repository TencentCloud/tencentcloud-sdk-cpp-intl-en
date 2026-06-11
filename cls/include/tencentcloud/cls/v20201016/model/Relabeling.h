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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RELABELING_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RELABELING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Tag remark configuration.
Permission to dynamically rewrite the tag set of targets, alerts, captured samples and remote write samples.
                */
                class Relabeling : public AbstractModel
                {
                public:
                    Relabeling();
                    ~Relabeling() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action executed based on regular expression matching.
-replace: Label replacement, required: SourceLabels, Separator, Regex, TargetLabel, Replacement
-labeldrop: Discard Label, Required: Regex
-labelkeep: Reserve Label, required: Regex
-lowercase, required: SourceLabels, Separator, TargetLabel
-Uppercase: uppercase, Required: SourceLabels, Separator, TargetLabel
-dropequal: Drop metric - exact match, required: SourceLabels, Separator, TargetLabel
-keepequal: retain metric - exact match, required: SourceLabels, Separator, TargetLabel
-drop: Drop metric - Regular expression matching. Required: SourceLabels, Separator, Regex.
-keep: Retain metric - Regular expression matching, Required: SourceLabels, Separator, Regex
-hashmod: hash modulo, required: SourceLabels, Separator, TargetLabel, Modulus
-labelmap: Label map, required: Regex, Replacement
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Action Action executed based on regular expression matching.
-replace: Label replacement, required: SourceLabels, Separator, Regex, TargetLabel, Replacement
-labeldrop: Discard Label, Required: Regex
-labelkeep: Reserve Label, required: Regex
-lowercase, required: SourceLabels, Separator, TargetLabel
-Uppercase: uppercase, Required: SourceLabels, Separator, TargetLabel
-dropequal: Drop metric - exact match, required: SourceLabels, Separator, TargetLabel
-keepequal: retain metric - exact match, required: SourceLabels, Separator, TargetLabel
-drop: Drop metric - Regular expression matching. Required: SourceLabels, Separator, Regex.
-keep: Retain metric - Regular expression matching, Required: SourceLabels, Separator, Regex
-hashmod: hash modulo, required: SourceLabels, Separator, TargetLabel, Modulus
-labelmap: Label map, required: Regex, Replacement
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action executed based on regular expression matching.
-replace: Label replacement, required: SourceLabels, Separator, Regex, TargetLabel, Replacement
-labeldrop: Discard Label, Required: Regex
-labelkeep: Reserve Label, required: Regex
-lowercase, required: SourceLabels, Separator, TargetLabel
-Uppercase: uppercase, Required: SourceLabels, Separator, TargetLabel
-dropequal: Drop metric - exact match, required: SourceLabels, Separator, TargetLabel
-keepequal: retain metric - exact match, required: SourceLabels, Separator, TargetLabel
-drop: Drop metric - Regular expression matching. Required: SourceLabels, Separator, Regex.
-keep: Retain metric - Regular expression matching, Required: SourceLabels, Separator, Regex
-hashmod: hash modulo, required: SourceLabels, Separator, TargetLabel, Modulus
-labelmap: Label map, required: Regex, Replacement
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _action Action executed based on regular expression matching.
-replace: Label replacement, required: SourceLabels, Separator, Regex, TargetLabel, Replacement
-labeldrop: Discard Label, Required: Regex
-labelkeep: Reserve Label, required: Regex
-lowercase, required: SourceLabels, Separator, TargetLabel
-Uppercase: uppercase, Required: SourceLabels, Separator, TargetLabel
-dropequal: Drop metric - exact match, required: SourceLabels, Separator, TargetLabel
-keepequal: retain metric - exact match, required: SourceLabels, Separator, TargetLabel
-drop: Drop metric - Regular expression matching. Required: SourceLabels, Separator, Regex.
-keep: Retain metric - Regular expression matching, Required: SourceLabels, Separator, Regex
-hashmod: hash modulo, required: SourceLabels, Separator, TargetLabel, Modulus
-labelmap: Label map, required: Regex, Replacement
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取original label
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceLabels original label
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSourceLabels() const;

                    /**
                     * 设置original label
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceLabels original label
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceLabels(const std::vector<std::string>& _sourceLabels);

                    /**
                     * 判断参数 SourceLabels 是否已赋值
                     * @return SourceLabels 是否已赋值
                     * 
                     */
                    bool SourceLabelsHasBeenSet() const;

                    /**
                     * 获取Original label delimiter. This parameter cannot be an empty string when it is required. Its length cannot exceed 256 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Separator Original label delimiter. This parameter cannot be an empty string when it is required. Its length cannot exceed 256 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSeparator() const;

                    /**
                     * 设置Original label delimiter. This parameter cannot be an empty string when it is required. Its length cannot exceed 256 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _separator Original label delimiter. This parameter cannot be an empty string when it is required. Its length cannot exceed 256 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSeparator(const std::string& _separator);

                    /**
                     * 判断参数 Separator 是否已赋值
                     * @return Separator 是否已赋值
                     * 
                     */
                    bool SeparatorHasBeenSet() const;

                    /**
                     * 获取Target label. This parameter cannot be an empty string when it is required. The verification format is ^[a-zA-Z_][a-zA-Z0-9_]*$, and its length cannot exceed 256 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetLabel Target label. This parameter cannot be an empty string when it is required. The verification format is ^[a-zA-Z_][a-zA-Z0-9_]*$, and its length cannot exceed 256 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetLabel() const;

                    /**
                     * 设置Target label. This parameter cannot be an empty string when it is required. The verification format is ^[a-zA-Z_][a-zA-Z0-9_]*$, and its length cannot exceed 256 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetLabel Target label. This parameter cannot be an empty string when it is required. The verification format is ^[a-zA-Z_][a-zA-Z0-9_]*$, and its length cannot exceed 256 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetLabel(const std::string& _targetLabel);

                    /**
                     * 判断参数 TargetLabel 是否已赋值
                     * @return TargetLabel 是否已赋值
                     * 
                     */
                    bool TargetLabelHasBeenSet() const;

                    /**
                     * 获取Replacement value. If regular expression matching is performed, execute the replacement operation.
-Cannot be an empty string when required. Length cannot exceed 256.
-When the action is LabelMap, check format for Replacement: `^(?:(?:[a-zA-Z_]|\$(?:\{\w+\}|\w+))+\w*)+$`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Replacement Replacement value. If regular expression matching is performed, execute the replacement operation.
-Cannot be an empty string when required. Length cannot exceed 256.
-When the action is LabelMap, check format for Replacement: `^(?:(?:[a-zA-Z_]|\$(?:\{\w+\}|\w+))+\w*)+$`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReplacement() const;

                    /**
                     * 设置Replacement value. If regular expression matching is performed, execute the replacement operation.
-Cannot be an empty string when required. Length cannot exceed 256.
-When the action is LabelMap, check format for Replacement: `^(?:(?:[a-zA-Z_]|\$(?:\{\w+\}|\w+))+\w*)+$`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _replacement Replacement value. If regular expression matching is performed, execute the replacement operation.
-Cannot be an empty string when required. Length cannot exceed 256.
-When the action is LabelMap, check format for Replacement: `^(?:(?:[a-zA-Z_]|\$(?:\{\w+\}|\w+))+\w*)+$`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReplacement(const std::string& _replacement);

                    /**
                     * 判断参数 Replacement 是否已赋值
                     * @return Replacement 是否已赋值
                     * 
                     */
                    bool ReplacementHasBeenSet() const;

                    /**
                     * 获取Regular expression. The matching value is extracted. This parameter cannot be an empty string when it is required. The regular expression should be a valid RE2. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Regex Regular expression. The matching value is extracted. This parameter cannot be an empty string when it is required. The regular expression should be a valid RE2. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置Regular expression. The matching value is extracted. This parameter cannot be an empty string when it is required. The regular expression should be a valid RE2. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regex Regular expression. The matching value is extracted. This parameter cannot be an empty string when it is required. The regular expression should be a valid RE2. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                    /**
                     * 获取Obtains the hash value of a label value. This parameter cannot be empty or 0 when it is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Modulus Obtains the hash value of a label value. This parameter cannot be empty or 0 when it is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetModulus() const;

                    /**
                     * 设置Obtains the hash value of a label value. This parameter cannot be empty or 0 when it is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modulus Obtains the hash value of a label value. This parameter cannot be empty or 0 when it is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModulus(const uint64_t& _modulus);

                    /**
                     * 判断参数 Modulus 是否已赋值
                     * @return Modulus 是否已赋值
                     * 
                     */
                    bool ModulusHasBeenSet() const;

                private:

                    /**
                     * Action executed based on regular expression matching.
-replace: Label replacement, required: SourceLabels, Separator, Regex, TargetLabel, Replacement
-labeldrop: Discard Label, Required: Regex
-labelkeep: Reserve Label, required: Regex
-lowercase, required: SourceLabels, Separator, TargetLabel
-Uppercase: uppercase, Required: SourceLabels, Separator, TargetLabel
-dropequal: Drop metric - exact match, required: SourceLabels, Separator, TargetLabel
-keepequal: retain metric - exact match, required: SourceLabels, Separator, TargetLabel
-drop: Drop metric - Regular expression matching. Required: SourceLabels, Separator, Regex.
-keep: Retain metric - Regular expression matching, Required: SourceLabels, Separator, Regex
-hashmod: hash modulo, required: SourceLabels, Separator, TargetLabel, Modulus
-labelmap: Label map, required: Regex, Replacement
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * original label
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_sourceLabels;
                    bool m_sourceLabelsHasBeenSet;

                    /**
                     * Original label delimiter. This parameter cannot be an empty string when it is required. Its length cannot exceed 256 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_separator;
                    bool m_separatorHasBeenSet;

                    /**
                     * Target label. This parameter cannot be an empty string when it is required. The verification format is ^[a-zA-Z_][a-zA-Z0-9_]*$, and its length cannot exceed 256 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetLabel;
                    bool m_targetLabelHasBeenSet;

                    /**
                     * Replacement value. If regular expression matching is performed, execute the replacement operation.
-Cannot be an empty string when required. Length cannot exceed 256.
-When the action is LabelMap, check format for Replacement: `^(?:(?:[a-zA-Z_]|\$(?:\{\w+\}|\w+))+\w*)+$`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_replacement;
                    bool m_replacementHasBeenSet;

                    /**
                     * Regular expression. The matching value is extracted. This parameter cannot be an empty string when it is required. The regular expression should be a valid RE2. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * Obtains the hash value of a label value. This parameter cannot be empty or 0 when it is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_modulus;
                    bool m_modulusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RELABELING_H_
