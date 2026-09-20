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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MOSAICINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MOSAICINPUT_H_

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
                * Mosaic parameter type in a video processing task
                */
                class MosaicInput : public AbstractModel
                {
                public:
                    MosaicInput();
                    ~MosaicInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin position. Currently only support:
<li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the mosaic origin is at the top left corner of the image or text.</li>
Default value: TopLeft.
                     * @return CoordinateOrigin Origin position. Currently only support:
<li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the mosaic origin is at the top left corner of the image or text.</li>
Default value: TopLeft.
                     * 
                     */
                    std::string GetCoordinateOrigin() const;

                    /**
                     * 设置Origin position. Currently only support:
<li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the mosaic origin is at the top left corner of the image or text.</li>
Default value: TopLeft.
                     * @param _coordinateOrigin Origin position. Currently only support:
<li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the mosaic origin is at the top left corner of the image or text.</li>
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
                     * 获取Horizontal position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `XPos` of a mosaic is a specified percentage of a video's width. For example, `10%` means that `XPos` is 10% of a video's width.</li>
<li>If a string ends with px, it means the mosaic XPos is specified in pixels. For example, 100px means the XPos is 100 pixels.</li>
Default value: 0px.
                     * @return XPos Horizontal position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `XPos` of a mosaic is a specified percentage of a video's width. For example, `10%` means that `XPos` is 10% of a video's width.</li>
<li>If a string ends with px, it means the mosaic XPos is specified in pixels. For example, 100px means the XPos is 100 pixels.</li>
Default value: 0px.
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置Horizontal position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `XPos` of a mosaic is a specified percentage of a video's width. For example, `10%` means that `XPos` is 10% of a video's width.</li>
<li>If a string ends with px, it means the mosaic XPos is specified in pixels. For example, 100px means the XPos is 100 pixels.</li>
Default value: 0px.
                     * @param _xPos Horizontal position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `XPos` of a mosaic is a specified percentage of a video's width. For example, `10%` means that `XPos` is 10% of a video's width.</li>
<li>If a string ends with px, it means the mosaic XPos is specified in pixels. For example, 100px means the XPos is 100 pixels.</li>
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
                     * 获取Vertical position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `YPos` of a mosaic is a specified percentage of a video's height. For example, `10%` means that `YPos` is 10% of a video's height.</li>
<li>If a string ends with px, it means the mosaic YPos is specified in pixels. For example, 100px means YPos is 100 pixels.</li>
Default value: 0px.
                     * @return YPos Vertical position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `YPos` of a mosaic is a specified percentage of a video's height. For example, `10%` means that `YPos` is 10% of a video's height.</li>
<li>If a string ends with px, it means the mosaic YPos is specified in pixels. For example, 100px means YPos is 100 pixels.</li>
Default value: 0px.
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置Vertical position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `YPos` of a mosaic is a specified percentage of a video's height. For example, `10%` means that `YPos` is 10% of a video's height.</li>
<li>If a string ends with px, it means the mosaic YPos is specified in pixels. For example, 100px means YPos is 100 pixels.</li>
Default value: 0px.
                     * @param _yPos Vertical position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `YPos` of a mosaic is a specified percentage of a video's height. For example, `10%` means that `YPos` is 10% of a video's height.</li>
<li>If a string ends with px, it means the mosaic YPos is specified in pixels. For example, 100px means YPos is 100 pixels.</li>
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
                     * 获取Width of the mosaic, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a mosaic is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with px, it means the mosaic Width unit is pixel. For example, 100px means the Width is 100 pixels.</li>
Default value: 10%.
                     * @return Width Width of the mosaic, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a mosaic is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with px, it means the mosaic Width unit is pixel. For example, 100px means the Width is 100 pixels.</li>
Default value: 10%.
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置Width of the mosaic, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a mosaic is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with px, it means the mosaic Width unit is pixel. For example, 100px means the Width is 100 pixels.</li>
Default value: 10%.
                     * @param _width Width of the mosaic, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a mosaic is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with px, it means the mosaic Width unit is pixel. For example, 100px means the Width is 100 pixels.</li>
Default value: 10%.
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
                     * 获取Height of a mosaic, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a mosaic is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with px, it means the unit for the mosaic Height is pixel. For example, 100px means the Height is 100 pixels.</li>
Default value: 10%.
                     * @return Height Height of a mosaic, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a mosaic is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with px, it means the unit for the mosaic Height is pixel. For example, 100px means the Height is 100 pixels.</li>
Default value: 10%.
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置Height of a mosaic, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a mosaic is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with px, it means the unit for the mosaic Height is pixel. For example, 100px means the Height is 100 pixels.</li>
Default value: 10%.
                     * @param _height Height of a mosaic, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a mosaic is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with px, it means the unit for the mosaic Height is pixel. For example, 100px means the Height is 100 pixels.</li>
Default value: 10%.
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
                     * 获取Start time offset of a mosaic, in seconds. If not set or set to 0, a mosaic starts appearing when a video starts.
<li>If not set or set to 0, a mosaic starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a mosaic will appear at second n of a frame.</li>
<li>When the value is less than 0 (assuming -n), the mosaic appears n seconds before the end of a video.</li>
                     * @return StartTimeOffset Start time offset of a mosaic, in seconds. If not set or set to 0, a mosaic starts appearing when a video starts.
<li>If not set or set to 0, a mosaic starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a mosaic will appear at second n of a frame.</li>
<li>When the value is less than 0 (assuming -n), the mosaic appears n seconds before the end of a video.</li>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of a mosaic, in seconds. If not set or set to 0, a mosaic starts appearing when a video starts.
<li>If not set or set to 0, a mosaic starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a mosaic will appear at second n of a frame.</li>
<li>When the value is less than 0 (assuming -n), the mosaic appears n seconds before the end of a video.</li>
                     * @param _startTimeOffset Start time offset of a mosaic, in seconds. If not set or set to 0, a mosaic starts appearing when a video starts.
<li>If not set or set to 0, a mosaic starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a mosaic will appear at second n of a frame.</li>
<li>When the value is less than 0 (assuming -n), the mosaic appears n seconds before the end of a video.</li>
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取End time offset of a mosaic, in seconds.
<li>If not set or set to 0, a mosaic will last until the end of a frame.</li>
<li>If the value is greater than 0 (for example, n), the mosaic will disappear at second n.</li>
<li>When the value is less than 0 (assuming -n), the mosaic lasts until n seconds before the end of a video.</li>
                     * @return EndTimeOffset End time offset of a mosaic, in seconds.
<li>If not set or set to 0, a mosaic will last until the end of a frame.</li>
<li>If the value is greater than 0 (for example, n), the mosaic will disappear at second n.</li>
<li>When the value is less than 0 (assuming -n), the mosaic lasts until n seconds before the end of a video.</li>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of a mosaic, in seconds.
<li>If not set or set to 0, a mosaic will last until the end of a frame.</li>
<li>If the value is greater than 0 (for example, n), the mosaic will disappear at second n.</li>
<li>When the value is less than 0 (assuming -n), the mosaic lasts until n seconds before the end of a video.</li>
                     * @param _endTimeOffset End time offset of a mosaic, in seconds.
<li>If not set or set to 0, a mosaic will last until the end of a frame.</li>
<li>If the value is greater than 0 (for example, n), the mosaic will disappear at second n.</li>
<li>When the value is less than 0 (assuming -n), the mosaic lasts until n seconds before the end of a video.</li>
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * Origin position. Currently only support:
<li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the mosaic origin is at the top left corner of the image or text.</li>
Default value: TopLeft.
                     */
                    std::string m_coordinateOrigin;
                    bool m_coordinateOriginHasBeenSet;

                    /**
                     * Horizontal position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `XPos` of a mosaic is a specified percentage of a video's width. For example, `10%` means that `XPos` is 10% of a video's width.</li>
<li>If a string ends with px, it means the mosaic XPos is specified in pixels. For example, 100px means the XPos is 100 pixels.</li>
Default value: 0px.
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * Vertical position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px.
<li>If a string ends with %, it indicates that the `YPos` of a mosaic is a specified percentage of a video's height. For example, `10%` means that `YPos` is 10% of a video's height.</li>
<li>If a string ends with px, it means the mosaic YPos is specified in pixels. For example, 100px means YPos is 100 pixels.</li>
Default value: 0px.
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * Width of the mosaic, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a mosaic is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with px, it means the mosaic Width unit is pixel. For example, 100px means the Width is 100 pixels.</li>
Default value: 10%.
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height of a mosaic, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a mosaic is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with px, it means the unit for the mosaic Height is pixel. For example, 100px means the Height is 100 pixels.</li>
Default value: 10%.
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Start time offset of a mosaic, in seconds. If not set or set to 0, a mosaic starts appearing when a video starts.
<li>If not set or set to 0, a mosaic starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a mosaic will appear at second n of a frame.</li>
<li>When the value is less than 0 (assuming -n), the mosaic appears n seconds before the end of a video.</li>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of a mosaic, in seconds.
<li>If not set or set to 0, a mosaic will last until the end of a frame.</li>
<li>If the value is greater than 0 (for example, n), the mosaic will disappear at second n.</li>
<li>When the value is less than 0 (assuming -n), the mosaic lasts until n seconds before the end of a video.</li>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MOSAICINPUT_H_
