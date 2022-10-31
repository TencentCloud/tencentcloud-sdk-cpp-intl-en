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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULT_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/ImageResultResult.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * Result details
                */
                class ImageResult : public AbstractModel
                {
                public:
                    ImageResult();
                    ~ImageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Hit tag
`Porn`: Pornographic
`Sexy`: Sexy
`Polity`: Political
`Illegal`: Illegal
`Abuse`: Abusive
`Terror`: Violence and terrorism
`Ad`: Advertising
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Label Hit tag
`Porn`: Pornographic
`Sexy`: Sexy
`Polity`: Political
`Illegal`: Illegal
`Abuse`: Abusive
`Terror`: Violence and terrorism
`Ad`: Advertising
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Hit tag
`Porn`: Pornographic
`Sexy`: Sexy
`Polity`: Political
`Illegal`: Illegal
`Abuse`: Abusive
`Terror`: Violence and terrorism
`Ad`: Advertising
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Label Hit tag
`Porn`: Pornographic
`Sexy`: Sexy
`Polity`: Political
`Illegal`: Illegal
`Abuse`: Abusive
`Terror`: Violence and terrorism
`Ad`: Advertising
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

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
                     * 获取Captured images
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Results Captured images
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageResultResult> GetResults() const;

                    /**
                     * 设置Captured images
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Results Captured images
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResults(const std::vector<ImageResultResult>& _results);

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取Image URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Url Image URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Image URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Url Image URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Additional field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Extra Additional field
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置Additional field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Extra Additional field
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * Whether the video content is hit
`0`: No
`1`: Yes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * Hit tag
`Porn`: Pornographic
`Sexy`: Sexy
`Polity`: Political
`Illegal`: Illegal
`Abuse`: Abusive
`Terror`: Violence and terrorism
`Ad`: Advertising
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

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
                     * Score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Captured images
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageResultResult> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * Image URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Additional field
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULT_H_
