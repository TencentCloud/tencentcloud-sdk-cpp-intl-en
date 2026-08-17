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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIACONTENTREVIEWOCRTEXTSEGMENTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIACONTENTREVIEWOCRTEXTSEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Content review Ocr text audit suspected segment
                */
                class MediaContentReviewOcrTextSegmentItem : public AbstractModel
                {
                public:
                    MediaContentReviewOcrTextSegmentItem();
                    ~MediaContentReviewOcrTextSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time offset of a suspected segment, in seconds.
                     * @return StartTimeOffset Start time offset of a suspected segment, in seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of a suspected segment, in seconds.
                     * @param _startTimeOffset Start time offset of a suspected segment, in seconds.
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取End time offset of a suspected segment, in seconds.
                     * @return EndTimeOffset End time offset of a suspected segment, in seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of a suspected segment, in seconds.
                     * @param _endTimeOffset End time offset of a suspected segment, in seconds.
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Confidence degree of the suspected segment.
                     * @return Confidence Confidence degree of the suspected segment.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence degree of the suspected segment.
                     * @param _confidence Confidence degree of the suspected segment.
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
                     * 获取Result Suggestions for suspected segment review, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @return Suggestion Result Suggestions for suspected segment review, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Result Suggestions for suspected segment review, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @param _suggestion Result Suggestions for suspected segment review, value ranges from...to...
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
                     * 获取Suspicious keyword list.
                     * @return KeywordSet Suspicious keyword list.
                     * 
                     */
                    std::vector<std::string> GetKeywordSet() const;

                    /**
                     * 设置Suspicious keyword list.
                     * @param _keywordSet Suspicious keyword list.
                     * 
                     */
                    void SetKeywordSet(const std::vector<std::string>& _keywordSet);

                    /**
                     * 判断参数 KeywordSet 是否已赋值
                     * @return KeywordSet 是否已赋值
                     * 
                     */
                    bool KeywordSetHasBeenSet() const;

                    /**
                     * 获取Area coordinates of suspected text occurrence (pixel-level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and bottom-right corner.
                     * @return AreaCoordSet Area coordinates of suspected text occurrence (pixel-level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and bottom-right corner.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Area coordinates of suspected text occurrence (pixel-level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and bottom-right corner.
                     * @param _areaCoordSet Area coordinates of suspected text occurrence (pixel-level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and bottom-right corner.
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                    /**
                     * 获取Suspected image URL (Images are not retained permanently, reaching
The image will be deleted after the PicUrlExpireTime time point.
                     * @return Url Suspected image URL (Images are not retained permanently, reaching
The image will be deleted after the PicUrlExpireTime time point.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Suspected image URL (Images are not retained permanently, reaching
The image will be deleted after the PicUrlExpireTime time point.
                     * @param _url Suspected image URL (Images are not retained permanently, reaching
The image will be deleted after the PicUrlExpireTime time point.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Expiration time of the suspected image URL, using the ISO date format (https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @return PicUrlExpireTime Expiration time of the suspected image URL, using the ISO date format (https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetPicUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the suspected image URL, using the ISO date format (https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @param _picUrlExpireTime Expiration time of the suspected image URL, using the ISO date format (https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    void SetPicUrlExpireTime(const std::string& _picUrlExpireTime);

                    /**
                     * 判断参数 PicUrlExpireTime 是否已赋值
                     * @return PicUrlExpireTime 是否已赋值
                     * 
                     */
                    bool PicUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Start time offset of a suspected segment, in seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of a suspected segment, in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Confidence degree of the suspected segment.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Result Suggestions for suspected segment review, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Suspicious keyword list.
                     */
                    std::vector<std::string> m_keywordSet;
                    bool m_keywordSetHasBeenSet;

                    /**
                     * Area coordinates of suspected text occurrence (pixel-level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and bottom-right corner.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * Suspected image URL (Images are not retained permanently, reaching
The image will be deleted after the PicUrlExpireTime time point.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Expiration time of the suspected image URL, using the ISO date format (https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_picUrlExpireTime;
                    bool m_picUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIACONTENTREVIEWOCRTEXTSEGMENTITEM_H_
