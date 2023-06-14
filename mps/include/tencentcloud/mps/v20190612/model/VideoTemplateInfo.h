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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFO_H_

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
                * Video stream configuration parameter
                */
                class VideoTemplateInfo : public AbstractModel
                {
                public:
                    VideoTemplateInfo();
                    ~VideoTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The video codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
Note: You must specify a resolution (not higher than 640 x 480) if the H.265 codec is used.
Note: You can only use the AOMedia Video 1 codec for MP4 files.
                     * @return Codec The video codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
Note: You must specify a resolution (not higher than 640 x 480) if the H.265 codec is used.
Note: You can only use the AOMedia Video 1 codec for MP4 files.
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置The video codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
Note: You must specify a resolution (not higher than 640 x 480) if the H.265 codec is used.
Note: You can only use the AOMedia Video 1 codec for MP4 files.
                     * @param _codec The video codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
Note: You must specify a resolution (not higher than 640 x 480) if the H.265 codec is used.
Note: You can only use the AOMedia Video 1 codec for MP4 files.
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
                     * 获取The video frame rate (Hz). Value range: [0, 100].
If the value is 0, the frame rate will be the same as that of the source video.
Note: For adaptive bitrate streaming, the value range of this parameter is [0, 60].
                     * @return Fps The video frame rate (Hz). Value range: [0, 100].
If the value is 0, the frame rate will be the same as that of the source video.
Note: For adaptive bitrate streaming, the value range of this parameter is [0, 60].
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置The video frame rate (Hz). Value range: [0, 100].
If the value is 0, the frame rate will be the same as that of the source video.
Note: For adaptive bitrate streaming, the value range of this parameter is [0, 60].
                     * @param _fps The video frame rate (Hz). Value range: [0, 100].
If the value is 0, the frame rate will be the same as that of the source video.
Note: For adaptive bitrate streaming, the value range of this parameter is [0, 60].
                     * 
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取The video bitrate (Kbps). Value range: 0 and [128, 35000].
If the value is 0, the bitrate of the video will be the same as that of the source video.
                     * @return Bitrate The video bitrate (Kbps). Value range: 0 and [128, 35000].
If the value is 0, the bitrate of the video will be the same as that of the source video.
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置The video bitrate (Kbps). Value range: 0 and [128, 35000].
If the value is 0, the bitrate of the video will be the same as that of the source video.
                     * @param _bitrate The video bitrate (Kbps). Value range: 0 and [128, 35000].
If the value is 0, the bitrate of the video will be the same as that of the source video.
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
                     * 获取Resolution adaption. Valid values:
<li>open: Enabled. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>close: Disabled. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>
Default value: open.
Note: When resolution adaption is enabled, `Width` cannot be smaller than `Height`.
                     * @return ResolutionAdaptive Resolution adaption. Valid values:
<li>open: Enabled. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>close: Disabled. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>
Default value: open.
Note: When resolution adaption is enabled, `Width` cannot be smaller than `Height`.
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaption. Valid values:
<li>open: Enabled. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>close: Disabled. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>
Default value: open.
Note: When resolution adaption is enabled, `Width` cannot be smaller than `Height`.
                     * @param _resolutionAdaptive Resolution adaption. Valid values:
<li>open: Enabled. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>close: Disabled. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>
Default value: open.
Note: When resolution adaption is enabled, `Width` cannot be smaller than `Height`.
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
                     * 获取Maximum value of the width (or long side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     * @return Width Maximum value of the width (or long side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Maximum value of the width (or long side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     * @param _width Maximum value of the width (or long side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
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
                     * 获取Maximum value of the height (or short side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     * @return Height Maximum value of the height (or short side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Maximum value of the height (or short side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     * @param _height Maximum value of the height (or short side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
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
                     * 获取Frame interval between I keyframes. Value range: 0 and [1,100000].
If this parameter is 0 or left empty, the system will automatically set the GOP length.
                     * @return Gop Frame interval between I keyframes. Value range: 0 and [1,100000].
If this parameter is 0 or left empty, the system will automatically set the GOP length.
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置Frame interval between I keyframes. Value range: 0 and [1,100000].
If this parameter is 0 or left empty, the system will automatically set the GOP length.
                     * @param _gop Frame interval between I keyframes. Value range: 0 and [1,100000].
If this parameter is 0 or left empty, the system will automatically set the GOP length.
                     * 
                     */
                    void SetGop(const uint64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     * 
                     */
                    bool GopHasBeenSet() const;

                    /**
                     * 获取The fill mode, which indicates how a video is resized when the video’s original aspect ratio is different from the target aspect ratio. Valid values:
<li>stretch: Stretch the image frame by frame to fill the entire screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>black: Keep the image's original aspect ratio and fill the blank space with black bars.</li>
<li>white: Keep the image’s original aspect ratio and fill the blank space with white bars.</li>
<li>gauss: Keep the image’s original aspect ratio and apply Gaussian blur to the blank space.</li>
Default value: black.
Note: Only `stretch` and `black` are supported for adaptive bitrate streaming.
                     * @return FillType The fill mode, which indicates how a video is resized when the video’s original aspect ratio is different from the target aspect ratio. Valid values:
<li>stretch: Stretch the image frame by frame to fill the entire screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>black: Keep the image's original aspect ratio and fill the blank space with black bars.</li>
<li>white: Keep the image’s original aspect ratio and fill the blank space with white bars.</li>
<li>gauss: Keep the image’s original aspect ratio and apply Gaussian blur to the blank space.</li>
Default value: black.
Note: Only `stretch` and `black` are supported for adaptive bitrate streaming.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置The fill mode, which indicates how a video is resized when the video’s original aspect ratio is different from the target aspect ratio. Valid values:
<li>stretch: Stretch the image frame by frame to fill the entire screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>black: Keep the image's original aspect ratio and fill the blank space with black bars.</li>
<li>white: Keep the image’s original aspect ratio and fill the blank space with white bars.</li>
<li>gauss: Keep the image’s original aspect ratio and apply Gaussian blur to the blank space.</li>
Default value: black.
Note: Only `stretch` and `black` are supported for adaptive bitrate streaming.
                     * @param _fillType The fill mode, which indicates how a video is resized when the video’s original aspect ratio is different from the target aspect ratio. Valid values:
<li>stretch: Stretch the image frame by frame to fill the entire screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>black: Keep the image's original aspect ratio and fill the blank space with black bars.</li>
<li>white: Keep the image’s original aspect ratio and fill the blank space with white bars.</li>
<li>gauss: Keep the image’s original aspect ratio and apply Gaussian blur to the blank space.</li>
Default value: black.
Note: Only `stretch` and `black` are supported for adaptive bitrate streaming.
                     * 
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     * 
                     */
                    bool FillTypeHasBeenSet() const;

                    /**
                     * 获取The control factor of video constant bitrate. Value range: [1, 51]
If this parameter is specified, CRF (a bitrate control method) will be used for transcoding. (Video bitrate will no longer take effect.)
It is not recommended to specify this parameter if there are no special requirements.
                     * @return Vcrf The control factor of video constant bitrate. Value range: [1, 51]
If this parameter is specified, CRF (a bitrate control method) will be used for transcoding. (Video bitrate will no longer take effect.)
It is not recommended to specify this parameter if there are no special requirements.
                     * 
                     */
                    uint64_t GetVcrf() const;

                    /**
                     * 设置The control factor of video constant bitrate. Value range: [1, 51]
If this parameter is specified, CRF (a bitrate control method) will be used for transcoding. (Video bitrate will no longer take effect.)
It is not recommended to specify this parameter if there are no special requirements.
                     * @param _vcrf The control factor of video constant bitrate. Value range: [1, 51]
If this parameter is specified, CRF (a bitrate control method) will be used for transcoding. (Video bitrate will no longer take effect.)
It is not recommended to specify this parameter if there are no special requirements.
                     * 
                     */
                    void SetVcrf(const uint64_t& _vcrf);

                    /**
                     * 判断参数 Vcrf 是否已赋值
                     * @return Vcrf 是否已赋值
                     * 
                     */
                    bool VcrfHasBeenSet() const;

                private:

                    /**
                     * The video codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
Note: You must specify a resolution (not higher than 640 x 480) if the H.265 codec is used.
Note: You can only use the AOMedia Video 1 codec for MP4 files.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * The video frame rate (Hz). Value range: [0, 100].
If the value is 0, the frame rate will be the same as that of the source video.
Note: For adaptive bitrate streaming, the value range of this parameter is [0, 60].
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * The video bitrate (Kbps). Value range: 0 and [128, 35000].
If the value is 0, the bitrate of the video will be the same as that of the source video.
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Resolution adaption. Valid values:
<li>open: Enabled. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>close: Disabled. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>
Default value: open.
Note: When resolution adaption is enabled, `Width` cannot be smaller than `Height`.
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * Maximum value of the width (or long side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Maximum value of the height (or short side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Frame interval between I keyframes. Value range: 0 and [1,100000].
If this parameter is 0 or left empty, the system will automatically set the GOP length.
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * The fill mode, which indicates how a video is resized when the video’s original aspect ratio is different from the target aspect ratio. Valid values:
<li>stretch: Stretch the image frame by frame to fill the entire screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>black: Keep the image's original aspect ratio and fill the blank space with black bars.</li>
<li>white: Keep the image’s original aspect ratio and fill the blank space with white bars.</li>
<li>gauss: Keep the image’s original aspect ratio and apply Gaussian blur to the blank space.</li>
Default value: black.
Note: Only `stretch` and `black` are supported for adaptive bitrate streaming.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * The control factor of video constant bitrate. Value range: [1, 51]
If this parameter is specified, CRF (a bitrate control method) will be used for transcoding. (Video bitrate will no longer take effect.)
It is not recommended to specify this parameter if there are no special requirements.
                     */
                    uint64_t m_vcrf;
                    bool m_vcrfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFO_H_
