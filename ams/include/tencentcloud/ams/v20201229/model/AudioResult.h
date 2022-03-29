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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_AUDIORESULT_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_AUDIORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/AudioResultDetailTextResult.h>
#include <tencentcloud/ams/v20201229/model/AudioResultDetailMoanResult.h>
#include <tencentcloud/ams/v20201229/model/AudioResultDetailLanguageResult.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Audio moderation output parameter
                */
                class AudioResult : public AbstractModel
                {
                public:
                    AudioResult();
                    ~AudioResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return whether the moderated content hit the moderation model. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HitFlag This field is used to return whether the moderated content hit the moderation model. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置This field is used to return whether the moderated content hit the moderation model. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param HitFlag This field is used to return whether the moderated content hit the moderation model. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHitFlag(const int64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Suggestion This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Suggestion This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn 99* indicates that the text is highly likely to be pornographic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Score This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn 99* indicates that the text is highly likely to be pornographic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn 99* indicates that the text is highly likely to be pornographic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Score This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn 99* indicates that the text is highly likely to be pornographic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取This field is used to return the text information generated by recognizing an audio file with ASR. Audio files of up to **5 hours** can be recognized. If this limit is exceeded, an error will be reported by the API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Text This field is used to return the text information generated by recognizing an audio file with ASR. Audio files of up to **5 hours** can be recognized. If this limit is exceeded, an error will be reported by the API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetText() const;

                    /**
                     * 设置This field is used to return the text information generated by recognizing an audio file with ASR. Audio files of up to **5 hours** can be recognized. If this limit is exceeded, an error will be reported by the API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Text This field is used to return the text information generated by recognizing an audio file with ASR. Audio files of up to **5 hours** can be recognized. If this limit is exceeded, an error will be reported by the API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取This field is used to return the URL where audio segments are stored, which is valid for 1 day.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Url This field is used to return the URL where audio segments are stored, which is valid for 1 day.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置This field is used to return the URL where audio segments are stored, which is valid for 1 day.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Url This field is used to return the URL where audio segments are stored, which is valid for 1 day.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取This field is used to return the length of an audio file in seconds.
                     * @return Duration This field is used to return the length of an audio file in seconds.
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置This field is used to return the length of an audio file in seconds.
                     * @param Duration This field is used to return the length of an audio file in seconds.
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取This field is used to return additional information, and the returned information varies by customer or `Biztype`.
                     * @return Extra This field is used to return additional information, and the returned information varies by customer or `Biztype`.
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置This field is used to return additional information, and the returned information varies by customer or `Biztype`.
                     * @param Extra This field is used to return additional information, and the returned information varies by customer or `Biztype`.
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取This field is used to return the detailed moderation result of the text generated by recognizing an audio file with ASR. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
                     * @return TextResults This field is used to return the detailed moderation result of the text generated by recognizing an audio file with ASR. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
                     */
                    std::vector<AudioResultDetailTextResult> GetTextResults() const;

                    /**
                     * 设置This field is used to return the detailed moderation result of the text generated by recognizing an audio file with ASR. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
                     * @param TextResults This field is used to return the detailed moderation result of the text generated by recognizing an audio file with ASR. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
                     */
                    void SetTextResults(const std::vector<AudioResultDetailTextResult>& _textResults);

                    /**
                     * 判断参数 TextResults 是否已赋值
                     * @return TextResults 是否已赋值
                     */
                    bool TextResultsHasBeenSet() const;

                    /**
                     * 获取This field is used to return the detailed moan detection result of an audio file. For the specific result, see the detailed description of the `AudioResultDetailMoanResult` data structure.
                     * @return MoanResults This field is used to return the detailed moan detection result of an audio file. For the specific result, see the detailed description of the `AudioResultDetailMoanResult` data structure.
                     */
                    std::vector<AudioResultDetailMoanResult> GetMoanResults() const;

                    /**
                     * 设置This field is used to return the detailed moan detection result of an audio file. For the specific result, see the detailed description of the `AudioResultDetailMoanResult` data structure.
                     * @param MoanResults This field is used to return the detailed moan detection result of an audio file. For the specific result, see the detailed description of the `AudioResultDetailMoanResult` data structure.
                     */
                    void SetMoanResults(const std::vector<AudioResultDetailMoanResult>& _moanResults);

                    /**
                     * 判断参数 MoanResults 是否已赋值
                     * @return MoanResults 是否已赋值
                     */
                    bool MoanResultsHasBeenSet() const;

                    /**
                     * 获取This field is used to return the detailed minor language detection result of an audio. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
                     * @return LanguageResults This field is used to return the detailed minor language detection result of an audio. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
                     */
                    std::vector<AudioResultDetailLanguageResult> GetLanguageResults() const;

                    /**
                     * 设置This field is used to return the detailed minor language detection result of an audio. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
                     * @param LanguageResults This field is used to return the detailed minor language detection result of an audio. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
                     */
                    void SetLanguageResults(const std::vector<AudioResultDetailLanguageResult>& _languageResults);

                    /**
                     * 判断参数 LanguageResults 是否已赋值
                     * @return LanguageResults 是否已赋值
                     */
                    bool LanguageResultsHasBeenSet() const;

                    /**
                     * 获取This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubLabel This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SubLabel This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     */
                    bool SubLabelHasBeenSet() const;

                private:

                    /**
                     * This field is used to return whether the moderated content hit the moderation model. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn 99* indicates that the text is highly likely to be pornographic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * This field is used to return the text information generated by recognizing an audio file with ASR. Audio files of up to **5 hours** can be recognized. If this limit is exceeded, an error will be reported by the API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * This field is used to return the URL where audio segments are stored, which is valid for 1 day.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * This field is used to return the length of an audio file in seconds.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * This field is used to return additional information, and the returned information varies by customer or `Biztype`.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * This field is used to return the detailed moderation result of the text generated by recognizing an audio file with ASR. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
                     */
                    std::vector<AudioResultDetailTextResult> m_textResults;
                    bool m_textResultsHasBeenSet;

                    /**
                     * This field is used to return the detailed moan detection result of an audio file. For the specific result, see the detailed description of the `AudioResultDetailMoanResult` data structure.
                     */
                    std::vector<AudioResultDetailMoanResult> m_moanResults;
                    bool m_moanResultsHasBeenSet;

                    /**
                     * This field is used to return the detailed minor language detection result of an audio. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
                     */
                    std::vector<AudioResultDetailLanguageResult> m_languageResults;
                    bool m_languageResultsHasBeenSet;

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

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_AUDIORESULT_H_
