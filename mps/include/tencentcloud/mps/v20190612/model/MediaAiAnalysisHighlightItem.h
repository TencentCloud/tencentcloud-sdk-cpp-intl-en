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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISHIGHLIGHTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISHIGHLIGHTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/HighlightSegmentItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The information of intelligently generated highlight segments.
                */
                class MediaAiAnalysisHighlightItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisHighlightItem();
                    ~MediaAiAnalysisHighlightItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The URL of the highlight segments.
                     * @return HighlightPath The URL of the highlight segments.
                     */
                    std::string GetHighlightPath() const;

                    /**
                     * 设置The URL of the highlight segments.
                     * @param HighlightPath The URL of the highlight segments.
                     */
                    void SetHighlightPath(const std::string& _highlightPath);

                    /**
                     * 判断参数 HighlightPath 是否已赋值
                     * @return HighlightPath 是否已赋值
                     */
                    bool HighlightPathHasBeenSet() const;

                    /**
                     * 获取The URL of the thumbnail.
                     * @return CovImgPath The URL of the thumbnail.
                     */
                    std::string GetCovImgPath() const;

                    /**
                     * 设置The URL of the thumbnail.
                     * @param CovImgPath The URL of the thumbnail.
                     */
                    void SetCovImgPath(const std::string& _covImgPath);

                    /**
                     * 判断参数 CovImgPath 是否已赋值
                     * @return CovImgPath 是否已赋值
                     */
                    bool CovImgPathHasBeenSet() const;

                    /**
                     * 获取The confidence score. Value range: 0-100.
                     * @return Confidence The confidence score. Value range: 0-100.
                     */
                    double GetConfidence() const;

                    /**
                     * 设置The confidence score. Value range: 0-100.
                     * @param Confidence The confidence score. Value range: 0-100.
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取The duration of the highlights.
                     * @return Duration The duration of the highlights.
                     */
                    double GetDuration() const;

                    /**
                     * 设置The duration of the highlights.
                     * @param Duration The duration of the highlights.
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取A list of the highlight segments.
                     * @return SegmentSet A list of the highlight segments.
                     */
                    std::vector<HighlightSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置A list of the highlight segments.
                     * @param SegmentSet A list of the highlight segments.
                     */
                    void SetSegmentSet(const std::vector<HighlightSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * The URL of the highlight segments.
                     */
                    std::string m_highlightPath;
                    bool m_highlightPathHasBeenSet;

                    /**
                     * The URL of the thumbnail.
                     */
                    std::string m_covImgPath;
                    bool m_covImgPathHasBeenSet;

                    /**
                     * The confidence score. Value range: 0-100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * The duration of the highlights.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * A list of the highlight segments.
                     */
                    std::vector<HighlightSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISHIGHLIGHTITEM_H_
