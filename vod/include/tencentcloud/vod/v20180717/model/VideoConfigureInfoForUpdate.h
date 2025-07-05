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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOCONFIGUREINFOFORUPDATE_H_

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
                * Just In Time transcoding video template update configuration.
                */
                class VideoConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    VideoConfigureInfoForUpdate();
                    ~VideoConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The maximum value of the video stream width (or long side), value range: 0 and [128, 1920], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>

Default value: 0.
                     * @return Width The maximum value of the video stream width (or long side), value range: 0 and [128, 1920], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>

Default value: 0.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置The maximum value of the video stream width (or long side), value range: 0 and [128, 1920], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>

Default value: 0.
                     * @param _width The maximum value of the video stream width (or long side), value range: 0 and [128, 1920], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>

Default value: 0.
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
                     * 获取The maximum value of the video stream height (or short side), value range: 0 and [128, 1920], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>

Default value: 0.
                     * @return Height The maximum value of the video stream height (or short side), value range: 0 and [128, 1920], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>

Default value: 0.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置The maximum value of the video stream height (or short side), value range: 0 and [128, 1920], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>

Default value: 0.
                     * @param _height The maximum value of the video stream height (or short side), value range: 0 and [128, 1920], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>

Default value: 0.
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
                     * 获取Resolution adaptive, optional values:
<li>open: open, at this time, Width represents the long side of the video, and Height represents the short side of the video;</li>
<li>close: closed, at this time , Width represents the width of the video, and Height represents the height of the video. </li>

Default value: open.
                     * @return ResolutionAdaptive Resolution adaptive, optional values:
<li>open: open, at this time, Width represents the long side of the video, and Height represents the short side of the video;</li>
<li>close: closed, at this time , Width represents the width of the video, and Height represents the height of the video. </li>

Default value: open.
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaptive, optional values:
<li>open: open, at this time, Width represents the long side of the video, and Height represents the short side of the video;</li>
<li>close: closed, at this time , Width represents the width of the video, and Height represents the height of the video. </li>

Default value: open.
                     * @param _resolutionAdaptive Resolution adaptive, optional values:
<li>open: open, at this time, Width represents the long side of the video, and Height represents the short side of the video;</li>
<li>close: closed, at this time , Width represents the width of the video, and Height represents the height of the video. </li>

Default value: open.
                     * 
                     */
                    void SetResolutionAdaptive(const std::string& _resolutionAdaptive);

                    /**
                     * 判断参数 ResolutionAdaptive 是否已赋值
                     * @return ResolutionAdaptive 是否已赋值
                     * 
                     */
                    bool ResolutionAdaptiveHasBeenSet() const;

                    /**
                     * 获取The bit rate of the video stream, value range: 0 and [128, 10000], unit: kbps. 
When the value is 0, it means that the video bitrate remains the same as the original video.
                     * @return Bitrate The bit rate of the video stream, value range: 0 and [128, 10000], unit: kbps. 
When the value is 0, it means that the video bitrate remains the same as the original video.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置The bit rate of the video stream, value range: 0 and [128, 10000], unit: kbps. 
When the value is 0, it means that the video bitrate remains the same as the original video.
                     * @param _bitrate The bit rate of the video stream, value range: 0 and [128, 10000], unit: kbps. 
When the value is 0, it means that the video bitrate remains the same as the original video.
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                private:

                    /**
                     * The maximum value of the video stream width (or long side), value range: 0 and [128, 1920], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>

Default value: 0.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The maximum value of the video stream height (or short side), value range: 0 and [128, 1920], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>

Default value: 0.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Resolution adaptive, optional values:
<li>open: open, at this time, Width represents the long side of the video, and Height represents the short side of the video;</li>
<li>close: closed, at this time , Width represents the width of the video, and Height represents the height of the video. </li>

Default value: open.
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * The bit rate of the video stream, value range: 0 and [128, 10000], unit: kbps. 
When the value is 0, it means that the video bitrate remains the same as the original video.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOCONFIGUREINFOFORUPDATE_H_
