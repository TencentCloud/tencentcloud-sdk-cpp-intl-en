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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULTRESULT_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/ImageResultsResultDetail.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * Sub-result of the image output result
                */
                class ImageResultResult : public AbstractModel
                {
                public:
                    ImageResultResult();
                    ~ImageResultResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scenario
`Porn`: Pornographic
`Sexy`: Sexy
`Polity`: Political
`Illegal`: Illegal
`Abuse`: Abusive
`Terror`: Violence and terrorism
`Ad`: Advertising
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Scene Scenario
`Porn`: Pornographic
`Sexy`: Sexy
`Polity`: Political
`Illegal`: Illegal
`Abuse`: Abusive
`Terror`: Violence and terrorism
`Ad`: Advertising
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetScene() const;

                    /**
                     * 设置Scenario
`Porn`: Pornographic
`Sexy`: Sexy
`Polity`: Political
`Illegal`: Illegal
`Abuse`: Abusive
`Terror`: Violence and terrorism
`Ad`: Advertising
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Scene Scenario
`Porn`: Pornographic
`Sexy`: Sexy
`Polity`: Political
`Illegal`: Illegal
`Abuse`: Abusive
`Terror`: Violence and terrorism
`Ad`: Advertising
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取Whether the video content is hit
`0`: No
`1`: Yes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HitFlag Whether the video content is hit
`0`: No
`1`: Yes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置Whether the video content is hit
`0`: No
`1`: Yes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HitFlag Whether the video content is hit
`0`: No
`1`: Yes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHitFlag(const int64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取Suggestion. Values:
`Pass`: You’re suggested to allow the video to pass.
`Review`: You’re suggested to take a manual review.
`Block`: You’re suggested to block the non-compliant video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Suggestion Suggestion. Values:
`Pass`: You’re suggested to allow the video to pass.
`Review`: You’re suggested to take a manual review.
`Block`: You’re suggested to block the non-compliant video.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Suggestion. Values:
`Pass`: You’re suggested to allow the video to pass.
`Review`: You’re suggested to take a manual review.
`Block`: You’re suggested to block the non-compliant video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Suggestion Suggestion. Values:
`Pass`: You’re suggested to allow the video to pass.
`Review`: You’re suggested to take a manual review.
`Block`: You’re suggested to block the non-compliant video.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Label Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Label Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubLabel Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SubLabel Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取Score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Score Score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置Score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Score Score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取If the hit video contains political content, the list of politicians will be returned; otherwise a null value is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Names If the hit video contains political content, the list of politicians will be returned; otherwise a null value is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置If the hit video contains political content, the list of politicians will be returned; otherwise a null value is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Names If the hit video contains political content, the list of politicians will be returned; otherwise a null value is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取OCR-recognized text in the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Text OCR-recognized text in the image
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetText() const;

                    /**
                     * 设置OCR-recognized text in the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Text OCR-recognized text in the image
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Other details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Details Other details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageResultsResultDetail> GetDetails() const;

                    /**
                     * 设置Other details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Details Other details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDetails(const std::vector<ImageResultsResultDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * Scenario
`Porn`: Pornographic
`Sexy`: Sexy
`Polity`: Political
`Illegal`: Illegal
`Abuse`: Abusive
`Terror`: Violence and terrorism
`Ad`: Advertising
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * Whether the video content is hit
`0`: No
`1`: Yes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * Suggestion. Values:
`Pass`: You’re suggested to allow the video to pass.
`Review`: You’re suggested to take a manual review.
`Block`: You’re suggested to block the non-compliant video.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * Score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * If the hit video contains political content, the list of politicians will be returned; otherwise a null value is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * OCR-recognized text in the image
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Other details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageResultsResultDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULTRESULT_H_
