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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_

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
                class VideoTemplateInfoForUpdate : public AbstractModel
                {
                public:
                    VideoTemplateInfoForUpdate();
                    ~VideoTemplateInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Video stream encoding format. Available values:</p><li>libx264: H.264 encoding;</li><li>libx265: H.265 encoding;</li><li>av1: AOMedia Video 1 encoding;</li><li>H.266: H.266 encoding.</li><font color="red">Note:</font><li>av1 and H.266 encoding containers currently only support mp4;</li><li>H.266 currently only supports fixed CRF bitrate control method.</li>
                     * @return Codec <p>Video stream encoding format. Available values:</p><li>libx264: H.264 encoding;</li><li>libx265: H.265 encoding;</li><li>av1: AOMedia Video 1 encoding;</li><li>H.266: H.266 encoding.</li><font color="red">Note:</font><li>av1 and H.266 encoding containers currently only support mp4;</li><li>H.266 currently only supports fixed CRF bitrate control method.</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置<p>Video stream encoding format. Available values:</p><li>libx264: H.264 encoding;</li><li>libx265: H.265 encoding;</li><li>av1: AOMedia Video 1 encoding;</li><li>H.266: H.266 encoding.</li><font color="red">Note:</font><li>av1 and H.266 encoding containers currently only support mp4;</li><li>H.266 currently only supports fixed CRF bitrate control method.</li>
                     * @param _codec <p>Video stream encoding format. Available values:</p><li>libx264: H.264 encoding;</li><li>libx265: H.265 encoding;</li><li>av1: AOMedia Video 1 encoding;</li><li>H.266: H.266 encoding.</li><font color="red">Note:</font><li>av1 and H.266 encoding containers currently only support mp4;</li><li>H.266 currently only supports fixed CRF bitrate control method.</li>
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
                     * 获取<p>Video frame rate. Value ranges from 0 to 100. Unit: Hz.<br>When the value is 0, it means the frame rate is consistent with the original video.</p>
                     * @return Fps <p>Video frame rate. Value ranges from 0 to 100. Unit: Hz.<br>When the value is 0, it means the frame rate is consistent with the original video.</p>
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置<p>Video frame rate. Value ranges from 0 to 100. Unit: Hz.<br>When the value is 0, it means the frame rate is consistent with the original video.</p>
                     * @param _fps <p>Video frame rate. Value ranges from 0 to 100. Unit: Hz.<br>When the value is 0, it means the frame rate is consistent with the original video.</p>
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
                     * 获取<p>Bitrate of video stream. Value ranges from 0 to [128, 100000]. Unit: kbps.<br>When the value is 0, it means VOD automatically sets the bitrate.</p>
                     * @return Bitrate <p>Bitrate of video stream. Value ranges from 0 to [128, 100000]. Unit: kbps.<br>When the value is 0, it means VOD automatically sets the bitrate.</p>
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置<p>Bitrate of video stream. Value ranges from 0 to [128, 100000]. Unit: kbps.<br>When the value is 0, it means VOD automatically sets the bitrate.</p>
                     * @param _bitrate <p>Bitrate of video stream. Value ranges from 0 to [128, 100000]. Unit: kbps.<br>When the value is 0, it means VOD automatically sets the bitrate.</p>
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
                     * 获取<p>Resolution adaptation, available values:</p><li>open: Enable. At this point, Width represents the long side of the video, and Height indicates the short side.</li><li>close: Disable. At this point, Width represents the width of the video, and Height indicates the height.</li>
                     * @return ResolutionAdaptive <p>Resolution adaptation, available values:</p><li>open: Enable. At this point, Width represents the long side of the video, and Height indicates the short side.</li><li>close: Disable. At this point, Width represents the width of the video, and Height indicates the height.</li>
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置<p>Resolution adaptation, available values:</p><li>open: Enable. At this point, Width represents the long side of the video, and Height indicates the short side.</li><li>close: Disable. At this point, Width represents the width of the video, and Height indicates the height.</li>
                     * @param _resolutionAdaptive <p>Resolution adaptation, available values:</p><li>open: Enable. At this point, Width represents the long side of the video, and Height indicates the short side.</li><li>close: Disable. At this point, Width represents the width of the video, and Height indicates the height.</li>
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
                     * 获取<p>The maximum value of the video stream width (or long side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>
                     * @return Width <p>The maximum value of the video stream width (or long side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置<p>The maximum value of the video stream width (or long side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>
                     * @param _width <p>The maximum value of the video stream width (or long side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>
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
                     * 获取<p>Maximum value of the video stream height (or short side). Value ranges from 0 to [128, 8192]. Measurement unit: px.</p>
                     * @return Height <p>Maximum value of the video stream height (or short side). Value ranges from 0 to [128, 8192]. Measurement unit: px.</p>
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置<p>Maximum value of the video stream height (or short side). Value ranges from 0 to [128, 8192]. Measurement unit: px.</p>
                     * @param _height <p>Maximum value of the video stream height (or short side). Value ranges from 0 to [128, 8192]. Measurement unit: px.</p>
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
                     * 获取<p>Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling mode:</p><li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched".</li><li>black: Maintain video aspect ratio with edges filled with black.</li><li>white: Maintain video aspect ratio with edge remainder filled with white.</li><li>gauss: Maintain video aspect ratio with Gaussian blur filling for the rest of the edges.</li>
                     * @return FillType <p>Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling mode:</p><li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched".</li><li>black: Maintain video aspect ratio with edges filled with black.</li><li>white: Maintain video aspect ratio with edge remainder filled with white.</li><li>gauss: Maintain video aspect ratio with Gaussian blur filling for the rest of the edges.</li>
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置<p>Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling mode:</p><li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched".</li><li>black: Maintain video aspect ratio with edges filled with black.</li><li>white: Maintain video aspect ratio with edge remainder filled with white.</li><li>gauss: Maintain video aspect ratio with Gaussian blur filling for the rest of the edges.</li>
                     * @param _fillType <p>Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling mode:</p><li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched".</li><li>black: Maintain video aspect ratio with edges filled with black.</li><li>white: Maintain video aspect ratio with edge remainder filled with white.</li><li>gauss: Maintain video aspect ratio with Gaussian blur filling for the rest of the edges.</li>
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
                     * 获取<p>Control factor for constant video bitrate. Value range: [1, 51]. Enter 0 to indicate that it is disabled.</p><p><font color="red">Note:</font></p><li>If you specify this parameter, the bitrate control mode for CRF will be used to transcode (video bitrate will no longer take effect).</li><li>When the encoding format of the specified video stream is H.266, this field is required. The recommended value is 28.</li><li>If there are no special requirements, it is not recommended to specify this parameter.</li>
                     * @return Vcrf <p>Control factor for constant video bitrate. Value range: [1, 51]. Enter 0 to indicate that it is disabled.</p><p><font color="red">Note:</font></p><li>If you specify this parameter, the bitrate control mode for CRF will be used to transcode (video bitrate will no longer take effect).</li><li>When the encoding format of the specified video stream is H.266, this field is required. The recommended value is 28.</li><li>If there are no special requirements, it is not recommended to specify this parameter.</li>
                     * 
                     */
                    uint64_t GetVcrf() const;

                    /**
                     * 设置<p>Control factor for constant video bitrate. Value range: [1, 51]. Enter 0 to indicate that it is disabled.</p><p><font color="red">Note:</font></p><li>If you specify this parameter, the bitrate control mode for CRF will be used to transcode (video bitrate will no longer take effect).</li><li>When the encoding format of the specified video stream is H.266, this field is required. The recommended value is 28.</li><li>If there are no special requirements, it is not recommended to specify this parameter.</li>
                     * @param _vcrf <p>Control factor for constant video bitrate. Value range: [1, 51]. Enter 0 to indicate that it is disabled.</p><p><font color="red">Note:</font></p><li>If you specify this parameter, the bitrate control mode for CRF will be used to transcode (video bitrate will no longer take effect).</li><li>When the encoding format of the specified video stream is H.266, this field is required. The recommended value is 28.</li><li>If there are no special requirements, it is not recommended to specify this parameter.</li>
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
                     * 获取<p>Interval between I-frames, in frames. Value range: 0 and [1, 100000].<br>When it is set to 0 or not set, the system will automatically set the gop length.</p>
                     * @return Gop <p>Interval between I-frames, in frames. Value range: 0 and [1, 100000].<br>When it is set to 0 or not set, the system will automatically set the gop length.</p>
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置<p>Interval between I-frames, in frames. Value range: 0 and [1, 100000].<br>When it is set to 0 or not set, the system will automatically set the gop length.</p>
                     * @param _gop <p>Interval between I-frames, in frames. Value range: 0 and [1, 100000].<br>When it is set to 0 or not set, the system will automatically set the gop length.</p>
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
                     * 获取<p>Whether the transcoding output remains HDR when the original video is HDR (High Dynamic Range). Value ranges from:</p><li>ON: If the raw file is HDR, the transcoding output remains HDR; otherwise, the output is SDR (Standard Dynamic Range).</li><li>OFF: Regardless of whether the raw file is HDR or SDR, the transcoding output is SDR.</li>
                     * @return PreserveHDRSwitch <p>Whether the transcoding output remains HDR when the original video is HDR (High Dynamic Range). Value ranges from:</p><li>ON: If the raw file is HDR, the transcoding output remains HDR; otherwise, the output is SDR (Standard Dynamic Range).</li><li>OFF: Regardless of whether the raw file is HDR or SDR, the transcoding output is SDR.</li>
                     * 
                     */
                    std::string GetPreserveHDRSwitch() const;

                    /**
                     * 设置<p>Whether the transcoding output remains HDR when the original video is HDR (High Dynamic Range). Value ranges from:</p><li>ON: If the raw file is HDR, the transcoding output remains HDR; otherwise, the output is SDR (Standard Dynamic Range).</li><li>OFF: Regardless of whether the raw file is HDR or SDR, the transcoding output is SDR.</li>
                     * @param _preserveHDRSwitch <p>Whether the transcoding output remains HDR when the original video is HDR (High Dynamic Range). Value ranges from:</p><li>ON: If the raw file is HDR, the transcoding output remains HDR; otherwise, the output is SDR (Standard Dynamic Range).</li><li>OFF: Regardless of whether the raw file is HDR or SDR, the transcoding output is SDR.</li>
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
                     * 获取<p>Encoding tag, valid only when the video stream encoding format is H.265. Value range:</p><li>hvc1 means hvc1 tag;</li><li>hev1 means hev1 tag.</li>Default value: hvc1.
                     * @return CodecTag <p>Encoding tag, valid only when the video stream encoding format is H.265. Value range:</p><li>hvc1 means hvc1 tag;</li><li>hev1 means hev1 tag.</li>Default value: hvc1.
                     * 
                     */
                    std::string GetCodecTag() const;

                    /**
                     * 设置<p>Encoding tag, valid only when the video stream encoding format is H.265. Value range:</p><li>hvc1 means hvc1 tag;</li><li>hev1 means hev1 tag.</li>Default value: hvc1.
                     * @param _codecTag <p>Encoding tag, valid only when the video stream encoding format is H.265. Value range:</p><li>hvc1 means hvc1 tag;</li><li>hev1 means hev1 tag.</li>Default value: hvc1.
                     * 
                     */
                    void SetCodecTag(const std::string& _codecTag);

                    /**
                     * 判断参数 CodecTag 是否已赋值
                     * @return CodecTag 是否已赋值
                     * 
                     */
                    bool CodecTagHasBeenSet() const;

                    /**
                     * 获取<p>Gop value unit.</p><p>Enumeration value:</p><ul><li>frame: Represents the number of frames.</li><li>second: Represents seconds.</li></ul><p>Default value: frame</p>
                     * @return GopUnit <p>Gop value unit.</p><p>Enumeration value:</p><ul><li>frame: Represents the number of frames.</li><li>second: Represents seconds.</li></ul><p>Default value: frame</p>
                     * 
                     */
                    std::string GetGopUnit() const;

                    /**
                     * 设置<p>Gop value unit.</p><p>Enumeration value:</p><ul><li>frame: Represents the number of frames.</li><li>second: Represents seconds.</li></ul><p>Default value: frame</p>
                     * @param _gopUnit <p>Gop value unit.</p><p>Enumeration value:</p><ul><li>frame: Represents the number of frames.</li><li>second: Represents seconds.</li></ul><p>Default value: frame</p>
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
                     * 获取<p>Bitrate control mode.</p><p>Enumeration value:</p><ul><li>VBR: Variable Bit Rate, dynamic bitrate (VBR), adjusts the output bitrate based on the complexity of the video image to ensure higher image quality, suitable for storage scenarios and applications with high image quality requirements.</li><li>ABR: Average Bit Rate, average bitrate, maintains a stable average bitrate of the output video as much as possible but allows short-term bitrate fluctuation, suitable for scenarios where minimizing overall bitrate is needed while maintaining a certain image quality.</li><li>CBR: Constant Bit Rate, constant bitrate, maintains a constant output bitrate regardless of image complexity changes, suitable for scenarios with strict network bandwidth requirements, such as live streaming.</li><li>VCRF: Constant Rate Factor, constant quality factor, controls video quality by setting a quality factor to achieve constant quality encoding of videos, with bitrate adjustment based on content complexity, suitable for scenarios where maintaining a certain quality is desired.</li></ul><p>Default value: VBR</p>
                     * @return Mode <p>Bitrate control mode.</p><p>Enumeration value:</p><ul><li>VBR: Variable Bit Rate, dynamic bitrate (VBR), adjusts the output bitrate based on the complexity of the video image to ensure higher image quality, suitable for storage scenarios and applications with high image quality requirements.</li><li>ABR: Average Bit Rate, average bitrate, maintains a stable average bitrate of the output video as much as possible but allows short-term bitrate fluctuation, suitable for scenarios where minimizing overall bitrate is needed while maintaining a certain image quality.</li><li>CBR: Constant Bit Rate, constant bitrate, maintains a constant output bitrate regardless of image complexity changes, suitable for scenarios with strict network bandwidth requirements, such as live streaming.</li><li>VCRF: Constant Rate Factor, constant quality factor, controls video quality by setting a quality factor to achieve constant quality encoding of videos, with bitrate adjustment based on content complexity, suitable for scenarios where maintaining a certain quality is desired.</li></ul><p>Default value: VBR</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Bitrate control mode.</p><p>Enumeration value:</p><ul><li>VBR: Variable Bit Rate, dynamic bitrate (VBR), adjusts the output bitrate based on the complexity of the video image to ensure higher image quality, suitable for storage scenarios and applications with high image quality requirements.</li><li>ABR: Average Bit Rate, average bitrate, maintains a stable average bitrate of the output video as much as possible but allows short-term bitrate fluctuation, suitable for scenarios where minimizing overall bitrate is needed while maintaining a certain image quality.</li><li>CBR: Constant Bit Rate, constant bitrate, maintains a constant output bitrate regardless of image complexity changes, suitable for scenarios with strict network bandwidth requirements, such as live streaming.</li><li>VCRF: Constant Rate Factor, constant quality factor, controls video quality by setting a quality factor to achieve constant quality encoding of videos, with bitrate adjustment based on content complexity, suitable for scenarios where maintaining a certain quality is desired.</li></ul><p>Default value: VBR</p>
                     * @param _mode <p>Bitrate control mode.</p><p>Enumeration value:</p><ul><li>VBR: Variable Bit Rate, dynamic bitrate (VBR), adjusts the output bitrate based on the complexity of the video image to ensure higher image quality, suitable for storage scenarios and applications with high image quality requirements.</li><li>ABR: Average Bit Rate, average bitrate, maintains a stable average bitrate of the output video as much as possible but allows short-term bitrate fluctuation, suitable for scenarios where minimizing overall bitrate is needed while maintaining a certain image quality.</li><li>CBR: Constant Bit Rate, constant bitrate, maintains a constant output bitrate regardless of image complexity changes, suitable for scenarios with strict network bandwidth requirements, such as live streaming.</li><li>VCRF: Constant Rate Factor, constant quality factor, controls video quality by setting a quality factor to achieve constant quality encoding of videos, with bitrate adjustment based on content complexity, suitable for scenarios where maintaining a certain quality is desired.</li></ul><p>Default value: VBR</p>
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
                     * 获取<p>Maximum number of consecutive B-frames, set to auto by default. -1 means change to automatic value.</p><p>Value ranges from -1 to 16.</p>
                     * @return Bframes <p>Maximum number of consecutive B-frames, set to auto by default. -1 means change to automatic value.</p><p>Value ranges from -1 to 16.</p>
                     * 
                     */
                    int64_t GetBframes() const;

                    /**
                     * 设置<p>Maximum number of consecutive B-frames, set to auto by default. -1 means change to automatic value.</p><p>Value ranges from -1 to 16.</p>
                     * @param _bframes <p>Maximum number of consecutive B-frames, set to auto by default. -1 means change to automatic value.</p><p>Value ranges from -1 to 16.</p>
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
                     * 获取<p>Average segment duration. 0 or blank means auto, which automatically chooses appropriate segment duration based on video features such as GOP.</p><p>Value ranges from 0 to 10.</p><p>Measurement unit: seconds.</p><p>Supports only transcoding templates, not currently supported for adaptive bitrate templates.</p>
                     * @return HlsTime <p>Average segment duration. 0 or blank means auto, which automatically chooses appropriate segment duration based on video features such as GOP.</p><p>Value ranges from 0 to 10.</p><p>Measurement unit: seconds.</p><p>Supports only transcoding templates, not currently supported for adaptive bitrate templates.</p>
                     * 
                     */
                    int64_t GetHlsTime() const;

                    /**
                     * 设置<p>Average segment duration. 0 or blank means auto, which automatically chooses appropriate segment duration based on video features such as GOP.</p><p>Value ranges from 0 to 10.</p><p>Measurement unit: seconds.</p><p>Supports only transcoding templates, not currently supported for adaptive bitrate templates.</p>
                     * @param _hlsTime <p>Average segment duration. 0 or blank means auto, which automatically chooses appropriate segment duration based on video features such as GOP.</p><p>Value ranges from 0 to 10.</p><p>Measurement unit: seconds.</p><p>Supports only transcoding templates, not currently supported for adaptive bitrate templates.</p>
                     * 
                     */
                    void SetHlsTime(const int64_t& _hlsTime);

                    /**
                     * 判断参数 HlsTime 是否已赋值
                     * @return HlsTime 是否已赋值
                     * 
                     */
                    bool HlsTimeHasBeenSet() const;

                    /**
                     * 获取<p>A predefined group of encoding tools or features allowed by the video encoding standard, suitable for different scenarios.</p><p>Enumeration values:</p><ul><li>baseline: Supports only I/p frames and non-interlaced scenarios, suitable for video calls and mobile video.</li><li>main: Mainstream Profile, provides I, p, and B frames, and supports both interlaced and non-interlaced modes. Primarily used in mainstream audio and video consumption products such as video players and streaming media transmission devices.</li><li>high: Highest encoding level, adds 8X8 prediction to the main Profile and supports custom quantification. Widely used in Blu-ray storage and HDTV scenarios.</li><li>default: Automatic filling along with the original video.</li></ul><p>default value: default</p><p>This configuration item is valid only when Codec is libx264.</p>
                     * @return VideoProfile <p>A predefined group of encoding tools or features allowed by the video encoding standard, suitable for different scenarios.</p><p>Enumeration values:</p><ul><li>baseline: Supports only I/p frames and non-interlaced scenarios, suitable for video calls and mobile video.</li><li>main: Mainstream Profile, provides I, p, and B frames, and supports both interlaced and non-interlaced modes. Primarily used in mainstream audio and video consumption products such as video players and streaming media transmission devices.</li><li>high: Highest encoding level, adds 8X8 prediction to the main Profile and supports custom quantification. Widely used in Blu-ray storage and HDTV scenarios.</li><li>default: Automatic filling along with the original video.</li></ul><p>default value: default</p><p>This configuration item is valid only when Codec is libx264.</p>
                     * 
                     */
                    std::string GetVideoProfile() const;

                    /**
                     * 设置<p>A predefined group of encoding tools or features allowed by the video encoding standard, suitable for different scenarios.</p><p>Enumeration values:</p><ul><li>baseline: Supports only I/p frames and non-interlaced scenarios, suitable for video calls and mobile video.</li><li>main: Mainstream Profile, provides I, p, and B frames, and supports both interlaced and non-interlaced modes. Primarily used in mainstream audio and video consumption products such as video players and streaming media transmission devices.</li><li>high: Highest encoding level, adds 8X8 prediction to the main Profile and supports custom quantification. Widely used in Blu-ray storage and HDTV scenarios.</li><li>default: Automatic filling along with the original video.</li></ul><p>default value: default</p><p>This configuration item is valid only when Codec is libx264.</p>
                     * @param _videoProfile <p>A predefined group of encoding tools or features allowed by the video encoding standard, suitable for different scenarios.</p><p>Enumeration values:</p><ul><li>baseline: Supports only I/p frames and non-interlaced scenarios, suitable for video calls and mobile video.</li><li>main: Mainstream Profile, provides I, p, and B frames, and supports both interlaced and non-interlaced modes. Primarily used in mainstream audio and video consumption products such as video players and streaming media transmission devices.</li><li>high: Highest encoding level, adds 8X8 prediction to the main Profile and supports custom quantification. Widely used in Blu-ray storage and HDTV scenarios.</li><li>default: Automatic filling along with the original video.</li></ul><p>default value: default</p><p>This configuration item is valid only when Codec is libx264.</p>
                     * 
                     */
                    void SetVideoProfile(const std::string& _videoProfile);

                    /**
                     * 判断参数 VideoProfile 是否已赋值
                     * @return VideoProfile 是否已赋值
                     * 
                     */
                    bool VideoProfileHasBeenSet() const;

                private:

                    /**
                     * <p>Video stream encoding format. Available values:</p><li>libx264: H.264 encoding;</li><li>libx265: H.265 encoding;</li><li>av1: AOMedia Video 1 encoding;</li><li>H.266: H.266 encoding.</li><font color="red">Note:</font><li>av1 and H.266 encoding containers currently only support mp4;</li><li>H.266 currently only supports fixed CRF bitrate control method.</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * <p>Video frame rate. Value ranges from 0 to 100. Unit: Hz.<br>When the value is 0, it means the frame rate is consistent with the original video.</p>
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * <p>Bitrate of video stream. Value ranges from 0 to [128, 100000]. Unit: kbps.<br>When the value is 0, it means VOD automatically sets the bitrate.</p>
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * <p>Resolution adaptation, available values:</p><li>open: Enable. At this point, Width represents the long side of the video, and Height indicates the short side.</li><li>close: Disable. At this point, Width represents the width of the video, and Height indicates the height.</li>
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * <p>The maximum value of the video stream width (or long side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>Maximum value of the video stream height (or short side). Value ranges from 0 to [128, 8192]. Measurement unit: px.</p>
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling mode:</p><li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched".</li><li>black: Maintain video aspect ratio with edges filled with black.</li><li>white: Maintain video aspect ratio with edge remainder filled with white.</li><li>gauss: Maintain video aspect ratio with Gaussian blur filling for the rest of the edges.</li>
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * <p>Control factor for constant video bitrate. Value range: [1, 51]. Enter 0 to indicate that it is disabled.</p><p><font color="red">Note:</font></p><li>If you specify this parameter, the bitrate control mode for CRF will be used to transcode (video bitrate will no longer take effect).</li><li>When the encoding format of the specified video stream is H.266, this field is required. The recommended value is 28.</li><li>If there are no special requirements, it is not recommended to specify this parameter.</li>
                     */
                    uint64_t m_vcrf;
                    bool m_vcrfHasBeenSet;

                    /**
                     * <p>Interval between I-frames, in frames. Value range: 0 and [1, 100000].<br>When it is set to 0 or not set, the system will automatically set the gop length.</p>
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * <p>Whether the transcoding output remains HDR when the original video is HDR (High Dynamic Range). Value ranges from:</p><li>ON: If the raw file is HDR, the transcoding output remains HDR; otherwise, the output is SDR (Standard Dynamic Range).</li><li>OFF: Regardless of whether the raw file is HDR or SDR, the transcoding output is SDR.</li>
                     */
                    std::string m_preserveHDRSwitch;
                    bool m_preserveHDRSwitchHasBeenSet;

                    /**
                     * <p>Encoding tag, valid only when the video stream encoding format is H.265. Value range:</p><li>hvc1 means hvc1 tag;</li><li>hev1 means hev1 tag.</li>Default value: hvc1.
                     */
                    std::string m_codecTag;
                    bool m_codecTagHasBeenSet;

                    /**
                     * <p>Gop value unit.</p><p>Enumeration value:</p><ul><li>frame: Represents the number of frames.</li><li>second: Represents seconds.</li></ul><p>Default value: frame</p>
                     */
                    std::string m_gopUnit;
                    bool m_gopUnitHasBeenSet;

                    /**
                     * <p>Bitrate control mode.</p><p>Enumeration value:</p><ul><li>VBR: Variable Bit Rate, dynamic bitrate (VBR), adjusts the output bitrate based on the complexity of the video image to ensure higher image quality, suitable for storage scenarios and applications with high image quality requirements.</li><li>ABR: Average Bit Rate, average bitrate, maintains a stable average bitrate of the output video as much as possible but allows short-term bitrate fluctuation, suitable for scenarios where minimizing overall bitrate is needed while maintaining a certain image quality.</li><li>CBR: Constant Bit Rate, constant bitrate, maintains a constant output bitrate regardless of image complexity changes, suitable for scenarios with strict network bandwidth requirements, such as live streaming.</li><li>VCRF: Constant Rate Factor, constant quality factor, controls video quality by setting a quality factor to achieve constant quality encoding of videos, with bitrate adjustment based on content complexity, suitable for scenarios where maintaining a certain quality is desired.</li></ul><p>Default value: VBR</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Maximum number of consecutive B-frames, set to auto by default. -1 means change to automatic value.</p><p>Value ranges from -1 to 16.</p>
                     */
                    int64_t m_bframes;
                    bool m_bframesHasBeenSet;

                    /**
                     * <p>Average segment duration. 0 or blank means auto, which automatically chooses appropriate segment duration based on video features such as GOP.</p><p>Value ranges from 0 to 10.</p><p>Measurement unit: seconds.</p><p>Supports only transcoding templates, not currently supported for adaptive bitrate templates.</p>
                     */
                    int64_t m_hlsTime;
                    bool m_hlsTimeHasBeenSet;

                    /**
                     * <p>A predefined group of encoding tools or features allowed by the video encoding standard, suitable for different scenarios.</p><p>Enumeration values:</p><ul><li>baseline: Supports only I/p frames and non-interlaced scenarios, suitable for video calls and mobile video.</li><li>main: Mainstream Profile, provides I, p, and B frames, and supports both interlaced and non-interlaced modes. Primarily used in mainstream audio and video consumption products such as video players and streaming media transmission devices.</li><li>high: Highest encoding level, adds 8X8 prediction to the main Profile and supports custom quantification. Widely used in Blu-ray storage and HDTV scenarios.</li><li>default: Automatic filling along with the original video.</li></ul><p>default value: default</p><p>This configuration item is valid only when Codec is libx264.</p>
                     */
                    std::string m_videoProfile;
                    bool m_videoProfileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_
