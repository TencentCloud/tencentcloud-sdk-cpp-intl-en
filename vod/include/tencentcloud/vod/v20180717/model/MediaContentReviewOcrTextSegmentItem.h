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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWOCRTEXTSEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWOCRTEXTSEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Video segment containing OCR-detected suspicious content
                */
                class MediaContentReviewOcrTextSegmentItem : public AbstractModel
                {
                public:
                    MediaContentReviewOcrTextSegmentItem();
                    ~MediaContentReviewOcrTextSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time offset of suspected segment in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StartTimeOffset Start time offset of suspected segment in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of suspected segment in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _startTimeOffset Start time offset of suspected segment in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取End time offset of suspected segment in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EndTimeOffset End time offset of suspected segment in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of suspected segment in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _endTimeOffset End time offset of suspected segment in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Confidence of suspected segment.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Confidence Confidence of suspected segment.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence of suspected segment.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _confidence Confidence of suspected segment.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Processing suggestion for the detected suspicious content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @return Suggestion Processing suggestion for the detected suspicious content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Processing suggestion for the detected suspicious content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @param _suggestion Processing suggestion for the detected suspicious content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
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
                     * 获取List of suspected keywords.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KeywordSet List of suspected keywords.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKeywordSet() const;

                    /**
                     * 设置List of suspected keywords.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _keywordSet List of suspected keywords.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Zone coordinates (at the pixel level) of suspected text: [x1, y1, x2, y2], i.e., the coordinates of the top-left and bottom-right corners.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AreaCoordSet Zone coordinates (at the pixel level) of suspected text: [x1, y1, x2, y2], i.e., the coordinates of the top-left and bottom-right corners.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Zone coordinates (at the pixel level) of suspected text: [x1, y1, x2, y2], i.e., the coordinates of the top-left and bottom-right corners.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _areaCoordSet Zone coordinates (at the pixel level) of suspected text: [x1, y1, x2, y2], i.e., the coordinates of the top-left and bottom-right corners.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取URL of a suspected image (which will not be permanently stored
and will be deleted after `PicUrlExpireTime`).
                     * @return Url URL of a suspected image (which will not be permanently stored
and will be deleted after `PicUrlExpireTime`).
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL of a suspected image (which will not be permanently stored
and will be deleted after `PicUrlExpireTime`).
                     * @param _url URL of a suspected image (which will not be permanently stored
and will be deleted after `PicUrlExpireTime`).
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
                     * 获取Expiration time of suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return PicUrlExpireTime Expiration time of suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetPicUrlExpireTime() const;

                    /**
                     * 设置Expiration time of suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _picUrlExpireTime Expiration time of suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * Start time offset of suspected segment in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of suspected segment in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Confidence of suspected segment.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Processing suggestion for the detected suspicious content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * List of suspected keywords.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_keywordSet;
                    bool m_keywordSetHasBeenSet;

                    /**
                     * Zone coordinates (at the pixel level) of suspected text: [x1, y1, x2, y2], i.e., the coordinates of the top-left and bottom-right corners.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * URL of a suspected image (which will not be permanently stored
and will be deleted after `PicUrlExpireTime`).
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Expiration time of suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_picUrlExpireTime;
                    bool m_picUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWOCRTEXTSEGMENTITEM_H_
