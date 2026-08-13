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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SegmentSpecificInfo.h>


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
                class VideoTemplateInfoForUpdate : public AbstractModel
                {
                public:
                    VideoTemplateInfoForUpdate();
                    ~VideoTemplateInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Encoding format for video streams. Optional values:
<li>h264: H.264 encoding.</li>
<li>h265: H.265 encoding.</li>
<li>h266: H.266 encoding.</li>
<li>av1: AOMedia Video 1 encoding</li>
<li>vp8: VP8 encoding.</li>
<li>vp9: VP9 encoding.</li>
<li>mpeg2: MPEG2 encoding.</li>
<li>dnxhd: DNxHD encoding.</li>
<li>mv-hevc: MV-HEVC encoding.</li>

Note: The av1 encoding container currently only supports mp4, webm, and mkv.
Note: H.266 encoding containers only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and dnxhd encoding containers currently only support mxf.
Note: The MV-HEVC codec currently only supports mp4, hls, and mov. Among them, the HLS format only supports the MP4 segmented format and requires the input source to be a panoramic video (with multiple views).
                     * @return Codec Encoding format for video streams. Optional values:
<li>h264: H.264 encoding.</li>
<li>h265: H.265 encoding.</li>
<li>h266: H.266 encoding.</li>
<li>av1: AOMedia Video 1 encoding</li>
<li>vp8: VP8 encoding.</li>
<li>vp9: VP9 encoding.</li>
<li>mpeg2: MPEG2 encoding.</li>
<li>dnxhd: DNxHD encoding.</li>
<li>mv-hevc: MV-HEVC encoding.</li>

Note: The av1 encoding container currently only supports mp4, webm, and mkv.
Note: H.266 encoding containers only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and dnxhd encoding containers currently only support mxf.
Note: The MV-HEVC codec currently only supports mp4, hls, and mov. Among them, the HLS format only supports the MP4 segmented format and requires the input source to be a panoramic video (with multiple views).
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Encoding format for video streams. Optional values:
<li>h264: H.264 encoding.</li>
<li>h265: H.265 encoding.</li>
<li>h266: H.266 encoding.</li>
<li>av1: AOMedia Video 1 encoding</li>
<li>vp8: VP8 encoding.</li>
<li>vp9: VP9 encoding.</li>
<li>mpeg2: MPEG2 encoding.</li>
<li>dnxhd: DNxHD encoding.</li>
<li>mv-hevc: MV-HEVC encoding.</li>

Note: The av1 encoding container currently only supports mp4, webm, and mkv.
Note: H.266 encoding containers only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and dnxhd encoding containers currently only support mxf.
Note: The MV-HEVC codec currently only supports mp4, hls, and mov. Among them, the HLS format only supports the MP4 segmented format and requires the input source to be a panoramic video (with multiple views).
                     * @param _codec Encoding format for video streams. Optional values:
<li>h264: H.264 encoding.</li>
<li>h265: H.265 encoding.</li>
<li>h266: H.266 encoding.</li>
<li>av1: AOMedia Video 1 encoding</li>
<li>vp8: VP8 encoding.</li>
<li>vp9: VP9 encoding.</li>
<li>mpeg2: MPEG2 encoding.</li>
<li>dnxhd: DNxHD encoding.</li>
<li>mv-hevc: MV-HEVC encoding.</li>

Note: The av1 encoding container currently only supports mp4, webm, and mkv.
Note: H.266 encoding containers only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and dnxhd encoding containers currently only support mxf.
Note: The MV-HEVC codec currently only supports mp4, hls, and mov. Among them, the HLS format only supports the MP4 segmented format and requires the input source to be a panoramic video (with multiple views).
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
                     * 获取Video frame rate. Value range:
When FpsDenominator is empty, the range is [0, 120], in Hz.
When FpsDenominator is not empty, the Fps/FpsDenominator range is [0, 120].
If the value is 0, the frame rate will be the same as that of the source video.
                     * @return Fps Video frame rate. Value range:
When FpsDenominator is empty, the range is [0, 120], in Hz.
When FpsDenominator is not empty, the Fps/FpsDenominator range is [0, 120].
If the value is 0, the frame rate will be the same as that of the source video.
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置Video frame rate. Value range:
When FpsDenominator is empty, the range is [0, 120], in Hz.
When FpsDenominator is not empty, the Fps/FpsDenominator range is [0, 120].
If the value is 0, the frame rate will be the same as that of the source video.
                     * @param _fps Video frame rate. Value range:
When FpsDenominator is empty, the range is [0, 120], in Hz.
When FpsDenominator is not empty, the Fps/FpsDenominator range is [0, 120].
If the value is 0, the frame rate will be the same as that of the source video.
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Bitrate of video stream, value ranges from 0 to [128, 100000], measurement unit: kbps.
If the value is 0, the bitrate of the video will be the same as that of the source video.
                     * @return Bitrate Bitrate of video stream, value ranges from 0 to [128, 100000], measurement unit: kbps.
If the value is 0, the bitrate of the video will be the same as that of the source video.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of video stream, value ranges from 0 to [128, 100000], measurement unit: kbps.
If the value is 0, the bitrate of the video will be the same as that of the source video.
                     * @param _bitrate Bitrate of video stream, value ranges from 0 to [128, 100000], measurement unit: kbps.
If the value is 0, the bitrate of the video will be the same as that of the source video.
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取Resolution adaptation, available values:
<li>open: Turn on. At this point, Width represents the long side of the video, and Height indicates the short side of the video;</li>
<li>close: Close. At this point, Width represents the video width, and Height indicates the video height.</li>
Note: In self-adaptation mode, Width cannot be less than Height.
                     * @return ResolutionAdaptive Resolution adaptation, available values:
<li>open: Turn on. At this point, Width represents the long side of the video, and Height indicates the short side of the video;</li>
<li>close: Close. At this point, Width represents the video width, and Height indicates the video height.</li>
Note: In self-adaptation mode, Width cannot be less than Height.
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaptation, available values:
<li>open: Turn on. At this point, Width represents the long side of the video, and Height indicates the short side of the video;</li>
<li>close: Close. At this point, Width represents the video width, and Height indicates the video height.</li>
Note: In self-adaptation mode, Width cannot be less than Height.
                     * @param _resolutionAdaptive Resolution adaptation, available values:
<li>open: Turn on. At this point, Width represents the long side of the video, and Height indicates the short side of the video;</li>
<li>close: Close. At this point, Width represents the video width, and Height indicates the video height.</li>
Note: In self-adaptation mode, Width cannot be less than Height.
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
<li>If both Width and Height are 0, the resolution is the same as the source.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled.</li>
<li>If Width is not 0 but Height is 0, the height will be proportionally scaled.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
                     * @return Width Maximum value of the video stream width (or long edge) in px. Value range: 0 and [128, 4096].
<li>If both Width and Height are 0, the resolution is the same as the source.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled.</li>
<li>If Width is not 0 but Height is 0, the height will be proportionally scaled.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Maximum value of the video stream width (or long edge) in px. Value range: 0 and [128, 4096].
<li>If both Width and Height are 0, the resolution is the same as the source.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled.</li>
<li>If Width is not 0 but Height is 0, the height will be proportionally scaled.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
                     * @param _width Maximum value of the video stream width (or long edge) in px. Value range: 0 and [128, 4096].
<li>If both Width and Height are 0, the resolution is the same as the source.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled.</li>
<li>If Width is not 0 but Height is 0, the height will be proportionally scaled.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
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
                     * 获取Maximum value of video stream height (or short side). Value ranges from 0 to [128, 4096]. Measurement unit: px.
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
                     * @return Height Maximum value of video stream height (or short side). Value ranges from 0 to [128, 4096]. Measurement unit: px.
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Maximum value of video stream height (or short side). Value ranges from 0 to [128, 4096]. Measurement unit: px.
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
                     * @param _height Maximum value of video stream height (or short side). Value ranges from 0 to [128, 4096]. Measurement unit: px.
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
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
                     * 获取Interval between I-frames, customizable by frame or second. GOP length value ranges from 0 to [1, 100000].
When set to 0, the system will automatically set the gop length.
                     * @return Gop Interval between I-frames, customizable by frame or second. GOP length value ranges from 0 to [1, 100000].
When set to 0, the system will automatically set the gop length.
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置Interval between I-frames, customizable by frame or second. GOP length value ranges from 0 to [1, 100000].
When set to 0, the system will automatically set the gop length.
                     * @param _gop Interval between I-frames, customizable by frame or second. GOP length value ranges from 0 to [1, 100000].
When set to 0, the system will automatically set the gop length.
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
                     * 获取Gop value unit, value range: 
frame: indicates frame 
second: indicates second
Default value: frame
                     * @return GopUnit Gop value unit, value range: 
frame: indicates frame 
second: indicates second
Default value: frame
                     * 
                     */
                    std::string GetGopUnit() const;

                    /**
                     * 设置Gop value unit, value range: 
frame: indicates frame 
second: indicates second
Default value: frame
                     * @param _gopUnit Gop value unit, value range: 
frame: indicates frame 
second: indicates second
Default value: frame
                     * 
                     */
                    void SetGopUnit(const std::string& _gopUnit);

                    /**
                     * 判断参数 GopUnit 是否已赋值
                     * @return GopUnit 是否已赋值
                     * 
                     */
                    bool GopUnitHasBeenSet() const;

                    /**
                     * 获取Filling method, when video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch, stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li>black: Keep black, maintain video aspect ratio, edges filled with black.</li>
<li>White: Leave blank, maintain video aspect ratio, edge remainder filled with white.</li>
<li>gauss: Gaussian blur, maintain video aspect ratio, Gaussian blur filling for the rest of the edges.</li>
<li>smarttailor: intelligent cropping. It smartly selects video images to ensure proportional image cropping.</li>
Default value: black.
                     * @return FillType Filling method, when video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch, stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li>black: Keep black, maintain video aspect ratio, edges filled with black.</li>
<li>White: Leave blank, maintain video aspect ratio, edge remainder filled with white.</li>
<li>gauss: Gaussian blur, maintain video aspect ratio, Gaussian blur filling for the rest of the edges.</li>
<li>smarttailor: intelligent cropping. It smartly selects video images to ensure proportional image cropping.</li>
Default value: black.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Filling method, when video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch, stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li>black: Keep black, maintain video aspect ratio, edges filled with black.</li>
<li>White: Leave blank, maintain video aspect ratio, edge remainder filled with white.</li>
<li>gauss: Gaussian blur, maintain video aspect ratio, Gaussian blur filling for the rest of the edges.</li>
<li>smarttailor: intelligent cropping. It smartly selects video images to ensure proportional image cropping.</li>
Default value: black.
                     * @param _fillType Filling method, when video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch, stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li>black: Keep black, maintain video aspect ratio, edges filled with black.</li>
<li>White: Leave blank, maintain video aspect ratio, edge remainder filled with white.</li>
<li>gauss: Gaussian blur, maintain video aspect ratio, Gaussian blur filling for the rest of the edges.</li>
<li>smarttailor: intelligent cropping. It smartly selects video images to ensure proportional image cropping.</li>
Default value: black.
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
                     * 获取Control factor for constant video bitrate. Value range: [0, 51]. If this parameter is not specified, it means "auto". If there are no special requirements, it is advisable not to specify this parameter.
When the Mode parameter is set to VBR, if the Vcrf value is configured at the same time, MPS processes video in VBR mode with consideration of both Vcrf and Bitrate parameter settings to balance video quality, bitrate, transcoding efficiency, and file size.
When the Mode parameter is set to CRF, the Bitrate setting will become invalid, and encoding is performed based on the Vcrf value.
When the Mode parameter is set to ABR or CBR, the Vcrf value requires no configuration.
Note: When you need to set it to auto, fill in 100.

                     * @return Vcrf Control factor for constant video bitrate. Value range: [0, 51]. If this parameter is not specified, it means "auto". If there are no special requirements, it is advisable not to specify this parameter.
When the Mode parameter is set to VBR, if the Vcrf value is configured at the same time, MPS processes video in VBR mode with consideration of both Vcrf and Bitrate parameter settings to balance video quality, bitrate, transcoding efficiency, and file size.
When the Mode parameter is set to CRF, the Bitrate setting will become invalid, and encoding is performed based on the Vcrf value.
When the Mode parameter is set to ABR or CBR, the Vcrf value requires no configuration.
Note: When you need to set it to auto, fill in 100.

                     * 
                     */
                    uint64_t GetVcrf() const;

                    /**
                     * 设置Control factor for constant video bitrate. Value range: [0, 51]. If this parameter is not specified, it means "auto". If there are no special requirements, it is advisable not to specify this parameter.
When the Mode parameter is set to VBR, if the Vcrf value is configured at the same time, MPS processes video in VBR mode with consideration of both Vcrf and Bitrate parameter settings to balance video quality, bitrate, transcoding efficiency, and file size.
When the Mode parameter is set to CRF, the Bitrate setting will become invalid, and encoding is performed based on the Vcrf value.
When the Mode parameter is set to ABR or CBR, the Vcrf value requires no configuration.
Note: When you need to set it to auto, fill in 100.

                     * @param _vcrf Control factor for constant video bitrate. Value range: [0, 51]. If this parameter is not specified, it means "auto". If there are no special requirements, it is advisable not to specify this parameter.
When the Mode parameter is set to VBR, if the Vcrf value is configured at the same time, MPS processes video in VBR mode with consideration of both Vcrf and Bitrate parameter settings to balance video quality, bitrate, transcoding efficiency, and file size.
When the Mode parameter is set to CRF, the Bitrate setting will become invalid, and encoding is performed based on the Vcrf value.
When the Mode parameter is set to ABR or CBR, the Vcrf value requires no configuration.
Note: When you need to set it to auto, fill in 100.

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
                     * 获取Adaptive coding. Available values:
<li>0: Not enabled</li>
<li>1: Turn on</li>
Default value: 0. When this parameter is enabled, multiple streams with different resolutions and bitrates will be self-adaptively generated. Among them, the width and height in VideoTemplate are the maximum resolution among the multiple streams, the bitrate in VideoTemplate is the highest bitrate among the multiple streams, and the vcrf in VideoTemplate is the highest quality among the multiple streams. When resolution, bitrate, and vcrf are not set, the highest resolution generated by the ContentAdaptStream parameter is the resolution of the video source, and the video quality is close to vmaf95. To enable this parameter or learn about billing details, contact your Tencent Cloud business.
                     * @return ContentAdaptStream Adaptive coding. Available values:
<li>0: Not enabled</li>
<li>1: Turn on</li>
Default value: 0. When this parameter is enabled, multiple streams with different resolutions and bitrates will be self-adaptively generated. Among them, the width and height in VideoTemplate are the maximum resolution among the multiple streams, the bitrate in VideoTemplate is the highest bitrate among the multiple streams, and the vcrf in VideoTemplate is the highest quality among the multiple streams. When resolution, bitrate, and vcrf are not set, the highest resolution generated by the ContentAdaptStream parameter is the resolution of the video source, and the video quality is close to vmaf95. To enable this parameter or learn about billing details, contact your Tencent Cloud business.
                     * 
                     */
                    uint64_t GetContentAdaptStream() const;

                    /**
                     * 设置Adaptive coding. Available values:
<li>0: Not enabled</li>
<li>1: Turn on</li>
Default value: 0. When this parameter is enabled, multiple streams with different resolutions and bitrates will be self-adaptively generated. Among them, the width and height in VideoTemplate are the maximum resolution among the multiple streams, the bitrate in VideoTemplate is the highest bitrate among the multiple streams, and the vcrf in VideoTemplate is the highest quality among the multiple streams. When resolution, bitrate, and vcrf are not set, the highest resolution generated by the ContentAdaptStream parameter is the resolution of the video source, and the video quality is close to vmaf95. To enable this parameter or learn about billing details, contact your Tencent Cloud business.
                     * @param _contentAdaptStream Adaptive coding. Available values:
<li>0: Not enabled</li>
<li>1: Turn on</li>
Default value: 0. When this parameter is enabled, multiple streams with different resolutions and bitrates will be self-adaptively generated. Among them, the width and height in VideoTemplate are the maximum resolution among the multiple streams, the bitrate in VideoTemplate is the highest bitrate among the multiple streams, and the vcrf in VideoTemplate is the highest quality among the multiple streams. When resolution, bitrate, and vcrf are not set, the highest resolution generated by the ContentAdaptStream parameter is the resolution of the video source, and the video quality is close to vmaf95. To enable this parameter or learn about billing details, contact your Tencent Cloud business.
                     * 
                     */
                    void SetContentAdaptStream(const uint64_t& _contentAdaptStream);

                    /**
                     * 判断参数 ContentAdaptStream 是否已赋值
                     * @return ContentAdaptStream 是否已赋值
                     * 
                     */
                    bool ContentAdaptStreamHasBeenSet() const;

                    /**
                     * 获取Average shard duration. Value range: (0-10], unit: second
Default value: 10
Note: It is used only in the HLS format.
                     * @return HlsTime Average shard duration. Value range: (0-10], unit: second
Default value: 10
Note: It is used only in the HLS format.
                     * 
                     */
                    uint64_t GetHlsTime() const;

                    /**
                     * 设置Average shard duration. Value range: (0-10], unit: second
Default value: 10
Note: It is used only in the HLS format.
                     * @param _hlsTime Average shard duration. Value range: (0-10], unit: second
Default value: 10
Note: It is used only in the HLS format.
                     * 
                     */
                    void SetHlsTime(const uint64_t& _hlsTime);

                    /**
                     * 判断参数 HlsTime 是否已赋值
                     * @return HlsTime 是否已赋值
                     * 
                     */
                    bool HlsTimeHasBeenSet() const;

                    /**
                     * 获取hls fragment type, available values:
<li>0: HLS+TS segment.</li>
<li>2:HLS+TS byte range</li>
<li>7: HLS+MP4 segment.</li>
<li>5:HLS+MP4 byte range</li>
Default value: 0
Note: This field is used for ordinary/TSC transcoding settings and does not take effect for adaptive bitrate streams. If needed, you can use the outer field to configure the shard type for adaptive bitrate streams.
                     * @return SegmentType hls fragment type, available values:
<li>0: HLS+TS segment.</li>
<li>2:HLS+TS byte range</li>
<li>7: HLS+MP4 segment.</li>
<li>5:HLS+MP4 byte range</li>
Default value: 0
Note: This field is used for ordinary/TSC transcoding settings and does not take effect for adaptive bitrate streams. If needed, you can use the outer field to configure the shard type for adaptive bitrate streams.
                     * 
                     */
                    int64_t GetSegmentType() const;

                    /**
                     * 设置hls fragment type, available values:
<li>0: HLS+TS segment.</li>
<li>2:HLS+TS byte range</li>
<li>7: HLS+MP4 segment.</li>
<li>5:HLS+MP4 byte range</li>
Default value: 0
Note: This field is used for ordinary/TSC transcoding settings and does not take effect for adaptive bitrate streams. If needed, you can use the outer field to configure the shard type for adaptive bitrate streams.
                     * @param _segmentType hls fragment type, available values:
<li>0: HLS+TS segment.</li>
<li>2:HLS+TS byte range</li>
<li>7: HLS+MP4 segment.</li>
<li>5:HLS+MP4 byte range</li>
Default value: 0
Note: This field is used for ordinary/TSC transcoding settings and does not take effect for adaptive bitrate streams. If needed, you can use the outer field to configure the shard type for adaptive bitrate streams.
                     * 
                     */
                    void SetSegmentType(const int64_t& _segmentType);

                    /**
                     * 判断参数 SegmentType 是否已赋值
                     * @return SegmentType 是否已赋值
                     * 
                     */
                    bool SegmentTypeHasBeenSet() const;

                    /**
                     * 获取Denominator of the frame rate
Note: The value must be greater than 0.
                     * @return FpsDenominator Denominator of the frame rate
Note: The value must be greater than 0.
                     * 
                     */
                    int64_t GetFpsDenominator() const;

                    /**
                     * 设置Denominator of the frame rate
Note: The value must be greater than 0.
                     * @param _fpsDenominator Denominator of the frame rate
Note: The value must be greater than 0.
                     * 
                     */
                    void SetFpsDenominator(const int64_t& _fpsDenominator);

                    /**
                     * 判断参数 FpsDenominator 是否已赋值
                     * @return FpsDenominator 是否已赋值
                     * 
                     */
                    bool FpsDenominatorHasBeenSet() const;

                    /**
                     * 获取3D video splicing mode, only mv-hevc, takes effect for 3D video, available values:
<li>side_by_side: side-by-side layout of the original video content.</li>
<li>top_bottom: top-bottom layout arrangement of the original video content.</li>
Billing is based on the segmented resolution dimension to report usage amount and cost.
Default value: side_by_side
                     * @return Stereo3dType 3D video splicing mode, only mv-hevc, takes effect for 3D video, available values:
<li>side_by_side: side-by-side layout of the original video content.</li>
<li>top_bottom: top-bottom layout arrangement of the original video content.</li>
Billing is based on the segmented resolution dimension to report usage amount and cost.
Default value: side_by_side
                     * 
                     */
                    std::string GetStereo3dType() const;

                    /**
                     * 设置3D video splicing mode, only mv-hevc, takes effect for 3D video, available values:
<li>side_by_side: side-by-side layout of the original video content.</li>
<li>top_bottom: top-bottom layout arrangement of the original video content.</li>
Billing is based on the segmented resolution dimension to report usage amount and cost.
Default value: side_by_side
                     * @param _stereo3dType 3D video splicing mode, only mv-hevc, takes effect for 3D video, available values:
<li>side_by_side: side-by-side layout of the original video content.</li>
<li>top_bottom: top-bottom layout arrangement of the original video content.</li>
Billing is based on the segmented resolution dimension to report usage amount and cost.
Default value: side_by_side
                     * 
                     */
                    void SetStereo3dType(const std::string& _stereo3dType);

                    /**
                     * 判断参数 Stereo3dType 是否已赋值
                     * @return Stereo3dType 是否已赋值
                     * 
                     */
                    bool Stereo3dTypeHasBeenSet() const;

                    /**
                     * 获取Profile, suitable for different scenarios. 
baseline: It only supports I/P-frames and non-interlaced scenarios, and is suitable for scenarios such as video calls and mobile videos. 
Mainstream Profile, providing I-frames, P-frames, and B-frames, and supporting both interlaced and non-interlaced modes. It is primarily used in mainstream audio and video consumption products such as video players and streaming media transmission devices. 
high: The highest encoding level, adding 8X8 prediction to the Main Profile and supporting custom quantification. Widely used in Blu-ray storage and HDTV scenarios.
default: automatic filling along with the original video

This configuration appears only when the encoding standard is set to H264. Default: default
                     * @return VideoProfile Profile, suitable for different scenarios. 
baseline: It only supports I/P-frames and non-interlaced scenarios, and is suitable for scenarios such as video calls and mobile videos. 
Mainstream Profile, providing I-frames, P-frames, and B-frames, and supporting both interlaced and non-interlaced modes. It is primarily used in mainstream audio and video consumption products such as video players and streaming media transmission devices. 
high: The highest encoding level, adding 8X8 prediction to the Main Profile and supporting custom quantification. Widely used in Blu-ray storage and HDTV scenarios.
default: automatic filling along with the original video

This configuration appears only when the encoding standard is set to H264. Default: default
                     * 
                     */
                    std::string GetVideoProfile() const;

                    /**
                     * 设置Profile, suitable for different scenarios. 
baseline: It only supports I/P-frames and non-interlaced scenarios, and is suitable for scenarios such as video calls and mobile videos. 
Mainstream Profile, providing I-frames, P-frames, and B-frames, and supporting both interlaced and non-interlaced modes. It is primarily used in mainstream audio and video consumption products such as video players and streaming media transmission devices. 
high: The highest encoding level, adding 8X8 prediction to the Main Profile and supporting custom quantification. Widely used in Blu-ray storage and HDTV scenarios.
default: automatic filling along with the original video

This configuration appears only when the encoding standard is set to H264. Default: default
                     * @param _videoProfile Profile, suitable for different scenarios. 
baseline: It only supports I/P-frames and non-interlaced scenarios, and is suitable for scenarios such as video calls and mobile videos. 
Mainstream Profile, providing I-frames, P-frames, and B-frames, and supporting both interlaced and non-interlaced modes. It is primarily used in mainstream audio and video consumption products such as video players and streaming media transmission devices. 
high: The highest encoding level, adding 8X8 prediction to the Main Profile and supporting custom quantification. Widely used in Blu-ray storage and HDTV scenarios.
default: automatic filling along with the original video

This configuration appears only when the encoding standard is set to H264. Default: default
                     * 
                     */
                    void SetVideoProfile(const std::string& _videoProfile);

                    /**
                     * 判断参数 VideoProfile 是否已赋值
                     * @return VideoProfile 是否已赋值
                     * 
                     */
                    bool VideoProfileHasBeenSet() const;

                    /**
                     * 获取Encoder level. Default value: auto ("")
If the encoding standard is set to H264, the following options are supported: "", 1, 1.1, -1.2, 1.3, 2, 2.1, 2.2, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, and 5.1. 
If the encoding standard is set to H265, the following options are supported: "", 1, 2, 2.1, 3, 3.1, 4, 4.1, -5, 5.1, 5.2, 6, 6.1, 6.2, and 8.5.
                     * @return VideoLevel Encoder level. Default value: auto ("")
If the encoding standard is set to H264, the following options are supported: "", 1, 1.1, -1.2, 1.3, 2, 2.1, 2.2, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, and 5.1. 
If the encoding standard is set to H265, the following options are supported: "", 1, 2, 2.1, 3, 3.1, 4, 4.1, -5, 5.1, 5.2, 6, 6.1, 6.2, and 8.5.
                     * 
                     */
                    std::string GetVideoLevel() const;

                    /**
                     * 设置Encoder level. Default value: auto ("")
If the encoding standard is set to H264, the following options are supported: "", 1, 1.1, -1.2, 1.3, 2, 2.1, 2.2, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, and 5.1. 
If the encoding standard is set to H265, the following options are supported: "", 1, 2, 2.1, 3, 3.1, 4, 4.1, -5, 5.1, 5.2, 6, 6.1, 6.2, and 8.5.
                     * @param _videoLevel Encoder level. Default value: auto ("")
If the encoding standard is set to H264, the following options are supported: "", 1, 1.1, -1.2, 1.3, 2, 2.1, 2.2, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, and 5.1. 
If the encoding standard is set to H265, the following options are supported: "", 1, 2, 2.1, 3, 3.1, 4, 4.1, -5, 5.1, 5.2, 6, 6.1, 6.2, and 8.5.
                     * 
                     */
                    void SetVideoLevel(const std::string& _videoLevel);

                    /**
                     * 判断参数 VideoLevel 是否已赋值
                     * @return VideoLevel 是否已赋值
                     * 
                     */
                    bool VideoLevelHasBeenSet() const;

                    /**
                     * 获取Maximum number of consecutive B-frames. The default is auto, and 0 - 16 and -1 are supported.
Note:
-1 indicates auto.	
                     * @return Bframes Maximum number of consecutive B-frames. The default is auto, and 0 - 16 and -1 are supported.
Note:
-1 indicates auto.	
                     * 
                     */
                    int64_t GetBframes() const;

                    /**
                     * 设置Maximum number of consecutive B-frames. The default is auto, and 0 - 16 and -1 are supported.
Note:
-1 indicates auto.	
                     * @param _bframes Maximum number of consecutive B-frames. The default is auto, and 0 - 16 and -1 are supported.
Note:
-1 indicates auto.	
                     * 
                     */
                    void SetBframes(const int64_t& _bframes);

                    /**
                     * 判断参数 Bframes 是否已赋值
                     * @return Bframes 是否已赋值
                     * 
                     */
                    bool BframesHasBeenSet() const;

                    /**
                     * 获取Bitrate control mode. Optional values: 
VBR (Variable Bit Rate): Dynamic bitrate adjusts the output bitrate based on the complexity of the video image to ensure higher image quality. It is suitable for storage scenarios and applications with high image quality requirements. 
ABR (Average Bit Rate): Average bitrate. It aims to keep the average bitrate of the output video stable as much as possible, but allows short-term bitrate fluctuation. It is suitable for scenarios where you need to minimize overall bitrate while maintaining a certain image quality. 
CBR (Constant Bit Rate): Constant bit rate. In video encoding, it maintains a constant output bitrate regardless of image complexity changes. It is suitable for scenarios with strict network bandwidth requirements, such as live streaming. 
VCRF (Constant Rate Factor): Constant quality factor. It controls video quality by setting a quality factor to achieve constant quality encoding of videos. Bitrate adjustment based on content complexity. Suitable for scenarios where maintaining a certain quality is desired. 
VBR is selected by default.
                     * @return Mode Bitrate control mode. Optional values: 
VBR (Variable Bit Rate): Dynamic bitrate adjusts the output bitrate based on the complexity of the video image to ensure higher image quality. It is suitable for storage scenarios and applications with high image quality requirements. 
ABR (Average Bit Rate): Average bitrate. It aims to keep the average bitrate of the output video stable as much as possible, but allows short-term bitrate fluctuation. It is suitable for scenarios where you need to minimize overall bitrate while maintaining a certain image quality. 
CBR (Constant Bit Rate): Constant bit rate. In video encoding, it maintains a constant output bitrate regardless of image complexity changes. It is suitable for scenarios with strict network bandwidth requirements, such as live streaming. 
VCRF (Constant Rate Factor): Constant quality factor. It controls video quality by setting a quality factor to achieve constant quality encoding of videos. Bitrate adjustment based on content complexity. Suitable for scenarios where maintaining a certain quality is desired. 
VBR is selected by default.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Bitrate control mode. Optional values: 
VBR (Variable Bit Rate): Dynamic bitrate adjusts the output bitrate based on the complexity of the video image to ensure higher image quality. It is suitable for storage scenarios and applications with high image quality requirements. 
ABR (Average Bit Rate): Average bitrate. It aims to keep the average bitrate of the output video stable as much as possible, but allows short-term bitrate fluctuation. It is suitable for scenarios where you need to minimize overall bitrate while maintaining a certain image quality. 
CBR (Constant Bit Rate): Constant bit rate. In video encoding, it maintains a constant output bitrate regardless of image complexity changes. It is suitable for scenarios with strict network bandwidth requirements, such as live streaming. 
VCRF (Constant Rate Factor): Constant quality factor. It controls video quality by setting a quality factor to achieve constant quality encoding of videos. Bitrate adjustment based on content complexity. Suitable for scenarios where maintaining a certain quality is desired. 
VBR is selected by default.
                     * @param _mode Bitrate control mode. Optional values: 
VBR (Variable Bit Rate): Dynamic bitrate adjusts the output bitrate based on the complexity of the video image to ensure higher image quality. It is suitable for storage scenarios and applications with high image quality requirements. 
ABR (Average Bit Rate): Average bitrate. It aims to keep the average bitrate of the output video stable as much as possible, but allows short-term bitrate fluctuation. It is suitable for scenarios where you need to minimize overall bitrate while maintaining a certain image quality. 
CBR (Constant Bit Rate): Constant bit rate. In video encoding, it maintains a constant output bitrate regardless of image complexity changes. It is suitable for scenarios with strict network bandwidth requirements, such as live streaming. 
VCRF (Constant Rate Factor): Constant quality factor. It controls video quality by setting a quality factor to achieve constant quality encoding of videos. Bitrate adjustment based on content complexity. Suitable for scenarios where maintaining a certain quality is desired. 
VBR is selected by default.
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Display aspect ratio. Optional values: [1:1, 2:1, default]
Default value: default
                     * @return Sar Display aspect ratio. Optional values: [1:1, 2:1, default]
Default value: default
                     * 
                     */
                    std::string GetSar() const;

                    /**
                     * 设置Display aspect ratio. Optional values: [1:1, 2:1, default]
Default value: default
                     * @param _sar Display aspect ratio. Optional values: [1:1, 2:1, default]
Default value: default
                     * 
                     */
                    void SetSar(const std::string& _sar);

                    /**
                     * 判断参数 Sar 是否已赋值
                     * @return Sar 是否已赋值
                     * 
                     */
                    bool SarHasBeenSet() const;

                    /**
                     * 获取Adaptive I-frame decision. When enabled, Media Processing Service automatically identifies transition points between different scenarios in the video (usually visually distinct frames, such as those of switching from one shot to another) and adaptively inserts keyframes (I-frames) at these points to improve the video's random accessibility and encoding efficiency. Optional values: 
0: Disable adaptive I-frame decision 
1: Enable the adaptive I-frame decision 
Default value: 0	
                     * @return NoScenecut Adaptive I-frame decision. When enabled, Media Processing Service automatically identifies transition points between different scenarios in the video (usually visually distinct frames, such as those of switching from one shot to another) and adaptively inserts keyframes (I-frames) at these points to improve the video's random accessibility and encoding efficiency. Optional values: 
0: Disable adaptive I-frame decision 
1: Enable the adaptive I-frame decision 
Default value: 0	
                     * 
                     */
                    int64_t GetNoScenecut() const;

                    /**
                     * 设置Adaptive I-frame decision. When enabled, Media Processing Service automatically identifies transition points between different scenarios in the video (usually visually distinct frames, such as those of switching from one shot to another) and adaptively inserts keyframes (I-frames) at these points to improve the video's random accessibility and encoding efficiency. Optional values: 
0: Disable adaptive I-frame decision 
1: Enable the adaptive I-frame decision 
Default value: 0	
                     * @param _noScenecut Adaptive I-frame decision. When enabled, Media Processing Service automatically identifies transition points between different scenarios in the video (usually visually distinct frames, such as those of switching from one shot to another) and adaptively inserts keyframes (I-frames) at these points to improve the video's random accessibility and encoding efficiency. Optional values: 
0: Disable adaptive I-frame decision 
1: Enable the adaptive I-frame decision 
Default value: 0	
                     * 
                     */
                    void SetNoScenecut(const int64_t& _noScenecut);

                    /**
                     * 判断参数 NoScenecut 是否已赋值
                     * @return NoScenecut 是否已赋值
                     * 
                     */
                    bool NoScenecutHasBeenSet() const;

                    /**
                     * 获取Bit: 8/10 is supported. Default value: -	
                     * @return BitDepth Bit: 8/10 is supported. Default value: -	
                     * 
                     */
                    int64_t GetBitDepth() const;

                    /**
                     * 设置Bit: 8/10 is supported. Default value: -	
                     * @param _bitDepth Bit: 8/10 is supported. Default value: -	
                     * 
                     */
                    void SetBitDepth(const int64_t& _bitDepth);

                    /**
                     * 判断参数 BitDepth 是否已赋值
                     * @return BitDepth 是否已赋值
                     * 
                     */
                    bool BitDepthHasBeenSet() const;

                    /**
                     * 获取Preserve original timestamp. Optional values: 
0: Disabled 
1: Enabled 
Default value: Disabled	
                     * @return RawPts Preserve original timestamp. Optional values: 
0: Disabled 
1: Enabled 
Default value: Disabled	
                     * 
                     */
                    int64_t GetRawPts() const;

                    /**
                     * 设置Preserve original timestamp. Optional values: 
0: Disabled 
1: Enabled 
Default value: Disabled	
                     * @param _rawPts Preserve original timestamp. Optional values: 
0: Disabled 
1: Enabled 
Default value: Disabled	
                     * 
                     */
                    void SetRawPts(const int64_t& _rawPts);

                    /**
                     * 判断参数 RawPts 是否已赋值
                     * @return RawPts 是否已赋值
                     * 
                     */
                    bool RawPtsHasBeenSet() const;

                    /**
                     * 获取Proportional compression bitrate. When enabled, the output video's bitrate is adjusted according to the specified ratio. After the compression ratio is entered, the system automatically calculates the target output bitrate based on the video source bitrate. Compression ratio range: 0-100, optional values: [0-100] and -1. 
Note: -1 indicates auto.	
                     * @return Compress Proportional compression bitrate. When enabled, the output video's bitrate is adjusted according to the specified ratio. After the compression ratio is entered, the system automatically calculates the target output bitrate based on the video source bitrate. Compression ratio range: 0-100, optional values: [0-100] and -1. 
Note: -1 indicates auto.	
                     * 
                     */
                    int64_t GetCompress() const;

                    /**
                     * 设置Proportional compression bitrate. When enabled, the output video's bitrate is adjusted according to the specified ratio. After the compression ratio is entered, the system automatically calculates the target output bitrate based on the video source bitrate. Compression ratio range: 0-100, optional values: [0-100] and -1. 
Note: -1 indicates auto.	
                     * @param _compress Proportional compression bitrate. When enabled, the output video's bitrate is adjusted according to the specified ratio. After the compression ratio is entered, the system automatically calculates the target output bitrate based on the video source bitrate. Compression ratio range: 0-100, optional values: [0-100] and -1. 
Note: -1 indicates auto.	
                     * 
                     */
                    void SetCompress(const int64_t& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取Segment Duration at Startup
                     * @return SegmentSpecificInfo Segment Duration at Startup
                     * 
                     */
                    SegmentSpecificInfo GetSegmentSpecificInfo() const;

                    /**
                     * 设置Segment Duration at Startup
                     * @param _segmentSpecificInfo Segment Duration at Startup
                     * 
                     */
                    void SetSegmentSpecificInfo(const SegmentSpecificInfo& _segmentSpecificInfo);

                    /**
                     * 判断参数 SegmentSpecificInfo 是否已赋值
                     * @return SegmentSpecificInfo 是否已赋值
                     * 
                     */
                    bool SegmentSpecificInfoHasBeenSet() const;

                    /**
                     * 获取Whether to enable scenario-based settings for the template 
0: disable 
1: enable 
Default value: 0	
Note: SceneType and CompressType field values are effective only when this field value is 1.
                     * @return ScenarioBased Whether to enable scenario-based settings for the template 
0: disable 
1: enable 
Default value: 0	
Note: SceneType and CompressType field values are effective only when this field value is 1.
                     * 
                     */
                    int64_t GetScenarioBased() const;

                    /**
                     * 设置Whether to enable scenario-based settings for the template 
0: disable 
1: enable 
Default value: 0	
Note: SceneType and CompressType field values are effective only when this field value is 1.
                     * @param _scenarioBased Whether to enable scenario-based settings for the template 
0: disable 
1: enable 
Default value: 0	
Note: SceneType and CompressType field values are effective only when this field value is 1.
                     * 
                     */
                    void SetScenarioBased(const int64_t& _scenarioBased);

                    /**
                     * 判断参数 ScenarioBased 是否已赋值
                     * @return ScenarioBased 是否已赋值
                     * 
                     */
                    bool ScenarioBasedHasBeenSet() const;

                    /**
                     * 获取Video scenario. Optional values: 
normal: General transcoding scenario: General transcoding and compression scenario. pgc: PGC HD TV shows and movies: At the time of compression, focus is placed on the viewing experience of TV shows and movies and ROI encoding is performed according to their characteristics, while high-quality contents of videos and audio are retained. 
materials_video: HD materials: Scenario involving material resources, where requirements for image quality are extremely high and there are many transparent images, with almost no visual loss during compression. 
ugc: UGC content: Suitable for a wide range of UGC/short video scenarios, with optimized encoding bitrate for short video characteristics, image quality improvement, and enhanced business QOS/QOE metrics. 
e-commerce_video: Fashion show/e-commerce: During compression, emphasis is placed on detail clarity and ROI enhancement, with a particular focus on maintaining the image quality of the face region. 
educational_video: Education: Compression emphasizes clarity and readability of text and images to help students better understand content and ensure clear conveyance of teaching content.
Default value: normal.
Note: To use this value, ScenarioBased must be 1, otherwise it does not take effect.
                     * @return SceneType Video scenario. Optional values: 
normal: General transcoding scenario: General transcoding and compression scenario. pgc: PGC HD TV shows and movies: At the time of compression, focus is placed on the viewing experience of TV shows and movies and ROI encoding is performed according to their characteristics, while high-quality contents of videos and audio are retained. 
materials_video: HD materials: Scenario involving material resources, where requirements for image quality are extremely high and there are many transparent images, with almost no visual loss during compression. 
ugc: UGC content: Suitable for a wide range of UGC/short video scenarios, with optimized encoding bitrate for short video characteristics, image quality improvement, and enhanced business QOS/QOE metrics. 
e-commerce_video: Fashion show/e-commerce: During compression, emphasis is placed on detail clarity and ROI enhancement, with a particular focus on maintaining the image quality of the face region. 
educational_video: Education: Compression emphasizes clarity and readability of text and images to help students better understand content and ensure clear conveyance of teaching content.
Default value: normal.
Note: To use this value, ScenarioBased must be 1, otherwise it does not take effect.
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置Video scenario. Optional values: 
normal: General transcoding scenario: General transcoding and compression scenario. pgc: PGC HD TV shows and movies: At the time of compression, focus is placed on the viewing experience of TV shows and movies and ROI encoding is performed according to their characteristics, while high-quality contents of videos and audio are retained. 
materials_video: HD materials: Scenario involving material resources, where requirements for image quality are extremely high and there are many transparent images, with almost no visual loss during compression. 
ugc: UGC content: Suitable for a wide range of UGC/short video scenarios, with optimized encoding bitrate for short video characteristics, image quality improvement, and enhanced business QOS/QOE metrics. 
e-commerce_video: Fashion show/e-commerce: During compression, emphasis is placed on detail clarity and ROI enhancement, with a particular focus on maintaining the image quality of the face region. 
educational_video: Education: Compression emphasizes clarity and readability of text and images to help students better understand content and ensure clear conveyance of teaching content.
Default value: normal.
Note: To use this value, ScenarioBased must be 1, otherwise it does not take effect.
                     * @param _sceneType Video scenario. Optional values: 
normal: General transcoding scenario: General transcoding and compression scenario. pgc: PGC HD TV shows and movies: At the time of compression, focus is placed on the viewing experience of TV shows and movies and ROI encoding is performed according to their characteristics, while high-quality contents of videos and audio are retained. 
materials_video: HD materials: Scenario involving material resources, where requirements for image quality are extremely high and there are many transparent images, with almost no visual loss during compression. 
ugc: UGC content: Suitable for a wide range of UGC/short video scenarios, with optimized encoding bitrate for short video characteristics, image quality improvement, and enhanced business QOS/QOE metrics. 
e-commerce_video: Fashion show/e-commerce: During compression, emphasis is placed on detail clarity and ROI enhancement, with a particular focus on maintaining the image quality of the face region. 
educational_video: Education: Compression emphasizes clarity and readability of text and images to help students better understand content and ensure clear conveyance of teaching content.
Default value: normal.
Note: To use this value, ScenarioBased must be 1, otherwise it does not take effect.
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取Transcoding policy. Optional values: 
ultra_compress: Extreme compression: Compared to standard compression, this policy can maximize bitrate compression while ensuring a certain level of image quality, thus greatly saving bandwidth and storage costs. 
standard_compress: Comprehensively optimal: The compression ratio and image quality are balanced, and files are compressed as much as possible without a noticeable reduction in subjective image quality. Only audio and video TSC transcoding fees are charged for the policy. 
high_compress: Bitrate priority: Priority is given to reducing file size, which may result in certain image quality loss. Only audio and video TSC transcoding fees are charged for this policy. 
low_compress: Image quality priority: Priority is given to ensuring image quality, and the size of the compressed file may be relatively large. Only audio and video Top Speed Codec transcoding fees are charged for this policy. 
Default value: standard_compress. 
Note: To watch videos on TV, the ultra_compress policy is not recommended. The billing standard for the ultra_compress policy is TSC transcoding + audio/video enhancement - artifacts removal.
Note: To use this value, ScenarioBased must be 1, otherwise it does not take effect.
                     * @return CompressType Transcoding policy. Optional values: 
ultra_compress: Extreme compression: Compared to standard compression, this policy can maximize bitrate compression while ensuring a certain level of image quality, thus greatly saving bandwidth and storage costs. 
standard_compress: Comprehensively optimal: The compression ratio and image quality are balanced, and files are compressed as much as possible without a noticeable reduction in subjective image quality. Only audio and video TSC transcoding fees are charged for the policy. 
high_compress: Bitrate priority: Priority is given to reducing file size, which may result in certain image quality loss. Only audio and video TSC transcoding fees are charged for this policy. 
low_compress: Image quality priority: Priority is given to ensuring image quality, and the size of the compressed file may be relatively large. Only audio and video Top Speed Codec transcoding fees are charged for this policy. 
Default value: standard_compress. 
Note: To watch videos on TV, the ultra_compress policy is not recommended. The billing standard for the ultra_compress policy is TSC transcoding + audio/video enhancement - artifacts removal.
Note: To use this value, ScenarioBased must be 1, otherwise it does not take effect.
                     * 
                     */
                    std::string GetCompressType() const;

                    /**
                     * 设置Transcoding policy. Optional values: 
ultra_compress: Extreme compression: Compared to standard compression, this policy can maximize bitrate compression while ensuring a certain level of image quality, thus greatly saving bandwidth and storage costs. 
standard_compress: Comprehensively optimal: The compression ratio and image quality are balanced, and files are compressed as much as possible without a noticeable reduction in subjective image quality. Only audio and video TSC transcoding fees are charged for the policy. 
high_compress: Bitrate priority: Priority is given to reducing file size, which may result in certain image quality loss. Only audio and video TSC transcoding fees are charged for this policy. 
low_compress: Image quality priority: Priority is given to ensuring image quality, and the size of the compressed file may be relatively large. Only audio and video Top Speed Codec transcoding fees are charged for this policy. 
Default value: standard_compress. 
Note: To watch videos on TV, the ultra_compress policy is not recommended. The billing standard for the ultra_compress policy is TSC transcoding + audio/video enhancement - artifacts removal.
Note: To use this value, ScenarioBased must be 1, otherwise it does not take effect.
                     * @param _compressType Transcoding policy. Optional values: 
ultra_compress: Extreme compression: Compared to standard compression, this policy can maximize bitrate compression while ensuring a certain level of image quality, thus greatly saving bandwidth and storage costs. 
standard_compress: Comprehensively optimal: The compression ratio and image quality are balanced, and files are compressed as much as possible without a noticeable reduction in subjective image quality. Only audio and video TSC transcoding fees are charged for the policy. 
high_compress: Bitrate priority: Priority is given to reducing file size, which may result in certain image quality loss. Only audio and video TSC transcoding fees are charged for this policy. 
low_compress: Image quality priority: Priority is given to ensuring image quality, and the size of the compressed file may be relatively large. Only audio and video Top Speed Codec transcoding fees are charged for this policy. 
Default value: standard_compress. 
Note: To watch videos on TV, the ultra_compress policy is not recommended. The billing standard for the ultra_compress policy is TSC transcoding + audio/video enhancement - artifacts removal.
Note: To use this value, ScenarioBased must be 1, otherwise it does not take effect.
                     * 
                     */
                    void SetCompressType(const std::string& _compressType);

                    /**
                     * 判断参数 CompressType 是否已赋值
                     * @return CompressType 是否已赋值
                     * 
                     */
                    bool CompressTypeHasBeenSet() const;

                private:

                    /**
                     * Encoding format for video streams. Optional values:
<li>h264: H.264 encoding.</li>
<li>h265: H.265 encoding.</li>
<li>h266: H.266 encoding.</li>
<li>av1: AOMedia Video 1 encoding</li>
<li>vp8: VP8 encoding.</li>
<li>vp9: VP9 encoding.</li>
<li>mpeg2: MPEG2 encoding.</li>
<li>dnxhd: DNxHD encoding.</li>
<li>mv-hevc: MV-HEVC encoding.</li>

Note: The av1 encoding container currently only supports mp4, webm, and mkv.
Note: H.266 encoding containers only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and dnxhd encoding containers currently only support mxf.
Note: The MV-HEVC codec currently only supports mp4, hls, and mov. Among them, the HLS format only supports the MP4 segmented format and requires the input source to be a panoramic video (with multiple views).
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Video frame rate. Value range:
When FpsDenominator is empty, the range is [0, 120], in Hz.
When FpsDenominator is not empty, the Fps/FpsDenominator range is [0, 120].
If the value is 0, the frame rate will be the same as that of the source video.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Bitrate of video stream, value ranges from 0 to [128, 100000], measurement unit: kbps.
If the value is 0, the bitrate of the video will be the same as that of the source video.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Resolution adaptation, available values:
<li>open: Turn on. At this point, Width represents the long side of the video, and Height indicates the short side of the video;</li>
<li>close: Close. At this point, Width represents the video width, and Height indicates the video height.</li>
Note: In self-adaptation mode, Width cannot be less than Height.
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * Maximum value of the video stream width (or long edge) in px. Value range: 0 and [128, 4096].
<li>If both Width and Height are 0, the resolution is the same as the source.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled.</li>
<li>If Width is not 0 but Height is 0, the height will be proportionally scaled.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Maximum value of video stream height (or short side). Value ranges from 0 to [128, 4096]. Measurement unit: px.
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Interval between I-frames, customizable by frame or second. GOP length value ranges from 0 to [1, 100000].
When set to 0, the system will automatically set the gop length.
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * Gop value unit, value range: 
frame: indicates frame 
second: indicates second
Default value: frame
                     */
                    std::string m_gopUnit;
                    bool m_gopUnitHasBeenSet;

                    /**
                     * Filling method, when video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch, stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li>black: Keep black, maintain video aspect ratio, edges filled with black.</li>
<li>White: Leave blank, maintain video aspect ratio, edge remainder filled with white.</li>
<li>gauss: Gaussian blur, maintain video aspect ratio, Gaussian blur filling for the rest of the edges.</li>
<li>smarttailor: intelligent cropping. It smartly selects video images to ensure proportional image cropping.</li>
Default value: black.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * Control factor for constant video bitrate. Value range: [0, 51]. If this parameter is not specified, it means "auto". If there are no special requirements, it is advisable not to specify this parameter.
When the Mode parameter is set to VBR, if the Vcrf value is configured at the same time, MPS processes video in VBR mode with consideration of both Vcrf and Bitrate parameter settings to balance video quality, bitrate, transcoding efficiency, and file size.
When the Mode parameter is set to CRF, the Bitrate setting will become invalid, and encoding is performed based on the Vcrf value.
When the Mode parameter is set to ABR or CBR, the Vcrf value requires no configuration.
Note: When you need to set it to auto, fill in 100.

                     */
                    uint64_t m_vcrf;
                    bool m_vcrfHasBeenSet;

                    /**
                     * Adaptive coding. Available values:
<li>0: Not enabled</li>
<li>1: Turn on</li>
Default value: 0. When this parameter is enabled, multiple streams with different resolutions and bitrates will be self-adaptively generated. Among them, the width and height in VideoTemplate are the maximum resolution among the multiple streams, the bitrate in VideoTemplate is the highest bitrate among the multiple streams, and the vcrf in VideoTemplate is the highest quality among the multiple streams. When resolution, bitrate, and vcrf are not set, the highest resolution generated by the ContentAdaptStream parameter is the resolution of the video source, and the video quality is close to vmaf95. To enable this parameter or learn about billing details, contact your Tencent Cloud business.
                     */
                    uint64_t m_contentAdaptStream;
                    bool m_contentAdaptStreamHasBeenSet;

                    /**
                     * Average shard duration. Value range: (0-10], unit: second
Default value: 10
Note: It is used only in the HLS format.
                     */
                    uint64_t m_hlsTime;
                    bool m_hlsTimeHasBeenSet;

                    /**
                     * hls fragment type, available values:
<li>0: HLS+TS segment.</li>
<li>2:HLS+TS byte range</li>
<li>7: HLS+MP4 segment.</li>
<li>5:HLS+MP4 byte range</li>
Default value: 0
Note: This field is used for ordinary/TSC transcoding settings and does not take effect for adaptive bitrate streams. If needed, you can use the outer field to configure the shard type for adaptive bitrate streams.
                     */
                    int64_t m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                    /**
                     * Denominator of the frame rate
Note: The value must be greater than 0.
                     */
                    int64_t m_fpsDenominator;
                    bool m_fpsDenominatorHasBeenSet;

                    /**
                     * 3D video splicing mode, only mv-hevc, takes effect for 3D video, available values:
<li>side_by_side: side-by-side layout of the original video content.</li>
<li>top_bottom: top-bottom layout arrangement of the original video content.</li>
Billing is based on the segmented resolution dimension to report usage amount and cost.
Default value: side_by_side
                     */
                    std::string m_stereo3dType;
                    bool m_stereo3dTypeHasBeenSet;

                    /**
                     * Profile, suitable for different scenarios. 
baseline: It only supports I/P-frames and non-interlaced scenarios, and is suitable for scenarios such as video calls and mobile videos. 
Mainstream Profile, providing I-frames, P-frames, and B-frames, and supporting both interlaced and non-interlaced modes. It is primarily used in mainstream audio and video consumption products such as video players and streaming media transmission devices. 
high: The highest encoding level, adding 8X8 prediction to the Main Profile and supporting custom quantification. Widely used in Blu-ray storage and HDTV scenarios.
default: automatic filling along with the original video

This configuration appears only when the encoding standard is set to H264. Default: default
                     */
                    std::string m_videoProfile;
                    bool m_videoProfileHasBeenSet;

                    /**
                     * Encoder level. Default value: auto ("")
If the encoding standard is set to H264, the following options are supported: "", 1, 1.1, -1.2, 1.3, 2, 2.1, 2.2, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, and 5.1. 
If the encoding standard is set to H265, the following options are supported: "", 1, 2, 2.1, 3, 3.1, 4, 4.1, -5, 5.1, 5.2, 6, 6.1, 6.2, and 8.5.
                     */
                    std::string m_videoLevel;
                    bool m_videoLevelHasBeenSet;

                    /**
                     * Maximum number of consecutive B-frames. The default is auto, and 0 - 16 and -1 are supported.
Note:
-1 indicates auto.	
                     */
                    int64_t m_bframes;
                    bool m_bframesHasBeenSet;

                    /**
                     * Bitrate control mode. Optional values: 
VBR (Variable Bit Rate): Dynamic bitrate adjusts the output bitrate based on the complexity of the video image to ensure higher image quality. It is suitable for storage scenarios and applications with high image quality requirements. 
ABR (Average Bit Rate): Average bitrate. It aims to keep the average bitrate of the output video stable as much as possible, but allows short-term bitrate fluctuation. It is suitable for scenarios where you need to minimize overall bitrate while maintaining a certain image quality. 
CBR (Constant Bit Rate): Constant bit rate. In video encoding, it maintains a constant output bitrate regardless of image complexity changes. It is suitable for scenarios with strict network bandwidth requirements, such as live streaming. 
VCRF (Constant Rate Factor): Constant quality factor. It controls video quality by setting a quality factor to achieve constant quality encoding of videos. Bitrate adjustment based on content complexity. Suitable for scenarios where maintaining a certain quality is desired. 
VBR is selected by default.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Display aspect ratio. Optional values: [1:1, 2:1, default]
Default value: default
                     */
                    std::string m_sar;
                    bool m_sarHasBeenSet;

                    /**
                     * Adaptive I-frame decision. When enabled, Media Processing Service automatically identifies transition points between different scenarios in the video (usually visually distinct frames, such as those of switching from one shot to another) and adaptively inserts keyframes (I-frames) at these points to improve the video's random accessibility and encoding efficiency. Optional values: 
0: Disable adaptive I-frame decision 
1: Enable the adaptive I-frame decision 
Default value: 0	
                     */
                    int64_t m_noScenecut;
                    bool m_noScenecutHasBeenSet;

                    /**
                     * Bit: 8/10 is supported. Default value: -	
                     */
                    int64_t m_bitDepth;
                    bool m_bitDepthHasBeenSet;

                    /**
                     * Preserve original timestamp. Optional values: 
0: Disabled 
1: Enabled 
Default value: Disabled	
                     */
                    int64_t m_rawPts;
                    bool m_rawPtsHasBeenSet;

                    /**
                     * Proportional compression bitrate. When enabled, the output video's bitrate is adjusted according to the specified ratio. After the compression ratio is entered, the system automatically calculates the target output bitrate based on the video source bitrate. Compression ratio range: 0-100, optional values: [0-100] and -1. 
Note: -1 indicates auto.	
                     */
                    int64_t m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * Segment Duration at Startup
                     */
                    SegmentSpecificInfo m_segmentSpecificInfo;
                    bool m_segmentSpecificInfoHasBeenSet;

                    /**
                     * Whether to enable scenario-based settings for the template 
0: disable 
1: enable 
Default value: 0	
Note: SceneType and CompressType field values are effective only when this field value is 1.
                     */
                    int64_t m_scenarioBased;
                    bool m_scenarioBasedHasBeenSet;

                    /**
                     * Video scenario. Optional values: 
normal: General transcoding scenario: General transcoding and compression scenario. pgc: PGC HD TV shows and movies: At the time of compression, focus is placed on the viewing experience of TV shows and movies and ROI encoding is performed according to their characteristics, while high-quality contents of videos and audio are retained. 
materials_video: HD materials: Scenario involving material resources, where requirements for image quality are extremely high and there are many transparent images, with almost no visual loss during compression. 
ugc: UGC content: Suitable for a wide range of UGC/short video scenarios, with optimized encoding bitrate for short video characteristics, image quality improvement, and enhanced business QOS/QOE metrics. 
e-commerce_video: Fashion show/e-commerce: During compression, emphasis is placed on detail clarity and ROI enhancement, with a particular focus on maintaining the image quality of the face region. 
educational_video: Education: Compression emphasizes clarity and readability of text and images to help students better understand content and ensure clear conveyance of teaching content.
Default value: normal.
Note: To use this value, ScenarioBased must be 1, otherwise it does not take effect.
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * Transcoding policy. Optional values: 
ultra_compress: Extreme compression: Compared to standard compression, this policy can maximize bitrate compression while ensuring a certain level of image quality, thus greatly saving bandwidth and storage costs. 
standard_compress: Comprehensively optimal: The compression ratio and image quality are balanced, and files are compressed as much as possible without a noticeable reduction in subjective image quality. Only audio and video TSC transcoding fees are charged for the policy. 
high_compress: Bitrate priority: Priority is given to reducing file size, which may result in certain image quality loss. Only audio and video TSC transcoding fees are charged for this policy. 
low_compress: Image quality priority: Priority is given to ensuring image quality, and the size of the compressed file may be relatively large. Only audio and video Top Speed Codec transcoding fees are charged for this policy. 
Default value: standard_compress. 
Note: To watch videos on TV, the ultra_compress policy is not recommended. The billing standard for the ultra_compress policy is TSC transcoding + audio/video enhancement - artifacts removal.
Note: To use this value, ScenarioBased must be 1, otherwise it does not take effect.
                     */
                    std::string m_compressType;
                    bool m_compressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_
