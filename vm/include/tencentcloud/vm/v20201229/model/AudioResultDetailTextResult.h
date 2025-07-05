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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_AUDIORESULTDETAILTEXTRESULT_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_AUDIORESULTDETAILTEXTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * ASR-Based audio moderation result
                */
                class AudioResultDetailTextResult : public AbstractModel
                {
                public:
                    AudioResultDetailTextResult();
                    ~AudioResultDetailTextResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取This field is used to return the keyword information hit by the text content recognized with ASR and indicate the specific cause of content non-compliance (such as "Friend me on WeChat"). This parameter may have multiple returned values representing multiple hit keywords. If the returned value is empty, but `Score` is not empty, the maliciousness tag (Label) that corresponds to the recognition result derives from the returned value determined by the semantic model.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Keywords This field is used to return the keyword information hit by the text content recognized with ASR and indicate the specific cause of content non-compliance (such as "Friend me on WeChat"). This parameter may have multiple returned values representing multiple hit keywords. If the returned value is empty, but `Score` is not empty, the maliciousness tag (Label) that corresponds to the recognition result derives from the returned value determined by the semantic model.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置This field is used to return the keyword information hit by the text content recognized with ASR and indicate the specific cause of content non-compliance (such as "Friend me on WeChat"). This parameter may have multiple returned values representing multiple hit keywords. If the returned value is empty, but `Score` is not empty, the maliciousness tag (Label) that corresponds to the recognition result derives from the returned value determined by the semantic model.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _keywords This field is used to return the keyword information hit by the text content recognized with ASR and indicate the specific cause of content non-compliance (such as "Friend me on WeChat"). This parameter may have multiple returned values representing multiple hit keywords. If the returned value is empty, but `Score` is not empty, the maliciousness tag (Label) that corresponds to the recognition result derives from the returned value determined by the semantic model.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LibId This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _libId This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     * 
                     */
                    bool LibIdHasBeenSet() const;

                    /**
                     * 获取This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LibName This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _libName This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLibName(const std::string& _libName);

                    /**
                     * 判断参数 LibName 是否已赋值
                     * @return LibName 是否已赋值
                     * 
                     */
                    bool LibNameHasBeenSet() const;

                    /**
                     * 获取This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn 99* indicates that the text is highly likely to be pornographic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Score This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn 99* indicates that the text is highly likely to be pornographic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn 99* indicates that the text is highly likely to be pornographic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _score This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn 99* indicates that the text is highly likely to be pornographic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Suggestion This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _suggestion This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取This field is used to return the dictionary type of a custom keyword. Valid values: **1** (blocklist/allowlist), **2** (custom keyword dictionary). If no custom keyword dictionary is configured, the default value will be 1 (blocklist/allowlist).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LibType This field is used to return the dictionary type of a custom keyword. Valid values: **1** (blocklist/allowlist), **2** (custom keyword dictionary). If no custom keyword dictionary is configured, the default value will be 1 (blocklist/allowlist).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLibType() const;

                    /**
                     * 设置This field is used to return the dictionary type of a custom keyword. Valid values: **1** (blocklist/allowlist), **2** (custom keyword dictionary). If no custom keyword dictionary is configured, the default value will be 1 (blocklist/allowlist).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _libType This field is used to return the dictionary type of a custom keyword. Valid values: **1** (blocklist/allowlist), **2** (custom keyword dictionary). If no custom keyword dictionary is configured, the default value will be 1 (blocklist/allowlist).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLibType(const int64_t& _libType);

                    /**
                     * 判断参数 LibType 是否已赋值
                     * @return LibType 是否已赋值
                     * 
                     */
                    bool LibTypeHasBeenSet() const;

                    /**
                     * 获取This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubLabel This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _subLabel This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * This field is used to return the keyword information hit by the text content recognized with ASR and indicate the specific cause of content non-compliance (such as "Friend me on WeChat"). This parameter may have multiple returned values representing multiple hit keywords. If the returned value is empty, but `Score` is not empty, the maliciousness tag (Label) that corresponds to the recognition result derives from the returned value determined by the semantic model.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn 99* indicates that the text is highly likely to be pornographic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * This field is used to return the dictionary type of a custom keyword. Valid values: **1** (blocklist/allowlist), **2** (custom keyword dictionary). If no custom keyword dictionary is configured, the default value will be 1 (blocklist/allowlist).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_libType;
                    bool m_libTypeHasBeenSet;

                    /**
                     * This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_AUDIORESULTDETAILTEXTRESULT_H_
