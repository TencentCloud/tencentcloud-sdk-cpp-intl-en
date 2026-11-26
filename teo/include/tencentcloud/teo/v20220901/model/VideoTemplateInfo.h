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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_VIDEOTEMPLATEINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_VIDEOTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Video stream configuration parameters.
                */
                class VideoTemplateInfo : public AbstractModel
                {
                public:
                    VideoTemplateInfo();
                    ~VideoTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Encoding format for video streams. Optional values: <li>H.264: Use H.264 encoding;</li><li>H.265: Use H.265 encoding.</li>
                     * @return Codec Encoding format for video streams. Optional values: <li>H.264: Use H.264 encoding;</li><li>H.265: Use H.265 encoding.</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Encoding format for video streams. Optional values: <li>H.264: Use H.264 encoding;</li><li>H.265: Use H.265 encoding.</li>
                     * @param _codec Encoding format for video streams. Optional values: <li>H.264: Use H.264 encoding;</li><li>H.265: Use H.265 encoding.</li>
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
                     * 获取Video frame rate. Value range: [0, 30]. Unit: Hz.
If the value is 0, the frame rate will be the same as that of the source video, with a maximum of 30.
Default value: 0.
                     * @return Fps Video frame rate. Value range: [0, 30]. Unit: Hz.
If the value is 0, the frame rate will be the same as that of the source video, with a maximum of 30.
Default value: 0.
                     * 
                     */
                    double GetFps() const;

                    /**
                     * 设置Video frame rate. Value range: [0, 30]. Unit: Hz.
If the value is 0, the frame rate will be the same as that of the source video, with a maximum of 30.
Default value: 0.
                     * @param _fps Video frame rate. Value range: [0, 30]. Unit: Hz.
If the value is 0, the frame rate will be the same as that of the source video, with a maximum of 30.
Default value: 0.
                     * 
                     */
                    void SetFps(const double& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Bitrate of video stream. Value range: 0 and [128, 10000]. Unit: kbps.
If the value is 0, the bitrate is automatically selected based on the video footage and quality.
Default value: 0.
                     * @return Bitrate Bitrate of video stream. Value range: 0 and [128, 10000]. Unit: kbps.
If the value is 0, the bitrate is automatically selected based on the video footage and quality.
Default value: 0.
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of video stream. Value range: 0 and [128, 10000]. Unit: kbps.
If the value is 0, the bitrate is automatically selected based on the video footage and quality.
Default value: 0.
                     * @param _bitrate Bitrate of video stream. Value range: 0 and [128, 10000]. Unit: kbps.
If the value is 0, the bitrate is automatically selected based on the video footage and quality.
Default value: 0.
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
                     * 获取Resolution adaptation. Available values: <li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side.</li><li>close: disable. At this point, Width represents the width of the video, and Height represents the height.</li>Default value: open.
                     * @return ResolutionAdaptive Resolution adaptation. Available values: <li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side.</li><li>close: disable. At this point, Width represents the width of the video, and Height represents the height.</li>Default value: open.
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaptation. Available values: <li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side.</li><li>close: disable. At this point, Width represents the width of the video, and Height represents the height.</li>Default value: open.
                     * @param _resolutionAdaptive Resolution adaptation. Available values: <li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side.</li><li>close: disable. At this point, Width represents the width of the video, and Height represents the height.</li>Default value: open.
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
                     * 获取The maximum value of the video stream width (or long side). Valid values: 0 and [128, 1920]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     * @return Width The maximum value of the video stream width (or long side). Valid values: 0 and [128, 1920]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置The maximum value of the video stream width (or long side). Valid values: 0 and [128, 1920]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     * @param _width The maximum value of the video stream width (or long side). Valid values: 0 and [128, 1920]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
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
                     * 获取The maximum value of the video stream height (or short side). Valid values: 0 and [128, 1080]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     * @return Height The maximum value of the video stream height (or short side). Valid values: 0 and [128, 1080]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The maximum value of the video stream height (or short side). Valid values: 0 and [128, 1080]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     * @param _height The maximum value of the video stream height (or short side). Valid values: 0 and [128, 1080]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
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
                     * 获取Filling method, which is the processing method for transcoding when the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, is called "filling". Optional filling modes: <li>stretch: stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched".</li><li>black: keep the video aspect ratio unchanged and fill the edges with black.</li><li>white: keep the video aspect ratio unchanged and fill the edges with white.</li><li>gauss: keep the video aspect ratio unchanged and use Gaussian blur filling for the rest of the edges.</li>Default value: black.
                     * @return FillType Filling method, which is the processing method for transcoding when the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, is called "filling". Optional filling modes: <li>stretch: stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched".</li><li>black: keep the video aspect ratio unchanged and fill the edges with black.</li><li>white: keep the video aspect ratio unchanged and fill the edges with white.</li><li>gauss: keep the video aspect ratio unchanged and use Gaussian blur filling for the rest of the edges.</li>Default value: black.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Filling method, which is the processing method for transcoding when the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, is called "filling". Optional filling modes: <li>stretch: stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched".</li><li>black: keep the video aspect ratio unchanged and fill the edges with black.</li><li>white: keep the video aspect ratio unchanged and fill the edges with white.</li><li>gauss: keep the video aspect ratio unchanged and use Gaussian blur filling for the rest of the edges.</li>Default value: black.
                     * @param _fillType Filling method, which is the processing method for transcoding when the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, is called "filling". Optional filling modes: <li>stretch: stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched".</li><li>black: keep the video aspect ratio unchanged and fill the edges with black.</li><li>white: keep the video aspect ratio unchanged and fill the edges with white.</li><li>gauss: keep the video aspect ratio unchanged and use Gaussian blur filling for the rest of the edges.</li>Default value: black.
                     * 
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     * 
                     */
                    bool FillTypeHasBeenSet() const;

                private:

                    /**
                     * Encoding format for video streams. Optional values: <li>H.264: Use H.264 encoding;</li><li>H.265: Use H.265 encoding.</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Video frame rate. Value range: [0, 30]. Unit: Hz.
If the value is 0, the frame rate will be the same as that of the source video, with a maximum of 30.
Default value: 0.
                     */
                    double m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Bitrate of video stream. Value range: 0 and [128, 10000]. Unit: kbps.
If the value is 0, the bitrate is automatically selected based on the video footage and quality.
Default value: 0.
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Resolution adaptation. Available values: <li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side.</li><li>close: disable. At this point, Width represents the width of the video, and Height represents the height.</li>Default value: open.
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * The maximum value of the video stream width (or long side). Valid values: 0 and [128, 1920]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The maximum value of the video stream height (or short side). Valid values: 0 and [128, 1080]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Filling method, which is the processing method for transcoding when the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, is called "filling". Optional filling modes: <li>stretch: stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched".</li><li>black: keep the video aspect ratio unchanged and fill the edges with black.</li><li>white: keep the video aspect ratio unchanged and fill the edges with white.</li><li>gauss: keep the video aspect ratio unchanged and use Gaussian blur filling for the rest of the edges.</li>Default value: black.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_VIDEOTEMPLATEINFO_H_
