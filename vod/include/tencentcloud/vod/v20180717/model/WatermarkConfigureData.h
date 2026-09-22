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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCONFIGUREDATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCONFIGUREDATA_H_

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
                * Watermark template configuration for JIT transcoding.
                */
                class WatermarkConfigureData : public AbstractModel
                {
                public:
                    WatermarkConfigureData();
                    ~WatermarkConfigureData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable watermark. Valid values:
<li>ON: Enable watermark;</li>
<li>OFF: Turn off watermark.</li>
                     * @return Switch Whether to enable watermark. Valid values:
<li>ON: Enable watermark;</li>
<li>OFF: Turn off watermark.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable watermark. Valid values:
<li>ON: Enable watermark;</li>
<li>OFF: Turn off watermark.</li>
                     * @param _switch Whether to enable watermark. Valid values:
<li>ON: Enable watermark;</li>
<li>OFF: Turn off watermark.</li>
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
                     * 获取Watermark Url.
                     * @return Url Watermark Url.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Watermark Url.
                     * @param _url Watermark Url.
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
                     * 获取Width of a watermark.
<li>If a string ends with %, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
                     * @return Width Width of a watermark.
<li>If a string ends with %, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置Width of a watermark.
<li>If a string ends with %, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
                     * @param _width Width of a watermark.
<li>If a string ends with %, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
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
                     * 获取Height of the watermark.
<li>If a string ends with %, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
                     * @return Height Height of the watermark.
<li>If a string ends with %, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置Height of the watermark.
<li>If a string ends with %, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
                     * @param _height Height of the watermark.
<li>If a string ends with %, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
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
                     * 获取Horizontal position of the watermark origin relative to the origin of coordinates of the video image. A string ending with % means the watermark XPos is a specified percentage of the video width. For example, 10% means XPos is 10% of the video width.
                     * @return XPos Horizontal position of the watermark origin relative to the origin of coordinates of the video image. A string ending with % means the watermark XPos is a specified percentage of the video width. For example, 10% means XPos is 10% of the video width.
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置Horizontal position of the watermark origin relative to the origin of coordinates of the video image. A string ending with % means the watermark XPos is a specified percentage of the video width. For example, 10% means XPos is 10% of the video width.
                     * @param _xPos Horizontal position of the watermark origin relative to the origin of coordinates of the video image. A string ending with % means the watermark XPos is a specified percentage of the video width. For example, 10% means XPos is 10% of the video width.
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
                     * 获取Vertical position of the watermark origin relative to the origin of coordinates of the video image. When the string ends with %, the watermark YPos is the specified percentage of the video height. For example, 10% means YPos is 10% of the video height.
                     * @return YPos Vertical position of the watermark origin relative to the origin of coordinates of the video image. When the string ends with %, the watermark YPos is the specified percentage of the video height. For example, 10% means YPos is 10% of the video height.
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置Vertical position of the watermark origin relative to the origin of coordinates of the video image. When the string ends with %, the watermark YPos is the specified percentage of the video height. For example, 10% means YPos is 10% of the video height.
                     * @param _yPos Vertical position of the watermark origin relative to the origin of coordinates of the video image. When the string ends with %, the watermark YPos is the specified percentage of the video height. For example, 10% means YPos is 10% of the video height.
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
                     * Whether to enable watermark. Valid values:
<li>ON: Enable watermark;</li>
<li>OFF: Turn off watermark.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Watermark Url.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Width of a watermark.
<li>If a string ends with %, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height of the watermark.
<li>If a string ends with %, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Horizontal position of the watermark origin relative to the origin of coordinates of the video image. A string ending with % means the watermark XPos is a specified percentage of the video width. For example, 10% means XPos is 10% of the video width.
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * Vertical position of the watermark origin relative to the origin of coordinates of the video image. When the string ends with %, the watermark YPos is the specified percentage of the video height. For example, 10% means YPos is 10% of the video height.
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCONFIGUREDATA_H_
