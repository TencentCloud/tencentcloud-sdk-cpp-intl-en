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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCONFIGUREINFO_H_

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
                * Just In Time transcoding watermark template configuration.
                */
                class WatermarkConfigureInfo : public AbstractModel
                {
                public:
                    WatermarkConfigureInfo();
                    ~WatermarkConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable watermark. Possible values:
<li>ON: means enabling watermark;</li>
<li>OFF: means turning off watermark. </li>
                     * @return Switch Whether to enable watermark. Possible values:
<li>ON: means enabling watermark;</li>
<li>OFF: means turning off watermark. </li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable watermark. Possible values:
<li>ON: means enabling watermark;</li>
<li>OFF: means turning off watermark. </li>
                     * @param _switch Whether to enable watermark. Possible values:
<li>ON: means enabling watermark;</li>
<li>OFF: means turning off watermark. </li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Watermark image Base64 encoded string. Supports jpeg, png image formats.
                     * @return ImageContent Watermark image Base64 encoded string. Supports jpeg, png image formats.
                     * 
                     */
                    std::string GetImageContent() const;

                    /**
                     * 设置Watermark image Base64 encoded string. Supports jpeg, png image formats.
                     * @param _imageContent Watermark image Base64 encoded string. Supports jpeg, png image formats.
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
                     * 获取The width of the watermark. 
<li>The string ends with %, indicating that the watermark Width is a percentage of the video width, such as 10% indicating that the Width is 10% of the video width;</li>
                     * @return Width The width of the watermark. 
<li>The string ends with %, indicating that the watermark Width is a percentage of the video width, such as 10% indicating that the Width is 10% of the video width;</li>
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置The width of the watermark. 
<li>The string ends with %, indicating that the watermark Width is a percentage of the video width, such as 10% indicating that the Width is 10% of the video width;</li>
                     * @param _width The width of the watermark. 
<li>The string ends with %, indicating that the watermark Width is a percentage of the video width, such as 10% indicating that the Width is 10% of the video width;</li>
                     * 
                     */
                    void SetWidth(const std::string& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The height of the watermark. 
<li>The string ends with %, indicating that the watermark Height is a percentage of the video height, for example, 10% means that the Height is 10% of the video height;</li>
                     * @return Height The height of the watermark. 
<li>The string ends with %, indicating that the watermark Height is a percentage of the video height, for example, 10% means that the Height is 10% of the video height;</li>
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置The height of the watermark. 
<li>The string ends with %, indicating that the watermark Height is a percentage of the video height, for example, 10% means that the Height is 10% of the video height;</li>
                     * @param _height The height of the watermark. 
<li>The string ends with %, indicating that the watermark Height is a percentage of the video height, for example, 10% means that the Height is 10% of the video height;</li>
                     * 
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取The horizontal position of the watermark origin from the video image coordinate origin. The string ends with %, indicating that the watermark XPos specifies a percentage of the video width, such as 10% indicating that the XPos is 10% of the video width.
                     * @return XPos The horizontal position of the watermark origin from the video image coordinate origin. The string ends with %, indicating that the watermark XPos specifies a percentage of the video width, such as 10% indicating that the XPos is 10% of the video width.
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置The horizontal position of the watermark origin from the video image coordinate origin. The string ends with %, indicating that the watermark XPos specifies a percentage of the video width, such as 10% indicating that the XPos is 10% of the video width.
                     * @param _xPos The horizontal position of the watermark origin from the video image coordinate origin. The string ends with %, indicating that the watermark XPos specifies a percentage of the video width, such as 10% indicating that the XPos is 10% of the video width.
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
                     * 获取The vertical position of the watermark origin from the video image coordinate origin. When the string ends with %, it means that the watermark YPos specifies a percentage of the video height. For example, 10% means that YPos is 10% of the video height.
                     * @return YPos The vertical position of the watermark origin from the video image coordinate origin. When the string ends with %, it means that the watermark YPos specifies a percentage of the video height. For example, 10% means that YPos is 10% of the video height.
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置The vertical position of the watermark origin from the video image coordinate origin. When the string ends with %, it means that the watermark YPos specifies a percentage of the video height. For example, 10% means that YPos is 10% of the video height.
                     * @param _yPos The vertical position of the watermark origin from the video image coordinate origin. When the string ends with %, it means that the watermark YPos specifies a percentage of the video height. For example, 10% means that YPos is 10% of the video height.
                     * 
                     */
                    void SetYPos(const std::string& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     * 
                     */
                    bool YPosHasBeenSet() const;

                private:

                    /**
                     * Whether to enable watermark. Possible values:
<li>ON: means enabling watermark;</li>
<li>OFF: means turning off watermark. </li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Watermark image Base64 encoded string. Supports jpeg, png image formats.
                     */
                    std::string m_imageContent;
                    bool m_imageContentHasBeenSet;

                    /**
                     * The width of the watermark. 
<li>The string ends with %, indicating that the watermark Width is a percentage of the video width, such as 10% indicating that the Width is 10% of the video width;</li>
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The height of the watermark. 
<li>The string ends with %, indicating that the watermark Height is a percentage of the video height, for example, 10% means that the Height is 10% of the video height;</li>
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The horizontal position of the watermark origin from the video image coordinate origin. The string ends with %, indicating that the watermark XPos specifies a percentage of the video width, such as 10% indicating that the XPos is 10% of the video width.
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * The vertical position of the watermark origin from the video image coordinate origin. When the string ends with %, it means that the watermark YPos specifies a percentage of the video height. For example, 10% means that YPos is 10% of the video height.
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCONFIGUREINFO_H_
