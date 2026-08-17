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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWPOLITICALTASKOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWPOLITICALTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaContentReviewPoliticalSegmentItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Sensitive information
                */
                class AiReviewPoliticalTaskOutput : public AbstractModel
                {
                public:
                    AiReviewPoliticalTaskOutput();
                    ~AiReviewPoliticalTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video sensitive content score, ranging from 0 to 100.
                     * @return Confidence Video sensitive content score, ranging from 0 to 100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Video sensitive content score, ranging from 0 to 100.
                     * @param _confidence Video sensitive content score, ranging from 0 to 100.
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
                     * 获取Result Suggestions for sensitive content, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @return Suggestion Result Suggestions for sensitive content, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Result Suggestions for sensitive content, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @param _suggestion Result Suggestions for sensitive content, value ranges from...to...
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
                     * 获取Video sensitive content result tag. The mapping between the LabelSet parameter in the content moderation template's visual sensitive content task control parameter (https://www.tencentcloud.com/document/api/862/37615?from_cn_redirect=1#AiReviewPoliticalTaskOutput) and the parameter value range of this parameter:
violation_photo:
<li>violation_photo: violation icon.</li>
Other (i.e., politician/entertainment/sport/entrepreneur/scholar/celebrity/military):
<li>politician: sensitive person.</li>
                     * @return Label Video sensitive content result tag. The mapping between the LabelSet parameter in the content moderation template's visual sensitive content task control parameter (https://www.tencentcloud.com/document/api/862/37615?from_cn_redirect=1#AiReviewPoliticalTaskOutput) and the parameter value range of this parameter:
violation_photo:
<li>violation_photo: violation icon.</li>
Other (i.e., politician/entertainment/sport/entrepreneur/scholar/celebrity/military):
<li>politician: sensitive person.</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Video sensitive content result tag. The mapping between the LabelSet parameter in the content moderation template's visual sensitive content task control parameter (https://www.tencentcloud.com/document/api/862/37615?from_cn_redirect=1#AiReviewPoliticalTaskOutput) and the parameter value range of this parameter:
violation_photo:
<li>violation_photo: violation icon.</li>
Other (i.e., politician/entertainment/sport/entrepreneur/scholar/celebrity/military):
<li>politician: sensitive person.</li>
                     * @param _label Video sensitive content result tag. The mapping between the LabelSet parameter in the content moderation template's visual sensitive content task control parameter (https://www.tencentcloud.com/document/api/862/37615?from_cn_redirect=1#AiReviewPoliticalTaskOutput) and the parameter value range of this parameter:
violation_photo:
<li>violation_photo: violation icon.</li>
Other (i.e., politician/entertainment/sport/entrepreneur/scholar/celebrity/military):
<li>politician: sensitive person.</li>
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
                     * 获取List of video segments suspected of containing sensitive content.
                     * @return SegmentSet List of video segments suspected of containing sensitive content.
                     * 
                     */
                    std::vector<MediaContentReviewPoliticalSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of video segments suspected of containing sensitive content.
                     * @param _segmentSet List of video segments suspected of containing sensitive content.
                     * 
                     */
                    void SetSegmentSet(const std::vector<MediaContentReviewPoliticalSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * Video sensitive content score, ranging from 0 to 100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Result Suggestions for sensitive content, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Video sensitive content result tag. The mapping between the LabelSet parameter in the content moderation template's visual sensitive content task control parameter (https://www.tencentcloud.com/document/api/862/37615?from_cn_redirect=1#AiReviewPoliticalTaskOutput) and the parameter value range of this parameter:
violation_photo:
<li>violation_photo: violation icon.</li>
Other (i.e., politician/entertainment/sport/entrepreneur/scholar/celebrity/military):
<li>politician: sensitive person.</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * List of video segments suspected of containing sensitive content.
                     */
                    std::vector<MediaContentReviewPoliticalSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWPOLITICALTASKOUTPUT_H_
