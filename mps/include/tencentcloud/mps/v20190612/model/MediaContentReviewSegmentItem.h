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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIACONTENTREVIEWSEGMENTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIACONTENTREVIEWSEGMENTITEM_H_

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
                * Content review suspected pornographic/sensitive segment
                */
                class MediaContentReviewSegmentItem : public AbstractModel
                {
                public:
                    MediaContentReviewSegmentItem();
                    ~MediaContentReviewSegmentItem() = default;
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
                     * 获取Suspected segment porn score.
                     * @return Confidence Suspected segment porn score.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Suspected segment porn score.
                     * @param _confidence Suspected segment porn score.
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
                     * 获取Tag of the pornographic result for the suspected segment.
                     * @return Label Tag of the pornographic result for the suspected segment.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag of the pornographic result for the suspected segment.
                     * @param _label Tag of the pornographic result for the suspected segment.
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
                     * 获取Pornographic result suggestion for suspected segment, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @return Suggestion Pornographic result suggestion for suspected segment, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Pornographic result suggestion for suspected segment, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @param _suggestion Pornographic result suggestion for suspected segment, value ranges from...to...
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
                     * Suspected segment porn score.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Tag of the pornographic result for the suspected segment.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Pornographic result suggestion for suspected segment, value ranges from...to...
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Suspected image URL (Images are not retained permanently upon arrival)
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

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIACONTENTREVIEWSEGMENTITEM_H_
