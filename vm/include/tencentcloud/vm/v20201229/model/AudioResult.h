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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_AUDIORESULT_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_AUDIORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20201229/model/AudioResultDetailTextResult.h>
#include <tencentcloud/vm/v20201229/model/AudioResultDetailMoanResult.h>
#include <tencentcloud/vm/v20201229/model/AudioResultDetailLanguageResult.h>
#include <tencentcloud/vm/v20201229/model/RecognitionResult.h>


namespace TencentCloud
{
    namespace Vm
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
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置This field is used to return whether the moderated content hit the moderation model. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _hitFlag This field is used to return whether the moderated content hit the moderation model. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHitFlag(const int64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     * 
                     */
                    bool HitFlagHasBeenSet() const;

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
                     * 获取This field is used to return the text information generated by recognizing an audio file with ASR. Audio files of up to **5 hours** can be recognized. If this limit is exceeded, an error will be reported by the API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Text This field is used to return the text information generated by recognizing an audio file with ASR. Audio files of up to **5 hours** can be recognized. If this limit is exceeded, an error will be reported by the API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置This field is used to return the text information generated by recognizing an audio file with ASR. Audio files of up to **5 hours** can be recognized. If this limit is exceeded, an error will be reported by the API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _text This field is used to return the text information generated by recognizing an audio file with ASR. Audio files of up to **5 hours** can be recognized. If this limit is exceeded, an error will be reported by the API.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取This field is used to return the URL where audio segments are stored, which is valid for 1 day.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Url This field is used to return the URL where audio segments are stored, which is valid for 1 day.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置This field is used to return the URL where audio segments are stored, which is valid for 1 day.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _url This field is used to return the URL where audio segments are stored, which is valid for 1 day.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取This field is used to return the length of an audio file in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Duration This field is used to return the length of an audio file in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置This field is used to return the length of an audio file in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _duration This field is used to return the length of an audio file in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取This field is used to return the additional information (Extra) in the input parameters. If it is not configured, an empty value will be returned by default.<br>Note: the returned information varies by customer or `Biztype`. If you need to configure this field, submit a ticket or contact the aftersales service for assistance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Extra This field is used to return the additional information (Extra) in the input parameters. If it is not configured, an empty value will be returned by default.<br>Note: the returned information varies by customer or `Biztype`. If you need to configure this field, submit a ticket or contact the aftersales service for assistance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置This field is used to return the additional information (Extra) in the input parameters. If it is not configured, an empty value will be returned by default.<br>Note: the returned information varies by customer or `Biztype`. If you need to configure this field, submit a ticket or contact the aftersales service for assistance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _extra This field is used to return the additional information (Extra) in the input parameters. If it is not configured, an empty value will be returned by default.<br>Note: the returned information varies by customer or `Biztype`. If you need to configure this field, submit a ticket or contact the aftersales service for assistance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取This field is used to return the detailed moderation result of the text generated by recognizing an audio file with ASR. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TextResults This field is used to return the detailed moderation result of the text generated by recognizing an audio file with ASR. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AudioResultDetailTextResult> GetTextResults() const;

                    /**
                     * 设置This field is used to return the detailed moderation result of the text generated by recognizing an audio file with ASR. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _textResults This field is used to return the detailed moderation result of the text generated by recognizing an audio file with ASR. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTextResults(const std::vector<AudioResultDetailTextResult>& _textResults);

                    /**
                     * 判断参数 TextResults 是否已赋值
                     * @return TextResults 是否已赋值
                     * 
                     */
                    bool TextResultsHasBeenSet() const;

                    /**
                     * 获取This field is used to return the detailed moan detection result of an audio file. For the specific result, see the detailed description of the `AudioResultDetailMoanResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MoanResults This field is used to return the detailed moan detection result of an audio file. For the specific result, see the detailed description of the `AudioResultDetailMoanResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AudioResultDetailMoanResult> GetMoanResults() const;

                    /**
                     * 设置This field is used to return the detailed moan detection result of an audio file. For the specific result, see the detailed description of the `AudioResultDetailMoanResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _moanResults This field is used to return the detailed moan detection result of an audio file. For the specific result, see the detailed description of the `AudioResultDetailMoanResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMoanResults(const std::vector<AudioResultDetailMoanResult>& _moanResults);

                    /**
                     * 判断参数 MoanResults 是否已赋值
                     * @return MoanResults 是否已赋值
                     * 
                     */
                    bool MoanResultsHasBeenSet() const;

                    /**
                     * 获取This field is used to return the detailed minor language detection result of an audio. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LanguageResults This field is used to return the detailed minor language detection result of an audio. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AudioResultDetailLanguageResult> GetLanguageResults() const;

                    /**
                     * 设置This field is used to return the detailed minor language detection result of an audio. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _languageResults This field is used to return the detailed minor language detection result of an audio. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLanguageResults(const std::vector<AudioResultDetailLanguageResult>& _languageResults);

                    /**
                     * 判断参数 LanguageResults 是否已赋值
                     * @return LanguageResults 是否已赋值
                     * 
                     */
                    bool LanguageResultsHasBeenSet() const;

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

                    /**
                     * 获取List of recognized category labels
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RecognitionResults List of recognized category labels
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RecognitionResult> GetRecognitionResults() const;

                    /**
                     * 设置List of recognized category labels
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _recognitionResults List of recognized category labels
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRecognitionResults(const std::vector<RecognitionResult>& _recognitionResults);

                    /**
                     * 判断参数 RecognitionResults 是否已赋值
                     * @return RecognitionResults 是否已赋值
                     * 
                     */
                    bool RecognitionResultsHasBeenSet() const;

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
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * This field is used to return the additional information (Extra) in the input parameters. If it is not configured, an empty value will be returned by default.<br>Note: the returned information varies by customer or `Biztype`. If you need to configure this field, submit a ticket or contact the aftersales service for assistance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * This field is used to return the detailed moderation result of the text generated by recognizing an audio file with ASR. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AudioResultDetailTextResult> m_textResults;
                    bool m_textResultsHasBeenSet;

                    /**
                     * This field is used to return the detailed moan detection result of an audio file. For the specific result, see the detailed description of the `AudioResultDetailMoanResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AudioResultDetailMoanResult> m_moanResults;
                    bool m_moanResultsHasBeenSet;

                    /**
                     * This field is used to return the detailed minor language detection result of an audio. For the specific result, see the detailed description of the `AudioResultDetailLanguageResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AudioResultDetailLanguageResult> m_languageResults;
                    bool m_languageResultsHasBeenSet;

                    /**
                     * This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * List of recognized category labels
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<RecognitionResult> m_recognitionResults;
                    bool m_recognitionResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_AUDIORESULT_H_
