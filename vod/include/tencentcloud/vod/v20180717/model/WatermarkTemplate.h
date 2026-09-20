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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKTEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageWatermarkTemplate.h>
#include <tencentcloud/vod/v20180717/model/TextWatermarkTemplateInput.h>
#include <tencentcloud/vod/v20180717/model/SvgWatermarkInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Watermark template details.
                */
                class WatermarkTemplate : public AbstractModel
                {
                public:
                    WatermarkTemplate();
                    ~WatermarkTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Watermark template unique identifier.
                     * @return Definition Watermark template unique identifier.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Watermark template unique identifier.
                     * @param _definition Watermark template unique identifier.
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
                     * 获取Watermark type. Valid values:
<li>image: image watermark;</li>
<li>text: text watermark.</li>
                     * @return Type Watermark type. Valid values:
<li>image: image watermark;</li>
<li>text: text watermark.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Watermark type. Valid values:
<li>image: image watermark;</li>
<li>text: text watermark.</li>
                     * @param _type Watermark type. Valid values:
<li>image: image watermark;</li>
<li>text: text watermark.</li>
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
                     * 获取Watermark template name.
                     * @return Name Watermark template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Watermark template name.
                     * @param _name Watermark template name.
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
                     * 获取Template description information.
                     * @return Comment Template description information.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description information.
                     * @param _comment Template description information.
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
                     * 获取Horizontal position of the watermark image origin point from the video origin point.
<li>If a string ends with %, it indicates that the `Left` of a watermark is a position at a specified percentage of a video's width. For example, `10%` means that `Left` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark Left is at the specified pixel position of the video width. For example, 100px means Left is 100 pixels.</li>
                     * @return XPos Horizontal position of the watermark image origin point from the video origin point.
<li>If a string ends with %, it indicates that the `Left` of a watermark is a position at a specified percentage of a video's width. For example, `10%` means that `Left` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark Left is at the specified pixel position of the video width. For example, 100px means Left is 100 pixels.</li>
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置Horizontal position of the watermark image origin point from the video origin point.
<li>If a string ends with %, it indicates that the `Left` of a watermark is a position at a specified percentage of a video's width. For example, `10%` means that `Left` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark Left is at the specified pixel position of the video width. For example, 100px means Left is 100 pixels.</li>
                     * @param _xPos Horizontal position of the watermark image origin point from the video origin point.
<li>If a string ends with %, it indicates that the `Left` of a watermark is a position at a specified percentage of a video's width. For example, `10%` means that `Left` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark Left is at the specified pixel position of the video width. For example, 100px means Left is 100 pixels.</li>
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
                     * 获取Vertical position of the watermark image origin point from the video origin point.
<li>If a string ends with %, it indicates that the `Top` of a watermark is a location at a specified percentage of a video's height. For example, `10%` means that `Top` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark Top is at the specified pixel position of the video height. For example, 100px means the Top is 100 pixels.</li>
                     * @return YPos Vertical position of the watermark image origin point from the video origin point.
<li>If a string ends with %, it indicates that the `Top` of a watermark is a location at a specified percentage of a video's height. For example, `10%` means that `Top` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark Top is at the specified pixel position of the video height. For example, 100px means the Top is 100 pixels.</li>
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置Vertical position of the watermark image origin point from the video origin point.
<li>If a string ends with %, it indicates that the `Top` of a watermark is a location at a specified percentage of a video's height. For example, `10%` means that `Top` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark Top is at the specified pixel position of the video height. For example, 100px means the Top is 100 pixels.</li>
                     * @param _yPos Vertical position of the watermark image origin point from the video origin point.
<li>If a string ends with %, it indicates that the `Top` of a watermark is a location at a specified percentage of a video's height. For example, `10%` means that `Top` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark Top is at the specified pixel position of the video height. For example, 100px means the Top is 100 pixels.</li>
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
                     * 获取Image watermark template. This field is valid only when Type is image.
                     * @return ImageTemplate Image watermark template. This field is valid only when Type is image.
                     * 
                     */
                    ImageWatermarkTemplate GetImageTemplate() const;

                    /**
                     * 设置Image watermark template. This field is valid only when Type is image.
                     * @param _imageTemplate Image watermark template. This field is valid only when Type is image.
                     * 
                     */
                    void SetImageTemplate(const ImageWatermarkTemplate& _imageTemplate);

                    /**
                     * 判断参数 ImageTemplate 是否已赋值
                     * @return ImageTemplate 是否已赋值
                     * 
                     */
                    bool ImageTemplateHasBeenSet() const;

                    /**
                     * 获取Text watermarking template. This field is valid only when Type is text.
                     * @return TextTemplate Text watermarking template. This field is valid only when Type is text.
                     * 
                     */
                    TextWatermarkTemplateInput GetTextTemplate() const;

                    /**
                     * 设置Text watermarking template. This field is valid only when Type is text.
                     * @param _textTemplate Text watermarking template. This field is valid only when Type is text.
                     * 
                     */
                    void SetTextTemplate(const TextWatermarkTemplateInput& _textTemplate);

                    /**
                     * 判断参数 TextTemplate 是否已赋值
                     * @return TextTemplate 是否已赋值
                     * 
                     */
                    bool TextTemplateHasBeenSet() const;

                    /**
                     * 获取SVG watermark template. This field is valid when Type is `svg`.
                     * @return SvgTemplate SVG watermark template. This field is valid when Type is `svg`.
                     * 
                     */
                    SvgWatermarkInput GetSvgTemplate() const;

                    /**
                     * 设置SVG watermark template. This field is valid when Type is `svg`.
                     * @param _svgTemplate SVG watermark template. This field is valid when Type is `svg`.
                     * 
                     */
                    void SetSvgTemplate(const SvgWatermarkInput& _svgTemplate);

                    /**
                     * 判断参数 SvgTemplate 是否已赋值
                     * @return SvgTemplate 是否已赋值
                     * 
                     */
                    bool SvgTemplateHasBeenSet() const;

                    /**
                     * 获取Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _createTime Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return UpdateTime Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _updateTime Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Origin position. Valid values:
<li>topLeft: indicates that the coordinate origin is at the top left corner of the video image and the watermark origin is at the top left corner of the image or text.</li>
<li>topRight: indicates that the coordinate origin is at the top right corner of the video image and the watermark origin is at the top right corner of the image or text.</li>
<li>bottomLeft: indicates that the coordinate origin is at the bottom-left corner of the video image and the watermark origin is at the bottom-left corner of the image or text.</li>
<li>bottomRight: indicates that the coordinate origin is at the bottom-right corner of the video image and the watermark origin is at the lower-right of the image or text.</li>
                     * @return CoordinateOrigin Origin position. Valid values:
<li>topLeft: indicates that the coordinate origin is at the top left corner of the video image and the watermark origin is at the top left corner of the image or text.</li>
<li>topRight: indicates that the coordinate origin is at the top right corner of the video image and the watermark origin is at the top right corner of the image or text.</li>
<li>bottomLeft: indicates that the coordinate origin is at the bottom-left corner of the video image and the watermark origin is at the bottom-left corner of the image or text.</li>
<li>bottomRight: indicates that the coordinate origin is at the bottom-right corner of the video image and the watermark origin is at the lower-right of the image or text.</li>
                     * 
                     */
                    std::string GetCoordinateOrigin() const;

                    /**
                     * 设置Origin position. Valid values:
<li>topLeft: indicates that the coordinate origin is at the top left corner of the video image and the watermark origin is at the top left corner of the image or text.</li>
<li>topRight: indicates that the coordinate origin is at the top right corner of the video image and the watermark origin is at the top right corner of the image or text.</li>
<li>bottomLeft: indicates that the coordinate origin is at the bottom-left corner of the video image and the watermark origin is at the bottom-left corner of the image or text.</li>
<li>bottomRight: indicates that the coordinate origin is at the bottom-right corner of the video image and the watermark origin is at the lower-right of the image or text.</li>
                     * @param _coordinateOrigin Origin position. Valid values:
<li>topLeft: indicates that the coordinate origin is at the top left corner of the video image and the watermark origin is at the top left corner of the image or text.</li>
<li>topRight: indicates that the coordinate origin is at the top right corner of the video image and the watermark origin is at the top right corner of the image or text.</li>
<li>bottomLeft: indicates that the coordinate origin is at the bottom-left corner of the video image and the watermark origin is at the bottom-left corner of the image or text.</li>
<li>bottomRight: indicates that the coordinate origin is at the bottom-right corner of the video image and the watermark origin is at the lower-right of the image or text.</li>
                     * 
                     */
                    void SetCoordinateOrigin(const std::string& _coordinateOrigin);

                    /**
                     * 判断参数 CoordinateOrigin 是否已赋值
                     * @return CoordinateOrigin 是否已赋值
                     * 
                     */
                    bool CoordinateOriginHasBeenSet() const;

                private:

                    /**
                     * Watermark template unique identifier.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Watermark type. Valid values:
<li>image: image watermark;</li>
<li>text: text watermark.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Watermark template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description information.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Horizontal position of the watermark image origin point from the video origin point.
<li>If a string ends with %, it indicates that the `Left` of a watermark is a position at a specified percentage of a video's width. For example, `10%` means that `Left` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark Left is at the specified pixel position of the video width. For example, 100px means Left is 100 pixels.</li>
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * Vertical position of the watermark image origin point from the video origin point.
<li>If a string ends with %, it indicates that the `Top` of a watermark is a location at a specified percentage of a video's height. For example, `10%` means that `Top` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark Top is at the specified pixel position of the video height. For example, 100px means the Top is 100 pixels.</li>
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * Image watermark template. This field is valid only when Type is image.
                     */
                    ImageWatermarkTemplate m_imageTemplate;
                    bool m_imageTemplateHasBeenSet;

                    /**
                     * Text watermarking template. This field is valid only when Type is text.
                     */
                    TextWatermarkTemplateInput m_textTemplate;
                    bool m_textTemplateHasBeenSet;

                    /**
                     * SVG watermark template. This field is valid when Type is `svg`.
                     */
                    SvgWatermarkInput m_svgTemplate;
                    bool m_svgTemplateHasBeenSet;

                    /**
                     * Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Origin position. Valid values:
<li>topLeft: indicates that the coordinate origin is at the top left corner of the video image and the watermark origin is at the top left corner of the image or text.</li>
<li>topRight: indicates that the coordinate origin is at the top right corner of the video image and the watermark origin is at the top right corner of the image or text.</li>
<li>bottomLeft: indicates that the coordinate origin is at the bottom-left corner of the video image and the watermark origin is at the bottom-left corner of the image or text.</li>
<li>bottomRight: indicates that the coordinate origin is at the bottom-right corner of the video image and the watermark origin is at the lower-right of the image or text.</li>
                     */
                    std::string m_coordinateOrigin;
                    bool m_coordinateOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKTEMPLATE_H_
