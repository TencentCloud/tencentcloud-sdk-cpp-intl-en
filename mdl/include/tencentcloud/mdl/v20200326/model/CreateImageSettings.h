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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_CREATEIMAGESETTINGS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_CREATEIMAGESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Watermark image settings
                */
                class CreateImageSettings : public AbstractModel
                {
                public:
                    CreateImageSettings();
                    ~CreateImageSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image file format. Valid values: png, jpg.
                     * @return ImageType Image file format. Valid values: png, jpg.
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置Image file format. Valid values: png, jpg.
                     * @param _imageType Image file format. Valid values: png, jpg.
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取Base64 encoded image content
                     * @return ImageContent Base64 encoded image content
                     * 
                     */
                    std::string GetImageContent() const;

                    /**
                     * 设置Base64 encoded image content
                     * @param _imageContent Base64 encoded image content
                     * 
                     */
                    void SetImageContent(const std::string& _imageContent);

                    /**
                     * 判断参数 ImageContent 是否已赋值
                     * @return ImageContent 是否已赋值
                     * 
                     */
                    bool ImageContentHasBeenSet() const;

                    /**
                     * 获取Origin. Valid values: TOP_LEFT, BOTTOM_LEFT, TOP_RIGHT, BOTTOM_RIGHT.
                     * @return Location Origin. Valid values: TOP_LEFT, BOTTOM_LEFT, TOP_RIGHT, BOTTOM_RIGHT.
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Origin. Valid values: TOP_LEFT, BOTTOM_LEFT, TOP_RIGHT, BOTTOM_RIGHT.
                     * @param _location Origin. Valid values: TOP_LEFT, BOTTOM_LEFT, TOP_RIGHT, BOTTOM_RIGHT.
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取The watermark’s horizontal distance from the origin as a percentage of the video width. Value range: 0-100. Default: 10.
                     * @return XPos The watermark’s horizontal distance from the origin as a percentage of the video width. Value range: 0-100. Default: 10.
                     * 
                     */
                    int64_t GetXPos() const;

                    /**
                     * 设置The watermark’s horizontal distance from the origin as a percentage of the video width. Value range: 0-100. Default: 10.
                     * @param _xPos The watermark’s horizontal distance from the origin as a percentage of the video width. Value range: 0-100. Default: 10.
                     * 
                     */
                    void SetXPos(const int64_t& _xPos);

                    /**
                     * 判断参数 XPos 是否已赋值
                     * @return XPos 是否已赋值
                     * 
                     */
                    bool XPosHasBeenSet() const;

                    /**
                     * 获取The watermark’s vertical distance from the origin as a percentage of the video height. Value range: 0-100. Default: 10.
                     * @return YPos The watermark’s vertical distance from the origin as a percentage of the video height. Value range: 0-100. Default: 10.
                     * 
                     */
                    int64_t GetYPos() const;

                    /**
                     * 设置The watermark’s vertical distance from the origin as a percentage of the video height. Value range: 0-100. Default: 10.
                     * @param _yPos The watermark’s vertical distance from the origin as a percentage of the video height. Value range: 0-100. Default: 10.
                     * 
                     */
                    void SetYPos(const int64_t& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     * 
                     */
                    bool YPosHasBeenSet() const;

                    /**
                     * 获取The watermark image’s width as a percentage of the video width. Value range: 0-100. Default: 10.
`0` means to scale the width proportionally to the height.
You cannot set both `Width` and `Height` to `0`.
                     * @return Width The watermark image’s width as a percentage of the video width. Value range: 0-100. Default: 10.
`0` means to scale the width proportionally to the height.
You cannot set both `Width` and `Height` to `0`.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置The watermark image’s width as a percentage of the video width. Value range: 0-100. Default: 10.
`0` means to scale the width proportionally to the height.
You cannot set both `Width` and `Height` to `0`.
                     * @param _width The watermark image’s width as a percentage of the video width. Value range: 0-100. Default: 10.
`0` means to scale the width proportionally to the height.
You cannot set both `Width` and `Height` to `0`.
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The watermark image’s height as a percentage of the video height. Value range: 0-100. Default: 10.
`0` means to scale the height proportionally to the width.
You cannot set both `Width` and `Height` to `0`.
                     * @return Height The watermark image’s height as a percentage of the video height. Value range: 0-100. Default: 10.
`0` means to scale the height proportionally to the width.
You cannot set both `Width` and `Height` to `0`.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置The watermark image’s height as a percentage of the video height. Value range: 0-100. Default: 10.
`0` means to scale the height proportionally to the width.
You cannot set both `Width` and `Height` to `0`.
                     * @param _height The watermark image’s height as a percentage of the video height. Value range: 0-100. Default: 10.
`0` means to scale the height proportionally to the width.
You cannot set both `Width` and `Height` to `0`.
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * Image file format. Valid values: png, jpg.
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * Base64 encoded image content
                     */
                    std::string m_imageContent;
                    bool m_imageContentHasBeenSet;

                    /**
                     * Origin. Valid values: TOP_LEFT, BOTTOM_LEFT, TOP_RIGHT, BOTTOM_RIGHT.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * The watermark’s horizontal distance from the origin as a percentage of the video width. Value range: 0-100. Default: 10.
                     */
                    int64_t m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * The watermark’s vertical distance from the origin as a percentage of the video height. Value range: 0-100. Default: 10.
                     */
                    int64_t m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * The watermark image’s width as a percentage of the video width. Value range: 0-100. Default: 10.
`0` means to scale the width proportionally to the height.
You cannot set both `Width` and `Height` to `0`.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The watermark image’s height as a percentage of the video height. Value range: 0-100. Default: 10.
`0` means to scale the height proportionally to the width.
You cannot set both `Width` and `Height` to `0`.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CREATEIMAGESETTINGS_H_
