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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWSEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWSEGMENTITEM_H_

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
                * Suspected porn/terrorism segment identified in content audit
                */
                class MediaContentReviewSegmentItem : public AbstractModel
                {
                public:
                    MediaContentReviewSegmentItem();
                    ~MediaContentReviewSegmentItem() = default;
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
                     * 获取Score of a suspected porn segment.
                     * @return Confidence Score of a suspected porn segment.
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Score of a suspected porn segment.
                     * @param Confidence Score of a suspected porn segment.
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Tag of porn information detection result of a suspected segment.
                     * @return Label Tag of porn information detection result of a suspected segment.
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag of porn information detection result of a suspected segment.
                     * @param Label Tag of porn information detection result of a suspected segment.
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Suggestion for porn information detection of a suspected segment. Valid values:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @return Suggestion Suggestion for porn information detection of a suspected segment. Valid values:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Suggestion for porn information detection of a suspected segment. Valid values:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @param Suggestion Suggestion for porn information detection of a suspected segment. Valid values:
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
                     * Score of a suspected porn segment.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Tag of porn information detection result of a suspected segment.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Suggestion for porn information detection of a suspected segment. Valid values:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * URL of a suspected image (which will not be permanently stored
 and will be deleted after `PicUrlExpireTime`).
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWSEGMENTITEM_H_
