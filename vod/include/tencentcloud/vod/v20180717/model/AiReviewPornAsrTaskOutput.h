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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNASRTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNASRTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaContentReviewAsrTextSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Asr text involves offensive content
                */
                class AiReviewPornAsrTaskOutput : public AbstractModel
                {
                public:
                    AiReviewPornAsrTaskOutput();
                    ~AiReviewPornAsrTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Score of Asr text involving offensive content. Value range: 0–100.
                     * @return Confidence Score of Asr text involving offensive content. Value range: 0–100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Score of Asr text involving offensive content. Value range: 0–100.
                     * @param _confidence Score of Asr text involving offensive content. Value range: 0–100.
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
                     * 获取Result suggestions for Asr text involving offensive content. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @return Suggestion Result suggestions for Asr text involving offensive content. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Result suggestions for Asr text involving offensive content. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @param _suggestion Result suggestions for Asr text involving offensive content. Value range:
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
                     * 获取List of video segments whose Asr text is suspected of involving offensive content.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * @return SegmentSet List of video segments whose Asr text is suspected of involving offensive content.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * 
                     */
                    std::vector<MediaContentReviewAsrTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of video segments whose Asr text is suspected of involving offensive content.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * @param _segmentSet List of video segments whose Asr text is suspected of involving offensive content.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * 
                     */
                    void SetSegmentSet(const std::vector<MediaContentReviewAsrTextSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取URL of the video segment list file where the Asr text is suspected of involving offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file will not be retained permanently and will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * @return SegmentSetFileUrl URL of the video segment list file where the Asr text is suspected of involving offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file will not be retained permanently and will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置URL of the video segment list file where the Asr text is suspected of involving offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file will not be retained permanently and will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * @param _segmentSetFileUrl URL of the video segment list file where the Asr text is suspected of involving offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file will not be retained permanently and will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
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
                     * 获取Expiration time of the Segment List File URL for videos whose Asr text may involve offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return SegmentSetFileUrlExpireTime Expiration time of the Segment List File URL for videos whose Asr text may involve offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the Segment List File URL for videos whose Asr text may involve offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _segmentSetFileUrlExpireTime Expiration time of the Segment List File URL for videos whose Asr text may involve offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * Score of Asr text involving offensive content. Value range: 0–100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Result suggestions for Asr text involving offensive content. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * List of video segments whose Asr text is suspected of involving offensive content.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     */
                    std::vector<MediaContentReviewAsrTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * URL of the video segment list file where the Asr text is suspected of involving offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file will not be retained permanently and will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the Segment List File URL for videos whose Asr text may involve offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNASRTASKOUTPUT_H_
