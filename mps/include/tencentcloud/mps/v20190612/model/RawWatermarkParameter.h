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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RAWWATERMARKPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RAWWATERMARKPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RawImageWatermarkInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Customize watermark specification parameters.
                */
                class RawWatermarkParameter : public AbstractModel
                {
                public:
                    RawWatermarkParameter();
                    ~RawWatermarkParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Watermark type. Valid values:
<li>image: image watermark.</li>
                     * @return Type Watermark type. Valid values:
<li>image: image watermark.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Watermark type. Valid values:
<li>image: image watermark.</li>
                     * @param _type Watermark type. Valid values:
<li>image: image watermark.</li>
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
                     * 获取Origin position. Valid values:
<li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the watermark origin is at the top left corner of the image or text.</li>
<li>TopRight: indicates that the coordinate origin is at the top right corner of the video image and the watermark origin is at the top right corner of the image or text.</li>
<li>BottomLeft: indicates that the coordinate origin is at the bottom-left corner of the video image and the watermark origin is at the bottom-left corner of the image or text.</li>
<li>BottomRight: indicates that the coordinate origin is at the bottom right corner of the video image and the watermark origin is at the bottom right corner of the image or text.</li>
Default value: TopLeft.
                     * @return CoordinateOrigin Origin position. Valid values:
<li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the watermark origin is at the top left corner of the image or text.</li>
<li>TopRight: indicates that the coordinate origin is at the top right corner of the video image and the watermark origin is at the top right corner of the image or text.</li>
<li>BottomLeft: indicates that the coordinate origin is at the bottom-left corner of the video image and the watermark origin is at the bottom-left corner of the image or text.</li>
<li>BottomRight: indicates that the coordinate origin is at the bottom right corner of the video image and the watermark origin is at the bottom right corner of the image or text.</li>
Default value: TopLeft.
                     * 
                     */
                    std::string GetCoordinateOrigin() const;

                    /**
                     * 设置Origin position. Valid values:
<li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the watermark origin is at the top left corner of the image or text.</li>
<li>TopRight: indicates that the coordinate origin is at the top right corner of the video image and the watermark origin is at the top right corner of the image or text.</li>
<li>BottomLeft: indicates that the coordinate origin is at the bottom-left corner of the video image and the watermark origin is at the bottom-left corner of the image or text.</li>
<li>BottomRight: indicates that the coordinate origin is at the bottom right corner of the video image and the watermark origin is at the bottom right corner of the image or text.</li>
Default value: TopLeft.
                     * @param _coordinateOrigin Origin position. Valid values:
<li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the watermark origin is at the top left corner of the image or text.</li>
<li>TopRight: indicates that the coordinate origin is at the top right corner of the video image and the watermark origin is at the top right corner of the image or text.</li>
<li>BottomLeft: indicates that the coordinate origin is at the bottom-left corner of the video image and the watermark origin is at the bottom-left corner of the image or text.</li>
<li>BottomRight: indicates that the coordinate origin is at the bottom right corner of the video image and the watermark origin is at the bottom right corner of the image or text.</li>
Default value: TopLeft.
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
                     * 获取Horizontal position of the watermark origin from the origin of coordinates of the video image. Supports % and px formats.
<li>If a string ends with %, it indicates that the `XPos` of a watermark is a specified percentage of a video's width. For example, `10%` means that `XPos` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark XPos is specified in pixels. For example, 100px means XPos is 100 pixels.</li>
Default value: 0px.
                     * @return XPos Horizontal position of the watermark origin from the origin of coordinates of the video image. Supports % and px formats.
<li>If a string ends with %, it indicates that the `XPos` of a watermark is a specified percentage of a video's width. For example, `10%` means that `XPos` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark XPos is specified in pixels. For example, 100px means XPos is 100 pixels.</li>
Default value: 0px.
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置Horizontal position of the watermark origin from the origin of coordinates of the video image. Supports % and px formats.
<li>If a string ends with %, it indicates that the `XPos` of a watermark is a specified percentage of a video's width. For example, `10%` means that `XPos` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark XPos is specified in pixels. For example, 100px means XPos is 100 pixels.</li>
Default value: 0px.
                     * @param _xPos Horizontal position of the watermark origin from the origin of coordinates of the video image. Supports % and px formats.
<li>If a string ends with %, it indicates that the `XPos` of a watermark is a specified percentage of a video's width. For example, `10%` means that `XPos` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark XPos is specified in pixels. For example, 100px means XPos is 100 pixels.</li>
Default value: 0px.
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
                     * 获取Vertical position of the watermark origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `YPos` of a watermark is a specified percentage of a video's height. For example, `10%` means that `YPos` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark YPos is specified in pixels. For example, 100px means YPos is 100 pixels.</li>
Default value: 0px.
                     * @return YPos Vertical position of the watermark origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `YPos` of a watermark is a specified percentage of a video's height. For example, `10%` means that `YPos` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark YPos is specified in pixels. For example, 100px means YPos is 100 pixels.</li>
Default value: 0px.
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置Vertical position of the watermark origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `YPos` of a watermark is a specified percentage of a video's height. For example, `10%` means that `YPos` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark YPos is specified in pixels. For example, 100px means YPos is 100 pixels.</li>
Default value: 0px.
                     * @param _yPos Vertical position of the watermark origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `YPos` of a watermark is a specified percentage of a video's height. For example, `10%` means that `YPos` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark YPos is specified in pixels. For example, 100px means YPos is 100 pixels.</li>
Default value: 0px.
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
                     * 获取Image watermark template. This field is required when Type is image, and invalid when Type is text.
                     * @return ImageTemplate Image watermark template. This field is required when Type is image, and invalid when Type is text.
                     * 
                     */
                    RawImageWatermarkInput GetImageTemplate() const;

                    /**
                     * 设置Image watermark template. This field is required when Type is image, and invalid when Type is text.
                     * @param _imageTemplate Image watermark template. This field is required when Type is image, and invalid when Type is text.
                     * 
                     */
                    void SetImageTemplate(const RawImageWatermarkInput& _imageTemplate);

                    /**
                     * 判断参数 ImageTemplate 是否已赋值
                     * @return ImageTemplate 是否已赋值
                     * 
                     */
                    bool ImageTemplateHasBeenSet() const;

                private:

                    /**
                     * Watermark type. Valid values:
<li>image: image watermark.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Origin position. Valid values:
<li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the watermark origin is at the top left corner of the image or text.</li>
<li>TopRight: indicates that the coordinate origin is at the top right corner of the video image and the watermark origin is at the top right corner of the image or text.</li>
<li>BottomLeft: indicates that the coordinate origin is at the bottom-left corner of the video image and the watermark origin is at the bottom-left corner of the image or text.</li>
<li>BottomRight: indicates that the coordinate origin is at the bottom right corner of the video image and the watermark origin is at the bottom right corner of the image or text.</li>
Default value: TopLeft.
                     */
                    std::string m_coordinateOrigin;
                    bool m_coordinateOriginHasBeenSet;

                    /**
                     * Horizontal position of the watermark origin from the origin of coordinates of the video image. Supports % and px formats.
<li>If a string ends with %, it indicates that the `XPos` of a watermark is a specified percentage of a video's width. For example, `10%` means that `XPos` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark XPos is specified in pixels. For example, 100px means XPos is 100 pixels.</li>
Default value: 0px.
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * Vertical position of the watermark origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `YPos` of a watermark is a specified percentage of a video's height. For example, `10%` means that `YPos` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark YPos is specified in pixels. For example, 100px means YPos is 100 pixels.</li>
Default value: 0px.
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * Image watermark template. This field is required when Type is image, and invalid when Type is text.
                     */
                    RawImageWatermarkInput m_imageTemplate;
                    bool m_imageTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWWATERMARKPARAMETER_H_
