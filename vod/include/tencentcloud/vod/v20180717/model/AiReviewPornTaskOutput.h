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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaContentReviewSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Authentication result info involving offensive content
                */
                class AiReviewPornTaskOutput : public AbstractModel
                {
                public:
                    AiReviewPornTaskOutput();
                    ~AiReviewPornTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video identification involves scoring offensive content, with a score from 0 to 100.
                     * @return Confidence Video identification involves scoring offensive content, with a score from 0 to 100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Video identification involves scoring offensive content, with a score from 0 to 100.
                     * @param _confidence Video identification involves scoring offensive content, with a score from 0 to 100.
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
                     * 获取Result suggestions for authentication involving offensive content. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @return Suggestion Result suggestions for authentication involving offensive content. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Result suggestions for authentication involving offensive content. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @param _suggestion Result suggestions for authentication involving offensive content. Value range:
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
                     * 获取Result tag of video identification involving offensive content. Value range:
<li>porn: Pornography.</li>
<li>sexy: Sexy.</li>
<li>vulgar: Vulgar.</li>
<li>intimacy: intimate behavior.</li>
                     * @return Label Result tag of video identification involving offensive content. Value range:
<li>porn: Pornography.</li>
<li>sexy: Sexy.</li>
<li>vulgar: Vulgar.</li>
<li>intimacy: intimate behavior.</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Result tag of video identification involving offensive content. Value range:
<li>porn: Pornography.</li>
<li>sexy: Sexy.</li>
<li>vulgar: Vulgar.</li>
<li>intimacy: intimate behavior.</li>
                     * @param _label Result tag of video identification involving offensive content. Value range:
<li>porn: Pornography.</li>
<li>sexy: Sexy.</li>
<li>vulgar: Vulgar.</li>
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
                     * 获取List of video segments suspected of involving offensive content.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * @return SegmentSet List of video segments suspected of involving offensive content.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * 
                     */
                    std::vector<MediaContentReviewSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of video segments suspected of involving offensive content.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * @param _segmentSet List of video segments suspected of involving offensive content.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * 
                     */
                    void SetSegmentSet(const std::vector<MediaContentReviewSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取URL of the Segment List File that may involve offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file is not retained permanently. It will be deleted after the time point specified by SegmentSetFileUrlExpireTime is reached.)
                     * @return SegmentSetFileUrl URL of the Segment List File that may involve offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file is not retained permanently. It will be deleted after the time point specified by SegmentSetFileUrlExpireTime is reached.)
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置URL of the Segment List File that may involve offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file is not retained permanently. It will be deleted after the time point specified by SegmentSetFileUrlExpireTime is reached.)
                     * @param _segmentSetFileUrl URL of the Segment List File that may involve offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file is not retained permanently. It will be deleted after the time point specified by SegmentSetFileUrlExpireTime is reached.)
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
                     * 获取Expiration time of the file URL for the video segment list where the video involves suspected offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return SegmentSetFileUrlExpireTime Expiration time of the file URL for the video segment list where the video involves suspected offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the file URL for the video segment list where the video involves suspected offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _segmentSetFileUrlExpireTime Expiration time of the file URL for the video segment list where the video involves suspected offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetSegmentSetFileUrlExpireTime(const std::string& _segmentSetFileUrlExpireTime);

                    /**
                     * 判断参数 SegmentSetFileUrlExpireTime 是否已赋值
                     * @return SegmentSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Video identification involves scoring offensive content, with a score from 0 to 100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Result suggestions for authentication involving offensive content. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Result tag of video identification involving offensive content. Value range:
<li>porn: Pornography.</li>
<li>sexy: Sexy.</li>
<li>vulgar: Vulgar.</li>
<li>intimacy: intimate behavior.</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * List of video segments suspected of involving offensive content.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     */
                    std::vector<MediaContentReviewSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * URL of the Segment List File that may involve offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file is not retained permanently. It will be deleted after the time point specified by SegmentSetFileUrlExpireTime is reached.)
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the file URL for the video segment list where the video involves suspected offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNTASKOUTPUT_H_
