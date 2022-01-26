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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWIMAGEPORNRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWIMAGEPORNRESULT_H_

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
                * Result of porn information detection in image in AI-based live stream content audit
                */
                class LiveStreamAiReviewImagePornResult : public AbstractModel
                {
                public:
                    LiveStreamAiReviewImagePornResult();
                    ~LiveStreamAiReviewImagePornResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start PTS time of a suspected segment in seconds.
                     * @return StartPtsTime Start PTS time of a suspected segment in seconds.
                     */
                    double GetStartPtsTime() const;

                    /**
                     * 设置Start PTS time of a suspected segment in seconds.
                     * @param StartPtsTime Start PTS time of a suspected segment in seconds.
                     */
                    void SetStartPtsTime(const double& _startPtsTime);

                    /**
                     * 判断参数 StartPtsTime 是否已赋值
                     * @return StartPtsTime 是否已赋值
                     */
                    bool StartPtsTimeHasBeenSet() const;

                    /**
                     * 获取End PTS time of a suspected segment in seconds.
                     * @return EndPtsTime End PTS time of a suspected segment in seconds.
                     */
                    double GetEndPtsTime() const;

                    /**
                     * 设置End PTS time of a suspected segment in seconds.
                     * @param EndPtsTime End PTS time of a suspected segment in seconds.
                     */
                    void SetEndPtsTime(const double& _endPtsTime);

                    /**
                     * 判断参数 EndPtsTime 是否已赋值
                     * @return EndPtsTime 是否已赋值
                     */
                    bool EndPtsTimeHasBeenSet() const;

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
                     * 获取Suggestion for porn information detection of a suspected segment. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @return Suggestion Suggestion for porn information detection of a suspected segment. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Suggestion for porn information detection of a suspected segment. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @param Suggestion Suggestion for porn information detection of a suspected segment. Valid values:
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
                     * 获取Tag of the detected porn information in video. Valid values:
<li>porn: Porn.</li>
<li>sexy: Sexiness.</li>
<li>vulgar: Vulgarity.</li>
<li>intimacy: Intimacy.</li>
                     * @return Label Tag of the detected porn information in video. Valid values:
<li>porn: Porn.</li>
<li>sexy: Sexiness.</li>
<li>vulgar: Vulgarity.</li>
<li>intimacy: Intimacy.</li>
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag of the detected porn information in video. Valid values:
<li>porn: Porn.</li>
<li>sexy: Sexiness.</li>
<li>vulgar: Vulgarity.</li>
<li>intimacy: Intimacy.</li>
                     * @param Label Tag of the detected porn information in video. Valid values:
<li>porn: Porn.</li>
<li>sexy: Sexiness.</li>
<li>vulgar: Vulgarity.</li>
<li>intimacy: Intimacy.</li>
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
                     * Start PTS time of a suspected segment in seconds.
                     */
                    double m_startPtsTime;
                    bool m_startPtsTimeHasBeenSet;

                    /**
                     * End PTS time of a suspected segment in seconds.
                     */
                    double m_endPtsTime;
                    bool m_endPtsTimeHasBeenSet;

                    /**
                     * Score of a suspected porn segment.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Suggestion for porn information detection of a suspected segment. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Tag of the detected porn information in video. Valid values:
<li>porn: Porn.</li>
<li>sexy: Sexiness.</li>
<li>vulgar: Vulgarity.</li>
<li>intimacy: Intimacy.</li>
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
                     * Expiration time of a suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_picUrlExpireTime;
                    bool m_picUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWIMAGEPORNRESULT_H_
