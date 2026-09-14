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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MOSAICINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MOSAICINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Mosaic parameter type in a media processing task
                */
                class MosaicInput : public AbstractModel
                {
                public:
                    MosaicInput();
                    ~MosaicInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Origin position. Currently, only the following is supported:</p><li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the mosaic origin is at the top left corner of the image or text.</li>Default value: TopLeft.
                     * @return CoordinateOrigin <p>Origin position. Currently, only the following is supported:</p><li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the mosaic origin is at the top left corner of the image or text.</li>Default value: TopLeft.
                     * 
                     */
                    std::string GetCoordinateOrigin() const;

                    /**
                     * 设置<p>Origin position. Currently, only the following is supported:</p><li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the mosaic origin is at the top left corner of the image or text.</li>Default value: TopLeft.
                     * @param _coordinateOrigin <p>Origin position. Currently, only the following is supported:</p><li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the mosaic origin is at the top left corner of the image or text.</li>Default value: TopLeft.
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
                     * 获取<p>Horizontal position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px:</p><li>If a string ends with %, the mosaic XPos is a specified percentage of the video width. For example, 10% means XPos is 10% of the video width;</li><li>If a string ends with px, the mosaic XPos is a specified pixel. For example, 100px means XPos is 100 pixels.</li>Default value: 0px.
                     * @return XPos <p>Horizontal position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px:</p><li>If a string ends with %, the mosaic XPos is a specified percentage of the video width. For example, 10% means XPos is 10% of the video width;</li><li>If a string ends with px, the mosaic XPos is a specified pixel. For example, 100px means XPos is 100 pixels.</li>Default value: 0px.
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置<p>Horizontal position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px:</p><li>If a string ends with %, the mosaic XPos is a specified percentage of the video width. For example, 10% means XPos is 10% of the video width;</li><li>If a string ends with px, the mosaic XPos is a specified pixel. For example, 100px means XPos is 100 pixels.</li>Default value: 0px.
                     * @param _xPos <p>Horizontal position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px:</p><li>If a string ends with %, the mosaic XPos is a specified percentage of the video width. For example, 10% means XPos is 10% of the video width;</li><li>If a string ends with px, the mosaic XPos is a specified pixel. For example, 100px means XPos is 100 pixels.</li>Default value: 0px.
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
                     * 获取<p>Vertical position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px:</p><li>If a string ends with %, the mosaic YPos is the specified percentage of the video height. For example, 10% means YPos is 10% of the video height.</li><li>If a string ends with px, the mosaic YPos is the specified pixel. For example, 100px means YPos is 100 pixels.</li>Default value: 0px.
                     * @return YPos <p>Vertical position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px:</p><li>If a string ends with %, the mosaic YPos is the specified percentage of the video height. For example, 10% means YPos is 10% of the video height.</li><li>If a string ends with px, the mosaic YPos is the specified pixel. For example, 100px means YPos is 100 pixels.</li>Default value: 0px.
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置<p>Vertical position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px:</p><li>If a string ends with %, the mosaic YPos is the specified percentage of the video height. For example, 10% means YPos is 10% of the video height.</li><li>If a string ends with px, the mosaic YPos is the specified pixel. For example, 100px means YPos is 100 pixels.</li>Default value: 0px.
                     * @param _yPos <p>Vertical position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px:</p><li>If a string ends with %, the mosaic YPos is the specified percentage of the video height. For example, 10% means YPos is 10% of the video height.</li><li>If a string ends with px, the mosaic YPos is the specified pixel. For example, 100px means YPos is 100 pixels.</li>Default value: 0px.
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
                     * 获取<p>Mosaic width. Supports two formats: % and px:</p><li>If a string ends with %, it indicates that the mosaic `Width` is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li><li>If a string ends with px, it indicates that the mosaic `Width` is in pixels. For example, `100px` means that `Width` is 100 pixels.</li>Default value: 10%.
                     * @return Width <p>Mosaic width. Supports two formats: % and px:</p><li>If a string ends with %, it indicates that the mosaic `Width` is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li><li>If a string ends with px, it indicates that the mosaic `Width` is in pixels. For example, `100px` means that `Width` is 100 pixels.</li>Default value: 10%.
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置<p>Mosaic width. Supports two formats: % and px:</p><li>If a string ends with %, it indicates that the mosaic `Width` is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li><li>If a string ends with px, it indicates that the mosaic `Width` is in pixels. For example, `100px` means that `Width` is 100 pixels.</li>Default value: 10%.
                     * @param _width <p>Mosaic width. Supports two formats: % and px:</p><li>If a string ends with %, it indicates that the mosaic `Width` is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li><li>If a string ends with px, it indicates that the mosaic `Width` is in pixels. For example, `100px` means that `Width` is 100 pixels.</li>Default value: 10%.
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
                     * 获取<p>Height of a mosaic. Two formats are supported: % and px.</p><li>If a string ends with %, it indicates that the `Height` of a mosaic is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li><li>If a string ends with px, it indicates that the `Height` of a mosaic is in pixels. For example, `100px` means that `Height` is 100 pixels.</li>Default value: 10%.
                     * @return Height <p>Height of a mosaic. Two formats are supported: % and px.</p><li>If a string ends with %, it indicates that the `Height` of a mosaic is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li><li>If a string ends with px, it indicates that the `Height` of a mosaic is in pixels. For example, `100px` means that `Height` is 100 pixels.</li>Default value: 10%.
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置<p>Height of a mosaic. Two formats are supported: % and px.</p><li>If a string ends with %, it indicates that the `Height` of a mosaic is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li><li>If a string ends with px, it indicates that the `Height` of a mosaic is in pixels. For example, `100px` means that `Height` is 100 pixels.</li>Default value: 10%.
                     * @param _height <p>Height of a mosaic. Two formats are supported: % and px.</p><li>If a string ends with %, it indicates that the `Height` of a mosaic is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li><li>If a string ends with px, it indicates that the `Height` of a mosaic is in pixels. For example, `100px` means that `Height` is 100 pixels.</li>Default value: 10%.
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
                     * 获取<p>Start time offset of mosaic, in seconds. If not specified or set to 0, the mosaic appears when the frame appears.</p><li>If not specified or set to 0, the mosaic appears from the start of the frame;</li><li>If the value is greater than 0 (assuming n), the mosaic appears at the nth second from the start of the frame;</li><li>If the value is less than 0 (assuming -n), the mosaic appears n seconds before the end of the frame.</li>
                     * @return StartTimeOffset <p>Start time offset of mosaic, in seconds. If not specified or set to 0, the mosaic appears when the frame appears.</p><li>If not specified or set to 0, the mosaic appears from the start of the frame;</li><li>If the value is greater than 0 (assuming n), the mosaic appears at the nth second from the start of the frame;</li><li>If the value is less than 0 (assuming -n), the mosaic appears n seconds before the end of the frame.</li>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置<p>Start time offset of mosaic, in seconds. If not specified or set to 0, the mosaic appears when the frame appears.</p><li>If not specified or set to 0, the mosaic appears from the start of the frame;</li><li>If the value is greater than 0 (assuming n), the mosaic appears at the nth second from the start of the frame;</li><li>If the value is less than 0 (assuming -n), the mosaic appears n seconds before the end of the frame.</li>
                     * @param _startTimeOffset <p>Start time offset of mosaic, in seconds. If not specified or set to 0, the mosaic appears when the frame appears.</p><li>If not specified or set to 0, the mosaic appears from the start of the frame;</li><li>If the value is greater than 0 (assuming n), the mosaic appears at the nth second from the start of the frame;</li><li>If the value is less than 0 (assuming -n), the mosaic appears n seconds before the end of the frame.</li>
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
                     * 获取<p>End time offset of mosaic, in seconds.</p><li>If not specified or set to 0, the mosaic lasts until the end of a video;</li><li>If the value is greater than 0 (assuming n), the mosaic disappears at second n;</li><li>If the value is less than 0 (assuming -n), the mosaic disappears n seconds before the end of a video.</li>
                     * @return EndTimeOffset <p>End time offset of mosaic, in seconds.</p><li>If not specified or set to 0, the mosaic lasts until the end of a video;</li><li>If the value is greater than 0 (assuming n), the mosaic disappears at second n;</li><li>If the value is less than 0 (assuming -n), the mosaic disappears n seconds before the end of a video.</li>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置<p>End time offset of mosaic, in seconds.</p><li>If not specified or set to 0, the mosaic lasts until the end of a video;</li><li>If the value is greater than 0 (assuming n), the mosaic disappears at second n;</li><li>If the value is less than 0 (assuming -n), the mosaic disappears n seconds before the end of a video.</li>
                     * @param _endTimeOffset <p>End time offset of mosaic, in seconds.</p><li>If not specified or set to 0, the mosaic lasts until the end of a video;</li><li>If the value is greater than 0 (assuming n), the mosaic disappears at second n;</li><li>If the value is less than 0 (assuming -n), the mosaic disappears n seconds before the end of a video.</li>
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
                     * <p>Origin position. Currently, only the following is supported:</p><li>TopLeft: indicates that the coordinate origin is at the top left corner of the video image and the mosaic origin is at the top left corner of the image or text.</li>Default value: TopLeft.
                     */
                    std::string m_coordinateOrigin;
                    bool m_coordinateOriginHasBeenSet;

                    /**
                     * <p>Horizontal position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px:</p><li>If a string ends with %, the mosaic XPos is a specified percentage of the video width. For example, 10% means XPos is 10% of the video width;</li><li>If a string ends with px, the mosaic XPos is a specified pixel. For example, 100px means XPos is 100 pixels.</li>Default value: 0px.
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * <p>Vertical position of the mosaic origin relative to the origin of coordinates of the video image. Supports two formats: % and px:</p><li>If a string ends with %, the mosaic YPos is the specified percentage of the video height. For example, 10% means YPos is 10% of the video height.</li><li>If a string ends with px, the mosaic YPos is the specified pixel. For example, 100px means YPos is 100 pixels.</li>Default value: 0px.
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * <p>Mosaic width. Supports two formats: % and px:</p><li>If a string ends with %, it indicates that the mosaic `Width` is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li><li>If a string ends with px, it indicates that the mosaic `Width` is in pixels. For example, `100px` means that `Width` is 100 pixels.</li>Default value: 10%.
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>Height of a mosaic. Two formats are supported: % and px.</p><li>If a string ends with %, it indicates that the `Height` of a mosaic is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li><li>If a string ends with px, it indicates that the `Height` of a mosaic is in pixels. For example, `100px` means that `Height` is 100 pixels.</li>Default value: 10%.
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>Start time offset of mosaic, in seconds. If not specified or set to 0, the mosaic appears when the frame appears.</p><li>If not specified or set to 0, the mosaic appears from the start of the frame;</li><li>If the value is greater than 0 (assuming n), the mosaic appears at the nth second from the start of the frame;</li><li>If the value is less than 0 (assuming -n), the mosaic appears n seconds before the end of the frame.</li>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * <p>End time offset of mosaic, in seconds.</p><li>If not specified or set to 0, the mosaic lasts until the end of a video;</li><li>If the value is greater than 0 (assuming n), the mosaic disappears at second n;</li><li>If the value is less than 0 (assuming -n), the mosaic disappears n seconds before the end of a video.</li>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MOSAICINPUT_H_
