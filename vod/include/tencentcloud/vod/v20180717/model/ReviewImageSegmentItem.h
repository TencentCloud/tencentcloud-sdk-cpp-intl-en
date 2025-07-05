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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGESEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGESEGMENTITEM_H_

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
                * The information of an image moderation segment.
                */
                class ReviewImageSegmentItem : public AbstractModel
                {
                public:
                    ReviewImageSegmentItem();
                    ~ReviewImageSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The confidence score for the suspicious segment.
                     * @return Confidence The confidence score for the suspicious segment.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置The confidence score for the suspicious segment.
                     * @param _confidence The confidence score for the suspicious segment.
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
                     * 获取The suggestion. Valid values:
<li>`review`: The content may be non-compliant and needs to be reviewed.</li>
<li>`block`: The content is non-compliant and should be blocked.</li>
                     * @return Suggestion The suggestion. Valid values:
<li>`review`: The content may be non-compliant and needs to be reviewed.</li>
<li>`block`: The content is non-compliant and should be blocked.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置The suggestion. Valid values:
<li>`review`: The content may be non-compliant and needs to be reviewed.</li>
<li>`block`: The content is non-compliant and should be blocked.</li>
                     * @param _suggestion The suggestion. Valid values:
<li>`review`: The content may be non-compliant and needs to be reviewed.</li>
<li>`block`: The content is non-compliant and should be blocked.</li>
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
                     * 获取The most likely label for the suspicious content. Valid values: <li>`Porn`</li> <li>`Terror`</li>
                     * @return Label The most likely label for the suspicious content. Valid values: <li>`Porn`</li> <li>`Terror`</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置The most likely label for the suspicious content. Valid values: <li>`Porn`</li> <li>`Terror`</li>
                     * @param _label The most likely label for the suspicious content. Valid values: <li>`Porn`</li> <li>`Terror`</li>
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
                     * 获取The sub-label.
                     * @return SubLabel The sub-label.
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置The sub-label.
                     * @param _subLabel The sub-label.
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
                     * 获取The type of the suspicious segment. Valid values:
<li>`Image` (people or icons in images)</li>
<li>`OCR` (text in images)</li>
                     * @return Form The type of the suspicious segment. Valid values:
<li>`Image` (people or icons in images)</li>
<li>`OCR` (text in images)</li>
                     * 
                     */
                    std::string GetForm() const;

                    /**
                     * 设置The type of the suspicious segment. Valid values:
<li>`Image` (people or icons in images)</li>
<li>`OCR` (text in images)</li>
                     * @param _form The type of the suspicious segment. Valid values:
<li>`Image` (people or icons in images)</li>
<li>`OCR` (text in images)</li>
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
                     * 获取The pixel coordinates of the suspicious people, icons, or text. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
                     * @return AreaCoordSet The pixel coordinates of the suspicious people, icons, or text. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置The pixel coordinates of the suspicious people, icons, or text. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
                     * @param _areaCoordSet The pixel coordinates of the suspicious people, icons, or text. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
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
                     * 获取The content of the suspicious text detected. This parameter is valid only if `Form` is `OCR`.
                     * @return Text The content of the suspicious text detected. This parameter is valid only if `Form` is `OCR`.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置The content of the suspicious text detected. This parameter is valid only if `Form` is `OCR`.
                     * @param _text The content of the suspicious text detected. This parameter is valid only if `Form` is `OCR`.
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
                     * 获取The keywords that match the suspicious text. This parameter is valid only if `Form` is `OCR`.
                     * @return KeywordSet The keywords that match the suspicious text. This parameter is valid only if `Form` is `OCR`.
                     * 
                     */
                    std::vector<std::string> GetKeywordSet() const;

                    /**
                     * 设置The keywords that match the suspicious text. This parameter is valid only if `Form` is `OCR`.
                     * @param _keywordSet The keywords that match the suspicious text. This parameter is valid only if `Form` is `OCR`.
                     * 
                     */
                    void SetKeywordSet(const std::vector<std::string>& _keywordSet);

                    /**
                     * 判断参数 KeywordSet 是否已赋值
                     * @return KeywordSet 是否已赋值
                     * 
                     */
                    bool KeywordSetHasBeenSet() const;

                private:

                    /**
                     * The confidence score for the suspicious segment.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * The suggestion. Valid values:
<li>`review`: The content may be non-compliant and needs to be reviewed.</li>
<li>`block`: The content is non-compliant and should be blocked.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * The most likely label for the suspicious content. Valid values: <li>`Porn`</li> <li>`Terror`</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * The sub-label.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * The type of the suspicious segment. Valid values:
<li>`Image` (people or icons in images)</li>
<li>`OCR` (text in images)</li>
                     */
                    std::string m_form;
                    bool m_formHasBeenSet;

                    /**
                     * The pixel coordinates of the suspicious people, icons, or text. The format is [x1, y1, x2, y2], which indicates the coordinates of the top-left and bottom-right corners.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * The content of the suspicious text detected. This parameter is valid only if `Form` is `OCR`.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * The keywords that match the suspicious text. This parameter is valid only if `Form` is `OCR`.
                     */
                    std::vector<std::string> m_keywordSet;
                    bool m_keywordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGESEGMENTITEM_H_
