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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAVIDEOSTREAM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAVIDEOSTREAM_H_

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
                * Video stream configuration information
                */
                class EditMediaVideoStream : public AbstractModel
                {
                public:
                    EditMediaVideoStream();
                    ~EditMediaVideoStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Encoding format for video streams. Optional values:
<li>libx264: H.264 encoding;</li>
<li>libx265: H.265 encoding;</li>
<li>av1: AOMedia Video 1 encoding;</li>
<li>H.266: H.266 encoding.</li>
                     * @return Codec Encoding format for video streams. Optional values:
<li>libx264: H.264 encoding;</li>
<li>libx265: H.265 encoding;</li>
<li>av1: AOMedia Video 1 encoding;</li>
<li>H.266: H.266 encoding.</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Encoding format for video streams. Optional values:
<li>libx264: H.264 encoding;</li>
<li>libx265: H.265 encoding;</li>
<li>av1: AOMedia Video 1 encoding;</li>
<li>H.266: H.266 encoding.</li>
                     * @param _codec Encoding format for video streams. Optional values:
<li>libx264: H.264 encoding;</li>
<li>libx265: H.265 encoding;</li>
<li>av1: AOMedia Video 1 encoding;</li>
<li>H.266: H.266 encoding.</li>
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取Bitrate of video stream. Value range: 0 and [128, 100000]. Unit: kbps.
When the value is 0 or not specified, it means VOD automatically sets the bitrate.
                     * @return Bitrate Bitrate of video stream. Value range: 0 and [128, 100000]. Unit: kbps.
When the value is 0 or not specified, it means VOD automatically sets the bitrate.
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of video stream. Value range: 0 and [128, 100000]. Unit: kbps.
When the value is 0 or not specified, it means VOD automatically sets the bitrate.
                     * @param _bitrate Bitrate of video stream. Value range: 0 and [128, 100000]. Unit: kbps.
When the value is 0 or not specified, it means VOD automatically sets the bitrate.
                     * 
                     */
                    void SetBitrate(const uint64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取Resolution adaptation. Available values:
<li>open: enabled. At this point, Width represents the long side of the video, and Height represents the short side of the video;</li>
<li>close: closed. At this point, Width represents the width of the video, and Height indicates the height of the video.</li>
Default value: open.
                     * @return ResolutionAdaptive Resolution adaptation. Available values:
<li>open: enabled. At this point, Width represents the long side of the video, and Height represents the short side of the video;</li>
<li>close: closed. At this point, Width represents the width of the video, and Height indicates the height of the video.</li>
Default value: open.
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaptation. Available values:
<li>open: enabled. At this point, Width represents the long side of the video, and Height represents the short side of the video;</li>
<li>close: closed. At this point, Width represents the width of the video, and Height indicates the height of the video.</li>
Default value: open.
                     * @param _resolutionAdaptive Resolution adaptation. Available values:
<li>open: enabled. At this point, Width represents the long side of the video, and Height represents the short side of the video;</li>
<li>close: closed. At this point, Width represents the width of the video, and Height indicates the height of the video.</li>
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
                     * 获取Maximum value of the video stream width (or long edge) in px. Value range: 0 and [128, 4096].
<li>If both Width and Height are 0, the base resolution is used.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled based on the base resolution.</li>
<li>If Width is not 0 but Height is 0, the height will be scaled based on the benchmark resolution ratio.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Default value: 0.
                     * @return Width Maximum value of the video stream width (or long edge) in px. Value range: 0 and [128, 4096].
<li>If both Width and Height are 0, the base resolution is used.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled based on the base resolution.</li>
<li>If Width is not 0 but Height is 0, the height will be scaled based on the benchmark resolution ratio.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Default value: 0.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Maximum value of the video stream width (or long edge) in px. Value range: 0 and [128, 4096].
<li>If both Width and Height are 0, the base resolution is used.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled based on the base resolution.</li>
<li>If Width is not 0 but Height is 0, the height will be scaled based on the benchmark resolution ratio.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Default value: 0.
                     * @param _width Maximum value of the video stream width (or long edge) in px. Value range: 0 and [128, 4096].
<li>If both Width and Height are 0, the base resolution is used.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled based on the base resolution.</li>
<li>If Width is not 0 but Height is 0, the height will be scaled based on the benchmark resolution ratio.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Default value: 0.
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Maximum height (or short side) of the video stream. Value range: 0 and [128, 4096]. Unit: px.
<li>If both Width and Height are 0, the base resolution is used.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled based on the base resolution.</li>
<li>If Width is not 0 but Height is 0, the height will be scaled based on the benchmark resolution ratio.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Default value: 0.
                     * @return Height Maximum height (or short side) of the video stream. Value range: 0 and [128, 4096]. Unit: px.
<li>If both Width and Height are 0, the base resolution is used.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled based on the base resolution.</li>
<li>If Width is not 0 but Height is 0, the height will be scaled based on the benchmark resolution ratio.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Default value: 0.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Maximum height (or short side) of the video stream. Value range: 0 and [128, 4096]. Unit: px.
<li>If both Width and Height are 0, the base resolution is used.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled based on the base resolution.</li>
<li>If Width is not 0 but Height is 0, the height will be scaled based on the benchmark resolution ratio.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Default value: 0.
                     * @param _height Maximum height (or short side) of the video stream. Value range: 0 and [128, 4096]. Unit: px.
<li>If both Width and Height are 0, the base resolution is used.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled based on the base resolution.</li>
<li>If Width is not 0 but Height is 0, the height will be scaled based on the benchmark resolution ratio.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Default value: 0.
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Video frame rate. Value range: [0, 100]. Unit: Hz.
When the value is 0, the frame rate is automatically set for the video.
The default value is 0.
                     * @return Fps Video frame rate. Value range: [0, 100]. Unit: Hz.
When the value is 0, the frame rate is automatically set for the video.
The default value is 0.
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置Video frame rate. Value range: [0, 100]. Unit: Hz.
When the value is 0, the frame rate is automatically set for the video.
The default value is 0.
                     * @param _fps Video frame rate. Value range: [0, 100]. Unit: Hz.
When the value is 0, the frame rate is automatically set for the video.
The default value is 0.
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * Encoding format for video streams. Optional values:
<li>libx264: H.264 encoding;</li>
<li>libx265: H.265 encoding;</li>
<li>av1: AOMedia Video 1 encoding;</li>
<li>H.266: H.266 encoding.</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Bitrate of video stream. Value range: 0 and [128, 100000]. Unit: kbps.
When the value is 0 or not specified, it means VOD automatically sets the bitrate.
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Resolution adaptation. Available values:
<li>open: enabled. At this point, Width represents the long side of the video, and Height represents the short side of the video;</li>
<li>close: closed. At this point, Width represents the width of the video, and Height indicates the height of the video.</li>
Default value: open.
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * Maximum value of the video stream width (or long edge) in px. Value range: 0 and [128, 4096].
<li>If both Width and Height are 0, the base resolution is used.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled based on the base resolution.</li>
<li>If Width is not 0 but Height is 0, the height will be scaled based on the benchmark resolution ratio.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Default value: 0.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Maximum height (or short side) of the video stream. Value range: 0 and [128, 4096]. Unit: px.
<li>If both Width and Height are 0, the base resolution is used.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled based on the base resolution.</li>
<li>If Width is not 0 but Height is 0, the height will be scaled based on the benchmark resolution ratio.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Default value: 0.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Video frame rate. Value range: [0, 100]. Unit: Hz.
When the value is 0, the frame rate is automatically set for the video.
The default value is 0.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAVIDEOSTREAM_H_
