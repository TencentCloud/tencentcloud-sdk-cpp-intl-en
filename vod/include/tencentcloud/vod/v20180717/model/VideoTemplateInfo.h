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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTEMPLATEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTEMPLATEINFO_H_

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
<li>libx264: H.264</li>
<li>libx265: H.265</li>
<li>av1: AOMedia Video 1</li>
<li>H.266: H.266</li>
<font color=red>Notes:</font>
<li>The AOMedia Video 1 and H.266 codecs can only be used for MP4 files.</li>
<li> Only CRF is supported for H.266 currently.</li>
                     * @return Codec The video codec. Valid values:
<li>libx264: H.264</li>
<li>libx265: H.265</li>
<li>av1: AOMedia Video 1</li>
<li>H.266: H.266</li>
<font color=red>Notes:</font>
<li>The AOMedia Video 1 and H.266 codecs can only be used for MP4 files.</li>
<li> Only CRF is supported for H.266 currently.</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置The video codec. Valid values:
<li>libx264: H.264</li>
<li>libx265: H.265</li>
<li>av1: AOMedia Video 1</li>
<li>H.266: H.266</li>
<font color=red>Notes:</font>
<li>The AOMedia Video 1 and H.266 codecs can only be used for MP4 files.</li>
<li> Only CRF is supported for H.266 currently.</li>
                     * @param _codec The video codec. Valid values:
<li>libx264: H.264</li>
<li>libx265: H.265</li>
<li>av1: AOMedia Video 1</li>
<li>H.266: H.266</li>
<font color=red>Notes:</font>
<li>The AOMedia Video 1 and H.266 codecs can only be used for MP4 files.</li>
<li> Only CRF is supported for H.266 currently.</li>
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
                     * 获取Video frame rate in Hz. Value range: [0,100].
If the value is 0, the frame rate will be the same as that of the source video.
                     * @return Fps Video frame rate in Hz. Value range: [0,100].
If the value is 0, the frame rate will be the same as that of the source video.
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置Video frame rate in Hz. Value range: [0,100].
If the value is 0, the frame rate will be the same as that of the source video.
                     * @param _fps Video frame rate in Hz. Value range: [0,100].
If the value is 0, the frame rate will be the same as that of the source video.
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
                     * 获取Bitrate of video stream in Kbps. Value range: 0 and [128, 35,000].
If the value is 0, the bitrate of the video will be the same as that of the source video.
                     * @return Bitrate Bitrate of video stream in Kbps. Value range: 0 and [128, 35,000].
If the value is 0, the bitrate of the video will be the same as that of the source video.
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of video stream in Kbps. Value range: 0 and [128, 35,000].
If the value is 0, the bitrate of the video will be the same as that of the source video.
                     * @param _bitrate Bitrate of video stream in Kbps. Value range: 0 and [128, 35,000].
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
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResolutionAdaptive Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _resolutionAdaptive Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取The maximum video width (or long side) in pixels. Value range: 0 and [128, 8192].
<li>If both `Width` and `Height` are 0, the output resolution will be the same as that of the source video.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>
Default value: 0.
                     * @return Width The maximum video width (or long side) in pixels. Value range: 0 and [128, 8192].
<li>If both `Width` and `Height` are 0, the output resolution will be the same as that of the source video.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>
Default value: 0.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置The maximum video width (or long side) in pixels. Value range: 0 and [128, 8192].
<li>If both `Width` and `Height` are 0, the output resolution will be the same as that of the source video.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>
Default value: 0.
                     * @param _width The maximum video width (or long side) in pixels. Value range: 0 and [128, 8192].
<li>If both `Width` and `Height` are 0, the output resolution will be the same as that of the source video.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>
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
                     * 获取The maximum video height (or short side) in pixels. Value range: 0 and [128, 8192].
<li>If both `Width` and `Height` are 0, the output resolution will be the same as that of the source video.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>
Default value: 0.
                     * @return Height The maximum video height (or short side) in pixels. Value range: 0 and [128, 8192].
<li>If both `Width` and `Height` are 0, the output resolution will be the same as that of the source video.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>
Default value: 0.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The maximum video height (or short side) in pixels. Value range: 0 and [128, 8192].
<li>If both `Width` and `Height` are 0, the output resolution will be the same as that of the source video.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>
Default value: 0.
                     * @param _height The maximum video height (or short side) in pixels. Value range: 0 and [128, 8192].
<li>If both `Width` and `Height` are 0, the output resolution will be the same as that of the source video.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>
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
                     * 获取Fill type, the way of processing a screenshot when the configured aspect ratio is different from that of the source video. Valid values:
<li>stretch: stretches the video image frame by frame to fill the screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>black: fills the uncovered area with black color, without changing the image's aspect ratio.</li>
<li>white: fills the uncovered area with white color, without changing the image's aspect ratio.</li>
<li>gauss: applies Gaussian blur to the uncovered area, without changing the image's aspect ratio.</li>
Default value: black
                     * @return FillType Fill type, the way of processing a screenshot when the configured aspect ratio is different from that of the source video. Valid values:
<li>stretch: stretches the video image frame by frame to fill the screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>black: fills the uncovered area with black color, without changing the image's aspect ratio.</li>
<li>white: fills the uncovered area with white color, without changing the image's aspect ratio.</li>
<li>gauss: applies Gaussian blur to the uncovered area, without changing the image's aspect ratio.</li>
Default value: black
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Fill type, the way of processing a screenshot when the configured aspect ratio is different from that of the source video. Valid values:
<li>stretch: stretches the video image frame by frame to fill the screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>black: fills the uncovered area with black color, without changing the image's aspect ratio.</li>
<li>white: fills the uncovered area with white color, without changing the image's aspect ratio.</li>
<li>gauss: applies Gaussian blur to the uncovered area, without changing the image's aspect ratio.</li>
Default value: black
                     * @param _fillType Fill type, the way of processing a screenshot when the configured aspect ratio is different from that of the source video. Valid values:
<li>stretch: stretches the video image frame by frame to fill the screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>black: fills the uncovered area with black color, without changing the image's aspect ratio.</li>
<li>white: fills the uncovered area with white color, without changing the image's aspect ratio.</li>
<li>gauss: applies Gaussian blur to the uncovered area, without changing the image's aspect ratio.</li>
Default value: black
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
                     * 获取The video constant rate factor (CRF). Value range: 1-51.

<font color=red>Notes:</font>
<li>If this parameter is specified, CRF encoding will be used and the bitrate parameter will be ignored.</li>
<li>If `Codec` is `H.266`, this parameter is required (`28` is recommended).</li>
<li>We don’t recommend using this parameter unless you have special requirements.</li>
                     * @return Vcrf The video constant rate factor (CRF). Value range: 1-51.

<font color=red>Notes:</font>
<li>If this parameter is specified, CRF encoding will be used and the bitrate parameter will be ignored.</li>
<li>If `Codec` is `H.266`, this parameter is required (`28` is recommended).</li>
<li>We don’t recommend using this parameter unless you have special requirements.</li>
                     * 
                     */
                    uint64_t GetVcrf() const;

                    /**
                     * 设置The video constant rate factor (CRF). Value range: 1-51.

<font color=red>Notes:</font>
<li>If this parameter is specified, CRF encoding will be used and the bitrate parameter will be ignored.</li>
<li>If `Codec` is `H.266`, this parameter is required (`28` is recommended).</li>
<li>We don’t recommend using this parameter unless you have special requirements.</li>
                     * @param _vcrf The video constant rate factor (CRF). Value range: 1-51.

<font color=red>Notes:</font>
<li>If this parameter is specified, CRF encoding will be used and the bitrate parameter will be ignored.</li>
<li>If `Codec` is `H.266`, this parameter is required (`28` is recommended).</li>
<li>We don’t recommend using this parameter unless you have special requirements.</li>
                     * 
                     */
                    void SetVcrf(const uint64_t& _vcrf);

                    /**
                     * 判断参数 Vcrf 是否已赋值
                     * @return Vcrf 是否已赋值
                     * 
                     */
                    bool VcrfHasBeenSet() const;

                    /**
                     * 获取I-frame interval in frames. Valid values: 0 and 1-100000.
When this parameter is set to 0 or left empty, `Gop` will be automatically set.
                     * @return Gop I-frame interval in frames. Valid values: 0 and 1-100000.
When this parameter is set to 0 or left empty, `Gop` will be automatically set.
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置I-frame interval in frames. Valid values: 0 and 1-100000.
When this parameter is set to 0 or left empty, `Gop` will be automatically set.
                     * @param _gop I-frame interval in frames. Valid values: 0 and 1-100000.
When this parameter is set to 0 or left empty, `Gop` will be automatically set.
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
                     * 获取Whether to output an HDR (high dynamic range) video if the source video is HDR. Valid values:
<li>ON: If the source video is HDR, output an HDR video; if not, output an SDR (standard dynamic range) video.</li>
<li>OFF: Output an SDR video regardless of whether the source video is HDR.</li>
Default value: OFF.
                     * @return PreserveHDRSwitch Whether to output an HDR (high dynamic range) video if the source video is HDR. Valid values:
<li>ON: If the source video is HDR, output an HDR video; if not, output an SDR (standard dynamic range) video.</li>
<li>OFF: Output an SDR video regardless of whether the source video is HDR.</li>
Default value: OFF.
                     * 
                     */
                    std::string GetPreserveHDRSwitch() const;

                    /**
                     * 设置Whether to output an HDR (high dynamic range) video if the source video is HDR. Valid values:
<li>ON: If the source video is HDR, output an HDR video; if not, output an SDR (standard dynamic range) video.</li>
<li>OFF: Output an SDR video regardless of whether the source video is HDR.</li>
Default value: OFF.
                     * @param _preserveHDRSwitch Whether to output an HDR (high dynamic range) video if the source video is HDR. Valid values:
<li>ON: If the source video is HDR, output an HDR video; if not, output an SDR (standard dynamic range) video.</li>
<li>OFF: Output an SDR video regardless of whether the source video is HDR.</li>
Default value: OFF.
                     * 
                     */
                    void SetPreserveHDRSwitch(const std::string& _preserveHDRSwitch);

                    /**
                     * 判断参数 PreserveHDRSwitch 是否已赋值
                     * @return PreserveHDRSwitch 是否已赋值
                     * 
                     */
                    bool PreserveHDRSwitchHasBeenSet() const;

                    /**
                     * 获取The codec tag. This parameter is valid only if the H.265 codec is used. Valid values:
<li>hvc1</li>
<li>hev1</li>
Default value: hvc1.
                     * @return CodecTag The codec tag. This parameter is valid only if the H.265 codec is used. Valid values:
<li>hvc1</li>
<li>hev1</li>
Default value: hvc1.
                     * 
                     */
                    std::string GetCodecTag() const;

                    /**
                     * 设置The codec tag. This parameter is valid only if the H.265 codec is used. Valid values:
<li>hvc1</li>
<li>hev1</li>
Default value: hvc1.
                     * @param _codecTag The codec tag. This parameter is valid only if the H.265 codec is used. Valid values:
<li>hvc1</li>
<li>hev1</li>
Default value: hvc1.
                     * 
                     */
                    void SetCodecTag(const std::string& _codecTag);

                    /**
                     * 判断参数 CodecTag 是否已赋值
                     * @return CodecTag 是否已赋值
                     * 
                     */
                    bool CodecTagHasBeenSet() const;

                private:

                    /**
                     * The video codec. Valid values:
<li>libx264: H.264</li>
<li>libx265: H.265</li>
<li>av1: AOMedia Video 1</li>
<li>H.266: H.266</li>
<font color=red>Notes:</font>
<li>The AOMedia Video 1 and H.266 codecs can only be used for MP4 files.</li>
<li> Only CRF is supported for H.266 currently.</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Video frame rate in Hz. Value range: [0,100].
If the value is 0, the frame rate will be the same as that of the source video.
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Bitrate of video stream in Kbps. Value range: 0 and [128, 35,000].
If the value is 0, the bitrate of the video will be the same as that of the source video.
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * The maximum video width (or long side) in pixels. Value range: 0 and [128, 8192].
<li>If both `Width` and `Height` are 0, the output resolution will be the same as that of the source video.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>
Default value: 0.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The maximum video height (or short side) in pixels. Value range: 0 and [128, 8192].
<li>If both `Width` and `Height` are 0, the output resolution will be the same as that of the source video.</li>
<li>If `Width` is 0 and `Height` is not, the video width will be proportionally scaled.</li>
<li>If `Width` is not 0 and `Height` is, the video height will be proportionally scaled.</li>
<li>If neither `Width` nor `Height` is 0, the specified width and height will be used.</li>
Default value: 0.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Fill type, the way of processing a screenshot when the configured aspect ratio is different from that of the source video. Valid values:
<li>stretch: stretches the video image frame by frame to fill the screen. The video image may become "squashed" or "stretched" after transcoding.</li>
<li>black: fills the uncovered area with black color, without changing the image's aspect ratio.</li>
<li>white: fills the uncovered area with white color, without changing the image's aspect ratio.</li>
<li>gauss: applies Gaussian blur to the uncovered area, without changing the image's aspect ratio.</li>
Default value: black
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * The video constant rate factor (CRF). Value range: 1-51.

<font color=red>Notes:</font>
<li>If this parameter is specified, CRF encoding will be used and the bitrate parameter will be ignored.</li>
<li>If `Codec` is `H.266`, this parameter is required (`28` is recommended).</li>
<li>We don’t recommend using this parameter unless you have special requirements.</li>
                     */
                    uint64_t m_vcrf;
                    bool m_vcrfHasBeenSet;

                    /**
                     * I-frame interval in frames. Valid values: 0 and 1-100000.
When this parameter is set to 0 or left empty, `Gop` will be automatically set.
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * Whether to output an HDR (high dynamic range) video if the source video is HDR. Valid values:
<li>ON: If the source video is HDR, output an HDR video; if not, output an SDR (standard dynamic range) video.</li>
<li>OFF: Output an SDR video regardless of whether the source video is HDR.</li>
Default value: OFF.
                     */
                    std::string m_preserveHDRSwitch;
                    bool m_preserveHDRSwitchHasBeenSet;

                    /**
                     * The codec tag. This parameter is valid only if the H.265 codec is used. Valid values:
<li>hvc1</li>
<li>hev1</li>
Default value: hvc1.
                     */
                    std::string m_codecTag;
                    bool m_codecTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTEMPLATEINFO_H_
