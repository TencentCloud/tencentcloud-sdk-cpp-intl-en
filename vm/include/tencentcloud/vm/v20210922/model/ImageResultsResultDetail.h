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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULTSRESULTDETAIL_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULTSRESULTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/ImageResultsResultDetailLocation.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * Image recognition result in the specific scenario
                */
                class ImageResultsResultDetail : public AbstractModel
                {
                public:
                    ImageResultsResultDetail();
                    ~ImageResultsResultDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Task name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取OCR-recognized text
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Text OCR-recognized text
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置OCR-recognized text
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _text OCR-recognized text
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Location information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Location Location information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ImageResultsResultDetailLocation GetLocation() const;

                    /**
                     * 设置Location information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _location Location information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocation(const ImageResultsResultDetailLocation& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Label Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _label Tag
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Library ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LibId Library ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置Library ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _libId Library ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LibName Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _libName Database name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Hit keyword
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Keywords Hit keyword
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置Hit keyword
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keywords Hit keyword
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Suggestion Suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _suggestion Suggestion
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Score Score
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置Score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _score Score
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubLabelCode Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubLabelCode() const;

                    /**
                     * 设置Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subLabelCode Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubLabelCode(const std::string& _subLabelCode);

                    /**
                     * 判断参数 SubLabelCode 是否已赋值
                     * @return SubLabelCode 是否已赋值
                     * 
                     */
                    bool SubLabelCodeHasBeenSet() const;

                private:

                    /**
                     * Task name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * OCR-recognized text
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Location information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ImageResultsResultDetailLocation m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Library ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * Hit keyword
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * Suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subLabelCode;
                    bool m_subLabelCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULTSRESULTDETAIL_H_
