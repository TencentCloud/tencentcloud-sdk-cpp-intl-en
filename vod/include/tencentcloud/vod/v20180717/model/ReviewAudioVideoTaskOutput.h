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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ReviewAudioVideoSegmentItem.h>
#include <tencentcloud/vod/v20180717/model/ReviewImageResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The output of a moderation task.
                */
                class ReviewAudioVideoTaskOutput : public AbstractModel
                {
                public:
                    ReviewAudioVideoTaskOutput();
                    ~ReviewAudioVideoTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The handling suggestion. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @return Suggestion The handling suggestion. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置The handling suggestion. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @param Suggestion The handling suggestion. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取The most likely label for the suspicious content. This parameter is valid only if `Suggestion` is `review` or `block`.
<li>Porn</li>
<li>Terrorism</li>
                     * @return Label The most likely label for the suspicious content. This parameter is valid only if `Suggestion` is `review` or `block`.
<li>Porn</li>
<li>Terrorism</li>
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置The most likely label for the suspicious content. This parameter is valid only if `Suggestion` is `review` or `block`.
<li>Porn</li>
<li>Terrorism</li>
                     * @param Label The most likely label for the suspicious content. This parameter is valid only if `Suggestion` is `review` or `block`.
<li>Porn</li>
<li>Terrorism</li>
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取The most likely format of the suspicious content. This parameter is valid only if `Suggestion` is `review` or `block`.
<li>Image</li>
<li>OCR</li>
<li>ASR</li>
<li>Voice</li>
                     * @return Form The most likely format of the suspicious content. This parameter is valid only if `Suggestion` is `review` or `block`.
<li>Image</li>
<li>OCR</li>
<li>ASR</li>
<li>Voice</li>
                     */
                    std::string GetForm() const;

                    /**
                     * 设置The most likely format of the suspicious content. This parameter is valid only if `Suggestion` is `review` or `block`.
<li>Image</li>
<li>OCR</li>
<li>ASR</li>
<li>Voice</li>
                     * @param Form The most likely format of the suspicious content. This parameter is valid only if `Suggestion` is `review` or `block`.
<li>Image</li>
<li>OCR</li>
<li>ASR</li>
<li>Voice</li>
                     */
                    void SetForm(const std::string& _form);

                    /**
                     * 判断参数 Form 是否已赋值
                     * @return Form 是否已赋值
                     */
                    bool FormHasBeenSet() const;

                    /**
                     * 获取A list of the suspicious segments detected.
<font color=red>Note</font>: Only the first 10 results will be returned at most. You can get all the results from the file specified by `SegmentSetFileUrl`.
                     * @return SegmentSet A list of the suspicious segments detected.
<font color=red>Note</font>: Only the first 10 results will be returned at most. You can get all the results from the file specified by `SegmentSetFileUrl`.
                     */
                    std::vector<ReviewAudioVideoSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置A list of the suspicious segments detected.
<font color=red>Note</font>: Only the first 10 results will be returned at most. You can get all the results from the file specified by `SegmentSetFileUrl`.
                     * @param SegmentSet A list of the suspicious segments detected.
<font color=red>Note</font>: Only the first 10 results will be returned at most. You can get all the results from the file specified by `SegmentSetFileUrl`.
                     */
                    void SetSegmentSet(const std::vector<ReviewAudioVideoSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取The URL of the file that contains suspicious segments. The file is in JSON format and has the same data structure as `SegmentSet`. Instead of being saved permanently, the file is deleted upon the expiration time (`SegmentSetFileUrlExpireTime`).
                     * @return SegmentSetFileUrl The URL of the file that contains suspicious segments. The file is in JSON format and has the same data structure as `SegmentSet`. Instead of being saved permanently, the file is deleted upon the expiration time (`SegmentSetFileUrlExpireTime`).
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置The URL of the file that contains suspicious segments. The file is in JSON format and has the same data structure as `SegmentSet`. Instead of being saved permanently, the file is deleted upon the expiration time (`SegmentSetFileUrlExpireTime`).
                     * @param SegmentSetFileUrl The URL of the file that contains suspicious segments. The file is in JSON format and has the same data structure as `SegmentSet`. Instead of being saved permanently, the file is deleted upon the expiration time (`SegmentSetFileUrlExpireTime`).
                     */
                    void SetSegmentSetFileUrl(const std::string& _segmentSetFileUrl);

                    /**
                     * 判断参数 SegmentSetFileUrl 是否已赋值
                     * @return SegmentSetFileUrl 是否已赋值
                     */
                    bool SegmentSetFileUrlHasBeenSet() const;

                    /**
                     * 获取The expiration time of the file that contains suspicious segments, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     * @return SegmentSetFileUrlExpireTime The expiration time of the file that contains suspicious segments, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置The expiration time of the file that contains suspicious segments, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     * @param SegmentSetFileUrlExpireTime The expiration time of the file that contains suspicious segments, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     */
                    void SetSegmentSetFileUrlExpireTime(const std::string& _segmentSetFileUrlExpireTime);

                    /**
                     * 判断参数 SegmentSetFileUrlExpireTime 是否已赋值
                     * @return SegmentSetFileUrlExpireTime 是否已赋值
                     */
                    bool SegmentSetFileUrlExpireTimeHasBeenSet() const;

                    /**
                     * 获取The thumbnail moderation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CoverReviewResult The thumbnail moderation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ReviewImageResult GetCoverReviewResult() const;

                    /**
                     * 设置The thumbnail moderation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CoverReviewResult The thumbnail moderation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCoverReviewResult(const ReviewImageResult& _coverReviewResult);

                    /**
                     * 判断参数 CoverReviewResult 是否已赋值
                     * @return CoverReviewResult 是否已赋值
                     */
                    bool CoverReviewResultHasBeenSet() const;

                private:

                    /**
                     * The handling suggestion. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * The most likely label for the suspicious content. This parameter is valid only if `Suggestion` is `review` or `block`.
<li>Porn</li>
<li>Terrorism</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * The most likely format of the suspicious content. This parameter is valid only if `Suggestion` is `review` or `block`.
<li>Image</li>
<li>OCR</li>
<li>ASR</li>
<li>Voice</li>
                     */
                    std::string m_form;
                    bool m_formHasBeenSet;

                    /**
                     * A list of the suspicious segments detected.
<font color=red>Note</font>: Only the first 10 results will be returned at most. You can get all the results from the file specified by `SegmentSetFileUrl`.
                     */
                    std::vector<ReviewAudioVideoSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * The URL of the file that contains suspicious segments. The file is in JSON format and has the same data structure as `SegmentSet`. Instead of being saved permanently, the file is deleted upon the expiration time (`SegmentSetFileUrlExpireTime`).
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * The expiration time of the file that contains suspicious segments, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                    /**
                     * The thumbnail moderation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ReviewImageResult m_coverReviewResult;
                    bool m_coverReviewResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOTASKOUTPUT_H_
