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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_TRANSDETAIL_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_TRANSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tmt/v20180321/model/BoundingBox.h>
#include <tencentcloud/tmt/v20180321/model/RotateParagraphRect.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * Large model image translation detailed information
                */
                class TransDetail : public AbstractModel
                {
                public:
                    TransDetail();
                    ~TransDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Original text of the current row</p>
                     * @return SourceLineText <p>Original text of the current row</p>
                     * 
                     */
                    std::string GetSourceLineText() const;

                    /**
                     * 设置<p>Original text of the current row</p>
                     * @param _sourceLineText <p>Original text of the current row</p>
                     * 
                     */
                    void SetSourceLineText(const std::string& _sourceLineText);

                    /**
                     * 判断参数 SourceLineText 是否已赋值
                     * @return SourceLineText 是否已赋值
                     * 
                     */
                    bool SourceLineTextHasBeenSet() const;

                    /**
                     * 获取<p>Translation of the current row</p>
                     * @return TargetLineText <p>Translation of the current row</p>
                     * 
                     */
                    std::string GetTargetLineText() const;

                    /**
                     * 设置<p>Translation of the current row</p>
                     * @param _targetLineText <p>Translation of the current row</p>
                     * 
                     */
                    void SetTargetLineText(const std::string& _targetLineText);

                    /**
                     * 判断参数 TargetLineText 是否已赋值
                     * @return TargetLineText 是否已赋值
                     * 
                     */
                    bool TargetLineTextHasBeenSet() const;

                    /**
                     * 获取<p>Paragraph text box location</p>
                     * @return BoundingBox <p>Paragraph text box location</p>
                     * 
                     */
                    BoundingBox GetBoundingBox() const;

                    /**
                     * 设置<p>Paragraph text box location</p>
                     * @param _boundingBox <p>Paragraph text box location</p>
                     * 
                     */
                    void SetBoundingBox(const BoundingBox& _boundingBox);

                    /**
                     * 判断参数 BoundingBox 是否已赋值
                     * @return BoundingBox 是否已赋值
                     * 
                     */
                    bool BoundingBoxHasBeenSet() const;

                    /**
                     * 获取<p>Row count</p>
                     * @return LinesCount <p>Row count</p>
                     * 
                     */
                    int64_t GetLinesCount() const;

                    /**
                     * 设置<p>Row count</p>
                     * @param _linesCount <p>Row count</p>
                     * 
                     */
                    void SetLinesCount(const int64_t& _linesCount);

                    /**
                     * 判断参数 LinesCount 是否已赋值
                     * @return LinesCount 是否已赋值
                     * 
                     */
                    bool LinesCountHasBeenSet() const;

                    /**
                     * 获取<p>Line height.</p><p>Unit: px.</p>
                     * @return LineHeight <p>Line height.</p><p>Unit: px.</p>
                     * 
                     */
                    int64_t GetLineHeight() const;

                    /**
                     * 设置<p>Line height.</p><p>Unit: px.</p>
                     * @param _lineHeight <p>Line height.</p><p>Unit: px.</p>
                     * 
                     */
                    void SetLineHeight(const int64_t& _lineHeight);

                    /**
                     * 判断参数 LineHeight 是否已赋值
                     * @return LineHeight 是否已赋值
                     * 
                     */
                    bool LineHeightHasBeenSet() const;

                    /**
                     * 获取<p>The spam_code field is 0 in a normal paragraph; if the spam_code field exists and its value is above 0 (1: hit garbage check; 2: hit security policy; 3: another.), then the security check hit is filtered.</p>
                     * @return SpamCode <p>The spam_code field is 0 in a normal paragraph; if the spam_code field exists and its value is above 0 (1: hit garbage check; 2: hit security policy; 3: another.), then the security check hit is filtered.</p>
                     * 
                     */
                    int64_t GetSpamCode() const;

                    /**
                     * 设置<p>The spam_code field is 0 in a normal paragraph; if the spam_code field exists and its value is above 0 (1: hit garbage check; 2: hit security policy; 3: another.), then the security check hit is filtered.</p>
                     * @param _spamCode <p>The spam_code field is 0 in a normal paragraph; if the spam_code field exists and its value is above 0 (1: hit garbage check; 2: hit security policy; 3: another.), then the security check hit is filtered.</p>
                     * 
                     */
                    void SetSpamCode(const int64_t& _spamCode);

                    /**
                     * 判断参数 SpamCode 是否已赋值
                     * @return SpamCode 是否已赋值
                     * 
                     */
                    bool SpamCodeHasBeenSet() const;

                    /**
                     * 获取<p>Rotation information of paragraph text. Coordinates are valid only when valid is true.</p>
                     * @return RotateParagraphRect <p>Rotation information of paragraph text. Coordinates are valid only when valid is true.</p>
                     * 
                     */
                    RotateParagraphRect GetRotateParagraphRect() const;

                    /**
                     * 设置<p>Rotation information of paragraph text. Coordinates are valid only when valid is true.</p>
                     * @param _rotateParagraphRect <p>Rotation information of paragraph text. Coordinates are valid only when valid is true.</p>
                     * 
                     */
                    void SetRotateParagraphRect(const RotateParagraphRect& _rotateParagraphRect);

                    /**
                     * 判断参数 RotateParagraphRect 是否已赋值
                     * @return RotateParagraphRect 是否已赋值
                     * 
                     */
                    bool RotateParagraphRectHasBeenSet() const;

                private:

                    /**
                     * <p>Original text of the current row</p>
                     */
                    std::string m_sourceLineText;
                    bool m_sourceLineTextHasBeenSet;

                    /**
                     * <p>Translation of the current row</p>
                     */
                    std::string m_targetLineText;
                    bool m_targetLineTextHasBeenSet;

                    /**
                     * <p>Paragraph text box location</p>
                     */
                    BoundingBox m_boundingBox;
                    bool m_boundingBoxHasBeenSet;

                    /**
                     * <p>Row count</p>
                     */
                    int64_t m_linesCount;
                    bool m_linesCountHasBeenSet;

                    /**
                     * <p>Line height.</p><p>Unit: px.</p>
                     */
                    int64_t m_lineHeight;
                    bool m_lineHeightHasBeenSet;

                    /**
                     * <p>The spam_code field is 0 in a normal paragraph; if the spam_code field exists and its value is above 0 (1: hit garbage check; 2: hit security policy; 3: another.), then the security check hit is filtered.</p>
                     */
                    int64_t m_spamCode;
                    bool m_spamCodeHasBeenSet;

                    /**
                     * <p>Rotation information of paragraph text. Coordinates are valid only when valid is true.</p>
                     */
                    RotateParagraphRect m_rotateParagraphRect;
                    bool m_rotateParagraphRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_TRANSDETAIL_H_
