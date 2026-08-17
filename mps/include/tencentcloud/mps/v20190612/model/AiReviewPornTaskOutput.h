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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWPORNTASKOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWPORNTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaContentReviewSegmentItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Pornographic result info
                */
                class AiReviewPornTaskOutput : public AbstractModel
                {
                public:
                    AiReviewPornTaskOutput();
                    ~AiReviewPornTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video porn detection score, ranging from 0 to 100.
                     * @return Confidence Video porn detection score, ranging from 0 to 100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Video porn detection score, ranging from 0 to 100.
                     * @param _confidence Video porn detection score, ranging from 0 to 100.
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
                     * 获取Pornographic result recommendation, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @return Suggestion Pornographic result recommendation, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Pornographic result recommendation, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @param _suggestion Pornographic result recommendation, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
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
                     * 获取Video pornographic result tag, value ranges from...to...
<li>porn: pornography.</li>
<li>sexy: sexy.</li>
<li>vulgar: vulgarity.</li>
<li>intimacy: intimate behavior.</li>
                     * @return Label Video pornographic result tag, value ranges from...to...
<li>porn: pornography.</li>
<li>sexy: sexy.</li>
<li>vulgar: vulgarity.</li>
<li>intimacy: intimate behavior.</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Video pornographic result tag, value ranges from...to...
<li>porn: pornography.</li>
<li>sexy: sexy.</li>
<li>vulgar: vulgarity.</li>
<li>intimacy: intimate behavior.</li>
                     * @param _label Video pornographic result tag, value ranges from...to...
<li>porn: pornography.</li>
<li>sexy: sexy.</li>
<li>vulgar: vulgarity.</li>
<li>intimacy: intimate behavior.</li>
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
                     * 获取List of video segments suspected of containing pornographic content.
                     * @return SegmentSet List of video segments suspected of containing pornographic content.
                     * 
                     */
                    std::vector<MediaContentReviewSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of video segments suspected of containing pornographic content.
                     * @param _segmentSet List of video segments suspected of containing pornographic content.
                     * 
                     */
                    void SetSegmentSet(const std::vector<MediaContentReviewSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * Video porn detection score, ranging from 0 to 100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Pornographic result recommendation, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Video pornographic result tag, value ranges from...to...
<li>porn: pornography.</li>
<li>sexy: sexy.</li>
<li>vulgar: vulgarity.</li>
<li>intimacy: intimate behavior.</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * List of video segments suspected of containing pornographic content.
                     */
                    std::vector<MediaContentReviewSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWPORNTASKOUTPUT_H_
