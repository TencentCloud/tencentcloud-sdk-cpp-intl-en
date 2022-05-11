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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIACONTENTREVIEWPOLITICALSEGMENTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIACONTENTREVIEWPOLITICALSEGMENTITEM_H_

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
                * The information about the sensitive segments detected.
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
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of a suspected segment in seconds.
                     * @param StartTimeOffset Start time offset of a suspected segment in seconds.
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取End time offset of a suspected segment in seconds.
                     * @return EndTimeOffset End time offset of a suspected segment in seconds.
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of a suspected segment in seconds.
                     * @param EndTimeOffset End time offset of a suspected segment in seconds.
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取The confidence score for the detected sensitive segments.
                     * @return Confidence The confidence score for the detected sensitive segments.
                     */
                    double GetConfidence() const;

                    /**
                     * 设置The confidence score for the detected sensitive segments.
                     * @param Confidence The confidence score for the detected sensitive segments.
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取The suggestion for handling the sensitive segments. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @return Suggestion The suggestion for handling the sensitive segments. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置The suggestion for handling the sensitive segments. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @param Suggestion The suggestion for handling the sensitive segments. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取The name of a sensitive person or banned icon.
                     * @return Name The name of a sensitive person or banned icon.
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name of a sensitive person or banned icon.
                     * @param Name The name of a sensitive person or banned icon.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The labels for the detected sensitive segments. The relationship between the values of this parameter and those of the `LabelSet` parameter in [PoliticalImgReviewTemplateInfo](https://intl.cloud.tencent.com/document/api/862/37615?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) is as follows:
violation_photo:
<li>violation_photo (banned icons)</li>
politician:
<li>nation_politician (state leader)</li>
<li>province_politician (provincial officials)</li>
<li>bureau_politician (bureau-level officials)</li>
<li>county_politician (county-level officials)</li>
<li>rural_politician (township-level officials)</li>
<li>sensitive_politician (sensitive people)</li>
<li>foreign_politician (state leaders of other countries)</li>
entertainment:
<li>sensitive_entertainment (sensitive people in the entertainment industry</li>
sport:
<li>sensitive_sport (sensitive sports celebrities)</li>
entrepreneur:
<li>sensitive_entrepreneur</li>
scholar:
<li>sensitive_scholar</li>
celebrity:
<li>sensitive_celebrity</li>
<li>historical_celebrity (sensitive historical figures)</li>
military:
<li>sensitive_military (sensitive people in military)</li>
                     * @return Label The labels for the detected sensitive segments. The relationship between the values of this parameter and those of the `LabelSet` parameter in [PoliticalImgReviewTemplateInfo](https://intl.cloud.tencent.com/document/api/862/37615?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) is as follows:
violation_photo:
<li>violation_photo (banned icons)</li>
politician:
<li>nation_politician (state leader)</li>
<li>province_politician (provincial officials)</li>
<li>bureau_politician (bureau-level officials)</li>
<li>county_politician (county-level officials)</li>
<li>rural_politician (township-level officials)</li>
<li>sensitive_politician (sensitive people)</li>
<li>foreign_politician (state leaders of other countries)</li>
entertainment:
<li>sensitive_entertainment (sensitive people in the entertainment industry</li>
sport:
<li>sensitive_sport (sensitive sports celebrities)</li>
entrepreneur:
<li>sensitive_entrepreneur</li>
scholar:
<li>sensitive_scholar</li>
celebrity:
<li>sensitive_celebrity</li>
<li>historical_celebrity (sensitive historical figures)</li>
military:
<li>sensitive_military (sensitive people in military)</li>
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置The labels for the detected sensitive segments. The relationship between the values of this parameter and those of the `LabelSet` parameter in [PoliticalImgReviewTemplateInfo](https://intl.cloud.tencent.com/document/api/862/37615?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) is as follows:
violation_photo:
<li>violation_photo (banned icons)</li>
politician:
<li>nation_politician (state leader)</li>
<li>province_politician (provincial officials)</li>
<li>bureau_politician (bureau-level officials)</li>
<li>county_politician (county-level officials)</li>
<li>rural_politician (township-level officials)</li>
<li>sensitive_politician (sensitive people)</li>
<li>foreign_politician (state leaders of other countries)</li>
entertainment:
<li>sensitive_entertainment (sensitive people in the entertainment industry</li>
sport:
<li>sensitive_sport (sensitive sports celebrities)</li>
entrepreneur:
<li>sensitive_entrepreneur</li>
scholar:
<li>sensitive_scholar</li>
celebrity:
<li>sensitive_celebrity</li>
<li>historical_celebrity (sensitive historical figures)</li>
military:
<li>sensitive_military (sensitive people in military)</li>
                     * @param Label The labels for the detected sensitive segments. The relationship between the values of this parameter and those of the `LabelSet` parameter in [PoliticalImgReviewTemplateInfo](https://intl.cloud.tencent.com/document/api/862/37615?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) is as follows:
violation_photo:
<li>violation_photo (banned icons)</li>
politician:
<li>nation_politician (state leader)</li>
<li>province_politician (provincial officials)</li>
<li>bureau_politician (bureau-level officials)</li>
<li>county_politician (county-level officials)</li>
<li>rural_politician (township-level officials)</li>
<li>sensitive_politician (sensitive people)</li>
<li>foreign_politician (state leaders of other countries)</li>
entertainment:
<li>sensitive_entertainment (sensitive people in the entertainment industry</li>
sport:
<li>sensitive_sport (sensitive sports celebrities)</li>
entrepreneur:
<li>sensitive_entrepreneur</li>
scholar:
<li>sensitive_scholar</li>
celebrity:
<li>sensitive_celebrity</li>
<li>historical_celebrity (sensitive historical figures)</li>
military:
<li>sensitive_military (sensitive people in military)</li>
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取URL of a suspected image (which will not be permanently stored
 and will be deleted after `PicUrlExpireTime`).
                     * @return Url URL of a suspected image (which will not be permanently stored
 and will be deleted after `PicUrlExpireTime`).
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL of a suspected image (which will not be permanently stored
 and will be deleted after `PicUrlExpireTime`).
                     * @param Url URL of a suspected image (which will not be permanently stored
 and will be deleted after `PicUrlExpireTime`).
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取The pixel coordinates of the detected sensitive people or banned icons. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
                     * @return AreaCoordSet The pixel coordinates of the detected sensitive people or banned icons. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置The pixel coordinates of the detected sensitive people or banned icons. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
                     * @param AreaCoordSet The pixel coordinates of the detected sensitive people or banned icons. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     */
                    bool AreaCoordSetHasBeenSet() const;

                    /**
                     * 获取Expiration time of a suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return PicUrlExpireTime Expiration time of a suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string GetPicUrlExpireTime() const;

                    /**
                     * 设置Expiration time of a suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param PicUrlExpireTime Expiration time of a suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    void SetPicUrlExpireTime(const std::string& _picUrlExpireTime);

                    /**
                     * 判断参数 PicUrlExpireTime 是否已赋值
                     * @return PicUrlExpireTime 是否已赋值
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
                     * The confidence score for the detected sensitive segments.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * The suggestion for handling the sensitive segments. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * The name of a sensitive person or banned icon.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The labels for the detected sensitive segments. The relationship between the values of this parameter and those of the `LabelSet` parameter in [PoliticalImgReviewTemplateInfo](https://intl.cloud.tencent.com/document/api/862/37615?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) is as follows:
violation_photo:
<li>violation_photo (banned icons)</li>
politician:
<li>nation_politician (state leader)</li>
<li>province_politician (provincial officials)</li>
<li>bureau_politician (bureau-level officials)</li>
<li>county_politician (county-level officials)</li>
<li>rural_politician (township-level officials)</li>
<li>sensitive_politician (sensitive people)</li>
<li>foreign_politician (state leaders of other countries)</li>
entertainment:
<li>sensitive_entertainment (sensitive people in the entertainment industry</li>
sport:
<li>sensitive_sport (sensitive sports celebrities)</li>
entrepreneur:
<li>sensitive_entrepreneur</li>
scholar:
<li>sensitive_scholar</li>
celebrity:
<li>sensitive_celebrity</li>
<li>historical_celebrity (sensitive historical figures)</li>
military:
<li>sensitive_military (sensitive people in military)</li>
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
                     * The pixel coordinates of the detected sensitive people or banned icons. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * Expiration time of a suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_picUrlExpireTime;
                    bool m_picUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIACONTENTREVIEWPOLITICALSEGMENTITEM_H_
