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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOSEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOSEGMENTITEM_H_

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
                * Audio/video moderation clip.
                */
                class ReviewAudioVideoSegmentItem : public AbstractModel
                {
                public:
                    ReviewAudioVideoSegmentItem();
                    ~ReviewAudioVideoSegmentItem() = default;
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
                     * 获取Result suggestions for identifying violations in suspected clips. Value range:
<li>review: suspected violation, suggest re-examination;</li>
<li>block: Confirmed violation. Suggest banning.</li>
                     * @return Suggestion Result suggestions for identifying violations in suspected clips. Value range:
<li>review: suspected violation, suggest re-examination;</li>
<li>block: Confirmed violation. Suggest banning.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Result suggestions for identifying violations in suspected clips. Value range:
<li>review: suspected violation, suggest re-examination;</li>
<li>block: Confirmed violation. Suggest banning.</li>
                     * @param _suggestion Result suggestions for identifying violations in suspected clips. Value range:
<li>review: suspected violation, suggest re-examination;</li>
<li>block: Confirmed violation. Suggest banning.</li>
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
                     * 获取Most likely rule violation tag of the suspected segment. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal activities;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     * @return Label Most likely rule violation tag of the suspected segment. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal activities;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Most likely rule violation tag of the suspected segment. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal activities;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     * @param _label Most likely rule violation tag of the suspected segment. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal activities;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
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
                     * 获取Rule-violating subtag.
                     * @return SubLabel Rule-violating subtag.
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置Rule-violating subtag.
                     * @param _subLabel Rule-violating subtag.
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取Suspected segment violation type. Value range:
<li>Image: people or icons on the screen;</li>
<li>OCR: text on the screen;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
                     * @return Form Suspected segment violation type. Value range:
<li>Image: people or icons on the screen;</li>
<li>OCR: text on the screen;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
                     * 
                     */
                    std::string GetForm() const;

                    /**
                     * 设置Suspected segment violation type. Value range:
<li>Image: people or icons on the screen;</li>
<li>OCR: text on the screen;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
                     * @param _form Suspected segment violation type. Value range:
<li>Image: people or icons on the screen;</li>
<li>OCR: text on the screen;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
                     * 
                     */
                    void SetForm(const std::string& _form);

                    /**
                     * 判断参数 Form 是否已赋值
                     * @return Form 是否已赋值
                     * 
                     */
                    bool FormHasBeenSet() const;

                    /**
                     * 获取Valid when Form is Image or OCR. Indicates the pixel-level coordinates of the area where the suspect, icon, or text appears, [x1, y1, x2, y2], which are the coordinates of the top-left corner and the bottom-right corner.
                     * @return AreaCoordSet Valid when Form is Image or OCR. Indicates the pixel-level coordinates of the area where the suspect, icon, or text appears, [x1, y1, x2, y2], which are the coordinates of the top-left corner and the bottom-right corner.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Valid when Form is Image or OCR. Indicates the pixel-level coordinates of the area where the suspect, icon, or text appears, [x1, y1, x2, y2], which are the coordinates of the top-left corner and the bottom-right corner.
                     * @param _areaCoordSet Valid when Form is Image or OCR. Indicates the pixel-level coordinates of the area where the suspect, icon, or text appears, [x1, y1, x2, y2], which are the coordinates of the top-left corner and the bottom-right corner.
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
                     * 获取Valid when Form is OCR or ASR. It indicates the recognized OCR or ASR text content.
                     * @return Text Valid when Form is OCR or ASR. It indicates the recognized OCR or ASR text content.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Valid when Form is OCR or ASR. It indicates the recognized OCR or ASR text content.
                     * @param _text Valid when Form is OCR or ASR. It indicates the recognized OCR or ASR text content.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Valid when Form is OCR or ASR. It indicates the list of violation keywords hit by suspicious fragments.
                     * @return KeywordSet Valid when Form is OCR or ASR. It indicates the list of violation keywords hit by suspicious fragments.
                     * 
                     */
                    std::vector<std::string> GetKeywordSet() const;

                    /**
                     * 设置Valid when Form is OCR or ASR. It indicates the list of violation keywords hit by suspicious fragments.
                     * @param _keywordSet Valid when Form is OCR or ASR. It indicates the list of violation keywords hit by suspicious fragments.
                     * 
                     */
                    void SetKeywordSet(const std::vector<std::string>& _keywordSet);

                    /**
                     * 判断参数 KeywordSet 是否已赋值
                     * @return KeywordSet 是否已赋值
                     * 
                     */
                    bool KeywordSetHasBeenSet() const;

                    /**
                     * 获取Suspected image URL (images are not retained permanently and will be deleted after reaching
Images will be deleted after the PicUrlExpireTime time point).
                     * @return Url Suspected image URL (images are not retained permanently and will be deleted after reaching
Images will be deleted after the PicUrlExpireTime time point).
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Suspected image URL (images are not retained permanently and will be deleted after reaching
Images will be deleted after the PicUrlExpireTime time point).
                     * @param _url Suspected image URL (images are not retained permanently and will be deleted after reaching
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
                     * Result suggestions for identifying violations in suspected clips. Value range:
<li>review: suspected violation, suggest re-examination;</li>
<li>block: Confirmed violation. Suggest banning.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Most likely rule violation tag of the suspected segment. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal activities;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Rule-violating subtag.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * Suspected segment violation type. Value range:
<li>Image: people or icons on the screen;</li>
<li>OCR: text on the screen;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
                     */
                    std::string m_form;
                    bool m_formHasBeenSet;

                    /**
                     * Valid when Form is Image or OCR. Indicates the pixel-level coordinates of the area where the suspect, icon, or text appears, [x1, y1, x2, y2], which are the coordinates of the top-left corner and the bottom-right corner.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * Valid when Form is OCR or ASR. It indicates the recognized OCR or ASR text content.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Valid when Form is OCR or ASR. It indicates the list of violation keywords hit by suspicious fragments.
                     */
                    std::vector<std::string> m_keywordSet;
                    bool m_keywordSetHasBeenSet;

                    /**
                     * Suspected image URL (images are not retained permanently and will be deleted after reaching
Images will be deleted after the PicUrlExpireTime time point).
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOSEGMENTITEM_H_
