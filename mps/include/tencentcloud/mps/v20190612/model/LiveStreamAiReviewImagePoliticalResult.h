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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWIMAGEPOLITICALRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWIMAGEPOLITICALRESULT_H_

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
                * Live stream AI content review image sensitive result
                */
                class LiveStreamAiReviewImagePoliticalResult : public AbstractModel
                {
                public:
                    LiveStreamAiReviewImagePoliticalResult();
                    ~LiveStreamAiReviewImagePoliticalResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start PTS time of a suspected segment, in seconds.
                     * @return StartPtsTime Start PTS time of a suspected segment, in seconds.
                     * 
                     */
                    double GetStartPtsTime() const;

                    /**
                     * 设置Start PTS time of a suspected segment, in seconds.
                     * @param _startPtsTime Start PTS time of a suspected segment, in seconds.
                     * 
                     */
                    void SetStartPtsTime(const double& _startPtsTime);

                    /**
                     * 判断参数 StartPtsTime 是否已赋值
                     * @return StartPtsTime 是否已赋值
                     * 
                     */
                    bool StartPtsTimeHasBeenSet() const;

                    /**
                     * 获取End PTS time of a suspected segment, in seconds.
                     * @return EndPtsTime End PTS time of a suspected segment, in seconds.
                     * 
                     */
                    double GetEndPtsTime() const;

                    /**
                     * 设置End PTS time of a suspected segment, in seconds.
                     * @param _endPtsTime End PTS time of a suspected segment, in seconds.
                     * 
                     */
                    void SetEndPtsTime(const double& _endPtsTime);

                    /**
                     * 判断参数 EndPtsTime 是否已赋值
                     * @return EndPtsTime 是否已赋值
                     * 
                     */
                    bool EndPtsTimeHasBeenSet() const;

                    /**
                     * 获取Sensitive score of the suspected segment.
                     * @return Confidence Sensitive score of the suspected segment.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Sensitive score of the suspected segment.
                     * @param _confidence Sensitive score of the suspected segment.
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
                     * 获取Result suggestion for suspected segment porn detection, permissible range:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @return Suggestion Result suggestion for suspected segment porn detection, permissible range:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Result suggestion for suspected segment porn detection, permissible range:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @param _suggestion Result suggestion for suspected segment porn detection, permissible range:
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
                     * 获取Video sensitive result tag, value ranges from...to...
<li>politician: sensitive person.</li>
<li>violation_photo: violation icon.</li>
                     * @return Label Video sensitive result tag, value ranges from...to...
<li>politician: sensitive person.</li>
<li>violation_photo: violation icon.</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Video sensitive result tag, value ranges from...to...
<li>politician: sensitive person.</li>
<li>violation_photo: violation icon.</li>
                     * @param _label Video sensitive result tag, value ranges from...to...
<li>politician: sensitive person.</li>
<li>violation_photo: violation icon.</li>
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
                     * 获取Area coordinates (pixel-level) where sensitive persons or violation icons appear. Format: [x1, y1, x2, y2], which indicates the coordinates of the top-left corner and the bottom-right corner.
                     * @return AreaCoordSet Area coordinates (pixel-level) where sensitive persons or violation icons appear. Format: [x1, y1, x2, y2], which indicates the coordinates of the top-left corner and the bottom-right corner.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Area coordinates (pixel-level) where sensitive persons or violation icons appear. Format: [x1, y1, x2, y2], which indicates the coordinates of the top-left corner and the bottom-right corner.
                     * @param _areaCoordSet Area coordinates (pixel-level) where sensitive persons or violation icons appear. Format: [x1, y1, x2, y2], which indicates the coordinates of the top-left corner and the bottom-right corner.
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
                     * Start PTS time of a suspected segment, in seconds.
                     */
                    double m_startPtsTime;
                    bool m_startPtsTimeHasBeenSet;

                    /**
                     * End PTS time of a suspected segment, in seconds.
                     */
                    double m_endPtsTime;
                    bool m_endPtsTimeHasBeenSet;

                    /**
                     * Sensitive score of the suspected segment.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Result suggestion for suspected segment porn detection, permissible range:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Video sensitive result tag, value ranges from...to...
<li>politician: sensitive person.</li>
<li>violation_photo: violation icon.</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Sensitive person, violative icon name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Area coordinates (pixel-level) where sensitive persons or violation icons appear. Format: [x1, y1, x2, y2], which indicates the coordinates of the top-left corner and the bottom-right corner.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

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

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWIMAGEPOLITICALRESULT_H_
