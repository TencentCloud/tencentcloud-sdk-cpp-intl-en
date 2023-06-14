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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYWATERMARKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYWATERMARKTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageWatermarkInputForUpdate.h>
#include <tencentcloud/mps/v20190612/model/TextWatermarkTemplateInputForUpdate.h>
#include <tencentcloud/mps/v20190612/model/SvgWatermarkInputForUpdate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyWatermarkTemplate request structure.
                */
                class ModifyWatermarkTemplateRequest : public AbstractModel
                {
                public:
                    ModifyWatermarkTemplateRequest();
                    ~ModifyWatermarkTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of a watermarking template.
                     * @return Definition Unique ID of a watermarking template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of a watermarking template.
                     * @param _definition Unique ID of a watermarking template.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Watermarking template name. Length limit: 64 characters.
                     * @return Name Watermarking template name. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Watermarking template name. Length limit: 64 characters.
                     * @param _name Watermarking template name. Length limit: 64 characters.
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
                     * 获取Template description. Length limit: 256 characters.
                     * @return Comment Template description. Length limit: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. Length limit: 256 characters.
                     * @param _comment Template description. Length limit: 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Origin position. Valid values:
<li>TopLeft: The origin of coordinates is in the top-left corner of the video, and the origin of the watermark is in the top-left corner of the image or text;</li>
<li>TopRight: The origin of coordinates is in the top-right corner of the video, and the origin of the watermark is in the top-right corner of the image or text;</li>
<li>BottomLeft: The origin of coordinates is in the bottom-left corner of the video, and the origin of the watermark is in the bottom-left corner of the image or text;</li>
<li>BottomRight: The origin of coordinates is in the bottom-right corner of the video, and the origin of the watermark is in the bottom-right corner of the image or text.</li>
                     * @return CoordinateOrigin Origin position. Valid values:
<li>TopLeft: The origin of coordinates is in the top-left corner of the video, and the origin of the watermark is in the top-left corner of the image or text;</li>
<li>TopRight: The origin of coordinates is in the top-right corner of the video, and the origin of the watermark is in the top-right corner of the image or text;</li>
<li>BottomLeft: The origin of coordinates is in the bottom-left corner of the video, and the origin of the watermark is in the bottom-left corner of the image or text;</li>
<li>BottomRight: The origin of coordinates is in the bottom-right corner of the video, and the origin of the watermark is in the bottom-right corner of the image or text.</li>
                     * 
                     */
                    std::string GetCoordinateOrigin() const;

                    /**
                     * 设置Origin position. Valid values:
<li>TopLeft: The origin of coordinates is in the top-left corner of the video, and the origin of the watermark is in the top-left corner of the image or text;</li>
<li>TopRight: The origin of coordinates is in the top-right corner of the video, and the origin of the watermark is in the top-right corner of the image or text;</li>
<li>BottomLeft: The origin of coordinates is in the bottom-left corner of the video, and the origin of the watermark is in the bottom-left corner of the image or text;</li>
<li>BottomRight: The origin of coordinates is in the bottom-right corner of the video, and the origin of the watermark is in the bottom-right corner of the image or text.</li>
                     * @param _coordinateOrigin Origin position. Valid values:
<li>TopLeft: The origin of coordinates is in the top-left corner of the video, and the origin of the watermark is in the top-left corner of the image or text;</li>
<li>TopRight: The origin of coordinates is in the top-right corner of the video, and the origin of the watermark is in the top-right corner of the image or text;</li>
<li>BottomLeft: The origin of coordinates is in the bottom-left corner of the video, and the origin of the watermark is in the bottom-left corner of the image or text;</li>
<li>BottomRight: The origin of coordinates is in the bottom-right corner of the video, and the origin of the watermark is in the bottom-right corner of the image or text.</li>
                     * 
                     */
                    void SetCoordinateOrigin(const std::string& _coordinateOrigin);

                    /**
                     * 判断参数 CoordinateOrigin 是否已赋值
                     * @return CoordinateOrigin 是否已赋值
                     * 
                     */
                    bool CoordinateOriginHasBeenSet() const;

                    /**
                     * 获取The horizontal position of the origin of the watermark relative to the origin of coordinates of the video. % and px formats are supported:
<li>If the string ends in %, the `XPos` of the watermark will be the specified percentage of the video width; for example, `10%` means that `XPos` is 10% of the video width;</li>
<li>If the string ends in px, the `XPos` of the watermark will be the specified px; for example, `100px` means that `XPos` is 100 px.</li>
                     * @return XPos The horizontal position of the origin of the watermark relative to the origin of coordinates of the video. % and px formats are supported:
<li>If the string ends in %, the `XPos` of the watermark will be the specified percentage of the video width; for example, `10%` means that `XPos` is 10% of the video width;</li>
<li>If the string ends in px, the `XPos` of the watermark will be the specified px; for example, `100px` means that `XPos` is 100 px.</li>
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置The horizontal position of the origin of the watermark relative to the origin of coordinates of the video. % and px formats are supported:
<li>If the string ends in %, the `XPos` of the watermark will be the specified percentage of the video width; for example, `10%` means that `XPos` is 10% of the video width;</li>
<li>If the string ends in px, the `XPos` of the watermark will be the specified px; for example, `100px` means that `XPos` is 100 px.</li>
                     * @param _xPos The horizontal position of the origin of the watermark relative to the origin of coordinates of the video. % and px formats are supported:
<li>If the string ends in %, the `XPos` of the watermark will be the specified percentage of the video width; for example, `10%` means that `XPos` is 10% of the video width;</li>
<li>If the string ends in px, the `XPos` of the watermark will be the specified px; for example, `100px` means that `XPos` is 100 px.</li>
                     * 
                     */
                    void SetXPos(const std::string& _xPos);

                    /**
                     * 判断参数 XPos 是否已赋值
                     * @return XPos 是否已赋值
                     * 
                     */
                    bool XPosHasBeenSet() const;

                    /**
                     * 获取The vertical position of the origin of the watermark relative to the origin of coordinates of the video. % and px formats are supported:
<li>If the string ends in %, the `YPos` of the watermark will be the specified percentage of the video height; for example, `10%` means that `YPos` is 10% of the video height;</li>
<li>If the string ends in px, the `YPos` of the watermark will be the specified px; for example, `100px` means that `YPos` is 100 px.</li>
                     * @return YPos The vertical position of the origin of the watermark relative to the origin of coordinates of the video. % and px formats are supported:
<li>If the string ends in %, the `YPos` of the watermark will be the specified percentage of the video height; for example, `10%` means that `YPos` is 10% of the video height;</li>
<li>If the string ends in px, the `YPos` of the watermark will be the specified px; for example, `100px` means that `YPos` is 100 px.</li>
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置The vertical position of the origin of the watermark relative to the origin of coordinates of the video. % and px formats are supported:
<li>If the string ends in %, the `YPos` of the watermark will be the specified percentage of the video height; for example, `10%` means that `YPos` is 10% of the video height;</li>
<li>If the string ends in px, the `YPos` of the watermark will be the specified px; for example, `100px` means that `YPos` is 100 px.</li>
                     * @param _yPos The vertical position of the origin of the watermark relative to the origin of coordinates of the video. % and px formats are supported:
<li>If the string ends in %, the `YPos` of the watermark will be the specified percentage of the video height; for example, `10%` means that `YPos` is 10% of the video height;</li>
<li>If the string ends in px, the `YPos` of the watermark will be the specified px; for example, `100px` means that `YPos` is 100 px.</li>
                     * 
                     */
                    void SetYPos(const std::string& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     * 
                     */
                    bool YPosHasBeenSet() const;

                    /**
                     * 获取Image watermarking template. This field is valid only for image watermarking templates.
                     * @return ImageTemplate Image watermarking template. This field is valid only for image watermarking templates.
                     * 
                     */
                    ImageWatermarkInputForUpdate GetImageTemplate() const;

                    /**
                     * 设置Image watermarking template. This field is valid only for image watermarking templates.
                     * @param _imageTemplate Image watermarking template. This field is valid only for image watermarking templates.
                     * 
                     */
                    void SetImageTemplate(const ImageWatermarkInputForUpdate& _imageTemplate);

                    /**
                     * 判断参数 ImageTemplate 是否已赋值
                     * @return ImageTemplate 是否已赋值
                     * 
                     */
                    bool ImageTemplateHasBeenSet() const;

                    /**
                     * 获取Text watermarking template. This field is valid only for text watermarking templates.
                     * @return TextTemplate Text watermarking template. This field is valid only for text watermarking templates.
                     * 
                     */
                    TextWatermarkTemplateInputForUpdate GetTextTemplate() const;

                    /**
                     * 设置Text watermarking template. This field is valid only for text watermarking templates.
                     * @param _textTemplate Text watermarking template. This field is valid only for text watermarking templates.
                     * 
                     */
                    void SetTextTemplate(const TextWatermarkTemplateInputForUpdate& _textTemplate);

                    /**
                     * 判断参数 TextTemplate 是否已赋值
                     * @return TextTemplate 是否已赋值
                     * 
                     */
                    bool TextTemplateHasBeenSet() const;

                    /**
                     * 获取SVG watermarking template. This field is required when `Type` is `svg` and is invalid when `Type` is `image` or `text`.
                     * @return SvgTemplate SVG watermarking template. This field is required when `Type` is `svg` and is invalid when `Type` is `image` or `text`.
                     * 
                     */
                    SvgWatermarkInputForUpdate GetSvgTemplate() const;

                    /**
                     * 设置SVG watermarking template. This field is required when `Type` is `svg` and is invalid when `Type` is `image` or `text`.
                     * @param _svgTemplate SVG watermarking template. This field is required when `Type` is `svg` and is invalid when `Type` is `image` or `text`.
                     * 
                     */
                    void SetSvgTemplate(const SvgWatermarkInputForUpdate& _svgTemplate);

                    /**
                     * 判断参数 SvgTemplate 是否已赋值
                     * @return SvgTemplate 是否已赋值
                     * 
                     */
                    bool SvgTemplateHasBeenSet() const;

                private:

                    /**
                     * Unique ID of a watermarking template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Watermarking template name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Origin position. Valid values:
<li>TopLeft: The origin of coordinates is in the top-left corner of the video, and the origin of the watermark is in the top-left corner of the image or text;</li>
<li>TopRight: The origin of coordinates is in the top-right corner of the video, and the origin of the watermark is in the top-right corner of the image or text;</li>
<li>BottomLeft: The origin of coordinates is in the bottom-left corner of the video, and the origin of the watermark is in the bottom-left corner of the image or text;</li>
<li>BottomRight: The origin of coordinates is in the bottom-right corner of the video, and the origin of the watermark is in the bottom-right corner of the image or text.</li>
                     */
                    std::string m_coordinateOrigin;
                    bool m_coordinateOriginHasBeenSet;

                    /**
                     * The horizontal position of the origin of the watermark relative to the origin of coordinates of the video. % and px formats are supported:
<li>If the string ends in %, the `XPos` of the watermark will be the specified percentage of the video width; for example, `10%` means that `XPos` is 10% of the video width;</li>
<li>If the string ends in px, the `XPos` of the watermark will be the specified px; for example, `100px` means that `XPos` is 100 px.</li>
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * The vertical position of the origin of the watermark relative to the origin of coordinates of the video. % and px formats are supported:
<li>If the string ends in %, the `YPos` of the watermark will be the specified percentage of the video height; for example, `10%` means that `YPos` is 10% of the video height;</li>
<li>If the string ends in px, the `YPos` of the watermark will be the specified px; for example, `100px` means that `YPos` is 100 px.</li>
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * Image watermarking template. This field is valid only for image watermarking templates.
                     */
                    ImageWatermarkInputForUpdate m_imageTemplate;
                    bool m_imageTemplateHasBeenSet;

                    /**
                     * Text watermarking template. This field is valid only for text watermarking templates.
                     */
                    TextWatermarkTemplateInputForUpdate m_textTemplate;
                    bool m_textTemplateHasBeenSet;

                    /**
                     * SVG watermarking template. This field is required when `Type` is `svg` and is invalid when `Type` is `image` or `text`.
                     */
                    SvgWatermarkInputForUpdate m_svgTemplate;
                    bool m_svgTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYWATERMARKTEMPLATEREQUEST_H_
