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
                * 
                */
                class ReviewAudioVideoTaskOutput : public AbstractModel
                {
                public:
                    ReviewAudioVideoTaskOutput();
                    ~ReviewAudioVideoTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Suggestion 
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置
                     * @param _suggestion 
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
                     * 获取
                     * @return Label 
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置
                     * @param _label 
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
                     * 获取
                     * @return Form 
                     * 
                     */
                    std::string GetForm() const;

                    /**
                     * 设置
                     * @param _form 
                     * 
                     */
                    void SetForm(const std::string& _form);

                    /**
                     * 判断参数 Form 是否已赋值
                     * @return Form 是否已赋值
                     * 
                     */
                    bool FormHasBeenSet() const;

                    /**
                     * 获取
                     * @return SegmentSet 
                     * 
                     */
                    std::vector<ReviewAudioVideoSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置
                     * @param _segmentSet 
                     * 
                     */
                    void SetSegmentSet(const std::vector<ReviewAudioVideoSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return SegmentSetFileUrl 
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置
                     * @param _segmentSetFileUrl 
                     * 
                     */
                    void SetSegmentSetFileUrl(const std::string& _segmentSetFileUrl);

                    /**
                     * 判断参数 SegmentSetFileUrl 是否已赋值
                     * @return SegmentSetFileUrl 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return SegmentSetFileUrlExpireTime 
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置
                     * @param _segmentSetFileUrlExpireTime 
                     * 
                     */
                    void SetSegmentSetFileUrlExpireTime(const std::string& _segmentSetFileUrlExpireTime);

                    /**
                     * 判断参数 SegmentSetFileUrlExpireTime 是否已赋值
                     * @return SegmentSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlExpireTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return CoverReviewResult 
                     * 
                     */
                    ReviewImageResult GetCoverReviewResult() const;

                    /**
                     * 设置
                     * @param _coverReviewResult 
                     * 
                     */
                    void SetCoverReviewResult(const ReviewImageResult& _coverReviewResult);

                    /**
                     * 判断参数 CoverReviewResult 是否已赋值
                     * @return CoverReviewResult 是否已赋值
                     * 
                     */
                    bool CoverReviewResultHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_form;
                    bool m_formHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ReviewAudioVideoSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                    /**
                     * 
                     */
                    ReviewImageResult m_coverReviewResult;
                    bool m_coverReviewResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOTASKOUTPUT_H_
