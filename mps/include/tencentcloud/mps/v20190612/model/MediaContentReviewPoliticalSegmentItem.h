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
                * Content review suspected segment
                */
                class MediaContentReviewPoliticalSegmentItem : public AbstractModel
                {
                public:
                    MediaContentReviewPoliticalSegmentItem();
                    ~MediaContentReviewPoliticalSegmentItem() = default;
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
                     * 获取Suspected segment sensitivity score.
                     * @return Confidence Suspected segment sensitivity score.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Suspected segment sensitivity score.
                     * @param _confidence Suspected segment sensitivity score.
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
                     * 获取Suspected segment sensitive result suggestion, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @return Suggestion Suspected segment sensitive result suggestion, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Suspected segment sensitive result suggestion, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @param _suggestion Suspected segment sensitive result suggestion, value ranges from...to...
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
                     * 获取Sensitive person, violative icon name.
                     * @return Name Sensitive person, violative icon name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Sensitive person, violative icon name.
                     * @param _name Sensitive person, violative icon name.
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
                     * 获取Suspected segment sensitive result Tag. The mapping between the LabelSet parameter in the content moderation template [visual sensitive task control parameter](https://www.tencentcloud.com/document/api/862/37615?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) and the parameter value range of this parameter:
violation_photo:
<li>violation_photo: violation icon.</li>
politician:
<li>nation_politician: State leaders;</li>
<li>province_politician: provincial and ministerial leaders;</li>
<li>bureau_politician: bureau-level official;</li>
<li>county_politician: county-level official;</li>
<li>rural_politician: township-level official;</li>
<li>sensitive_politician: sensitive person.</li>
<li>foreign_politician: state leaders of other countries.</li>
entertainment:
<li>sensitive_entertainment: sensitive entertainment figure.</li>
sport:
<li>Sensitive_sport: sensitive sports celebrity.</li>
entrepreneur:
<li>sensitive_entrepreneur: sensitive entrepreneur.</li>
scholar:
<li>sensitive_scholar: Sensitive educational scholars.</li>
celebrity:
<li>sensitive_celebrity: sensitive celebrity.</li>
<li>historical_celebrity: historical celebrity.</li>
military:
<li>sensitive_military: sensitive military figure.</li>
                     * @return Label Suspected segment sensitive result Tag. The mapping between the LabelSet parameter in the content moderation template [visual sensitive task control parameter](https://www.tencentcloud.com/document/api/862/37615?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) and the parameter value range of this parameter:
violation_photo:
<li>violation_photo: violation icon.</li>
politician:
<li>nation_politician: State leaders;</li>
<li>province_politician: provincial and ministerial leaders;</li>
<li>bureau_politician: bureau-level official;</li>
<li>county_politician: county-level official;</li>
<li>rural_politician: township-level official;</li>
<li>sensitive_politician: sensitive person.</li>
<li>foreign_politician: state leaders of other countries.</li>
entertainment:
<li>sensitive_entertainment: sensitive entertainment figure.</li>
sport:
<li>Sensitive_sport: sensitive sports celebrity.</li>
entrepreneur:
<li>sensitive_entrepreneur: sensitive entrepreneur.</li>
scholar:
<li>sensitive_scholar: Sensitive educational scholars.</li>
celebrity:
<li>sensitive_celebrity: sensitive celebrity.</li>
<li>historical_celebrity: historical celebrity.</li>
military:
<li>sensitive_military: sensitive military figure.</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Suspected segment sensitive result Tag. The mapping between the LabelSet parameter in the content moderation template [visual sensitive task control parameter](https://www.tencentcloud.com/document/api/862/37615?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) and the parameter value range of this parameter:
violation_photo:
<li>violation_photo: violation icon.</li>
politician:
<li>nation_politician: State leaders;</li>
<li>province_politician: provincial and ministerial leaders;</li>
<li>bureau_politician: bureau-level official;</li>
<li>county_politician: county-level official;</li>
<li>rural_politician: township-level official;</li>
<li>sensitive_politician: sensitive person.</li>
<li>foreign_politician: state leaders of other countries.</li>
entertainment:
<li>sensitive_entertainment: sensitive entertainment figure.</li>
sport:
<li>Sensitive_sport: sensitive sports celebrity.</li>
entrepreneur:
<li>sensitive_entrepreneur: sensitive entrepreneur.</li>
scholar:
<li>sensitive_scholar: Sensitive educational scholars.</li>
celebrity:
<li>sensitive_celebrity: sensitive celebrity.</li>
<li>historical_celebrity: historical celebrity.</li>
military:
<li>sensitive_military: sensitive military figure.</li>
                     * @param _label Suspected segment sensitive result Tag. The mapping between the LabelSet parameter in the content moderation template [visual sensitive task control parameter](https://www.tencentcloud.com/document/api/862/37615?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) and the parameter value range of this parameter:
violation_photo:
<li>violation_photo: violation icon.</li>
politician:
<li>nation_politician: State leaders;</li>
<li>province_politician: provincial and ministerial leaders;</li>
<li>bureau_politician: bureau-level official;</li>
<li>county_politician: county-level official;</li>
<li>rural_politician: township-level official;</li>
<li>sensitive_politician: sensitive person.</li>
<li>foreign_politician: state leaders of other countries.</li>
entertainment:
<li>sensitive_entertainment: sensitive entertainment figure.</li>
sport:
<li>Sensitive_sport: sensitive sports celebrity.</li>
entrepreneur:
<li>sensitive_entrepreneur: sensitive entrepreneur.</li>
scholar:
<li>sensitive_scholar: Sensitive educational scholars.</li>
celebrity:
<li>sensitive_celebrity: sensitive celebrity.</li>
<li>historical_celebrity: historical celebrity.</li>
military:
<li>sensitive_military: sensitive military figure.</li>
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
                     * 获取Suspected image URL (Images are not retained permanently upon arrival)
The image will be deleted after the PicUrlExpireTime time point.
                     * @return Url Suspected image URL (Images are not retained permanently upon arrival)
The image will be deleted after the PicUrlExpireTime time point.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Suspected image URL (Images are not retained permanently upon arrival)
The image will be deleted after the PicUrlExpireTime time point.
                     * @param _url Suspected image URL (Images are not retained permanently upon arrival)
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
                     * 获取Area coordinates of sensitive person and violation icon occurrence (pixel-level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and coordinate of the bottom-right corner.
                     * @return AreaCoordSet Area coordinates of sensitive person and violation icon occurrence (pixel-level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and coordinate of the bottom-right corner.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Area coordinates of sensitive person and violation icon occurrence (pixel-level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and coordinate of the bottom-right corner.
                     * @param _areaCoordSet Area coordinates of sensitive person and violation icon occurrence (pixel-level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and coordinate of the bottom-right corner.
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
                     * Suspected segment sensitivity score.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Suspected segment sensitive result suggestion, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Sensitive person, violative icon name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Suspected segment sensitive result Tag. The mapping between the LabelSet parameter in the content moderation template [visual sensitive task control parameter](https://www.tencentcloud.com/document/api/862/37615?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) and the parameter value range of this parameter:
violation_photo:
<li>violation_photo: violation icon.</li>
politician:
<li>nation_politician: State leaders;</li>
<li>province_politician: provincial and ministerial leaders;</li>
<li>bureau_politician: bureau-level official;</li>
<li>county_politician: county-level official;</li>
<li>rural_politician: township-level official;</li>
<li>sensitive_politician: sensitive person.</li>
<li>foreign_politician: state leaders of other countries.</li>
entertainment:
<li>sensitive_entertainment: sensitive entertainment figure.</li>
sport:
<li>Sensitive_sport: sensitive sports celebrity.</li>
entrepreneur:
<li>sensitive_entrepreneur: sensitive entrepreneur.</li>
scholar:
<li>sensitive_scholar: Sensitive educational scholars.</li>
celebrity:
<li>sensitive_celebrity: sensitive celebrity.</li>
<li>historical_celebrity: historical celebrity.</li>
military:
<li>sensitive_military: sensitive military figure.</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Suspected image URL (Images are not retained permanently upon arrival)
The image will be deleted after the PicUrlExpireTime time point.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Area coordinates of sensitive person and violation icon occurrence (pixel-level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and coordinate of the bottom-right corner.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

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

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIACONTENTREVIEWPOLITICALSEGMENTITEM_H_
