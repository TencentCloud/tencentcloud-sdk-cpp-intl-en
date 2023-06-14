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
                * The suspicious segment detected.
                */
                class ReviewAudioVideoSegmentItem : public AbstractModel
                {
                public:
                    ReviewAudioVideoSegmentItem();
                    ~ReviewAudioVideoSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The start time offset (seconds) of the segment.
                     * @return StartTimeOffset The start time offset (seconds) of the segment.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置The start time offset (seconds) of the segment.
                     * @param _startTimeOffset The start time offset (seconds) of the segment.
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
                     * 获取The end time offset (seconds) of the segment.
                     * @return EndTimeOffset The end time offset (seconds) of the segment.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置The end time offset (seconds) of the segment.
                     * @param _endTimeOffset The end time offset (seconds) of the segment.
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
                     * 获取The confidence score of the segment.
                     * @return Confidence The confidence score of the segment.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置The confidence score of the segment.
                     * @param _confidence The confidence score of the segment.
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
                     * 获取The processing suggestion for the segment. Valid values:
<li>review: The content may be non-compliant. Please review it.</li>
<li>block: The content is non-compliant. We recommend you block it.</li>
                     * @return Suggestion The processing suggestion for the segment. Valid values:
<li>review: The content may be non-compliant. Please review it.</li>
<li>block: The content is non-compliant. We recommend you block it.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置The processing suggestion for the segment. Valid values:
<li>review: The content may be non-compliant. Please review it.</li>
<li>block: The content is non-compliant. We recommend you block it.</li>
                     * @param _suggestion The processing suggestion for the segment. Valid values:
<li>review: The content may be non-compliant. Please review it.</li>
<li>block: The content is non-compliant. We recommend you block it.</li>
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
                     * 获取The most likely label for the segment. Valid values:
<li>Porn</li>
<li>Terrorism</li>
                     * @return Label The most likely label for the segment. Valid values:
<li>Porn</li>
<li>Terrorism</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置The most likely label for the segment. Valid values:
<li>Porn</li>
<li>Terrorism</li>
                     * @param _label The most likely label for the segment. Valid values:
<li>Porn</li>
<li>Terrorism</li>
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
                     * 获取The sublabel for the segment. This parameter is valid only if `Form` is `Image` or `Voice`.
Valid values when `Form` is `Image` and `Label` is `Porn`:
<li>porn</li>
<li>vulgar</li>

Valid values when `Form` is `Image` and `Label` is `Terrorism`:
<li>guns</li>
<li>bloody</li>
<li>banners</li>
<li>scenario (terrorist scenes)</li>
<li>explosion</li>

Valid values when `Form` is `Voice` and `Label` is `Porn`:
<li>moan</li>
                     * @return SubLabel The sublabel for the segment. This parameter is valid only if `Form` is `Image` or `Voice`.
Valid values when `Form` is `Image` and `Label` is `Porn`:
<li>porn</li>
<li>vulgar</li>

Valid values when `Form` is `Image` and `Label` is `Terrorism`:
<li>guns</li>
<li>bloody</li>
<li>banners</li>
<li>scenario (terrorist scenes)</li>
<li>explosion</li>

Valid values when `Form` is `Voice` and `Label` is `Porn`:
<li>moan</li>
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置The sublabel for the segment. This parameter is valid only if `Form` is `Image` or `Voice`.
Valid values when `Form` is `Image` and `Label` is `Porn`:
<li>porn</li>
<li>vulgar</li>

Valid values when `Form` is `Image` and `Label` is `Terrorism`:
<li>guns</li>
<li>bloody</li>
<li>banners</li>
<li>scenario (terrorist scenes)</li>
<li>explosion</li>

Valid values when `Form` is `Voice` and `Label` is `Porn`:
<li>moan</li>
                     * @param _subLabel The sublabel for the segment. This parameter is valid only if `Form` is `Image` or `Voice`.
Valid values when `Form` is `Image` and `Label` is `Porn`:
<li>porn</li>
<li>vulgar</li>

Valid values when `Form` is `Image` and `Label` is `Terrorism`:
<li>guns</li>
<li>bloody</li>
<li>banners</li>
<li>scenario (terrorist scenes)</li>
<li>explosion</li>

Valid values when `Form` is `Voice` and `Label` is `Porn`:
<li>moan</li>
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
                     * 获取The format of the suspicious segment detected. Valid values:
<li>Image</li>
<li>OCR</li>
<li>ASR</li>
<li>Voice</li>
                     * @return Form The format of the suspicious segment detected. Valid values:
<li>Image</li>
<li>OCR</li>
<li>ASR</li>
<li>Voice</li>
                     * 
                     */
                    std::string GetForm() const;

                    /**
                     * 设置The format of the suspicious segment detected. Valid values:
<li>Image</li>
<li>OCR</li>
<li>ASR</li>
<li>Voice</li>
                     * @param _form The format of the suspicious segment detected. Valid values:
<li>Image</li>
<li>OCR</li>
<li>ASR</li>
<li>Voice</li>
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
                     * 获取The pixel coordinates ([x1, y1, x2, y2]) of the top-left corner and bottom-right corner of the suspicious text. This parameter is valid only if `Form` is `OCR`.
<font color=red>Note</font>: This parameter is not supported currently.
                     * @return AreaCoordSet The pixel coordinates ([x1, y1, x2, y2]) of the top-left corner and bottom-right corner of the suspicious text. This parameter is valid only if `Form` is `OCR`.
<font color=red>Note</font>: This parameter is not supported currently.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置The pixel coordinates ([x1, y1, x2, y2]) of the top-left corner and bottom-right corner of the suspicious text. This parameter is valid only if `Form` is `OCR`.
<font color=red>Note</font>: This parameter is not supported currently.
                     * @param _areaCoordSet The pixel coordinates ([x1, y1, x2, y2]) of the top-left corner and bottom-right corner of the suspicious text. This parameter is valid only if `Form` is `OCR`.
<font color=red>Note</font>: This parameter is not supported currently.
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
                     * 获取The content of the suspicious text detected. This parameter is valid only if `Form` is `OCR` or `ASR`.
                     * @return Text The content of the suspicious text detected. This parameter is valid only if `Form` is `OCR` or `ASR`.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置The content of the suspicious text detected. This parameter is valid only if `Form` is `OCR` or `ASR`.
                     * @param _text The content of the suspicious text detected. This parameter is valid only if `Form` is `OCR` or `ASR`.
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
                     * 获取The keywords that match the suspicious text. This parameter is valid only if `Form` is `OCR` or `ASR`.
                     * @return KeywordSet The keywords that match the suspicious text. This parameter is valid only if `Form` is `OCR` or `ASR`.
                     * 
                     */
                    std::vector<std::string> GetKeywordSet() const;

                    /**
                     * 设置The keywords that match the suspicious text. This parameter is valid only if `Form` is `OCR` or `ASR`.
                     * @param _keywordSet The keywords that match the suspicious text. This parameter is valid only if `Form` is `OCR` or `ASR`.
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
                     * 获取The URL of a suspected image (which will be deleted
 after `PicUrlExpireTime`).
                     * @return Url The URL of a suspected image (which will be deleted
 after `PicUrlExpireTime`).
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置The URL of a suspected image (which will be deleted
 after `PicUrlExpireTime`).
                     * @param _url The URL of a suspected image (which will be deleted
 after `PicUrlExpireTime`).
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
                     * 获取The expiration time of the suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return PicUrlExpireTime The expiration time of the suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetPicUrlExpireTime() const;

                    /**
                     * 设置The expiration time of the suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _picUrlExpireTime The expiration time of the suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * The start time offset (seconds) of the segment.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * The end time offset (seconds) of the segment.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * The confidence score of the segment.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * The processing suggestion for the segment. Valid values:
<li>review: The content may be non-compliant. Please review it.</li>
<li>block: The content is non-compliant. We recommend you block it.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * The most likely label for the segment. Valid values:
<li>Porn</li>
<li>Terrorism</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * The sublabel for the segment. This parameter is valid only if `Form` is `Image` or `Voice`.
Valid values when `Form` is `Image` and `Label` is `Porn`:
<li>porn</li>
<li>vulgar</li>

Valid values when `Form` is `Image` and `Label` is `Terrorism`:
<li>guns</li>
<li>bloody</li>
<li>banners</li>
<li>scenario (terrorist scenes)</li>
<li>explosion</li>

Valid values when `Form` is `Voice` and `Label` is `Porn`:
<li>moan</li>
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * The format of the suspicious segment detected. Valid values:
<li>Image</li>
<li>OCR</li>
<li>ASR</li>
<li>Voice</li>
                     */
                    std::string m_form;
                    bool m_formHasBeenSet;

                    /**
                     * The pixel coordinates ([x1, y1, x2, y2]) of the top-left corner and bottom-right corner of the suspicious text. This parameter is valid only if `Form` is `OCR`.
<font color=red>Note</font>: This parameter is not supported currently.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * The content of the suspicious text detected. This parameter is valid only if `Form` is `OCR` or `ASR`.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * The keywords that match the suspicious text. This parameter is valid only if `Form` is `OCR` or `ASR`.
                     */
                    std::vector<std::string> m_keywordSet;
                    bool m_keywordSetHasBeenSet;

                    /**
                     * The URL of a suspected image (which will be deleted
 after `PicUrlExpireTime`).
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * The expiration time of the suspected image URL in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_picUrlExpireTime;
                    bool m_picUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOSEGMENTITEM_H_
