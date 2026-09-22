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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_STICKERTRACKITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_STICKERTRACKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageTransform.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Texture information on the texture track.
                */
                class StickerTrackItem : public AbstractModel
                {
                public:
                    StickerTrackItem();
                    ~StickerTrackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media material source of the texture segment, which can be:
<li>Media file ID for VOD;</li>
<li>Download URL of other media files.</li>
Note: When using the download URL of another media file as the material source, and access control (such as anti-hotlinking) is enabled, the URL needs to carry access control parameters (such as a hotlink protection signature).
                     * @return SourceMedia Media material source of the texture segment, which can be:
<li>Media file ID for VOD;</li>
<li>Download URL of other media files.</li>
Note: When using the download URL of another media file as the material source, and access control (such as anti-hotlinking) is enabled, the URL needs to carry access control parameters (such as a hotlink protection signature).
                     * 
                     */
                    std::string GetSourceMedia() const;

                    /**
                     * 设置Media material source of the texture segment, which can be:
<li>Media file ID for VOD;</li>
<li>Download URL of other media files.</li>
Note: When using the download URL of another media file as the material source, and access control (such as anti-hotlinking) is enabled, the URL needs to carry access control parameters (such as a hotlink protection signature).
                     * @param _sourceMedia Media material source of the texture segment, which can be:
<li>Media file ID for VOD;</li>
<li>Download URL of other media files.</li>
Note: When using the download URL of another media file as the material source, and access control (such as anti-hotlinking) is enabled, the URL needs to carry access control parameters (such as a hotlink protection signature).
                     * 
                     */
                    void SetSourceMedia(const std::string& _sourceMedia);

                    /**
                     * 判断参数 SourceMedia 是否已赋值
                     * @return SourceMedia 是否已赋值
                     * 
                     */
                    bool SourceMediaHasBeenSet() const;

                    /**
                     * 获取Duration of the sticker, in seconds.
                     * @return Duration Duration of the sticker, in seconds.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Duration of the sticker, in seconds.
                     * @param _duration Duration of the sticker, in seconds.
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Start time of the sticker on the track, in seconds.
                     * @return StartTime Start time of the sticker on the track, in seconds.
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置Start time of the sticker on the track, in seconds.
                     * @param _startTime Start time of the sticker on the track, in seconds.
                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Origin position. Valid values:
<li>Center: The coordinate origin is the central position, such as the center of canvas.</li>
Default: Center.
                     * @return CoordinateOrigin Origin position. Valid values:
<li>Center: The coordinate origin is the central position, such as the center of canvas.</li>
Default: Center.
                     * 
                     */
                    std::string GetCoordinateOrigin() const;

                    /**
                     * 设置Origin position. Valid values:
<li>Center: The coordinate origin is the central position, such as the center of canvas.</li>
Default: Center.
                     * @param _coordinateOrigin Origin position. Valid values:
<li>Center: The coordinate origin is the central position, such as the center of canvas.</li>
Default: Center.
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
                     * 获取Horizontal position of the texture origin relative to the canvas origin, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the texture XPos is at a specified percentage of the canvas width. For example, 10% means the XPos is at 10% of the canvas width.</li><li>If a string ends with px, it indicates that the texture XPos is in pixels. For example, 100px means the XPos is 100 pixels.</li>
Default value: 0px.
                     * @return XPos Horizontal position of the texture origin relative to the canvas origin, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the texture XPos is at a specified percentage of the canvas width. For example, 10% means the XPos is at 10% of the canvas width.</li><li>If a string ends with px, it indicates that the texture XPos is in pixels. For example, 100px means the XPos is 100 pixels.</li>
Default value: 0px.
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置Horizontal position of the texture origin relative to the canvas origin, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the texture XPos is at a specified percentage of the canvas width. For example, 10% means the XPos is at 10% of the canvas width.</li><li>If a string ends with px, it indicates that the texture XPos is in pixels. For example, 100px means the XPos is 100 pixels.</li>
Default value: 0px.
                     * @param _xPos Horizontal position of the texture origin relative to the canvas origin, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the texture XPos is at a specified percentage of the canvas width. For example, 10% means the XPos is at 10% of the canvas width.</li><li>If a string ends with px, it indicates that the texture XPos is in pixels. For example, 100px means the XPos is 100 pixels.</li>
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
                     * 获取Vertical position of the texture origin from the canvas origin. Supports two formats: % and px.
<li>When a string ends with %, it means the texture YPos is at the specified percentage of the canvas height. For example, 10% means the YPos is 10% of the canvas height.</li>
<li>If a string ends with px, it means the texture YPos unit is pixel. For example, 100px means YPos is 100 pixels.</li>
Default value: 0px.
                     * @return YPos Vertical position of the texture origin from the canvas origin. Supports two formats: % and px.
<li>When a string ends with %, it means the texture YPos is at the specified percentage of the canvas height. For example, 10% means the YPos is 10% of the canvas height.</li>
<li>If a string ends with px, it means the texture YPos unit is pixel. For example, 100px means YPos is 100 pixels.</li>
Default value: 0px.
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置Vertical position of the texture origin from the canvas origin. Supports two formats: % and px.
<li>When a string ends with %, it means the texture YPos is at the specified percentage of the canvas height. For example, 10% means the YPos is 10% of the canvas height.</li>
<li>If a string ends with px, it means the texture YPos unit is pixel. For example, 100px means YPos is 100 pixels.</li>
Default value: 0px.
                     * @param _yPos Vertical position of the texture origin from the canvas origin. Supports two formats: % and px.
<li>When a string ends with %, it means the texture YPos is at the specified percentage of the canvas height. For example, 10% means the YPos is 10% of the canvas height.</li>
<li>If a string ends with px, it means the texture YPos unit is pixel. For example, 100px means YPos is 100 pixels.</li>
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
                     * 获取Width of a sticker, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a sticker is a percentage of the canvas width. For example, `10%` means that `Width` is 10% of the canvas width.</li>
<li>If a string ends with px, it means the texture Width unit is pixel. For example, 100px means the Width is 100 pixels.</li>
<li>If both Width and Height are empty, the width and height of the texture material itself will be used.</li>
<li>If Width is 0 but Height is not, the width will be proportionally scaled.</li>
<li>If Width is not empty but Height is empty, the height will be proportionally scaled.</li>
                     * @return Width Width of a sticker, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a sticker is a percentage of the canvas width. For example, `10%` means that `Width` is 10% of the canvas width.</li>
<li>If a string ends with px, it means the texture Width unit is pixel. For example, 100px means the Width is 100 pixels.</li>
<li>If both Width and Height are empty, the width and height of the texture material itself will be used.</li>
<li>If Width is 0 but Height is not, the width will be proportionally scaled.</li>
<li>If Width is not empty but Height is empty, the height will be proportionally scaled.</li>
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置Width of a sticker, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a sticker is a percentage of the canvas width. For example, `10%` means that `Width` is 10% of the canvas width.</li>
<li>If a string ends with px, it means the texture Width unit is pixel. For example, 100px means the Width is 100 pixels.</li>
<li>If both Width and Height are empty, the width and height of the texture material itself will be used.</li>
<li>If Width is 0 but Height is not, the width will be proportionally scaled.</li>
<li>If Width is not empty but Height is empty, the height will be proportionally scaled.</li>
                     * @param _width Width of a sticker, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a sticker is a percentage of the canvas width. For example, `10%` means that `Width` is 10% of the canvas width.</li>
<li>If a string ends with px, it means the texture Width unit is pixel. For example, 100px means the Width is 100 pixels.</li>
<li>If both Width and Height are empty, the width and height of the texture material itself will be used.</li>
<li>If Width is 0 but Height is not, the width will be proportionally scaled.</li>
<li>If Width is not empty but Height is empty, the height will be proportionally scaled.</li>
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
                     * 获取Height of a sticker, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a sticker is a percentage of the canvas height. For example, `10%` means that `Height` is 10% of the canvas height.</li>
<li>If a string ends with px, it means the texture Height unit is pixel. For example, 100px means the Height is 100 pixels.</li>
<li>If both Width and Height are empty, the width and height of the texture material itself will be used.</li>
<li>If Width is empty but Height is not empty, the width will be proportionally scaled.</li>
<li>If Width is not empty but Height is empty, the height will be proportionally scaled.</li>
                     * @return Height Height of a sticker, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a sticker is a percentage of the canvas height. For example, `10%` means that `Height` is 10% of the canvas height.</li>
<li>If a string ends with px, it means the texture Height unit is pixel. For example, 100px means the Height is 100 pixels.</li>
<li>If both Width and Height are empty, the width and height of the texture material itself will be used.</li>
<li>If Width is empty but Height is not empty, the width will be proportionally scaled.</li>
<li>If Width is not empty but Height is empty, the height will be proportionally scaled.</li>
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置Height of a sticker, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a sticker is a percentage of the canvas height. For example, `10%` means that `Height` is 10% of the canvas height.</li>
<li>If a string ends with px, it means the texture Height unit is pixel. For example, 100px means the Height is 100 pixels.</li>
<li>If both Width and Height are empty, the width and height of the texture material itself will be used.</li>
<li>If Width is empty but Height is not empty, the width will be proportionally scaled.</li>
<li>If Width is not empty but Height is empty, the height will be proportionally scaled.</li>
                     * @param _height Height of a sticker, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a sticker is a percentage of the canvas height. For example, `10%` means that `Height` is 10% of the canvas height.</li>
<li>If a string ends with px, it means the texture Height unit is pixel. For example, 100px means the Height is 100 pixels.</li>
<li>If both Width and Height are empty, the width and height of the texture material itself will be used.</li>
<li>If Width is empty but Height is not empty, the width will be proportionally scaled.</li>
<li>If Width is not empty but Height is empty, the height will be proportionally scaled.</li>
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
                     * 获取Operation performed on the texture, such as image rotation.
                     * @return ImageOperations Operation performed on the texture, such as image rotation.
                     * 
                     */
                    std::vector<ImageTransform> GetImageOperations() const;

                    /**
                     * 设置Operation performed on the texture, such as image rotation.
                     * @param _imageOperations Operation performed on the texture, such as image rotation.
                     * 
                     */
                    void SetImageOperations(const std::vector<ImageTransform>& _imageOperations);

                    /**
                     * 判断参数 ImageOperations 是否已赋值
                     * @return ImageOperations 是否已赋值
                     * 
                     */
                    bool ImageOperationsHasBeenSet() const;

                private:

                    /**
                     * Media material source of the texture segment, which can be:
<li>Media file ID for VOD;</li>
<li>Download URL of other media files.</li>
Note: When using the download URL of another media file as the material source, and access control (such as anti-hotlinking) is enabled, the URL needs to carry access control parameters (such as a hotlink protection signature).
                     */
                    std::string m_sourceMedia;
                    bool m_sourceMediaHasBeenSet;

                    /**
                     * Duration of the sticker, in seconds.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Start time of the sticker on the track, in seconds.
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Origin position. Valid values:
<li>Center: The coordinate origin is the central position, such as the center of canvas.</li>
Default: Center.
                     */
                    std::string m_coordinateOrigin;
                    bool m_coordinateOriginHasBeenSet;

                    /**
                     * Horizontal position of the texture origin relative to the canvas origin, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the texture XPos is at a specified percentage of the canvas width. For example, 10% means the XPos is at 10% of the canvas width.</li><li>If a string ends with px, it indicates that the texture XPos is in pixels. For example, 100px means the XPos is 100 pixels.</li>
Default value: 0px.
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * Vertical position of the texture origin from the canvas origin. Supports two formats: % and px.
<li>When a string ends with %, it means the texture YPos is at the specified percentage of the canvas height. For example, 10% means the YPos is 10% of the canvas height.</li>
<li>If a string ends with px, it means the texture YPos unit is pixel. For example, 100px means YPos is 100 pixels.</li>
Default value: 0px.
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * Width of a sticker, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a sticker is a percentage of the canvas width. For example, `10%` means that `Width` is 10% of the canvas width.</li>
<li>If a string ends with px, it means the texture Width unit is pixel. For example, 100px means the Width is 100 pixels.</li>
<li>If both Width and Height are empty, the width and height of the texture material itself will be used.</li>
<li>If Width is 0 but Height is not, the width will be proportionally scaled.</li>
<li>If Width is not empty but Height is empty, the height will be proportionally scaled.</li>
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height of a sticker, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a sticker is a percentage of the canvas height. For example, `10%` means that `Height` is 10% of the canvas height.</li>
<li>If a string ends with px, it means the texture Height unit is pixel. For example, 100px means the Height is 100 pixels.</li>
<li>If both Width and Height are empty, the width and height of the texture material itself will be used.</li>
<li>If Width is empty but Height is not empty, the width will be proportionally scaled.</li>
<li>If Width is not empty but Height is empty, the height will be proportionally scaled.</li>
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Operation performed on the texture, such as image rotation.
                     */
                    std::vector<ImageTransform> m_imageOperations;
                    bool m_imageOperationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_STICKERTRACKITEM_H_
