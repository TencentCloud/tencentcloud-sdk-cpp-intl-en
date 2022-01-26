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
                * Suspected politically sensitive segment identified in content audit
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
                     * 获取Score of a suspected politically sensitive segment.
                     * @return Confidence Score of a suspected politically sensitive segment.
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Score of a suspected politically sensitive segment.
                     * @param Confidence Score of a suspected politically sensitive segment.
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Suggestion for politically sensitive information detection of a suspected segment. Valid values:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @return Suggestion Suggestion for politically sensitive information detection of a suspected segment. Valid values:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Suggestion for politically sensitive information detection of a suspected segment. Valid values:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @param Suggestion Suggestion for politically sensitive information detection of a suspected segment. Valid values:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Name of a politically sensitive figure or violating photo.
                     * @return Name Name of a politically sensitive figure or violating photo.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a politically sensitive figure or violating photo.
                     * @param Name Name of a politically sensitive figure or violating photo.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Tags for the results of politically sensitive information detection of suspected video segments. The relationship between the `LabelSet` parameter in the content audit template [controlling tasks of video politically sensitive information detection](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) and this parameter is as follows:
violation_photo:
<li>violation_photo: violating photo.</li>
politician:
<li>nation_politician: head of state/government;</li>
<li>province_politician: province/state leader;</li>
<li>bureau_politician: ministry leader;</li>
<li>county_politician: county/city leader;</li>
<li>rural_politician: town leader;</li>
<li>sensitive_politician: politically sensitive figure;</li>
<li>foreign_politician: head of a foreign country/government.</li>
entertainment:
<li>sensitive_entertainment: sensitive entertainment celebrity.</li>
sport:
<li>sensitive_sport: sensitive sports figure.</li>
entrepreneur:
<li>sensitive_entrepreneur: sensitive business figure.</li>
scholar:
<li>sensitive_scholar: sensitive educator.</li>
celebrity:
<li>sensitive_celebrity: sensitive well-known figure;</li>
<li>historical_celebrity: well-known historical figures.</li>
military:
<li>sensitive_military: militarily sensitive figure.</li>
                     * @return Label Tags for the results of politically sensitive information detection of suspected video segments. The relationship between the `LabelSet` parameter in the content audit template [controlling tasks of video politically sensitive information detection](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) and this parameter is as follows:
violation_photo:
<li>violation_photo: violating photo.</li>
politician:
<li>nation_politician: head of state/government;</li>
<li>province_politician: province/state leader;</li>
<li>bureau_politician: ministry leader;</li>
<li>county_politician: county/city leader;</li>
<li>rural_politician: town leader;</li>
<li>sensitive_politician: politically sensitive figure;</li>
<li>foreign_politician: head of a foreign country/government.</li>
entertainment:
<li>sensitive_entertainment: sensitive entertainment celebrity.</li>
sport:
<li>sensitive_sport: sensitive sports figure.</li>
entrepreneur:
<li>sensitive_entrepreneur: sensitive business figure.</li>
scholar:
<li>sensitive_scholar: sensitive educator.</li>
celebrity:
<li>sensitive_celebrity: sensitive well-known figure;</li>
<li>historical_celebrity: well-known historical figures.</li>
military:
<li>sensitive_military: militarily sensitive figure.</li>
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tags for the results of politically sensitive information detection of suspected video segments. The relationship between the `LabelSet` parameter in the content audit template [controlling tasks of video politically sensitive information detection](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) and this parameter is as follows:
violation_photo:
<li>violation_photo: violating photo.</li>
politician:
<li>nation_politician: head of state/government;</li>
<li>province_politician: province/state leader;</li>
<li>bureau_politician: ministry leader;</li>
<li>county_politician: county/city leader;</li>
<li>rural_politician: town leader;</li>
<li>sensitive_politician: politically sensitive figure;</li>
<li>foreign_politician: head of a foreign country/government.</li>
entertainment:
<li>sensitive_entertainment: sensitive entertainment celebrity.</li>
sport:
<li>sensitive_sport: sensitive sports figure.</li>
entrepreneur:
<li>sensitive_entrepreneur: sensitive business figure.</li>
scholar:
<li>sensitive_scholar: sensitive educator.</li>
celebrity:
<li>sensitive_celebrity: sensitive well-known figure;</li>
<li>historical_celebrity: well-known historical figures.</li>
military:
<li>sensitive_military: militarily sensitive figure.</li>
                     * @param Label Tags for the results of politically sensitive information detection of suspected video segments. The relationship between the `LabelSet` parameter in the content audit template [controlling tasks of video politically sensitive information detection](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) and this parameter is as follows:
violation_photo:
<li>violation_photo: violating photo.</li>
politician:
<li>nation_politician: head of state/government;</li>
<li>province_politician: province/state leader;</li>
<li>bureau_politician: ministry leader;</li>
<li>county_politician: county/city leader;</li>
<li>rural_politician: town leader;</li>
<li>sensitive_politician: politically sensitive figure;</li>
<li>foreign_politician: head of a foreign country/government.</li>
entertainment:
<li>sensitive_entertainment: sensitive entertainment celebrity.</li>
sport:
<li>sensitive_sport: sensitive sports figure.</li>
entrepreneur:
<li>sensitive_entrepreneur: sensitive business figure.</li>
scholar:
<li>sensitive_scholar: sensitive educator.</li>
celebrity:
<li>sensitive_celebrity: sensitive well-known figure;</li>
<li>historical_celebrity: well-known historical figures.</li>
military:
<li>sensitive_military: militarily sensitive figure.</li>
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
                     * 获取Zone coordinates (at the pixel level) of a politically sensitive figure or violating photo: [x1, y1, x2, y2], i.e., the coordinates of the top-left and bottom-right corners.
                     * @return AreaCoordSet Zone coordinates (at the pixel level) of a politically sensitive figure or violating photo: [x1, y1, x2, y2], i.e., the coordinates of the top-left and bottom-right corners.
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Zone coordinates (at the pixel level) of a politically sensitive figure or violating photo: [x1, y1, x2, y2], i.e., the coordinates of the top-left and bottom-right corners.
                     * @param AreaCoordSet Zone coordinates (at the pixel level) of a politically sensitive figure or violating photo: [x1, y1, x2, y2], i.e., the coordinates of the top-left and bottom-right corners.
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     */
                    bool AreaCoordSetHasBeenSet() const;

                    /**
                     * 获取This field has been disused. Please use `PicUrlExpireTime`.
                     * @return PicUrlExpireTimeStamp This field has been disused. Please use `PicUrlExpireTime`.
                     */
                    int64_t GetPicUrlExpireTimeStamp() const;

                    /**
                     * 设置This field has been disused. Please use `PicUrlExpireTime`.
                     * @param PicUrlExpireTimeStamp This field has been disused. Please use `PicUrlExpireTime`.
                     */
                    void SetPicUrlExpireTimeStamp(const int64_t& _picUrlExpireTimeStamp);

                    /**
                     * 判断参数 PicUrlExpireTimeStamp 是否已赋值
                     * @return PicUrlExpireTimeStamp 是否已赋值
                     */
                    bool PicUrlExpireTimeStampHasBeenSet() const;

                    /**
                     * 获取Expiration time of suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return PicUrlExpireTime Expiration time of suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string GetPicUrlExpireTime() const;

                    /**
                     * 设置Expiration time of suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param PicUrlExpireTime Expiration time of suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * Score of a suspected politically sensitive segment.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Suggestion for politically sensitive information detection of a suspected segment. Valid values:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Name of a politically sensitive figure or violating photo.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Tags for the results of politically sensitive information detection of suspected video segments. The relationship between the `LabelSet` parameter in the content audit template [controlling tasks of video politically sensitive information detection](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#PoliticalImgReviewTemplateInfo) and this parameter is as follows:
violation_photo:
<li>violation_photo: violating photo.</li>
politician:
<li>nation_politician: head of state/government;</li>
<li>province_politician: province/state leader;</li>
<li>bureau_politician: ministry leader;</li>
<li>county_politician: county/city leader;</li>
<li>rural_politician: town leader;</li>
<li>sensitive_politician: politically sensitive figure;</li>
<li>foreign_politician: head of a foreign country/government.</li>
entertainment:
<li>sensitive_entertainment: sensitive entertainment celebrity.</li>
sport:
<li>sensitive_sport: sensitive sports figure.</li>
entrepreneur:
<li>sensitive_entrepreneur: sensitive business figure.</li>
scholar:
<li>sensitive_scholar: sensitive educator.</li>
celebrity:
<li>sensitive_celebrity: sensitive well-known figure;</li>
<li>historical_celebrity: well-known historical figures.</li>
military:
<li>sensitive_military: militarily sensitive figure.</li>
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
                     * Zone coordinates (at the pixel level) of a politically sensitive figure or violating photo: [x1, y1, x2, y2], i.e., the coordinates of the top-left and bottom-right corners.
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
