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
                     * 获取Encoding format for video streams. valid values:.
<Li>H264: h.264 encoding.</li>.
<Li>H265: h.265 encoding.</li>.
<Li>H266: h.266 encoding.</li>.
<li>av1: AOMedia Video 1 encoding</li>.
<li>vp8: vp8 encoding.</li>.
<li>vp9: vp9 encoding.</li>.
<li>mpeg2: mpeg2 encoding.</li>.
<li>dnxhd: specifies dnxhd encoding.</li>.
<li>mv-hevc: mv-hevc encoding.</li>.

Note: the av1 encoding container currently only supports mp4, webm, and mkv.
Note: H.266 encoding containers currently only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and dnxhd encoding containers currently only support mxf.
Note: MV-HEVC encoding containers currently only support mp4, hls, and mov. among them, the hls format supports only mp4 segmentation format and requires the input source to be a panoramic video (with multi-perspective).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Codec Encoding format for video streams. valid values:.
<Li>H264: h.264 encoding.</li>.
<Li>H265: h.265 encoding.</li>.
<Li>H266: h.266 encoding.</li>.
<li>av1: AOMedia Video 1 encoding</li>.
<li>vp8: vp8 encoding.</li>.
<li>vp9: vp9 encoding.</li>.
<li>mpeg2: mpeg2 encoding.</li>.
<li>dnxhd: specifies dnxhd encoding.</li>.
<li>mv-hevc: mv-hevc encoding.</li>.

Note: the av1 encoding container currently only supports mp4, webm, and mkv.
Note: H.266 encoding containers currently only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and dnxhd encoding containers currently only support mxf.
Note: MV-HEVC encoding containers currently only support mp4, hls, and mov. among them, the hls format supports only mp4 segmentation format and requires the input source to be a panoramic video (with multi-perspective).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Encoding format for video streams. valid values:.
<Li>H264: h.264 encoding.</li>.
<Li>H265: h.265 encoding.</li>.
<Li>H266: h.266 encoding.</li>.
<li>av1: AOMedia Video 1 encoding</li>.
<li>vp8: vp8 encoding.</li>.
<li>vp9: vp9 encoding.</li>.
<li>mpeg2: mpeg2 encoding.</li>.
<li>dnxhd: specifies dnxhd encoding.</li>.
<li>mv-hevc: mv-hevc encoding.</li>.

Note: the av1 encoding container currently only supports mp4, webm, and mkv.
Note: H.266 encoding containers currently only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and dnxhd encoding containers currently only support mxf.
Note: MV-HEVC encoding containers currently only support mp4, hls, and mov. among them, the hls format supports only mp4 segmentation format and requires the input source to be a panoramic video (with multi-perspective).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _codec Encoding format for video streams. valid values:.
<Li>H264: h.264 encoding.</li>.
<Li>H265: h.265 encoding.</li>.
<Li>H266: h.266 encoding.</li>.
<li>av1: AOMedia Video 1 encoding</li>.
<li>vp8: vp8 encoding.</li>.
<li>vp9: vp9 encoding.</li>.
<li>mpeg2: mpeg2 encoding.</li>.
<li>dnxhd: specifies dnxhd encoding.</li>.
<li>mv-hevc: mv-hevc encoding.</li>.

Note: the av1 encoding container currently only supports mp4, webm, and mkv.
Note: H.266 encoding containers currently only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and dnxhd encoding containers currently only support mxf.
Note: MV-HEVC encoding containers currently only support mp4, hls, and mov. among them, the hls format supports only mp4 segmentation format and requires the input source to be a panoramic video (with multi-perspective).
Note: This field may return null, indicating that no valid values can be obtained.
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
If the value is 0, the frame rate will be the same as that of the source video.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Fps Video frame rate. Value range:
When FpsDenominator is empty, the range is [0, 120], in Hz.
When FpsDenominator is not empty, the Fps/FpsDenominator range is [0, 120].
If the value is 0, the frame rate will be the same as that of the source video.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置Video frame rate. Value range:
When FpsDenominator is empty, the range is [0, 120], in Hz.
When FpsDenominator is not empty, the Fps/FpsDenominator range is [0, 120].
If the value is 0, the frame rate will be the same as that of the source video.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fps Video frame rate. Value range:
When FpsDenominator is empty, the range is [0, 120], in Hz.
When FpsDenominator is not empty, the Fps/FpsDenominator range is [0, 120].
If the value is 0, the frame rate will be the same as that of the source video.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Bitrate of a video stream, in kbps. Value range: 0 and [128, 100000].If the value is 0, the bitrate of the video will be the same as that of the source video.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bitrate Bitrate of a video stream, in kbps. Value range: 0 and [128, 100000].If the value is 0, the bitrate of the video will be the same as that of the source video.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of a video stream, in kbps. Value range: 0 and [128, 100000].If the value is 0, the bitrate of the video will be the same as that of the source video.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bitrate Bitrate of a video stream, in kbps. Value range: 0 and [128, 100000].If the value is 0, the bitrate of the video will be the same as that of the source video.Note: This field may return null, indicating that no valid values can be obtained.
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
Note: When resolution adaption is enabled, `Width` cannot be smaller than `Height`.
                     * @return ResolutionAdaptive Resolution adaption. Valid values:
<li>open: Enabled. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>close: Disabled. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>
Note: When resolution adaption is enabled, `Width` cannot be smaller than `Height`.
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaption. Valid values:
<li>open: Enabled. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>close: Disabled. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>
Note: When resolution adaption is enabled, `Width` cannot be smaller than `Height`.
                     * @param _resolutionAdaptive Resolution adaption. Valid values:
<li>open: Enabled. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>close: Disabled. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>
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
                     * 获取Maximum value of the video stream width (or long edge) in px. Value range: 0 and [128, 4096].
<li>If both Width and Height are 0, the resolution is the same as the source.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled.</li>
<li>If Width is not 0 but Height is 0, the height will be proportionally scaled.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Width Maximum value of the video stream width (or long edge) in px. Value range: 0 and [128, 4096].
<li>If both Width and Height are 0, the resolution is the same as the source.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled.</li>
<li>If Width is not 0 but Height is 0, the height will be proportionally scaled.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _width Maximum value of the video stream width (or long edge) in px. Value range: 0 and [128, 4096].
<li>If both Width and Height are 0, the resolution is the same as the source.</li>
<li>If Width is 0 but Height is not 0, the width will be proportionally scaled.</li>
<li>If Width is not 0 but Height is 0, the height will be proportionally scaled.</li>
<li>If both Width and Height are not 0, the resolution is as specified by the user.</li>
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Maximum value of the video stream height (or short edge) in px. Value range: 0 and [128, 4,096].
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Height Maximum value of the video stream height (or short edge) in px. Value range: 0 and [128, 4,096].
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Maximum value of the video stream height (or short edge) in px. Value range: 0 and [128, 4,096].
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _height Maximum value of the video stream height (or short edge) in px. Value range: 0 and [128, 4,096].
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
Note: This field may return null, indicating that no valid value can be obtained.
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
If this parameter is 0, the system will automatically set the GOP length.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Gop Interval between I-frames (keyframes), which can be customized in frames or seconds. GOP value range: 0 and [1, 100000].
If this parameter is 0, the system will automatically set the GOP length.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置Interval between I-frames (keyframes), which can be customized in frames or seconds. GOP value range: 0 and [1, 100000].
If this parameter is 0, the system will automatically set the GOP length.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _gop Interval between I-frames (keyframes), which can be customized in frames or seconds. GOP value range: 0 and [1, 100000].
If this parameter is 0, the system will automatically set the GOP length.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. Valid values:
 <li>stretch: Each frame is stretched to fill the entire screen, which may cause the transcoded video to be "flattened" or "stretched".</li>
<li>black: Keep the image's original aspect ratio and fill the blank space with black bars.</li>
<li>white: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with white.</li>
<li>gauss: applies Gaussian blur to the uncovered area, without changing the image's aspect ratio.</li>

<li>smarttailor: Video images are smartly selected to ensure proportional image cropping.</li>
Default value: black.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FillType Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. Valid values:
 <li>stretch: Each frame is stretched to fill the entire screen, which may cause the transcoded video to be "flattened" or "stretched".</li>
<li>black: Keep the image's original aspect ratio and fill the blank space with black bars.</li>
<li>white: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with white.</li>
<li>gauss: applies Gaussian blur to the uncovered area, without changing the image's aspect ratio.</li>

<li>smarttailor: Video images are smartly selected to ensure proportional image cropping.</li>
Default value: black.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. Valid values:
 <li>stretch: Each frame is stretched to fill the entire screen, which may cause the transcoded video to be "flattened" or "stretched".</li>
<li>black: Keep the image's original aspect ratio and fill the blank space with black bars.</li>
<li>white: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with white.</li>
<li>gauss: applies Gaussian blur to the uncovered area, without changing the image's aspect ratio.</li>

<li>smarttailor: Video images are smartly selected to ensure proportional image cropping.</li>
Default value: black.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fillType Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. Valid values:
 <li>stretch: Each frame is stretched to fill the entire screen, which may cause the transcoded video to be "flattened" or "stretched".</li>
<li>black: Keep the image's original aspect ratio and fill the blank space with black bars.</li>
<li>white: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with white.</li>
<li>gauss: applies Gaussian blur to the uncovered area, without changing the image's aspect ratio.</li>

<li>smarttailor: Video images are smartly selected to ensure proportional image cropping.</li>
Default value: black.

Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取The control factor of video constant bitrate. Value range: [0, 51]. If not specified, it means "auto". It is recommended not to specify this parameter unless necessary.
When the Mode parameter is set to VBR, if the Vcrf value is also configured, MPS will process the video in VBR mode, considering both Vcrf and Bitrate parameters to balance video quality, bitrate, transcoding efficiency, and file size.
When the Mode parameter is set to CRF, the Bitrate setting will be invalid, and the encoding will be based on the Vcrf value.
When the Mode parameter is set to ABR or CBR, the Vcrf value does not need to be configured.
Note: When you need to set it to auto, fill in 100.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Vcrf The control factor of video constant bitrate. Value range: [0, 51]. If not specified, it means "auto". It is recommended not to specify this parameter unless necessary.
When the Mode parameter is set to VBR, if the Vcrf value is also configured, MPS will process the video in VBR mode, considering both Vcrf and Bitrate parameters to balance video quality, bitrate, transcoding efficiency, and file size.
When the Mode parameter is set to CRF, the Bitrate setting will be invalid, and the encoding will be based on the Vcrf value.
When the Mode parameter is set to ABR or CBR, the Vcrf value does not need to be configured.
Note: When you need to set it to auto, fill in 100.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetVcrf() const;

                    /**
                     * 设置The control factor of video constant bitrate. Value range: [0, 51]. If not specified, it means "auto". It is recommended not to specify this parameter unless necessary.
When the Mode parameter is set to VBR, if the Vcrf value is also configured, MPS will process the video in VBR mode, considering both Vcrf and Bitrate parameters to balance video quality, bitrate, transcoding efficiency, and file size.
When the Mode parameter is set to CRF, the Bitrate setting will be invalid, and the encoding will be based on the Vcrf value.
When the Mode parameter is set to ABR or CBR, the Vcrf value does not need to be configured.
Note: When you need to set it to auto, fill in 100.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _vcrf The control factor of video constant bitrate. Value range: [0, 51]. If not specified, it means "auto". It is recommended not to specify this parameter unless necessary.
When the Mode parameter is set to VBR, if the Vcrf value is also configured, MPS will process the video in VBR mode, considering both Vcrf and Bitrate parameters to balance video quality, bitrate, transcoding efficiency, and file size.
When the Mode parameter is set to CRF, the Bitrate setting will be invalid, and the encoding will be based on the Vcrf value.
When the Mode parameter is set to ABR or CBR, the Vcrf value does not need to be configured.
Note: When you need to set it to auto, fill in 100.

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
                     * 获取Whether to enable adaptive encoding. Valid values:
<li>0: Disable</li>
<li>1: Enable</li>
Default value: 0. If this parameter is set to `1`, multiple streams with different resolutions and bitrates will be generated automatically. The highest resolution, bitrate, and quality of the streams are determined by the values of `width` and `height`, `Bitrate`, and `Vcrf` in `VideoTemplate` respectively. If these parameters are not set in `VideoTemplate`, the highest resolution generated will be the same as that of the source video, and the highest video quality will be close to VMAF 95. To use this parameter or learn about the billing details of adaptive encoding, please contact your sales rep.
                     * @return ContentAdaptStream Whether to enable adaptive encoding. Valid values:
<li>0: Disable</li>
<li>1: Enable</li>
Default value: 0. If this parameter is set to `1`, multiple streams with different resolutions and bitrates will be generated automatically. The highest resolution, bitrate, and quality of the streams are determined by the values of `width` and `height`, `Bitrate`, and `Vcrf` in `VideoTemplate` respectively. If these parameters are not set in `VideoTemplate`, the highest resolution generated will be the same as that of the source video, and the highest video quality will be close to VMAF 95. To use this parameter or learn about the billing details of adaptive encoding, please contact your sales rep.
                     * 
                     */
                    uint64_t GetContentAdaptStream() const;

                    /**
                     * 设置Whether to enable adaptive encoding. Valid values:
<li>0: Disable</li>
<li>1: Enable</li>
Default value: 0. If this parameter is set to `1`, multiple streams with different resolutions and bitrates will be generated automatically. The highest resolution, bitrate, and quality of the streams are determined by the values of `width` and `height`, `Bitrate`, and `Vcrf` in `VideoTemplate` respectively. If these parameters are not set in `VideoTemplate`, the highest resolution generated will be the same as that of the source video, and the highest video quality will be close to VMAF 95. To use this parameter or learn about the billing details of adaptive encoding, please contact your sales rep.
                     * @param _contentAdaptStream Whether to enable adaptive encoding. Valid values:
<li>0: Disable</li>
<li>1: Enable</li>
Default value: 0. If this parameter is set to `1`, multiple streams with different resolutions and bitrates will be generated automatically. The highest resolution, bitrate, and quality of the streams are determined by the values of `width` and `height`, `Bitrate`, and `Vcrf` in `VideoTemplate` respectively. If these parameters are not set in `VideoTemplate`, the highest resolution generated will be the same as that of the source video, and the highest video quality will be close to VMAF 95. To use this parameter or learn about the billing details of adaptive encoding, please contact your sales rep.
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
                     * 获取Average segment duration. Value range: (0-10], unit: second
Default value: 10
Note: It is used only in the format of HLS.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return HlsTime Average segment duration. Value range: (0-10], unit: second
Default value: 10
Note: It is used only in the format of HLS.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetHlsTime() const;

                    /**
                     * 设置Average segment duration. Value range: (0-10], unit: second
Default value: 10
Note: It is used only in the format of HLS.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _hlsTime Average segment duration. Value range: (0-10], unit: second
Default value: 10
Note: It is used only in the format of HLS.
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
<li>0: HLS+TS segment</li>
<li>2: HLS+TS byte range</li>
<li>7: HLS+MP4 segment</li>
<li>5: HLS+MP4 byte range</li>
Default value: 0

Note: This field is used for normal/Top Speed Codec transcoding settings and does not apply to adaptive bitrate streaming. To configure the segment type for adaptive bitrate streaming, use the outer field.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SegmentType HLS segment type. Valid values:
<li>0: HLS+TS segment</li>
<li>2: HLS+TS byte range</li>
<li>7: HLS+MP4 segment</li>
<li>5: HLS+MP4 byte range</li>
Default value: 0

Note: This field is used for normal/Top Speed Codec transcoding settings and does not apply to adaptive bitrate streaming. To configure the segment type for adaptive bitrate streaming, use the outer field.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetSegmentType() const;

                    /**
                     * 设置HLS segment type. Valid values:
<li>0: HLS+TS segment</li>
<li>2: HLS+TS byte range</li>
<li>7: HLS+MP4 segment</li>
<li>5: HLS+MP4 byte range</li>
Default value: 0

Note: This field is used for normal/Top Speed Codec transcoding settings and does not apply to adaptive bitrate streaming. To configure the segment type for adaptive bitrate streaming, use the outer field.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _segmentType HLS segment type. Valid values:
<li>0: HLS+TS segment</li>
<li>2: HLS+TS byte range</li>
<li>7: HLS+MP4 segment</li>
<li>5: HLS+MP4 byte range</li>
Default value: 0

Note: This field is used for normal/Top Speed Codec transcoding settings and does not apply to adaptive bitrate streaming. To configure the segment type for adaptive bitrate streaming, use the outer field.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取3D video splicing mode, applicable only to mv-hevc and effective for 3d videos. valid values:
<Li>side_by_side: the original video content is arranged in a left-right layout.</li>
<Li>top_bottom: layout arrangement of the original video content from top to bottom.</li>
The usage and charges will be reported based on the segmented resolution dimensions.
Default value: side_by_side.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Stereo3dType 3D video splicing mode, applicable only to mv-hevc and effective for 3d videos. valid values:
<Li>side_by_side: the original video content is arranged in a left-right layout.</li>
<Li>top_bottom: layout arrangement of the original video content from top to bottom.</li>
The usage and charges will be reported based on the segmented resolution dimensions.
Default value: side_by_side.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStereo3dType() const;

                    /**
                     * 设置3D video splicing mode, applicable only to mv-hevc and effective for 3d videos. valid values:
<Li>side_by_side: the original video content is arranged in a left-right layout.</li>
<Li>top_bottom: layout arrangement of the original video content from top to bottom.</li>
The usage and charges will be reported based on the segmented resolution dimensions.
Default value: side_by_side.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _stereo3dType 3D video splicing mode, applicable only to mv-hevc and effective for 3d videos. valid values:
<Li>side_by_side: the original video content is arranged in a left-right layout.</li>
<Li>top_bottom: layout arrangement of the original video content from top to bottom.</li>
The usage and charges will be reported based on the segmented resolution dimensions.
Default value: side_by_side.
Note: This field may return null, indicating that no valid value can be obtained.
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
default: automatic filling along with the original video

This configuration appears only when the encoding standard is set to H264. Default value: default
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VideoProfile Profile, suitable for different scenarios. 
baseline: It only supports I/P-frames and non-interlaced scenarios, and is suitable for scenarios such as video calls and mobile videos. 
main: It offers I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices. 
high: the highest encoding level, with 8x8 prediction added to the main profile and support for custom quantification. It is widely used in scenarios such as Blu-ray storage and HDTV.
default: automatic filling along with the original video

This configuration appears only when the encoding standard is set to H264. Default value: default
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVideoProfile() const;

                    /**
                     * 设置Profile, suitable for different scenarios. 
baseline: It only supports I/P-frames and non-interlaced scenarios, and is suitable for scenarios such as video calls and mobile videos. 
main: It offers I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices. 
high: the highest encoding level, with 8x8 prediction added to the main profile and support for custom quantification. It is widely used in scenarios such as Blu-ray storage and HDTV.
default: automatic filling along with the original video

This configuration appears only when the encoding standard is set to H264. Default value: default
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _videoProfile Profile, suitable for different scenarios. 
baseline: It only supports I/P-frames and non-interlaced scenarios, and is suitable for scenarios such as video calls and mobile videos. 
main: It offers I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices. 
high: the highest encoding level, with 8x8 prediction added to the main profile and support for custom quantification. It is widely used in scenarios such as Blu-ray storage and HDTV.
default: automatic filling along with the original video

This configuration appears only when the encoding standard is set to H264. Default value: default
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
                     * 获取Maximum number of consecutive B-frames. The default is auto, and 0 - 16 and -1 are supported.
Note:

-1 indicates auto.	
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Bframes Maximum number of consecutive B-frames. The default is auto, and 0 - 16 and -1 are supported.
Note:

-1 indicates auto.	
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetBframes() const;

                    /**
                     * 设置Maximum number of consecutive B-frames. The default is auto, and 0 - 16 and -1 are supported.
Note:

-1 indicates auto.	
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _bframes Maximum number of consecutive B-frames. The default is auto, and 0 - 16 and -1 are supported.
Note:

-1 indicates auto.	
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
                     * 获取Proportional compression bitrate. When it is enabled, the bitrate of the output video will be adjusted according to the proportion. After the compression ratio is entered, the system will automatically calculate the target output bitrate based on the source video bitrate. Compression ratio range: 0-100, optional values: [0-100] and -1 
Note: -1 indicates auto.	
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Compress Proportional compression bitrate. When it is enabled, the bitrate of the output video will be adjusted according to the proportion. After the compression ratio is entered, the system will automatically calculate the target output bitrate based on the source video bitrate. Compression ratio range: 0-100, optional values: [0-100] and -1 
Note: -1 indicates auto.	
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetCompress() const;

                    /**
                     * 设置Proportional compression bitrate. When it is enabled, the bitrate of the output video will be adjusted according to the proportion. After the compression ratio is entered, the system will automatically calculate the target output bitrate based on the source video bitrate. Compression ratio range: 0-100, optional values: [0-100] and -1 
Note: -1 indicates auto.	
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _compress Proportional compression bitrate. When it is enabled, the bitrate of the output video will be adjusted according to the proportion. After the compression ratio is entered, the system will automatically calculate the target output bitrate based on the source video bitrate. Compression ratio range: 0-100, optional values: [0-100] and -1 
Note: -1 indicates auto.	
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
                     * 获取Segment duration at startup.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SegmentSpecificInfo Segment duration at startup.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SegmentSpecificInfo GetSegmentSpecificInfo() const;

                    /**
                     * 设置Segment duration at startup.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _segmentSpecificInfo Segment duration at startup.
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

                    /**
                     * 获取Indicates whether to enable scenario-based settings for the template. 
0: Disable. 
1: enable 
 
Default value: 0	
	
Note: This value takes effect only when the value of this field is 1.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ScenarioBased Indicates whether to enable scenario-based settings for the template. 
0: Disable. 
1: enable 
 
Default value: 0	
	
Note: This value takes effect only when the value of this field is 1.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetScenarioBased() const;

                    /**
                     * 设置Indicates whether to enable scenario-based settings for the template. 
0: Disable. 
1: enable 
 
Default value: 0	
	
Note: This value takes effect only when the value of this field is 1.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _scenarioBased Indicates whether to enable scenario-based settings for the template. 
0: Disable. 
1: enable 
 
Default value: 0	
	
Note: This value takes effect only when the value of this field is 1.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Video scenario. Valid values: 
- normal: General transcoding scenario. General transcoding and compression scenario.
- pgc: PGC HD TV shows and movies. At the time of compression, focus is placed on the viewing experience of TV shows and movies and ROI encoding is performed according to their characteristics, while high-quality contents of videos and audio are retained. 
- materials_video: HD materials. Scenario involving material resources, where requirements for image quality are extremely high and there are many transparent images, with almost no visual loss during compression. 
- ugc: UGC content. It is suitable for a wide range of UGC/short video scenarios, with an optimized encoding bitrate for short video characteristics, improved image quality, and enhanced business QOS/QOE metrics. 
- e-commerce_video. Fashion show/e-commerce: At the time of compression, emphasis is placed on detail clarity and ROI enhancement, with a particular focus on maintaining the image quality of the face region. 
- educational_video. Education. At the time of compression, emphasis is placed on the clarity and readability of text and images to help students better understand the content, ensuring that the teaching content is clearly conveyed. 

Default value: normal.
Note: To use this value, the value of ScenarioBased must be 1; otherwise, this value will not take effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SceneType Video scenario. Valid values: 
- normal: General transcoding scenario. General transcoding and compression scenario.
- pgc: PGC HD TV shows and movies. At the time of compression, focus is placed on the viewing experience of TV shows and movies and ROI encoding is performed according to their characteristics, while high-quality contents of videos and audio are retained. 
- materials_video: HD materials. Scenario involving material resources, where requirements for image quality are extremely high and there are many transparent images, with almost no visual loss during compression. 
- ugc: UGC content. It is suitable for a wide range of UGC/short video scenarios, with an optimized encoding bitrate for short video characteristics, improved image quality, and enhanced business QOS/QOE metrics. 
- e-commerce_video. Fashion show/e-commerce: At the time of compression, emphasis is placed on detail clarity and ROI enhancement, with a particular focus on maintaining the image quality of the face region. 
- educational_video. Education. At the time of compression, emphasis is placed on the clarity and readability of text and images to help students better understand the content, ensuring that the teaching content is clearly conveyed. 

Default value: normal.
Note: To use this value, the value of ScenarioBased must be 1; otherwise, this value will not take effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置Video scenario. Valid values: 
- normal: General transcoding scenario. General transcoding and compression scenario.
- pgc: PGC HD TV shows and movies. At the time of compression, focus is placed on the viewing experience of TV shows and movies and ROI encoding is performed according to their characteristics, while high-quality contents of videos and audio are retained. 
- materials_video: HD materials. Scenario involving material resources, where requirements for image quality are extremely high and there are many transparent images, with almost no visual loss during compression. 
- ugc: UGC content. It is suitable for a wide range of UGC/short video scenarios, with an optimized encoding bitrate for short video characteristics, improved image quality, and enhanced business QOS/QOE metrics. 
- e-commerce_video. Fashion show/e-commerce: At the time of compression, emphasis is placed on detail clarity and ROI enhancement, with a particular focus on maintaining the image quality of the face region. 
- educational_video. Education. At the time of compression, emphasis is placed on the clarity and readability of text and images to help students better understand the content, ensuring that the teaching content is clearly conveyed. 

Default value: normal.
Note: To use this value, the value of ScenarioBased must be 1; otherwise, this value will not take effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sceneType Video scenario. Valid values: 
- normal: General transcoding scenario. General transcoding and compression scenario.
- pgc: PGC HD TV shows and movies. At the time of compression, focus is placed on the viewing experience of TV shows and movies and ROI encoding is performed according to their characteristics, while high-quality contents of videos and audio are retained. 
- materials_video: HD materials. Scenario involving material resources, where requirements for image quality are extremely high and there are many transparent images, with almost no visual loss during compression. 
- ugc: UGC content. It is suitable for a wide range of UGC/short video scenarios, with an optimized encoding bitrate for short video characteristics, improved image quality, and enhanced business QOS/QOE metrics. 
- e-commerce_video. Fashion show/e-commerce: At the time of compression, emphasis is placed on detail clarity and ROI enhancement, with a particular focus on maintaining the image quality of the face region. 
- educational_video. Education. At the time of compression, emphasis is placed on the clarity and readability of text and images to help students better understand the content, ensuring that the teaching content is clearly conveyed. 

Default value: normal.
Note: To use this value, the value of ScenarioBased must be 1; otherwise, this value will not take effect.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Transcoding policy. Valid values: 
- ultra_compress: Extreme compression. Compared to standard compression, this policy can maximize bitrate compression while ensuring a certain level of image quality, thus greatly saving bandwidth and storage costs. 
- standard_compress: Comprehensively optimal. Balances compression ratio and image quality, compressing files as much as possible without a noticeable reduction in subjective image quality. Only audio and video TSC transcoding fees are charged for this policy. 
- high_compress: Bitrate priority. Prioritizes reducing file size, which may result in certain image quality loss. Only audio and video TSC transcoding fees are charged for this policy. 
- low_compress: Image quality priority. Prioritizes ensuring image quality, and the size of compressed files may be relatively large. Only audio and video TSC transcoding fees are charged for this policy. 

Default value: standard_compress. 
Note: If you need to watch videos on TV, it is recommended not to use the ultra_compress policy. The billing standard for the ultra_compress policy is TSC transcoding + audio and video enhancement - artifacts removal.
Note: To use this value, the value of ScenarioBased must be 1; otherwise, this value will not take effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CompressType Transcoding policy. Valid values: 
- ultra_compress: Extreme compression. Compared to standard compression, this policy can maximize bitrate compression while ensuring a certain level of image quality, thus greatly saving bandwidth and storage costs. 
- standard_compress: Comprehensively optimal. Balances compression ratio and image quality, compressing files as much as possible without a noticeable reduction in subjective image quality. Only audio and video TSC transcoding fees are charged for this policy. 
- high_compress: Bitrate priority. Prioritizes reducing file size, which may result in certain image quality loss. Only audio and video TSC transcoding fees are charged for this policy. 
- low_compress: Image quality priority. Prioritizes ensuring image quality, and the size of compressed files may be relatively large. Only audio and video TSC transcoding fees are charged for this policy. 

Default value: standard_compress. 
Note: If you need to watch videos on TV, it is recommended not to use the ultra_compress policy. The billing standard for the ultra_compress policy is TSC transcoding + audio and video enhancement - artifacts removal.
Note: To use this value, the value of ScenarioBased must be 1; otherwise, this value will not take effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCompressType() const;

                    /**
                     * 设置Transcoding policy. Valid values: 
- ultra_compress: Extreme compression. Compared to standard compression, this policy can maximize bitrate compression while ensuring a certain level of image quality, thus greatly saving bandwidth and storage costs. 
- standard_compress: Comprehensively optimal. Balances compression ratio and image quality, compressing files as much as possible without a noticeable reduction in subjective image quality. Only audio and video TSC transcoding fees are charged for this policy. 
- high_compress: Bitrate priority. Prioritizes reducing file size, which may result in certain image quality loss. Only audio and video TSC transcoding fees are charged for this policy. 
- low_compress: Image quality priority. Prioritizes ensuring image quality, and the size of compressed files may be relatively large. Only audio and video TSC transcoding fees are charged for this policy. 

Default value: standard_compress. 
Note: If you need to watch videos on TV, it is recommended not to use the ultra_compress policy. The billing standard for the ultra_compress policy is TSC transcoding + audio and video enhancement - artifacts removal.
Note: To use this value, the value of ScenarioBased must be 1; otherwise, this value will not take effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _compressType Transcoding policy. Valid values: 
- ultra_compress: Extreme compression. Compared to standard compression, this policy can maximize bitrate compression while ensuring a certain level of image quality, thus greatly saving bandwidth and storage costs. 
- standard_compress: Comprehensively optimal. Balances compression ratio and image quality, compressing files as much as possible without a noticeable reduction in subjective image quality. Only audio and video TSC transcoding fees are charged for this policy. 
- high_compress: Bitrate priority. Prioritizes reducing file size, which may result in certain image quality loss. Only audio and video TSC transcoding fees are charged for this policy. 
- low_compress: Image quality priority. Prioritizes ensuring image quality, and the size of compressed files may be relatively large. Only audio and video TSC transcoding fees are charged for this policy. 

Default value: standard_compress. 
Note: If you need to watch videos on TV, it is recommended not to use the ultra_compress policy. The billing standard for the ultra_compress policy is TSC transcoding + audio and video enhancement - artifacts removal.
Note: To use this value, the value of ScenarioBased must be 1; otherwise, this value will not take effect.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Encoding format for video streams. valid values:.
<Li>H264: h.264 encoding.</li>.
<Li>H265: h.265 encoding.</li>.
<Li>H266: h.266 encoding.</li>.
<li>av1: AOMedia Video 1 encoding</li>.
<li>vp8: vp8 encoding.</li>.
<li>vp9: vp9 encoding.</li>.
<li>mpeg2: mpeg2 encoding.</li>.
<li>dnxhd: specifies dnxhd encoding.</li>.
<li>mv-hevc: mv-hevc encoding.</li>.

Note: the av1 encoding container currently only supports mp4, webm, and mkv.
Note: H.266 encoding containers currently only support mp4, hls, ts, and mov.
Note: VP8 and VP9 encoding containers currently only support webm and mkv.
Note: MPEG2 and dnxhd encoding containers currently only support mxf.
Note: MV-HEVC encoding containers currently only support mp4, hls, and mov. among them, the hls format supports only mp4 segmentation format and requires the input source to be a panoramic video (with multi-perspective).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Video frame rate. Value range:
When FpsDenominator is empty, the range is [0, 120], in Hz.
When FpsDenominator is not empty, the Fps/FpsDenominator range is [0, 120].
If the value is 0, the frame rate will be the same as that of the source video.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Bitrate of a video stream, in kbps. Value range: 0 and [128, 100000].If the value is 0, the bitrate of the video will be the same as that of the source video.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Resolution adaption. Valid values:
<li>open: Enabled. When resolution adaption is enabled, `Width` indicates the long side of a video, while `Height` indicates the short side.</li>
<li>close: Disabled. When resolution adaption is disabled, `Width` indicates the width of a video, while `Height` indicates the height.</li>
Note: When resolution adaption is enabled, `Width` cannot be smaller than `Height`.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Maximum value of the video stream height (or short edge) in px. Value range: 0 and [128, 4,096].
Note: If Codec is set to MV-HEVC, the maximum value can be 7680.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Interval between I-frames (keyframes), which can be customized in frames or seconds. GOP value range: 0 and [1, 100000].
If this parameter is 0, the system will automatically set the GOP length.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. Valid values:
 <li>stretch: Each frame is stretched to fill the entire screen, which may cause the transcoded video to be "flattened" or "stretched".</li>
<li>black: Keep the image's original aspect ratio and fill the blank space with black bars.</li>
<li>white: The aspect ratio of the video is kept unchanged, and the rest of the edges is filled with white.</li>
<li>gauss: applies Gaussian blur to the uncovered area, without changing the image's aspect ratio.</li>

<li>smarttailor: Video images are smartly selected to ensure proportional image cropping.</li>
Default value: black.

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * The control factor of video constant bitrate. Value range: [0, 51]. If not specified, it means "auto". It is recommended not to specify this parameter unless necessary.
When the Mode parameter is set to VBR, if the Vcrf value is also configured, MPS will process the video in VBR mode, considering both Vcrf and Bitrate parameters to balance video quality, bitrate, transcoding efficiency, and file size.
When the Mode parameter is set to CRF, the Bitrate setting will be invalid, and the encoding will be based on the Vcrf value.
When the Mode parameter is set to ABR or CBR, the Vcrf value does not need to be configured.
Note: When you need to set it to auto, fill in 100.

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_vcrf;
                    bool m_vcrfHasBeenSet;

                    /**
                     * Whether to enable adaptive encoding. Valid values:
<li>0: Disable</li>
<li>1: Enable</li>
Default value: 0. If this parameter is set to `1`, multiple streams with different resolutions and bitrates will be generated automatically. The highest resolution, bitrate, and quality of the streams are determined by the values of `width` and `height`, `Bitrate`, and `Vcrf` in `VideoTemplate` respectively. If these parameters are not set in `VideoTemplate`, the highest resolution generated will be the same as that of the source video, and the highest video quality will be close to VMAF 95. To use this parameter or learn about the billing details of adaptive encoding, please contact your sales rep.
                     */
                    uint64_t m_contentAdaptStream;
                    bool m_contentAdaptStreamHasBeenSet;

                    /**
                     * Average segment duration. Value range: (0-10], unit: second
Default value: 10
Note: It is used only in the format of HLS.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_hlsTime;
                    bool m_hlsTimeHasBeenSet;

                    /**
                     * HLS segment type. Valid values:
<li>0: HLS+TS segment</li>
<li>2: HLS+TS byte range</li>
<li>7: HLS+MP4 segment</li>
<li>5: HLS+MP4 byte range</li>
Default value: 0

Note: This field is used for normal/Top Speed Codec transcoding settings and does not apply to adaptive bitrate streaming. To configure the segment type for adaptive bitrate streaming, use the outer field.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 3D video splicing mode, applicable only to mv-hevc and effective for 3d videos. valid values:
<Li>side_by_side: the original video content is arranged in a left-right layout.</li>
<Li>top_bottom: layout arrangement of the original video content from top to bottom.</li>
The usage and charges will be reported based on the segmented resolution dimensions.
Default value: side_by_side.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_stereo3dType;
                    bool m_stereo3dTypeHasBeenSet;

                    /**
                     * Profile, suitable for different scenarios. 
baseline: It only supports I/P-frames and non-interlaced scenarios, and is suitable for scenarios such as video calls and mobile videos. 
main: It offers I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices. 
high: the highest encoding level, with 8x8 prediction added to the main profile and support for custom quantification. It is widely used in scenarios such as Blu-ray storage and HDTV.
default: automatic filling along with the original video

This configuration appears only when the encoding standard is set to H264. Default value: default
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
                     * Maximum number of consecutive B-frames. The default is auto, and 0 - 16 and -1 are supported.
Note:

-1 indicates auto.	
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
                     * Proportional compression bitrate. When it is enabled, the bitrate of the output video will be adjusted according to the proportion. After the compression ratio is entered, the system will automatically calculate the target output bitrate based on the source video bitrate. Compression ratio range: 0-100, optional values: [0-100] and -1 
Note: -1 indicates auto.	
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * Segment duration at startup.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SegmentSpecificInfo m_segmentSpecificInfo;
                    bool m_segmentSpecificInfoHasBeenSet;

                    /**
                     * Indicates whether to enable scenario-based settings for the template. 
0: Disable. 
1: enable 
 
Default value: 0	
	
Note: This value takes effect only when the value of this field is 1.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_scenarioBased;
                    bool m_scenarioBasedHasBeenSet;

                    /**
                     * Video scenario. Valid values: 
- normal: General transcoding scenario. General transcoding and compression scenario.
- pgc: PGC HD TV shows and movies. At the time of compression, focus is placed on the viewing experience of TV shows and movies and ROI encoding is performed according to their characteristics, while high-quality contents of videos and audio are retained. 
- materials_video: HD materials. Scenario involving material resources, where requirements for image quality are extremely high and there are many transparent images, with almost no visual loss during compression. 
- ugc: UGC content. It is suitable for a wide range of UGC/short video scenarios, with an optimized encoding bitrate for short video characteristics, improved image quality, and enhanced business QOS/QOE metrics. 
- e-commerce_video. Fashion show/e-commerce: At the time of compression, emphasis is placed on detail clarity and ROI enhancement, with a particular focus on maintaining the image quality of the face region. 
- educational_video. Education. At the time of compression, emphasis is placed on the clarity and readability of text and images to help students better understand the content, ensuring that the teaching content is clearly conveyed. 

Default value: normal.
Note: To use this value, the value of ScenarioBased must be 1; otherwise, this value will not take effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * Transcoding policy. Valid values: 
- ultra_compress: Extreme compression. Compared to standard compression, this policy can maximize bitrate compression while ensuring a certain level of image quality, thus greatly saving bandwidth and storage costs. 
- standard_compress: Comprehensively optimal. Balances compression ratio and image quality, compressing files as much as possible without a noticeable reduction in subjective image quality. Only audio and video TSC transcoding fees are charged for this policy. 
- high_compress: Bitrate priority. Prioritizes reducing file size, which may result in certain image quality loss. Only audio and video TSC transcoding fees are charged for this policy. 
- low_compress: Image quality priority. Prioritizes ensuring image quality, and the size of compressed files may be relatively large. Only audio and video TSC transcoding fees are charged for this policy. 

Default value: standard_compress. 
Note: If you need to watch videos on TV, it is recommended not to use the ultra_compress policy. The billing standard for the ultra_compress policy is TSC transcoding + audio and video enhancement - artifacts removal.
Note: To use this value, the value of ScenarioBased must be 1; otherwise, this value will not take effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_compressType;
                    bool m_compressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_
