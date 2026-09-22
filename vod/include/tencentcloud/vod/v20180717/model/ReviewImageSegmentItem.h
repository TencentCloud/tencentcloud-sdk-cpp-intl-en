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
                * Image moderation clip.
                */
                class ReviewImageSegmentItem : public AbstractModel
                {
                public:
                    ReviewImageSegmentItem();
                    ~ReviewImageSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
<li>block: confirmed violation, suggest banning.</li>
                     * @return Suggestion Result suggestions for identifying violations in suspected clips. Value range:
<li>review: suspected violation, suggest re-examination;</li>
<li>block: confirmed violation, suggest banning.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Result suggestions for identifying violations in suspected clips. Value range:
<li>review: suspected violation, suggest re-examination;</li>
<li>block: confirmed violation, suggest banning.</li>
                     * @param _suggestion Result suggestions for identifying violations in suspected clips. Value range:
<li>review: suspected violation, suggest re-examination;</li>
<li>block: confirmed violation, suggest banning.</li>
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
                     * 获取Tag of the most likely rule violation for the suspected segment. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language.</li>
                     * @return Label Tag of the most likely rule violation for the suspected segment. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language.</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag of the most likely rule violation for the suspected segment. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language.</li>
                     * @param _label Tag of the most likely rule violation for the suspected segment. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language.</li>
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
<li>OCR: text in the image.</li>
                     * @return Form Suspected segment violation type. Value range:
<li>Image: people or icons on the screen;</li>
<li>OCR: text in the image.</li>
                     * 
                     */
                    std::string GetForm() const;

                    /**
                     * 设置Suspected segment violation type. Value range:
<li>Image: people or icons on the screen;</li>
<li>OCR: text in the image.</li>
                     * @param _form Suspected segment violation type. Value range:
<li>Image: people or icons on the screen;</li>
<li>OCR: text in the image.</li>
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
                     * 获取Coordinates of the area where the suspected object, icon, or text appears (pixel-level), [x1, y1, x2, y2], which are the coordinates of the top-left corner and bottom-right corner.
                     * @return AreaCoordSet Coordinates of the area where the suspected object, icon, or text appears (pixel-level), [x1, y1, x2, y2], which are the coordinates of the top-left corner and bottom-right corner.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Coordinates of the area where the suspected object, icon, or text appears (pixel-level), [x1, y1, x2, y2], which are the coordinates of the top-left corner and bottom-right corner.
                     * @param _areaCoordSet Coordinates of the area where the suspected object, icon, or text appears (pixel-level), [x1, y1, x2, y2], which are the coordinates of the top-left corner and bottom-right corner.
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
                     * 获取Valid when Form is OCR. It indicates the recognized OCR text content.
                     * @return Text Valid when Form is OCR. It indicates the recognized OCR text content.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Valid when Form is OCR. It indicates the recognized OCR text content.
                     * @param _text Valid when Form is OCR. It indicates the recognized OCR text content.
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
                     * 获取Valid when Form is OCR. It indicates the list of violation keywords hit by suspicious fragments.
                     * @return KeywordSet Valid when Form is OCR. It indicates the list of violation keywords hit by suspicious fragments.
                     * 
                     */
                    std::vector<std::string> GetKeywordSet() const;

                    /**
                     * 设置Valid when Form is OCR. It indicates the list of violation keywords hit by suspicious fragments.
                     * @param _keywordSet Valid when Form is OCR. It indicates the list of violation keywords hit by suspicious fragments.
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
                     * Score of offensive information involved in suspected clips.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Result suggestions for identifying violations in suspected clips. Value range:
<li>review: suspected violation, suggest re-examination;</li>
<li>block: confirmed violation, suggest banning.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Tag of the most likely rule violation for the suspected segment. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language.</li>
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
<li>OCR: text in the image.</li>
                     */
                    std::string m_form;
                    bool m_formHasBeenSet;

                    /**
                     * Coordinates of the area where the suspected object, icon, or text appears (pixel-level), [x1, y1, x2, y2], which are the coordinates of the top-left corner and bottom-right corner.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * Valid when Form is OCR. It indicates the recognized OCR text content.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Valid when Form is OCR. It indicates the list of violation keywords hit by suspicious fragments.
                     */
                    std::vector<std::string> m_keywordSet;
                    bool m_keywordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGESEGMENTITEM_H_
