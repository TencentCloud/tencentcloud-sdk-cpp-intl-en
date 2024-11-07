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
                class VideoTemplateInfo : public AbstractModel
                {
                public:
                    VideoTemplateInfo();
                    ~VideoTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Encoding format for video streams. Optional values:
<li>h264: H.264 encoding</li>
<li>h265: H.265 encoding</li>
<li>h266: H.266 encoding</li>
<li>av1: AOMedia Video 1 encoding</li>
<li>vp8: VP8 encoding</li>
<li>vp9: VP9 encoding</li>
<li>mpeg2: MPEG2 encoding</li>
<li>dnxhd: DNxHD encoding</li>
<li>mv-hevc: MV-HEVC encoding</li>

Note: AV1 encoding containers currently only support mp4, webm, and mkv.
Note: H.266 encoding containers currently only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and DNxHD encoding containers currently only support mxf.
Note: MV-HEVC encoding containers only support mp4, hls, and mov. Among them, the hls format only supports mp4 segmentation format.
                     * @return Codec Encoding format for video streams. Optional values:
<li>h264: H.264 encoding</li>
<li>h265: H.265 encoding</li>
<li>h266: H.266 encoding</li>
<li>av1: AOMedia Video 1 encoding</li>
<li>vp8: VP8 encoding</li>
<li>vp9: VP9 encoding</li>
<li>mpeg2: MPEG2 encoding</li>
<li>dnxhd: DNxHD encoding</li>
<li>mv-hevc: MV-HEVC encoding</li>

Note: AV1 encoding containers currently only support mp4, webm, and mkv.
Note: H.266 encoding containers currently only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and DNxHD encoding containers currently only support mxf.
Note: MV-HEVC encoding containers only support mp4, hls, and mov. Among them, the hls format only supports mp4 segmentation format.
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Encoding format for video streams. Optional values:
<li>h264: H.264 encoding</li>
<li>h265: H.265 encoding</li>
<li>h266: H.266 encoding</li>
<li>av1: AOMedia Video 1 encoding</li>
<li>vp8: VP8 encoding</li>
<li>vp9: VP9 encoding</li>
<li>mpeg2: MPEG2 encoding</li>
<li>dnxhd: DNxHD encoding</li>
<li>mv-hevc: MV-HEVC encoding</li>

Note: AV1 encoding containers currently only support mp4, webm, and mkv.
Note: H.266 encoding containers currently only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and DNxHD encoding containers currently only support mxf.
Note: MV-HEVC encoding containers only support mp4, hls, and mov. Among them, the hls format only supports mp4 segmentation format.
                     * @param _codec Encoding format for video streams. Optional values:
<li>h264: H.264 encoding</li>
<li>h265: H.265 encoding</li>
<li>h266: H.266 encoding</li>
<li>av1: AOMedia Video 1 encoding</li>
<li>vp8: VP8 encoding</li>
<li>vp9: VP9 encoding</li>
<li>mpeg2: MPEG2 encoding</li>
<li>dnxhd: DNxHD encoding</li>
<li>mv-hevc: MV-HEVC encoding</li>

Note: AV1 encoding containers currently only support mp4, webm, and mkv.
Note: H.266 encoding containers currently only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and DNxHD encoding containers currently only support mxf.
Note: MV-HEVC encoding containers only support mp4, hls, and mov. Among them, the hls format only supports mp4 segmentation format.
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
                     * 获取Bitrate of a video stream, in kbps. Value range: 0 and [128, 100000].If the value is 0, the bitrate of the video will be the same as that of the source video.
                     * @return Bitrate Bitrate of a video stream, in kbps. Value range: 0 and [128, 100000].If the value is 0, the bitrate of the video will be the same as that of the source video.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of a video stream, in kbps. Value range: 0 and [128, 100000].If the value is 0, the bitrate of the video will be the same as that of the source video.
                     * @param _bitrate Bitrate of a video stream, in kbps. Value range: 0 and [128, 100000].If the value is 0, the bitrate of the video will be the same as that of the source video.
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
                     * 获取Interval between I-frames (keyframes), which can be customized in frames or seconds. GOP value range: 0 and [1, 100000].
If this parameter is 0 or left blank, the system will automatically set the GOP length.
                     * @return Gop Interval between I-frames (keyframes), which can be customized in frames or seconds. GOP value range: 0 and [1, 100000].
If this parameter is 0 or left blank, the system will automatically set the GOP length.
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置Interval between I-frames (keyframes), which can be customized in frames or seconds. GOP value range: 0 and [1, 100000].
If this parameter is 0 or left blank, the system will automatically set the GOP length.
                     * @param _gop Interval between I-frames (keyframes), which can be customized in frames or seconds. GOP value range: 0 and [1, 100000].
If this parameter is 0 or left blank, the system will automatically set the GOP length.
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
                     * 获取GOP value unit. Optional values:
frame: indicates frame
second: indicates second
Default value: frame
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return GopUnit GOP value unit. Optional values:
frame: indicates frame
second: indicates second
Default value: frame
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetGopUnit() const;

                    /**
                     * 设置GOP value unit. Optional values:
frame: indicates frame
second: indicates second
Default value: frame
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _gopUnit GOP value unit. Optional values:
frame: indicates frame
second: indicates second
Default value: frame
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Filling mode. When the configured aspect ratio parameter for video streams differs from the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling modes:
<li>stretch: Each frame is stretched to fill the entire screen, which may cause the transcoded video to be "flattened" or "stretched".</li>
<li>black: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with black.</li>
<li>white: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with white.</li>
<li>gauss: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with a Gaussian blur.</li>

<li>smarttailor: Video images are smartly selected to ensure proportional image cropping.</li>
Default value: black.
Note: Only stretch and black are supported for adaptive bitrate streaming.
                     * @return FillType Filling mode. When the configured aspect ratio parameter for video streams differs from the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling modes:
<li>stretch: Each frame is stretched to fill the entire screen, which may cause the transcoded video to be "flattened" or "stretched".</li>
<li>black: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with black.</li>
<li>white: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with white.</li>
<li>gauss: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with a Gaussian blur.</li>

<li>smarttailor: Video images are smartly selected to ensure proportional image cropping.</li>
Default value: black.
Note: Only stretch and black are supported for adaptive bitrate streaming.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Filling mode. When the configured aspect ratio parameter for video streams differs from the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling modes:
<li>stretch: Each frame is stretched to fill the entire screen, which may cause the transcoded video to be "flattened" or "stretched".</li>
<li>black: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with black.</li>
<li>white: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with white.</li>
<li>gauss: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with a Gaussian blur.</li>

<li>smarttailor: Video images are smartly selected to ensure proportional image cropping.</li>
Default value: black.
Note: Only stretch and black are supported for adaptive bitrate streaming.
                     * @param _fillType Filling mode. When the configured aspect ratio parameter for video streams differs from the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling modes:
<li>stretch: Each frame is stretched to fill the entire screen, which may cause the transcoded video to be "flattened" or "stretched".</li>
<li>black: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with black.</li>
<li>white: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with white.</li>
<li>gauss: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with a Gaussian blur.</li>

<li>smarttailor: Video images are smartly selected to ensure proportional image cropping.</li>
Default value: black.
Note: Only stretch and black are supported for adaptive bitrate streaming.
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
                     * 获取Control factor for constant video bitrate. Value range: [0, 51].
If this parameter is specified, the bitrate control mode for the CRF will be used for transcoding (the video bitrate will no longer take effect).
It is recommended not to specify this parameter if there are no special requirements.

Note:
If Mode is set to ABR, the Vcrf value does not need to be configured.
If Mode is set to CBR, the Vcrf value does not need to be configured.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Vcrf Control factor for constant video bitrate. Value range: [0, 51].
If this parameter is specified, the bitrate control mode for the CRF will be used for transcoding (the video bitrate will no longer take effect).
It is recommended not to specify this parameter if there are no special requirements.

Note:
If Mode is set to ABR, the Vcrf value does not need to be configured.
If Mode is set to CBR, the Vcrf value does not need to be configured.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetVcrf() const;

                    /**
                     * 设置Control factor for constant video bitrate. Value range: [0, 51].
If this parameter is specified, the bitrate control mode for the CRF will be used for transcoding (the video bitrate will no longer take effect).
It is recommended not to specify this parameter if there are no special requirements.

Note:
If Mode is set to ABR, the Vcrf value does not need to be configured.
If Mode is set to CBR, the Vcrf value does not need to be configured.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _vcrf Control factor for constant video bitrate. Value range: [0, 51].
If this parameter is specified, the bitrate control mode for the CRF will be used for transcoding (the video bitrate will no longer take effect).
It is recommended not to specify this parameter if there are no special requirements.

Note:
If Mode is set to ABR, the Vcrf value does not need to be configured.
If Mode is set to CBR, the Vcrf value does not need to be configured.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Average segment duration. Value range: (0-10], unit: second
Default value: 10
Note: It can be used only in the container format of hls.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return HlsTime Average segment duration. Value range: (0-10], unit: second
Default value: 10
Note: It can be used only in the container format of hls.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetHlsTime() const;

                    /**
                     * 设置Average segment duration. Value range: (0-10], unit: second
Default value: 10
Note: It can be used only in the container format of hls.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _hlsTime Average segment duration. Value range: (0-10], unit: second
Default value: 10
Note: It can be used only in the container format of hls.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取HLS segment type. Valid values:
<li>0: HLS+TS segment.</li>
<li>2: HLS+TS byte range.</li>
<li>7: HLS+MP4 segment.</li>
<li>5: HLS+MP4 byte range.</li>
Default value: 0

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SegmentType HLS segment type. Valid values:
<li>0: HLS+TS segment.</li>
<li>2: HLS+TS byte range.</li>
<li>7: HLS+MP4 segment.</li>
<li>5: HLS+MP4 byte range.</li>
Default value: 0

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSegmentType() const;

                    /**
                     * 设置HLS segment type. Valid values:
<li>0: HLS+TS segment.</li>
<li>2: HLS+TS byte range.</li>
<li>7: HLS+MP4 segment.</li>
<li>5: HLS+MP4 byte range.</li>
Default value: 0

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _segmentType HLS segment type. Valid values:
<li>0: HLS+TS segment.</li>
<li>2: HLS+TS byte range.</li>
<li>7: HLS+MP4 segment.</li>
<li>5: HLS+MP4 byte range.</li>
Default value: 0

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Denominator of the frame rate.
Note: The value must be greater than 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FpsDenominator Denominator of the frame rate.
Note: The value must be greater than 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFpsDenominator() const;

                    /**
                     * 设置Denominator of the frame rate.
Note: The value must be greater than 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fpsDenominator Denominator of the frame rate.
Note: The value must be greater than 0.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取3D video splicing mode, which is only valid for MV-HEVC 3D videos. Valid values:
<li>side_by_side: side-by-side view.</li>
<li>top_bottom: top-bottom view.</li>
Default value: side_by_side.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Stereo3dType 3D video splicing mode, which is only valid for MV-HEVC 3D videos. Valid values:
<li>side_by_side: side-by-side view.</li>
<li>top_bottom: top-bottom view.</li>
Default value: side_by_side.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStereo3dType() const;

                    /**
                     * 设置3D video splicing mode, which is only valid for MV-HEVC 3D videos. Valid values:
<li>side_by_side: side-by-side view.</li>
<li>top_bottom: top-bottom view.</li>
Default value: side_by_side.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stereo3dType 3D video splicing mode, which is only valid for MV-HEVC 3D videos. Valid values:
<li>side_by_side: side-by-side view.</li>
<li>top_bottom: top-bottom view.</li>
Default value: side_by_side.
Note: This field may return null, indicating that no valid values can be obtained.
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
main: It offers I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices.
high: the highest encoding level, with 8x8 prediction added to the main profile and support for custom quantification. It is widely used in scenarios such as Blu-ray storage and HDTV.
default: automatic filling along with the original video.    

This configuration appears only when the encoding standard is set to H264. baseline/main/high is supported. Default value: default
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VideoProfile Profile, suitable for different scenarios.
baseline: It only supports I/P-frames and non-interlaced scenarios, and is suitable for scenarios such as video calls and mobile videos.
main: It offers I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices.
high: the highest encoding level, with 8x8 prediction added to the main profile and support for custom quantification. It is widely used in scenarios such as Blu-ray storage and HDTV.
default: automatic filling along with the original video.    

This configuration appears only when the encoding standard is set to H264. baseline/main/high is supported. Default value: default
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVideoProfile() const;

                    /**
                     * 设置Profile, suitable for different scenarios.
baseline: It only supports I/P-frames and non-interlaced scenarios, and is suitable for scenarios such as video calls and mobile videos.
main: It offers I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices.
high: the highest encoding level, with 8x8 prediction added to the main profile and support for custom quantification. It is widely used in scenarios such as Blu-ray storage and HDTV.
default: automatic filling along with the original video.    

This configuration appears only when the encoding standard is set to H264. baseline/main/high is supported. Default value: default
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _videoProfile Profile, suitable for different scenarios.
baseline: It only supports I/P-frames and non-interlaced scenarios, and is suitable for scenarios such as video calls and mobile videos.
main: It offers I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices.
high: the highest encoding level, with 8x8 prediction added to the main profile and support for custom quantification. It is widely used in scenarios such as Blu-ray storage and HDTV.
default: automatic filling along with the original video.    

This configuration appears only when the encoding standard is set to H264. baseline/main/high is supported. Default value: default
Note: This field may return null, indicating that no valid value can be obtained.
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
If the encoding standard is set to H264, the following options are supported: "", 1, 1.1, 1.2, 1.3, 2, 2.1, 2.2, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, and 5.1.
If the encoding standard is set to H265, the following options are supported: "", 1, 2, 2.1, 3, 3.1, 4, 4.1, 5, 5.1, 5.2, 6, 6.1, 6.2, and 8.5.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VideoLevel Encoder level. Default value: auto ("")
If the encoding standard is set to H264, the following options are supported: "", 1, 1.1, 1.2, 1.3, 2, 2.1, 2.2, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, and 5.1.
If the encoding standard is set to H265, the following options are supported: "", 1, 2, 2.1, 3, 3.1, 4, 4.1, 5, 5.1, 5.2, 6, 6.1, 6.2, and 8.5.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVideoLevel() const;

                    /**
                     * 设置Encoder level. Default value: auto ("")
If the encoding standard is set to H264, the following options are supported: "", 1, 1.1, 1.2, 1.3, 2, 2.1, 2.2, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, and 5.1.
If the encoding standard is set to H265, the following options are supported: "", 1, 2, 2.1, 3, 3.1, 4, 4.1, 5, 5.1, 5.2, 6, 6.1, 6.2, and 8.5.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _videoLevel Encoder level. Default value: auto ("")
If the encoding standard is set to H264, the following options are supported: "", 1, 1.1, 1.2, 1.3, 2, 2.1, 2.2, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, and 5.1.
If the encoding standard is set to H265, the following options are supported: "", 1, 2, 2.1, 3, 3.1, 4, 4.1, 5, 5.1, 5.2, 6, 6.1, 6.2, and 8.5.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Number of B-frames between reference frames. The default is auto, and a range of 0 - 16 is supported.
Note: Leaving it blank means using the auto option.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Bframes Number of B-frames between reference frames. The default is auto, and a range of 0 - 16 is supported.
Note: Leaving it blank means using the auto option.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetBframes() const;

                    /**
                     * 设置Number of B-frames between reference frames. The default is auto, and a range of 0 - 16 is supported.
Note: Leaving it blank means using the auto option.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _bframes Number of B-frames between reference frames. The default is auto, and a range of 0 - 16 is supported.
Note: Leaving it blank means using the auto option.
Note: This field may return null, indicating that no valid value can be obtained.
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
VBR: variable bitrate. The output bitrate is adjusted based on the complexity of the video image, ensuring higher image quality. This mode is suitable for storage scenarios as well as applications with high image quality requirements.
ABR: average bitrate. The average bitrate of the output video is kept stable to the greatest extent, but short-term bitrate fluctuations are allowed. This mode is suitable for scenarios where it is necessary to minimize the overall bitrate while a certain quality is maintained.
CBR: constant bitrate. The output bitrate remains constant during the video encoding process, regardless of changes in image complexity. This mode is suitable for scenarios with strict network bandwidth requirements, such as live streaming.
VCRF: constant rate factor. The video quality is controlled by setting a quality factor, achieving constant quality encoding of videos. The bitrate is automatically adjusted based on the complexity of the content. This mode is suitable for scenarios where maintaining a certain quality is desired.
VBR is selected by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Mode Bitrate control mode. Optional values:
VBR: variable bitrate. The output bitrate is adjusted based on the complexity of the video image, ensuring higher image quality. This mode is suitable for storage scenarios as well as applications with high image quality requirements.
ABR: average bitrate. The average bitrate of the output video is kept stable to the greatest extent, but short-term bitrate fluctuations are allowed. This mode is suitable for scenarios where it is necessary to minimize the overall bitrate while a certain quality is maintained.
CBR: constant bitrate. The output bitrate remains constant during the video encoding process, regardless of changes in image complexity. This mode is suitable for scenarios with strict network bandwidth requirements, such as live streaming.
VCRF: constant rate factor. The video quality is controlled by setting a quality factor, achieving constant quality encoding of videos. The bitrate is automatically adjusted based on the complexity of the content. This mode is suitable for scenarios where maintaining a certain quality is desired.
VBR is selected by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Bitrate control mode. Optional values:
VBR: variable bitrate. The output bitrate is adjusted based on the complexity of the video image, ensuring higher image quality. This mode is suitable for storage scenarios as well as applications with high image quality requirements.
ABR: average bitrate. The average bitrate of the output video is kept stable to the greatest extent, but short-term bitrate fluctuations are allowed. This mode is suitable for scenarios where it is necessary to minimize the overall bitrate while a certain quality is maintained.
CBR: constant bitrate. The output bitrate remains constant during the video encoding process, regardless of changes in image complexity. This mode is suitable for scenarios with strict network bandwidth requirements, such as live streaming.
VCRF: constant rate factor. The video quality is controlled by setting a quality factor, achieving constant quality encoding of videos. The bitrate is automatically adjusted based on the complexity of the content. This mode is suitable for scenarios where maintaining a certain quality is desired.
VBR is selected by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _mode Bitrate control mode. Optional values:
VBR: variable bitrate. The output bitrate is adjusted based on the complexity of the video image, ensuring higher image quality. This mode is suitable for storage scenarios as well as applications with high image quality requirements.
ABR: average bitrate. The average bitrate of the output video is kept stable to the greatest extent, but short-term bitrate fluctuations are allowed. This mode is suitable for scenarios where it is necessary to minimize the overall bitrate while a certain quality is maintained.
CBR: constant bitrate. The output bitrate remains constant during the video encoding process, regardless of changes in image complexity. This mode is suitable for scenarios with strict network bandwidth requirements, such as live streaming.
VCRF: constant rate factor. The video quality is controlled by setting a quality factor, achieving constant quality encoding of videos. The bitrate is automatically adjusted based on the complexity of the content. This mode is suitable for scenarios where maintaining a certain quality is desired.
VBR is selected by default.
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Sar Display aspect ratio. Optional values: [1:1, 2:1, default]
Default value: default
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSar() const;

                    /**
                     * 设置Display aspect ratio. Optional values: [1:1, 2:1, default]
Default value: default
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sar Display aspect ratio. Optional values: [1:1, 2:1, default]
Default value: default
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Adaptive I-frame decision. When it is enabled, Media Processing Service will automatically identify transition points between different scenarios in the video (usually they are visually distinct frames, such as those of switching from one shot to another) and adaptively insert keyframes (I-frames) at these points to improve the random accessibility and encoding efficiency of the video. Optional values:
0: Disable the adaptive I-frame decision 
1: Enable the adaptive I-frame decision
Default value: 0

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NoScenecut Adaptive I-frame decision. When it is enabled, Media Processing Service will automatically identify transition points between different scenarios in the video (usually they are visually distinct frames, such as those of switching from one shot to another) and adaptively insert keyframes (I-frames) at these points to improve the random accessibility and encoding efficiency of the video. Optional values:
0: Disable the adaptive I-frame decision 
1: Enable the adaptive I-frame decision
Default value: 0

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetNoScenecut() const;

                    /**
                     * 设置Adaptive I-frame decision. When it is enabled, Media Processing Service will automatically identify transition points between different scenarios in the video (usually they are visually distinct frames, such as those of switching from one shot to another) and adaptively insert keyframes (I-frames) at these points to improve the random accessibility and encoding efficiency of the video. Optional values:
0: Disable the adaptive I-frame decision 
1: Enable the adaptive I-frame decision
Default value: 0

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _noScenecut Adaptive I-frame decision. When it is enabled, Media Processing Service will automatically identify transition points between different scenarios in the video (usually they are visually distinct frames, such as those of switching from one shot to another) and adaptively insert keyframes (I-frames) at these points to improve the random accessibility and encoding efficiency of the video. Optional values:
0: Disable the adaptive I-frame decision 
1: Enable the adaptive I-frame decision
Default value: 0

Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Bit: 8/10 is supported. Default value: 8
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BitDepth Bit: 8/10 is supported. Default value: 8
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetBitDepth() const;

                    /**
                     * 设置Bit: 8/10 is supported. Default value: 8
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _bitDepth Bit: 8/10 is supported. Default value: 8
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Preservation of original timestamp. Optional values:
0: Disabled
1: Enabled
Default value: Disabled
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RawPts Preservation of original timestamp. Optional values:
0: Disabled
1: Enabled
Default value: Disabled
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetRawPts() const;

                    /**
                     * 设置Preservation of original timestamp. Optional values:
0: Disabled
1: Enabled
Default value: Disabled
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _rawPts Preservation of original timestamp. Optional values:
0: Disabled
1: Enabled
Default value: Disabled
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Proportional compression bitrate. When it is enabled, the bitrate of the output video will be adjusted according to the proportion. After the compression ratio is entered, the system will automatically calculate the target output bitrate based on the source video bitrate. Compression ratio range: 0-100
Leaving this value blank means it is not enabled by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Compress Proportional compression bitrate. When it is enabled, the bitrate of the output video will be adjusted according to the proportion. After the compression ratio is entered, the system will automatically calculate the target output bitrate based on the source video bitrate. Compression ratio range: 0-100
Leaving this value blank means it is not enabled by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetCompress() const;

                    /**
                     * 设置Proportional compression bitrate. When it is enabled, the bitrate of the output video will be adjusted according to the proportion. After the compression ratio is entered, the system will automatically calculate the target output bitrate based on the source video bitrate. Compression ratio range: 0-100
Leaving this value blank means it is not enabled by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _compress Proportional compression bitrate. When it is enabled, the bitrate of the output video will be adjusted according to the proportion. After the compression ratio is entered, the system will automatically calculate the target output bitrate based on the source video bitrate. Compression ratio range: 0-100
Leaving this value blank means it is not enabled by default.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Special segment configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SegmentSpecificInfo Special segment configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SegmentSpecificInfo GetSegmentSpecificInfo() const;

                    /**
                     * 设置Special segment configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _segmentSpecificInfo Special segment configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSegmentSpecificInfo(const SegmentSpecificInfo& _segmentSpecificInfo);

                    /**
                     * 判断参数 SegmentSpecificInfo 是否已赋值
                     * @return SegmentSpecificInfo 是否已赋值
                     * 
                     */
                    bool SegmentSpecificInfoHasBeenSet() const;

                private:

                    /**
                     * Encoding format for video streams. Optional values:
<li>h264: H.264 encoding</li>
<li>h265: H.265 encoding</li>
<li>h266: H.266 encoding</li>
<li>av1: AOMedia Video 1 encoding</li>
<li>vp8: VP8 encoding</li>
<li>vp9: VP9 encoding</li>
<li>mpeg2: MPEG2 encoding</li>
<li>dnxhd: DNxHD encoding</li>
<li>mv-hevc: MV-HEVC encoding</li>

Note: AV1 encoding containers currently only support mp4, webm, and mkv.
Note: H.266 encoding containers currently only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and DNxHD encoding containers currently only support mxf.
Note: MV-HEVC encoding containers only support mp4, hls, and mov. Among them, the hls format only supports mp4 segmentation format.
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
                     * Bitrate of a video stream, in kbps. Value range: 0 and [128, 100000].If the value is 0, the bitrate of the video will be the same as that of the source video.
                     */
                    int64_t m_bitrate;
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
                     * Interval between I-frames (keyframes), which can be customized in frames or seconds. GOP value range: 0 and [1, 100000].
If this parameter is 0 or left blank, the system will automatically set the GOP length.
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * GOP value unit. Optional values:
frame: indicates frame
second: indicates second
Default value: frame
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_gopUnit;
                    bool m_gopUnitHasBeenSet;

                    /**
                     * Filling mode. When the configured aspect ratio parameter for video streams differs from the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling modes:
<li>stretch: Each frame is stretched to fill the entire screen, which may cause the transcoded video to be "flattened" or "stretched".</li>
<li>black: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with black.</li>
<li>white: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with white.</li>
<li>gauss: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with a Gaussian blur.</li>

<li>smarttailor: Video images are smartly selected to ensure proportional image cropping.</li>
Default value: black.
Note: Only stretch and black are supported for adaptive bitrate streaming.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * Control factor for constant video bitrate. Value range: [0, 51].
If this parameter is specified, the bitrate control mode for the CRF will be used for transcoding (the video bitrate will no longer take effect).
It is recommended not to specify this parameter if there are no special requirements.

Note:
If Mode is set to ABR, the Vcrf value does not need to be configured.
If Mode is set to CBR, the Vcrf value does not need to be configured.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_vcrf;
                    bool m_vcrfHasBeenSet;

                    /**
                     * Average segment duration. Value range: (0-10], unit: second
Default value: 10
Note: It can be used only in the container format of hls.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_hlsTime;
                    bool m_hlsTimeHasBeenSet;

                    /**
                     * HLS segment type. Valid values:
<li>0: HLS+TS segment.</li>
<li>2: HLS+TS byte range.</li>
<li>7: HLS+MP4 segment.</li>
<li>5: HLS+MP4 byte range.</li>
Default value: 0

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                    /**
                     * Denominator of the frame rate.
Note: The value must be greater than 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fpsDenominator;
                    bool m_fpsDenominatorHasBeenSet;

                    /**
                     * 3D video splicing mode, which is only valid for MV-HEVC 3D videos. Valid values:
<li>side_by_side: side-by-side view.</li>
<li>top_bottom: top-bottom view.</li>
Default value: side_by_side.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stereo3dType;
                    bool m_stereo3dTypeHasBeenSet;

                    /**
                     * Profile, suitable for different scenarios.
baseline: It only supports I/P-frames and non-interlaced scenarios, and is suitable for scenarios such as video calls and mobile videos.
main: It offers I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices.
high: the highest encoding level, with 8x8 prediction added to the main profile and support for custom quantification. It is widely used in scenarios such as Blu-ray storage and HDTV.
default: automatic filling along with the original video.    

This configuration appears only when the encoding standard is set to H264. baseline/main/high is supported. Default value: default
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_videoProfile;
                    bool m_videoProfileHasBeenSet;

                    /**
                     * Encoder level. Default value: auto ("")
If the encoding standard is set to H264, the following options are supported: "", 1, 1.1, 1.2, 1.3, 2, 2.1, 2.2, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, and 5.1.
If the encoding standard is set to H265, the following options are supported: "", 1, 2, 2.1, 3, 3.1, 4, 4.1, 5, 5.1, 5.2, 6, 6.1, 6.2, and 8.5.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_videoLevel;
                    bool m_videoLevelHasBeenSet;

                    /**
                     * Number of B-frames between reference frames. The default is auto, and a range of 0 - 16 is supported.
Note: Leaving it blank means using the auto option.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_bframes;
                    bool m_bframesHasBeenSet;

                    /**
                     * Bitrate control mode. Optional values:
VBR: variable bitrate. The output bitrate is adjusted based on the complexity of the video image, ensuring higher image quality. This mode is suitable for storage scenarios as well as applications with high image quality requirements.
ABR: average bitrate. The average bitrate of the output video is kept stable to the greatest extent, but short-term bitrate fluctuations are allowed. This mode is suitable for scenarios where it is necessary to minimize the overall bitrate while a certain quality is maintained.
CBR: constant bitrate. The output bitrate remains constant during the video encoding process, regardless of changes in image complexity. This mode is suitable for scenarios with strict network bandwidth requirements, such as live streaming.
VCRF: constant rate factor. The video quality is controlled by setting a quality factor, achieving constant quality encoding of videos. The bitrate is automatically adjusted based on the complexity of the content. This mode is suitable for scenarios where maintaining a certain quality is desired.
VBR is selected by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Display aspect ratio. Optional values: [1:1, 2:1, default]
Default value: default
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sar;
                    bool m_sarHasBeenSet;

                    /**
                     * Adaptive I-frame decision. When it is enabled, Media Processing Service will automatically identify transition points between different scenarios in the video (usually they are visually distinct frames, such as those of switching from one shot to another) and adaptively insert keyframes (I-frames) at these points to improve the random accessibility and encoding efficiency of the video. Optional values:
0: Disable the adaptive I-frame decision 
1: Enable the adaptive I-frame decision
Default value: 0

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_noScenecut;
                    bool m_noScenecutHasBeenSet;

                    /**
                     * Bit: 8/10 is supported. Default value: 8
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_bitDepth;
                    bool m_bitDepthHasBeenSet;

                    /**
                     * Preservation of original timestamp. Optional values:
0: Disabled
1: Enabled
Default value: Disabled
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_rawPts;
                    bool m_rawPtsHasBeenSet;

                    /**
                     * Proportional compression bitrate. When it is enabled, the bitrate of the output video will be adjusted according to the proportion. After the compression ratio is entered, the system will automatically calculate the target output bitrate based on the source video bitrate. Compression ratio range: 0-100
Leaving this value blank means it is not enabled by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * Special segment configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SegmentSpecificInfo m_segmentSpecificInfo;
                    bool m_segmentSpecificInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFO_H_
