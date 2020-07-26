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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISHIGHLIGHTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISHIGHLIGHTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/HighlightSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Information of an intelligently generated highlight
                */
                class MediaAiAnalysisHighlightItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisHighlightItem();
                    ~MediaAiAnalysisHighlightItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Address of an intelligently generated highlight.
                     * @return HighlightUrl Address of an intelligently generated highlight.
                     */
                    std::string GetHighlightUrl() const;

                    /**
                     * 设置Address of an intelligently generated highlight.
                     * @param HighlightUrl Address of an intelligently generated highlight.
                     */
                    void SetHighlightUrl(const std::string& _highlightUrl);

                    /**
                     * 判断参数 HighlightUrl 是否已赋值
                     * @return HighlightUrl 是否已赋值
                     */
                    bool HighlightUrlHasBeenSet() const;

                    /**
                     * 获取Address of an intelligently generated highlight cover.
                     * @return CovImgUrl Address of an intelligently generated highlight cover.
                     */
                    std::string GetCovImgUrl() const;

                    /**
                     * 设置Address of an intelligently generated highlight cover.
                     * @param CovImgUrl Address of an intelligently generated highlight cover.
                     */
                    void SetCovImgUrl(const std::string& _covImgUrl);

                    /**
                     * 判断参数 CovImgUrl 是否已赋值
                     * @return CovImgUrl 是否已赋值
                     */
                    bool CovImgUrlHasBeenSet() const;

                    /**
                     * 获取Confidence of an intelligently generated highlight between 0 and 100.
                     * @return Confidence Confidence of an intelligently generated highlight between 0 and 100.
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence of an intelligently generated highlight between 0 and 100.
                     * @param Confidence Confidence of an intelligently generated highlight between 0 and 100.
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Duration of an intelligently generated highlight.
                     * @return Duration Duration of an intelligently generated highlight.
                     */
                    double GetDuration() const;

                    /**
                     * 设置Duration of an intelligently generated highlight.
                     * @param Duration Duration of an intelligently generated highlight.
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取List of intelligently generated highlight subsegments, which together form a highlight.
                     * @return SegmentSet List of intelligently generated highlight subsegments, which together form a highlight.
                     */
                    std::vector<HighlightSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of intelligently generated highlight subsegments, which together form a highlight.
                     * @param SegmentSet List of intelligently generated highlight subsegments, which together form a highlight.
                     */
                    void SetSegmentSet(const std::vector<HighlightSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * Address of an intelligently generated highlight.
                     */
                    std::string m_highlightUrl;
                    bool m_highlightUrlHasBeenSet;

                    /**
                     * Address of an intelligently generated highlight cover.
                     */
                    std::string m_covImgUrl;
                    bool m_covImgUrlHasBeenSet;

                    /**
                     * Confidence of an intelligently generated highlight between 0 and 100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Duration of an intelligently generated highlight.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * List of intelligently generated highlight subsegments, which together form a highlight.
                     */
                    std::vector<HighlightSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISHIGHLIGHTITEM_H_
