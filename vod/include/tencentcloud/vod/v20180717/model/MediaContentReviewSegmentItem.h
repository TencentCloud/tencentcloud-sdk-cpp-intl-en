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
                * Moderated segments involving offensive or unsafe content.
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
                     * 获取Score of offensive information involved in suspected clips.
                     * @return Confidence Score of offensive information involved in suspected clips.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Score of offensive information involved in suspected clips.
                     * @param _confidence Score of offensive information involved in suspected clips.
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
                     * 获取Tag of the result that the suspected segment involves offensive content.
                     * @return Label Tag of the result that the suspected segment involves offensive content.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag of the result that the suspected segment involves offensive content.
                     * @param _label Tag of the result that the suspected segment involves offensive content.
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
                     * 获取Result suggestions for identifying offensive content in suspected segments. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @return Suggestion Result suggestions for identifying offensive content in suspected segments. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Result suggestions for identifying offensive content in suspected segments. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     * @param _suggestion Result suggestions for identifying offensive content in suspected segments. Value range:
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
                     * 获取Suspected image URL (images are not retained permanently and will reach
Images will be deleted after the PicUrlExpireTime time point).
                     * @return Url Suspected image URL (images are not retained permanently and will reach
Images will be deleted after the PicUrlExpireTime time point).
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Suspected image URL (images are not retained permanently and will reach
Images will be deleted after the PicUrlExpireTime time point).
                     * @param _url Suspected image URL (images are not retained permanently and will reach
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
                     * 获取Deprecated. Please use PicUrlExpireTime.
                     * @return PicUrlExpireTimeStamp Deprecated. Please use PicUrlExpireTime.
                     * @deprecated
                     */
                    int64_t GetPicUrlExpireTimeStamp() const;

                    /**
                     * 设置Deprecated. Please use PicUrlExpireTime.
                     * @param _picUrlExpireTimeStamp Deprecated. Please use PicUrlExpireTime.
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
                     * 获取Expiration time of the suspected image URL in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return PicUrlExpireTime Expiration time of the suspected image URL in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetPicUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the suspected image URL in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _picUrlExpireTime Expiration time of the suspected image URL in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * Score of offensive information involved in suspected clips.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Tag of the result that the suspected segment involves offensive content.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Result suggestions for identifying offensive content in suspected segments. Value range:
<li>pass.</li>
<li>review.</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Suspected image URL (images are not retained permanently and will reach
Images will be deleted after the PicUrlExpireTime time point).
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Deprecated. Please use PicUrlExpireTime.
                     */
                    int64_t m_picUrlExpireTimeStamp;
                    bool m_picUrlExpireTimeStampHasBeenSet;

                    /**
                     * Expiration time of the suspected image URL in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_picUrlExpireTime;
                    bool m_picUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWSEGMENTITEM_H_
