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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNOCRTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNOCRTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaContentReviewOcrTextSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Ocr text involving offensive content
                */
                class AiReviewPornOcrTaskOutput : public AbstractModel
                {
                public:
                    AiReviewPornOcrTaskOutput();
                    ~AiReviewPornOcrTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Score of Ocr text for offensive content, with a score from 0 to 100.
                     * @return Confidence Score of Ocr text for offensive content, with a score from 0 to 100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Score of Ocr text for offensive content, with a score from 0 to 100.
                     * @param _confidence Score of Ocr text for offensive content, with a score from 0 to 100.
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
                     * 获取Suggestion for Ocr text involving offensive content. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @return Suggestion Suggestion for Ocr text involving offensive content. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Suggestion for Ocr text involving offensive content. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @param _suggestion Suggestion for Ocr text involving offensive content. Value range:
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
                     * 获取List of video segments where Ocr text is suspected of involving offensive content.
<font color=red>Note</font>: This list can only show up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * @return SegmentSet List of video segments where Ocr text is suspected of involving offensive content.
<font color=red>Note</font>: This list can only show up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * 
                     */
                    std::vector<MediaContentReviewOcrTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of video segments where Ocr text is suspected of involving offensive content.
<font color=red>Note</font>: This list can only show up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * @param _segmentSet List of video segments where Ocr text is suspected of involving offensive content.
<font color=red>Note</font>: This list can only show up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * 
                     */
                    void SetSegmentSet(const std::vector<MediaContentReviewOcrTextSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取URL of the video segment list file that contains Ocr text suspected of offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file is not retained permanently and will be deleted after the SegmentSetFileUrlExpireTime time point is reached.)
                     * @return SegmentSetFileUrl URL of the video segment list file that contains Ocr text suspected of offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file is not retained permanently and will be deleted after the SegmentSetFileUrlExpireTime time point is reached.)
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置URL of the video segment list file that contains Ocr text suspected of offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file is not retained permanently and will be deleted after the SegmentSetFileUrlExpireTime time point is reached.)
                     * @param _segmentSetFileUrl URL of the video segment list file that contains Ocr text suspected of offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file is not retained permanently and will be deleted after the SegmentSetFileUrlExpireTime time point is reached.)
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
                     * 获取Expiration time of the file URL of the video segment list whose Ocr text involves suspected offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return SegmentSetFileUrlExpireTime Expiration time of the file URL of the video segment list whose Ocr text involves suspected offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the file URL of the video segment list whose Ocr text involves suspected offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _segmentSetFileUrlExpireTime Expiration time of the file URL of the video segment list whose Ocr text involves suspected offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * Score of Ocr text for offensive content, with a score from 0 to 100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Suggestion for Ocr text involving offensive content. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * List of video segments where Ocr text is suspected of involving offensive content.
<font color=red>Note</font>: This list can only show up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     */
                    std::vector<MediaContentReviewOcrTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * URL of the video segment list file that contains Ocr text suspected of offensive content. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file is not retained permanently and will be deleted after the SegmentSetFileUrlExpireTime time point is reached.)
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the file URL of the video segment list whose Ocr text involves suspected offensive content, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNOCRTASKOUTPUT_H_
