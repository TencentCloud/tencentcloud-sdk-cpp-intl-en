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
                * Intelligent highlight info
                */
                class MediaAiAnalysisHighlightItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisHighlightItem();
                    ~MediaAiAnalysisHighlightItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intelligent highlight address.
                     * @return HighlightPath Intelligent highlight address.
                     * 
                     */
                    std::string GetHighlightPath() const;

                    /**
                     * 设置Intelligent highlight address.
                     * @param _highlightPath Intelligent highlight address.
                     * 
                     */
                    void SetHighlightPath(const std::string& _highlightPath);

                    /**
                     * 判断参数 HighlightPath 是否已赋值
                     * @return HighlightPath 是否已赋值
                     * 
                     */
                    bool HighlightPathHasBeenSet() const;

                    /**
                     * 获取Intelligent highlight cover address.
                     * @return CovImgPath Intelligent highlight cover address.
                     * 
                     */
                    std::string GetCovImgPath() const;

                    /**
                     * 设置Intelligent highlight cover address.
                     * @param _covImgPath Intelligent highlight cover address.
                     * 
                     */
                    void SetCovImgPath(const std::string& _covImgPath);

                    /**
                     * 判断参数 CovImgPath 是否已赋值
                     * @return CovImgPath 是否已赋值
                     * 
                     */
                    bool CovImgPathHasBeenSet() const;

                    /**
                     * 获取Reliability of the intelligent highlights, with a value range from 0 to 100.
                     * @return Confidence Reliability of the intelligent highlights, with a value range from 0 to 100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Reliability of the intelligent highlights, with a value range from 0 to 100.
                     * @param _confidence Reliability of the intelligent highlights, with a value range from 0 to 100.
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Intelligent highlight duration.
                     * @return Duration Intelligent highlight duration.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Intelligent highlight duration.
                     * @param _duration Intelligent highlight duration.
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Intelligent highlight sub-clip list.
                     * @return SegmentSet Intelligent highlight sub-clip list.
                     * 
                     */
                    std::vector<HighlightSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Intelligent highlight sub-clip list.
                     * @param _segmentSet Intelligent highlight sub-clip list.
                     * 
                     */
                    void SetSegmentSet(const std::vector<HighlightSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return HighlightUrl 
                     * 
                     */
                    std::string GetHighlightUrl() const;

                    /**
                     * 设置
                     * @param _highlightUrl 
                     * 
                     */
                    void SetHighlightUrl(const std::string& _highlightUrl);

                    /**
                     * 判断参数 HighlightUrl 是否已赋值
                     * @return HighlightUrl 是否已赋值
                     * 
                     */
                    bool HighlightUrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return CovImgUrl 
                     * 
                     */
                    std::string GetCovImgUrl() const;

                    /**
                     * 设置
                     * @param _covImgUrl 
                     * 
                     */
                    void SetCovImgUrl(const std::string& _covImgUrl);

                    /**
                     * 判断参数 CovImgUrl 是否已赋值
                     * @return CovImgUrl 是否已赋值
                     * 
                     */
                    bool CovImgUrlHasBeenSet() const;

                private:

                    /**
                     * Intelligent highlight address.
                     */
                    std::string m_highlightPath;
                    bool m_highlightPathHasBeenSet;

                    /**
                     * Intelligent highlight cover address.
                     */
                    std::string m_covImgPath;
                    bool m_covImgPathHasBeenSet;

                    /**
                     * Reliability of the intelligent highlights, with a value range from 0 to 100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Intelligent highlight duration.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Intelligent highlight sub-clip list.
                     */
                    std::vector<HighlightSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_highlightUrl;
                    bool m_highlightUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_covImgUrl;
                    bool m_covImgUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISHIGHLIGHTITEM_H_
