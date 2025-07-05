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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PULLPUSHWATERMARKINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PULLPUSHWATERMARKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * The watermark configuration for a relay task.
                */
                class PullPushWatermarkInfo : public AbstractModel
                {
                public:
                    PullPushWatermarkInfo();
                    ~PullPushWatermarkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The watermark image URL.
Characters not allowed:
;(){}$>`#"'|
                     * @return PictureUrl The watermark image URL.
Characters not allowed:
;(){}$>`#"'|
                     * 
                     */
                    std::string GetPictureUrl() const;

                    /**
                     * 设置The watermark image URL.
Characters not allowed:
;(){}$>`#"'|
                     * @param _pictureUrl The watermark image URL.
Characters not allowed:
;(){}$>`#"'|
                     * 
                     */
                    void SetPictureUrl(const std::string& _pictureUrl);

                    /**
                     * 判断参数 PictureUrl 是否已赋值
                     * @return PictureUrl 是否已赋值
                     * 
                     */
                    bool PictureUrlHasBeenSet() const;

                    /**
                     * 获取The horizontal offset (%) of the watermark. The default value is 0.
                     * @return XPosition The horizontal offset (%) of the watermark. The default value is 0.
                     * 
                     */
                    int64_t GetXPosition() const;

                    /**
                     * 设置The horizontal offset (%) of the watermark. The default value is 0.
                     * @param _xPosition The horizontal offset (%) of the watermark. The default value is 0.
                     * 
                     */
                    void SetXPosition(const int64_t& _xPosition);

                    /**
                     * 判断参数 XPosition 是否已赋值
                     * @return XPosition 是否已赋值
                     * 
                     */
                    bool XPositionHasBeenSet() const;

                    /**
                     * 获取The vertical offset (%) of the watermark. The default value is 0.
                     * @return YPosition The vertical offset (%) of the watermark. The default value is 0.
                     * 
                     */
                    int64_t GetYPosition() const;

                    /**
                     * 设置The vertical offset (%) of the watermark. The default value is 0.
                     * @param _yPosition The vertical offset (%) of the watermark. The default value is 0.
                     * 
                     */
                    void SetYPosition(const int64_t& _yPosition);

                    /**
                     * 判断参数 YPosition 是否已赋值
                     * @return YPosition 是否已赋值
                     * 
                     */
                    bool YPositionHasBeenSet() const;

                    /**
                     * 获取The watermark width as a percentage of the video width. To avoid distorted images, we recommend you specify only the width or height so that the other side can be scaled proportionally. By default, the original width of the watermark image is used.
                     * @return Width The watermark width as a percentage of the video width. To avoid distorted images, we recommend you specify only the width or height so that the other side can be scaled proportionally. By default, the original width of the watermark image is used.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置The watermark width as a percentage of the video width. To avoid distorted images, we recommend you specify only the width or height so that the other side can be scaled proportionally. By default, the original width of the watermark image is used.
                     * @param _width The watermark width as a percentage of the video width. To avoid distorted images, we recommend you specify only the width or height so that the other side can be scaled proportionally. By default, the original width of the watermark image is used.
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
                     * 获取The watermark height as a percentage of the video height. To avoid distorted images, we recommend you specify only the width or height so that the other side can be scaled proportionally. By default, the original height of the watermark image is used.
                     * @return Height The watermark height as a percentage of the video height. To avoid distorted images, we recommend you specify only the width or height so that the other side can be scaled proportionally. By default, the original height of the watermark image is used.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置The watermark height as a percentage of the video height. To avoid distorted images, we recommend you specify only the width or height so that the other side can be scaled proportionally. By default, the original height of the watermark image is used.
                     * @param _height The watermark height as a percentage of the video height. To avoid distorted images, we recommend you specify only the width or height so that the other side can be scaled proportionally. By default, the original height of the watermark image is used.
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取The origin. The default value is 0.
0: Top left corner
1: Top right corner
2: Bottom right corner
3: Bottom left corner
                     * @return Location The origin. The default value is 0.
0: Top left corner
1: Top right corner
2: Bottom right corner
3: Bottom left corner
                     * 
                     */
                    int64_t GetLocation() const;

                    /**
                     * 设置The origin. The default value is 0.
0: Top left corner
1: Top right corner
2: Bottom right corner
3: Bottom left corner
                     * @param _location The origin. The default value is 0.
0: Top left corner
1: Top right corner
2: Bottom right corner
3: Bottom left corner
                     * 
                     */
                    void SetLocation(const int64_t& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * The watermark image URL.
Characters not allowed:
;(){}$>`#"'|
                     */
                    std::string m_pictureUrl;
                    bool m_pictureUrlHasBeenSet;

                    /**
                     * The horizontal offset (%) of the watermark. The default value is 0.
                     */
                    int64_t m_xPosition;
                    bool m_xPositionHasBeenSet;

                    /**
                     * The vertical offset (%) of the watermark. The default value is 0.
                     */
                    int64_t m_yPosition;
                    bool m_yPositionHasBeenSet;

                    /**
                     * The watermark width as a percentage of the video width. To avoid distorted images, we recommend you specify only the width or height so that the other side can be scaled proportionally. By default, the original width of the watermark image is used.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The watermark height as a percentage of the video height. To avoid distorted images, we recommend you specify only the width or height so that the other side can be scaled proportionally. By default, the original height of the watermark image is used.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The origin. The default value is 0.
0: Top left corner
1: Top right corner
2: Bottom right corner
3: Bottom left corner
                     */
                    int64_t m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PULLPUSHWATERMARKINFO_H_
