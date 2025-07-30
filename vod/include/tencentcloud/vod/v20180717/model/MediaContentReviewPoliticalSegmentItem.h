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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWPOLITICALSEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWPOLITICALSEGMENTITEM_H_

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
                * Video segment containing detected politically sensitive content
                */
                class MediaContentReviewPoliticalSegmentItem : public AbstractModel
                {
                public:
                    MediaContentReviewPoliticalSegmentItem();
                    ~MediaContentReviewPoliticalSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time offset of a suspected segment in seconds.
                     * @return StartTimeOffset Start time offset of a suspected segment in seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of a suspected segment in seconds.
                     * @param _startTimeOffset Start time offset of a suspected segment in seconds.
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
                     * 获取End time offset of a suspected segment in seconds.
                     * @return EndTimeOffset End time offset of a suspected segment in seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of a suspected segment in seconds.
                     * @param _endTimeOffset End time offset of a suspected segment in seconds.
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
                     * 获取Confidence score for the detected politically sensitive content
                     * @return Confidence Confidence score for the detected politically sensitive content
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence score for the detected politically sensitive content
                     * @param _confidence Confidence score for the detected politically sensitive content
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
                     * 获取Processing suggestion for the detected politically sensitive content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @return Suggestion Processing suggestion for the detected politically sensitive content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Processing suggestion for the detected politically sensitive content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @param _suggestion Processing suggestion for the detected politically sensitive content. Valid values:
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
                     * 获取Name of the politically sensitive content or banned images
                     * @return Name Name of the politically sensitive content or banned images
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the politically sensitive content or banned images
                     * @param _name Name of the politically sensitive content or banned images
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Labels for the detected politically sensitive content. The relationship between the values of this parameter and those of the `LabelSet` parameter in [PoliticalImgReviewTemplateInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) is as follows:
violation_photo:
<li>`violation_photo`: banned images</li>
politician:
<li>`nation_politician`: state leader of China</li>
<li>`province_politician`: provincial officials</li>
<li>`bureau_politician`: bureau-level officials</li>
<li>`county_politician`: county-level officials</li>
<li>`rural_politician`: township-level officials</li>
<li>`sensitive_politician`: politically sensitive people</li>
<li>`foreign_politician`: state leaders of other countries</li>
entertainment:
<li>`sensitive_entertainment`: banned people in the entertainment industry</li>
sport:
<li>`sensitive_sport`: banned sports celebrities</li>
entrepreneur:
<li>`sensitive_entrepreneur`: banned businesspeople</li>
scholar:
<li>sensitive_scholar: banned scholars</li>
celebrity:
<li>sensitive_celebrity: banned celebrities</li>
<li>historical_celebrity: banned historical figures</li>
military:
<li>sensitive_military: banned people in military</li>
                     * @return Label Labels for the detected politically sensitive content. The relationship between the values of this parameter and those of the `LabelSet` parameter in [PoliticalImgReviewTemplateInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) is as follows:
violation_photo:
<li>`violation_photo`: banned images</li>
politician:
<li>`nation_politician`: state leader of China</li>
<li>`province_politician`: provincial officials</li>
<li>`bureau_politician`: bureau-level officials</li>
<li>`county_politician`: county-level officials</li>
<li>`rural_politician`: township-level officials</li>
<li>`sensitive_politician`: politically sensitive people</li>
<li>`foreign_politician`: state leaders of other countries</li>
entertainment:
<li>`sensitive_entertainment`: banned people in the entertainment industry</li>
sport:
<li>`sensitive_sport`: banned sports celebrities</li>
entrepreneur:
<li>`sensitive_entrepreneur`: banned businesspeople</li>
scholar:
<li>sensitive_scholar: banned scholars</li>
celebrity:
<li>sensitive_celebrity: banned celebrities</li>
<li>historical_celebrity: banned historical figures</li>
military:
<li>sensitive_military: banned people in military</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Labels for the detected politically sensitive content. The relationship between the values of this parameter and those of the `LabelSet` parameter in [PoliticalImgReviewTemplateInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) is as follows:
violation_photo:
<li>`violation_photo`: banned images</li>
politician:
<li>`nation_politician`: state leader of China</li>
<li>`province_politician`: provincial officials</li>
<li>`bureau_politician`: bureau-level officials</li>
<li>`county_politician`: county-level officials</li>
<li>`rural_politician`: township-level officials</li>
<li>`sensitive_politician`: politically sensitive people</li>
<li>`foreign_politician`: state leaders of other countries</li>
entertainment:
<li>`sensitive_entertainment`: banned people in the entertainment industry</li>
sport:
<li>`sensitive_sport`: banned sports celebrities</li>
entrepreneur:
<li>`sensitive_entrepreneur`: banned businesspeople</li>
scholar:
<li>sensitive_scholar: banned scholars</li>
celebrity:
<li>sensitive_celebrity: banned celebrities</li>
<li>historical_celebrity: banned historical figures</li>
military:
<li>sensitive_military: banned people in military</li>
                     * @param _label Labels for the detected politically sensitive content. The relationship between the values of this parameter and those of the `LabelSet` parameter in [PoliticalImgReviewTemplateInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) is as follows:
violation_photo:
<li>`violation_photo`: banned images</li>
politician:
<li>`nation_politician`: state leader of China</li>
<li>`province_politician`: provincial officials</li>
<li>`bureau_politician`: bureau-level officials</li>
<li>`county_politician`: county-level officials</li>
<li>`rural_politician`: township-level officials</li>
<li>`sensitive_politician`: politically sensitive people</li>
<li>`foreign_politician`: state leaders of other countries</li>
entertainment:
<li>`sensitive_entertainment`: banned people in the entertainment industry</li>
sport:
<li>`sensitive_sport`: banned sports celebrities</li>
entrepreneur:
<li>`sensitive_entrepreneur`: banned businesspeople</li>
scholar:
<li>sensitive_scholar: banned scholars</li>
celebrity:
<li>sensitive_celebrity: banned celebrities</li>
<li>historical_celebrity: banned historical figures</li>
military:
<li>sensitive_military: banned people in military</li>
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
                     * 获取Coordinates (pixel) of the detected politically sensitive content or banned icons. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
                     * @return AreaCoordSet Coordinates (pixel) of the detected politically sensitive content or banned icons. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Coordinates (pixel) of the detected politically sensitive content or banned icons. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
                     * @param _areaCoordSet Coordinates (pixel) of the detected politically sensitive content or banned icons. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
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
                     * 获取This field has been disused. Please use `PicUrlExpireTime`.
                     * @return PicUrlExpireTimeStamp This field has been disused. Please use `PicUrlExpireTime`.
                     * @deprecated
                     */
                    int64_t GetPicUrlExpireTimeStamp() const;

                    /**
                     * 设置This field has been disused. Please use `PicUrlExpireTime`.
                     * @param _picUrlExpireTimeStamp This field has been disused. Please use `PicUrlExpireTime`.
                     * @deprecated
                     */
                    void SetPicUrlExpireTimeStamp(const int64_t& _picUrlExpireTimeStamp);

                    /**
                     * 判断参数 PicUrlExpireTimeStamp 是否已赋值
                     * @return PicUrlExpireTimeStamp 是否已赋值
                     * @deprecated
                     */
                    bool PicUrlExpireTimeStampHasBeenSet() const;

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
                     * Start time offset of a suspected segment in seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of a suspected segment in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Confidence score for the detected politically sensitive content
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Processing suggestion for the detected politically sensitive content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Name of the politically sensitive content or banned images
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Labels for the detected politically sensitive content. The relationship between the values of this parameter and those of the `LabelSet` parameter in [PoliticalImgReviewTemplateInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) is as follows:
violation_photo:
<li>`violation_photo`: banned images</li>
politician:
<li>`nation_politician`: state leader of China</li>
<li>`province_politician`: provincial officials</li>
<li>`bureau_politician`: bureau-level officials</li>
<li>`county_politician`: county-level officials</li>
<li>`rural_politician`: township-level officials</li>
<li>`sensitive_politician`: politically sensitive people</li>
<li>`foreign_politician`: state leaders of other countries</li>
entertainment:
<li>`sensitive_entertainment`: banned people in the entertainment industry</li>
sport:
<li>`sensitive_sport`: banned sports celebrities</li>
entrepreneur:
<li>`sensitive_entrepreneur`: banned businesspeople</li>
scholar:
<li>sensitive_scholar: banned scholars</li>
celebrity:
<li>sensitive_celebrity: banned celebrities</li>
<li>historical_celebrity: banned historical figures</li>
military:
<li>sensitive_military: banned people in military</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * URL of a suspected image (which will not be permanently stored
 and will be deleted after `PicUrlExpireTime`).
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Coordinates (pixel) of the detected politically sensitive content or banned icons. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * This field has been disused. Please use `PicUrlExpireTime`.
                     */
                    int64_t m_picUrlExpireTimeStamp;
                    bool m_picUrlExpireTimeStampHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWPOLITICALSEGMENTITEM_H_
