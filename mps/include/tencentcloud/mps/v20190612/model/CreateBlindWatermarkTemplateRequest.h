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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEBLINDWATERMARKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEBLINDWATERMARKTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateBlindWatermarkTemplate request structure.
                */
                class CreateBlindWatermarkTemplateRequest : public AbstractModel
                {
                public:
                    CreateBlindWatermarkTemplateRequest();
                    ~CreateBlindWatermarkTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA watermark.</li>
                     * @return Type Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA watermark.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA watermark.</li>
                     * @param _type Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA watermark.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Text content of the digital watermark. The length cannot exceed 64 characters. After NAGRA watermark templates are created, the text content cannot be modified.
                     * @return TextContent Text content of the digital watermark. The length cannot exceed 64 characters. After NAGRA watermark templates are created, the text content cannot be modified.
                     * 
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置Text content of the digital watermark. The length cannot exceed 64 characters. After NAGRA watermark templates are created, the text content cannot be modified.
                     * @param _textContent Text content of the digital watermark. The length cannot exceed 64 characters. After NAGRA watermark templates are created, the text content cannot be modified.
                     * 
                     */
                    void SetTextContent(const std::string& _textContent);

                    /**
                     * 判断参数 TextContent 是否已赋值
                     * @return TextContent 是否已赋值
                     * 
                     */
                    bool TextContentHasBeenSet() const;

                    /**
                     * 获取Digital watermark template name, which supports Chinese, English, digits, underscores (_), hyphens (-), and periods (.). The length cannot exceed 64 characters.
                     * @return Name Digital watermark template name, which supports Chinese, English, digits, underscores (_), hyphens (-), and periods (.). The length cannot exceed 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Digital watermark template name, which supports Chinese, English, digits, underscores (_), hyphens (-), and periods (.). The length cannot exceed 64 characters.
                     * @param _name Digital watermark template name, which supports Chinese, English, digits, underscores (_), hyphens (-), and periods (.). The length cannot exceed 64 characters.
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
                     * 获取Description information of the digital watermark template. The length cannot exceed 256 characters.
                     * @return Comment Description information of the digital watermark template. The length cannot exceed 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description information of the digital watermark template. The length cannot exceed 256 characters.
                     * @param _comment Description information of the digital watermark template. The length cannot exceed 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA watermark.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Text content of the digital watermark. The length cannot exceed 64 characters. After NAGRA watermark templates are created, the text content cannot be modified.
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                    /**
                     * Digital watermark template name, which supports Chinese, English, digits, underscores (_), hyphens (-), and periods (.). The length cannot exceed 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description information of the digital watermark template. The length cannot exceed 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEBLINDWATERMARKTEMPLATEREQUEST_H_
