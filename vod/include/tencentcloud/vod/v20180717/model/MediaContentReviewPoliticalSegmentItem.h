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
                * Suspected segments involving inappropriate information in audio/video moderation
                */
                class MediaContentReviewPoliticalSegmentItem : public AbstractModel
                {
                public:
                    MediaContentReviewPoliticalSegmentItem();
                    ~MediaContentReviewPoliticalSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Offset time of the start of the suspected segment. Unit: seconds.
                     * @return StartTimeOffset Offset time of the start of the suspected segment. Unit: seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Offset time of the start of the suspected segment. Unit: seconds.
                     * @param _startTimeOffset Offset time of the start of the suspected segment. Unit: seconds.
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
                     * 获取Score of the suspected segment.
                     * @return Confidence Score of the suspected segment.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Score of the suspected segment.
                     * @param _confidence Score of the suspected segment.
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
                     * 获取Result suggestions for suspected segments involving inappropriate information. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @return Suggestion Result suggestions for suspected segments involving inappropriate information. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Result suggestions for suspected segments involving inappropriate information. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @param _suggestion Result suggestions for suspected segments involving inappropriate information. Value range:
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
                     * 获取Involves inappropriate information and violative icon names.
                     * @return Name Involves inappropriate information and violative icon names.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Involves inappropriate information and violative icon names.
                     * @param _name Involves inappropriate information and violative icon names.
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
                     * 获取Result tags of suspected segments involving inappropriate information. Mapping between the LabelSet parameter in the [task control parameter for frames involving inappropriate information](https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) of the audio/video moderation template and the value range of this parameter:
violation_photo:
<li>violation_photo: Violation icon.</li>
politician:
<li>nation_politician: State leaders;</li>
<li>province_politician: provincial and ministerial leaders;</li>
<li>bureau_politician: bureau-level official;</li>
<li>county_politician: county-level official;</li>
<li>rural_politician: township-level official;</li>
<li>sensitive_politician: relevant people involved in rule violations;</li>
<li>foreign_politician: state leaders of other countries.</li>
entertainment:
<li>sensitive_entertainment: banned people in the entertainment industry.</li>
sport:
<li>sensitive_sport: sports celebrity involved in rule violations.</li>
entrepreneur:
<li>sensitive_entrepreneur: commercial figure involved in rule violation.</li>
scholar:
<li>sensitive_scholar: Educational scholar in rule violation.</li>
celebrity:
<li>sensitive_celebrity: rule-violating celebrity;</li>
<li>historical_celebrity: Historical celebrity.</li>
military:
<li>sensitive_military: relevant people involved in rule violations.</li>
                     * @return Label Result tags of suspected segments involving inappropriate information. Mapping between the LabelSet parameter in the [task control parameter for frames involving inappropriate information](https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) of the audio/video moderation template and the value range of this parameter:
violation_photo:
<li>violation_photo: Violation icon.</li>
politician:
<li>nation_politician: State leaders;</li>
<li>province_politician: provincial and ministerial leaders;</li>
<li>bureau_politician: bureau-level official;</li>
<li>county_politician: county-level official;</li>
<li>rural_politician: township-level official;</li>
<li>sensitive_politician: relevant people involved in rule violations;</li>
<li>foreign_politician: state leaders of other countries.</li>
entertainment:
<li>sensitive_entertainment: banned people in the entertainment industry.</li>
sport:
<li>sensitive_sport: sports celebrity involved in rule violations.</li>
entrepreneur:
<li>sensitive_entrepreneur: commercial figure involved in rule violation.</li>
scholar:
<li>sensitive_scholar: Educational scholar in rule violation.</li>
celebrity:
<li>sensitive_celebrity: rule-violating celebrity;</li>
<li>historical_celebrity: Historical celebrity.</li>
military:
<li>sensitive_military: relevant people involved in rule violations.</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Result tags of suspected segments involving inappropriate information. Mapping between the LabelSet parameter in the [task control parameter for frames involving inappropriate information](https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) of the audio/video moderation template and the value range of this parameter:
violation_photo:
<li>violation_photo: Violation icon.</li>
politician:
<li>nation_politician: State leaders;</li>
<li>province_politician: provincial and ministerial leaders;</li>
<li>bureau_politician: bureau-level official;</li>
<li>county_politician: county-level official;</li>
<li>rural_politician: township-level official;</li>
<li>sensitive_politician: relevant people involved in rule violations;</li>
<li>foreign_politician: state leaders of other countries.</li>
entertainment:
<li>sensitive_entertainment: banned people in the entertainment industry.</li>
sport:
<li>sensitive_sport: sports celebrity involved in rule violations.</li>
entrepreneur:
<li>sensitive_entrepreneur: commercial figure involved in rule violation.</li>
scholar:
<li>sensitive_scholar: Educational scholar in rule violation.</li>
celebrity:
<li>sensitive_celebrity: rule-violating celebrity;</li>
<li>historical_celebrity: Historical celebrity.</li>
military:
<li>sensitive_military: relevant people involved in rule violations.</li>
                     * @param _label Result tags of suspected segments involving inappropriate information. Mapping between the LabelSet parameter in the [task control parameter for frames involving inappropriate information](https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) of the audio/video moderation template and the value range of this parameter:
violation_photo:
<li>violation_photo: Violation icon.</li>
politician:
<li>nation_politician: State leaders;</li>
<li>province_politician: provincial and ministerial leaders;</li>
<li>bureau_politician: bureau-level official;</li>
<li>county_politician: county-level official;</li>
<li>rural_politician: township-level official;</li>
<li>sensitive_politician: relevant people involved in rule violations;</li>
<li>foreign_politician: state leaders of other countries.</li>
entertainment:
<li>sensitive_entertainment: banned people in the entertainment industry.</li>
sport:
<li>sensitive_sport: sports celebrity involved in rule violations.</li>
entrepreneur:
<li>sensitive_entrepreneur: commercial figure involved in rule violation.</li>
scholar:
<li>sensitive_scholar: Educational scholar in rule violation.</li>
celebrity:
<li>sensitive_celebrity: rule-violating celebrity;</li>
<li>historical_celebrity: Historical celebrity.</li>
military:
<li>sensitive_military: relevant people involved in rule violations.</li>
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
                     * 获取Suspected image URL (images are not retained permanently and will be deleted upon reaching
Images will be deleted after the PicUrlExpireTime time point).
                     * @return Url Suspected image URL (images are not retained permanently and will be deleted upon reaching
Images will be deleted after the PicUrlExpireTime time point).
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Suspected image URL (images are not retained permanently and will be deleted upon reaching
Images will be deleted after the PicUrlExpireTime time point).
                     * @param _url Suspected image URL (images are not retained permanently and will be deleted upon reaching
Images will be deleted after the PicUrlExpireTime time point).
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
                     * 获取Area coordinates (pixel level) where inappropriate information or violation icons appear, [x1, y1, x2, y2], i.e. coordinates of the top-left corner and bottom-right corner.
                     * @return AreaCoordSet Area coordinates (pixel level) where inappropriate information or violation icons appear, [x1, y1, x2, y2], i.e. coordinates of the top-left corner and bottom-right corner.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Area coordinates (pixel level) where inappropriate information or violation icons appear, [x1, y1, x2, y2], i.e. coordinates of the top-left corner and bottom-right corner.
                     * @param _areaCoordSet Area coordinates (pixel level) where inappropriate information or violation icons appear, [x1, y1, x2, y2], i.e. coordinates of the top-left corner and bottom-right corner.
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
                     * 获取Deprecated. Please use `PicUrlExpireTime`.
                     * @return PicUrlExpireTimeStamp Deprecated. Please use `PicUrlExpireTime`.
                     * @deprecated
                     */
                    int64_t GetPicUrlExpireTimeStamp() const;

                    /**
                     * 设置Deprecated. Please use `PicUrlExpireTime`.
                     * @param _picUrlExpireTimeStamp Deprecated. Please use `PicUrlExpireTime`.
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
                     * 获取URL expiration time of the suspected image in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return PicUrlExpireTime URL expiration time of the suspected image in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetPicUrlExpireTime() const;

                    /**
                     * 设置URL expiration time of the suspected image in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _picUrlExpireTime URL expiration time of the suspected image in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * Offset time of the start of the suspected segment. Unit: seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of a suspected segment, in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Score of the suspected segment.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Result suggestions for suspected segments involving inappropriate information. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Involves inappropriate information and violative icon names.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Result tags of suspected segments involving inappropriate information. Mapping between the LabelSet parameter in the [task control parameter for frames involving inappropriate information](https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) of the audio/video moderation template and the value range of this parameter:
violation_photo:
<li>violation_photo: Violation icon.</li>
politician:
<li>nation_politician: State leaders;</li>
<li>province_politician: provincial and ministerial leaders;</li>
<li>bureau_politician: bureau-level official;</li>
<li>county_politician: county-level official;</li>
<li>rural_politician: township-level official;</li>
<li>sensitive_politician: relevant people involved in rule violations;</li>
<li>foreign_politician: state leaders of other countries.</li>
entertainment:
<li>sensitive_entertainment: banned people in the entertainment industry.</li>
sport:
<li>sensitive_sport: sports celebrity involved in rule violations.</li>
entrepreneur:
<li>sensitive_entrepreneur: commercial figure involved in rule violation.</li>
scholar:
<li>sensitive_scholar: Educational scholar in rule violation.</li>
celebrity:
<li>sensitive_celebrity: rule-violating celebrity;</li>
<li>historical_celebrity: Historical celebrity.</li>
military:
<li>sensitive_military: relevant people involved in rule violations.</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Suspected image URL (images are not retained permanently and will be deleted upon reaching
Images will be deleted after the PicUrlExpireTime time point).
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Area coordinates (pixel level) where inappropriate information or violation icons appear, [x1, y1, x2, y2], i.e. coordinates of the top-left corner and bottom-right corner.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * Deprecated. Please use `PicUrlExpireTime`.
                     */
                    int64_t m_picUrlExpireTimeStamp;
                    bool m_picUrlExpireTimeStampHasBeenSet;

                    /**
                     * URL expiration time of the suspected image in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_picUrlExpireTime;
                    bool m_picUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWPOLITICALSEGMENTITEM_H_
