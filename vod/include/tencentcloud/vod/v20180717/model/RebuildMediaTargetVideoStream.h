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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATARGETVIDEOSTREAM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATARGETVIDEOSTREAM_H_

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
                * The output video parameters of an audio/video remastering task.
                */
                class RebuildMediaTargetVideoStream : public AbstractModel
                {
                public:
                    RebuildMediaTargetVideoStream();
                    ~RebuildMediaTargetVideoStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The video codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
The default codec is H.264.
                     * @return Codec The video codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
The default codec is H.264.
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置The video codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
The default codec is H.264.
                     * @param Codec The video codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
The default codec is H.264.
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取The video bitrate (Kbps). Value range: 0 and 128-35000.
If the value is `0`, the original video bitrate will be used.
                     * @return Bitrate The video bitrate (Kbps). Value range: 0 and 128-35000.
If the value is `0`, the original video bitrate will be used.
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置The video bitrate (Kbps). Value range: 0 and 128-35000.
If the value is `0`, the original video bitrate will be used.
                     * @param Bitrate The video bitrate (Kbps). Value range: 0 and 128-35000.
If the value is `0`, the original video bitrate will be used.
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取The video frame rate (Hz). Value range: 0-100. If the value is `0`, the original video frame rate will be used.
                     * @return Fps The video frame rate (Hz). Value range: 0-100. If the value is `0`, the original video frame rate will be used.
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置The video frame rate (Hz). Value range: 0-100. If the value is `0`, the original video frame rate will be used.
                     * @param Fps The video frame rate (Hz). Value range: 0-100. If the value is `0`, the original video frame rate will be used.
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Resolution adaption. Valid values:
<li>`open`: Enable. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>`close`: Disable. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>

Default value: `open`.
                     * @return ResolutionAdaptive Resolution adaption. Valid values:
<li>`open`: Enable. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>`close`: Disable. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>

Default value: `open`.
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaption. Valid values:
<li>`open`: Enable. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>`close`: Disable. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>

Default value: `open`.
                     * @param ResolutionAdaptive Resolution adaption. Valid values:
<li>`open`: Enable. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>`close`: Disable. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>

Default value: `open`.
                     */
                    void SetResolutionAdaptive(const std::string& _resolutionAdaptive);

                    /**
                     * 判断参数 ResolutionAdaptive 是否已赋值
                     * @return ResolutionAdaptive 是否已赋值
                     */
                    bool ResolutionAdaptiveHasBeenSet() const;

                    /**
                     * 获取The maximum video width (or long side), in pixels. Value range: 0 and 128-8192.
<li>If both `Width` and `Height` are `0`, the original resolution will be used.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>

Default value: `0`.
                     * @return Width The maximum video width (or long side), in pixels. Value range: 0 and 128-8192.
<li>If both `Width` and `Height` are `0`, the original resolution will be used.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>

Default value: `0`.
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置The maximum video width (or long side), in pixels. Value range: 0 and 128-8192.
<li>If both `Width` and `Height` are `0`, the original resolution will be used.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>

Default value: `0`.
                     * @param Width The maximum video width (or long side), in pixels. Value range: 0 and 128-8192.
<li>If both `Width` and `Height` are `0`, the original resolution will be used.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>

Default value: `0`.
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The maximum video height (or short side), in pixels. Value range: 0 and 128-8192.
<li>If both `Width` and `Height` are `0`, the original resolution will be used.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>

Default value: `0`.
                     * @return Height The maximum video height (or short side), in pixels. Value range: 0 and 128-8192.
<li>If both `Width` and `Height` are `0`, the original resolution will be used.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>

Default value: `0`.
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置The maximum video height (or short side), in pixels. Value range: 0 and 128-8192.
<li>If both `Width` and `Height` are `0`, the original resolution will be used.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>

Default value: `0`.
                     * @param Height The maximum video height (or short side), in pixels. Value range: 0 and 128-8192.
<li>If both `Width` and `Height` are `0`, the original resolution will be used.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>

Default value: `0`.
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取The fill mode, which indicates how a video is resized when the video’s original aspect ratio is different from the target aspect ratio. Valid values:
<li>`stretch`: Stretch the image frame by frame to fill the entire screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>`black`: Keep the image's original aspect ratio and fill the blank space with black bars.</li>

Default value: `stretch`.
                     * @return FillType The fill mode, which indicates how a video is resized when the video’s original aspect ratio is different from the target aspect ratio. Valid values:
<li>`stretch`: Stretch the image frame by frame to fill the entire screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>`black`: Keep the image's original aspect ratio and fill the blank space with black bars.</li>

Default value: `stretch`.
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置The fill mode, which indicates how a video is resized when the video’s original aspect ratio is different from the target aspect ratio. Valid values:
<li>`stretch`: Stretch the image frame by frame to fill the entire screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>`black`: Keep the image's original aspect ratio and fill the blank space with black bars.</li>

Default value: `stretch`.
                     * @param FillType The fill mode, which indicates how a video is resized when the video’s original aspect ratio is different from the target aspect ratio. Valid values:
<li>`stretch`: Stretch the image frame by frame to fill the entire screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>`black`: Keep the image's original aspect ratio and fill the blank space with black bars.</li>

Default value: `stretch`.
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     */
                    bool FillTypeHasBeenSet() const;

                    /**
                     * 获取The number of frames between two I-frames. Valid values: 0 and 1-100000.
If this parameter is `0` or left empty, the interval will be determined by the system.
                     * @return Gop The number of frames between two I-frames. Valid values: 0 and 1-100000.
If this parameter is `0` or left empty, the interval will be determined by the system.
                     */
                    int64_t GetGop() const;

                    /**
                     * 设置The number of frames between two I-frames. Valid values: 0 and 1-100000.
If this parameter is `0` or left empty, the interval will be determined by the system.
                     * @param Gop The number of frames between two I-frames. Valid values: 0 and 1-100000.
If this parameter is `0` or left empty, the interval will be determined by the system.
                     */
                    void SetGop(const int64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     */
                    bool GopHasBeenSet() const;

                private:

                    /**
                     * The video codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
The default codec is H.264.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * The video bitrate (Kbps). Value range: 0 and 128-35000.
If the value is `0`, the original video bitrate will be used.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * The video frame rate (Hz). Value range: 0-100. If the value is `0`, the original video frame rate will be used.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Resolution adaption. Valid values:
<li>`open`: Enable. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>`close`: Disable. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>

Default value: `open`.
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * The maximum video width (or long side), in pixels. Value range: 0 and 128-8192.
<li>If both `Width` and `Height` are `0`, the original resolution will be used.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>

Default value: `0`.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The maximum video height (or short side), in pixels. Value range: 0 and 128-8192.
<li>If both `Width` and `Height` are `0`, the original resolution will be used.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>

Default value: `0`.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The fill mode, which indicates how a video is resized when the video’s original aspect ratio is different from the target aspect ratio. Valid values:
<li>`stretch`: Stretch the image frame by frame to fill the entire screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>`black`: Keep the image's original aspect ratio and fill the blank space with black bars.</li>

Default value: `stretch`.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * The number of frames between two I-frames. Valid values: 0 and 1-100000.
If this parameter is `0` or left empty, the interval will be determined by the system.
                     */
                    int64_t m_gop;
                    bool m_gopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATARGETVIDEOSTREAM_H_
