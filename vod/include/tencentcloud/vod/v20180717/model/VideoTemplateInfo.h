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
                * Video stream configuration parameters
                */
                class VideoTemplateInfo : public AbstractModel
                {
                public:
                    VideoTemplateInfo();
                    ~VideoTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Video stream encoding format. Available values:</p><li>libx264: H.264 encoding;</li><li>libx265: H.265 encoding;</li><li>av1: AOMedia Video 1 encoding;</li><li>H.266: H.266 encoding.</li><font color="red">Note:</font><li> av1 and H.266 encoding containers currently only support mp4;</li><li> H.266 currently only supports the fixed CRF bitrate control method. </li>
                     * @return Codec <p>Video stream encoding format. Available values:</p><li>libx264: H.264 encoding;</li><li>libx265: H.265 encoding;</li><li>av1: AOMedia Video 1 encoding;</li><li>H.266: H.266 encoding.</li><font color="red">Note:</font><li> av1 and H.266 encoding containers currently only support mp4;</li><li> H.266 currently only supports the fixed CRF bitrate control method. </li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置<p>Video stream encoding format. Available values:</p><li>libx264: H.264 encoding;</li><li>libx265: H.265 encoding;</li><li>av1: AOMedia Video 1 encoding;</li><li>H.266: H.266 encoding.</li><font color="red">Note:</font><li> av1 and H.266 encoding containers currently only support mp4;</li><li> H.266 currently only supports the fixed CRF bitrate control method. </li>
                     * @param _codec <p>Video stream encoding format. Available values:</p><li>libx264: H.264 encoding;</li><li>libx265: H.265 encoding;</li><li>av1: AOMedia Video 1 encoding;</li><li>H.266: H.266 encoding.</li><font color="red">Note:</font><li> av1 and H.266 encoding containers currently only support mp4;</li><li> H.266 currently only supports the fixed CRF bitrate control method. </li>
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
                     * 获取<p>Video frame rate. Value range: [0, 100]. Unit: Hz.<br>When the value is 0, it means the frame rate is consistent with the original video.</p>
                     * @return Fps <p>Video frame rate. Value range: [0, 100]. Unit: Hz.<br>When the value is 0, it means the frame rate is consistent with the original video.</p>
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置<p>Video frame rate. Value range: [0, 100]. Unit: Hz.<br>When the value is 0, it means the frame rate is consistent with the original video.</p>
                     * @param _fps <p>Video frame rate. Value range: [0, 100]. Unit: Hz.<br>When the value is 0, it means the frame rate is consistent with the original video.</p>
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
                     * 获取<p>Bitrate of video stream. Value range: 0 and [128, 100000]. Unit: kbps.<br>When the value is 0, it means VOD automatically sets the bitrate.</p>
                     * @return Bitrate <p>Bitrate of video stream. Value range: 0 and [128, 100000]. Unit: kbps.<br>When the value is 0, it means VOD automatically sets the bitrate.</p>
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置<p>Bitrate of video stream. Value range: 0 and [128, 100000]. Unit: kbps.<br>When the value is 0, it means VOD automatically sets the bitrate.</p>
                     * @param _bitrate <p>Bitrate of video stream. Value range: 0 and [128, 100000]. Unit: kbps.<br>When the value is 0, it means VOD automatically sets the bitrate.</p>
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
                     * 获取<p>Resolution adaptation. Available values:</p><li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side;</li><li>close: disable. At this point, Width represents the video width, and Height represents the video height.</li>Default value: open.
                     * @return ResolutionAdaptive <p>Resolution adaptation. Available values:</p><li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side;</li><li>close: disable. At this point, Width represents the video width, and Height represents the video height.</li>Default value: open.
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置<p>Resolution adaptation. Available values:</p><li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side;</li><li>close: disable. At this point, Width represents the video width, and Height represents the video height.</li>Default value: open.
                     * @param _resolutionAdaptive <p>Resolution adaptation. Available values:</p><li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side;</li><li>close: disable. At this point, Width represents the video width, and Height represents the video height.</li>Default value: open.
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
                     * 获取<p>The maximum value of the video stream width (or long side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     * @return Width <p>The maximum value of the video stream width (or long side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置<p>The maximum value of the video stream width (or long side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     * @param _width <p>The maximum value of the video stream width (or long side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
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
                     * 获取<p>The maximum value of the video stream height (or short side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     * @return Height <p>The maximum value of the video stream height (or short side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置<p>The maximum value of the video stream height (or short side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     * @param _height <p>The maximum value of the video stream height (or short side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
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
                     * 获取<p>Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "fill". Optional filling modes:</p><li>stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched".</li><li>black: Keep the video aspect ratio unchanged, with edges filled with black.</li><li>white: Keep the video aspect ratio unchanged, with edge remainder filled with white.</li><li>gauss: Gaussian blur. Keep the video aspect ratio unchanged, with Gaussian blur filling for the rest of the edges.</li>Default value: black.
                     * @return FillType <p>Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "fill". Optional filling modes:</p><li>stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched".</li><li>black: Keep the video aspect ratio unchanged, with edges filled with black.</li><li>white: Keep the video aspect ratio unchanged, with edge remainder filled with white.</li><li>gauss: Gaussian blur. Keep the video aspect ratio unchanged, with Gaussian blur filling for the rest of the edges.</li>Default value: black.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置<p>Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "fill". Optional filling modes:</p><li>stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched".</li><li>black: Keep the video aspect ratio unchanged, with edges filled with black.</li><li>white: Keep the video aspect ratio unchanged, with edge remainder filled with white.</li><li>gauss: Gaussian blur. Keep the video aspect ratio unchanged, with Gaussian blur filling for the rest of the edges.</li>Default value: black.
                     * @param _fillType <p>Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "fill". Optional filling modes:</p><li>stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched".</li><li>black: Keep the video aspect ratio unchanged, with edges filled with black.</li><li>white: Keep the video aspect ratio unchanged, with edge remainder filled with white.</li><li>gauss: Gaussian blur. Keep the video aspect ratio unchanged, with Gaussian blur filling for the rest of the edges.</li>Default value: black.
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
                     * 获取<p>Control factor for constant video bitrate. Value range: [1, 51].</p><p><font color="red">Note:</font></p><li>If you specify this parameter, the bitrate control mode for CRF will be used to transcode (video bitrate will no longer take effect);</li><li>When the encoding format of the specified video stream is H.266, this field is required. Recommended value: 28;</li><li>If there are no special requirements, it is not recommended to specify this parameter.</li>
                     * @return Vcrf <p>Control factor for constant video bitrate. Value range: [1, 51].</p><p><font color="red">Note:</font></p><li>If you specify this parameter, the bitrate control mode for CRF will be used to transcode (video bitrate will no longer take effect);</li><li>When the encoding format of the specified video stream is H.266, this field is required. Recommended value: 28;</li><li>If there are no special requirements, it is not recommended to specify this parameter.</li>
                     * 
                     */
                    uint64_t GetVcrf() const;

                    /**
                     * 设置<p>Control factor for constant video bitrate. Value range: [1, 51].</p><p><font color="red">Note:</font></p><li>If you specify this parameter, the bitrate control mode for CRF will be used to transcode (video bitrate will no longer take effect);</li><li>When the encoding format of the specified video stream is H.266, this field is required. Recommended value: 28;</li><li>If there are no special requirements, it is not recommended to specify this parameter.</li>
                     * @param _vcrf <p>Control factor for constant video bitrate. Value range: [1, 51].</p><p><font color="red">Note:</font></p><li>If you specify this parameter, the bitrate control mode for CRF will be used to transcode (video bitrate will no longer take effect);</li><li>When the encoding format of the specified video stream is H.266, this field is required. Recommended value: 28;</li><li>If there are no special requirements, it is not recommended to specify this parameter.</li>
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
                     * 获取<p>Gop value unit.</p><p>Enumeration values:</p><ul><li>frame: Indicates the number of frames.</li><li>second: Indicates the number of seconds.</li></ul><p>Default value: frame</p>
                     * @return GopUnit <p>Gop value unit.</p><p>Enumeration values:</p><ul><li>frame: Indicates the number of frames.</li><li>second: Indicates the number of seconds.</li></ul><p>Default value: frame</p>
                     * 
                     */
                    std::string GetGopUnit() const;

                    /**
                     * 设置<p>Gop value unit.</p><p>Enumeration values:</p><ul><li>frame: Indicates the number of frames.</li><li>second: Indicates the number of seconds.</li></ul><p>Default value: frame</p>
                     * @param _gopUnit <p>Gop value unit.</p><p>Enumeration values:</p><ul><li>frame: Indicates the number of frames.</li><li>second: Indicates the number of seconds.</li></ul><p>Default value: frame</p>
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
                     * 获取<p>Whether the transcoding output remains HDR when the raw video is HDR (High Dynamic Range). Value range:</p><li>ON: If the original file is HDR, the transcoding output remains HDR; otherwise, the transcoding output is SDR (Standard Dynamic Range).</li><li>OFF: Regardless of whether the original file is HDR or SDR, the transcoding output is SDR.</li>Default value: OFF.
                     * @return PreserveHDRSwitch <p>Whether the transcoding output remains HDR when the raw video is HDR (High Dynamic Range). Value range:</p><li>ON: If the original file is HDR, the transcoding output remains HDR; otherwise, the transcoding output is SDR (Standard Dynamic Range).</li><li>OFF: Regardless of whether the original file is HDR or SDR, the transcoding output is SDR.</li>Default value: OFF.
                     * 
                     */
                    std::string GetPreserveHDRSwitch() const;

                    /**
                     * 设置<p>Whether the transcoding output remains HDR when the raw video is HDR (High Dynamic Range). Value range:</p><li>ON: If the original file is HDR, the transcoding output remains HDR; otherwise, the transcoding output is SDR (Standard Dynamic Range).</li><li>OFF: Regardless of whether the original file is HDR or SDR, the transcoding output is SDR.</li>Default value: OFF.
                     * @param _preserveHDRSwitch <p>Whether the transcoding output remains HDR when the raw video is HDR (High Dynamic Range). Value range:</p><li>ON: If the original file is HDR, the transcoding output remains HDR; otherwise, the transcoding output is SDR (Standard Dynamic Range).</li><li>OFF: Regardless of whether the original file is HDR or SDR, the transcoding output is SDR.</li>Default value: OFF.
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
                     * 获取<p>Encoding tag. It is valid only when the video stream encoding format is H.265. Available values:</p><li>hvc1: hvc1 tag</li><li>hev1: hev1 tag</li>Default value: hvc1.
                     * @return CodecTag <p>Encoding tag. It is valid only when the video stream encoding format is H.265. Available values:</p><li>hvc1: hvc1 tag</li><li>hev1: hev1 tag</li>Default value: hvc1.
                     * 
                     */
                    std::string GetCodecTag() const;

                    /**
                     * 设置<p>Encoding tag. It is valid only when the video stream encoding format is H.265. Available values:</p><li>hvc1: hvc1 tag</li><li>hev1: hev1 tag</li>Default value: hvc1.
                     * @param _codecTag <p>Encoding tag. It is valid only when the video stream encoding format is H.265. Available values:</p><li>hvc1: hvc1 tag</li><li>hev1: hev1 tag</li>Default value: hvc1.
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
                     * 获取<p>Bitrate control mode.</p><p>Enumeration values:</p><ul><li>VBR: Variable Bit Rate. It dynamically adjusts the output bitrate based on the complexity of the video image to ensure higher image quality. It is suitable for storage scenarios and applications with high image quality requirements.</li><li>ABR: Average Bit Rate. It tries to stabilize the average bitrate of the output video as much as possible while allowing short-term bitrate fluctuation. It is suitable for scenarios where you need to minimize the overall bitrate while maintaining a certain image quality.</li><li>CBR: Constant Bit Rate. It maintains a constant output bitrate during video encoding regardless of changes in image complexity. It is suitable for scenarios with strict network bandwidth requirements, such as live streaming.</li><li>VCRF: Constant quality factor. It controls video quality by setting a quality factor to achieve constant quality encoding of videos. The bitrate is automatically adjusted based on content complexity. It is suitable for scenarios where maintaining a certain image quality is desired.</li></ul><p>Default value: VBR</p>
                     * @return Mode <p>Bitrate control mode.</p><p>Enumeration values:</p><ul><li>VBR: Variable Bit Rate. It dynamically adjusts the output bitrate based on the complexity of the video image to ensure higher image quality. It is suitable for storage scenarios and applications with high image quality requirements.</li><li>ABR: Average Bit Rate. It tries to stabilize the average bitrate of the output video as much as possible while allowing short-term bitrate fluctuation. It is suitable for scenarios where you need to minimize the overall bitrate while maintaining a certain image quality.</li><li>CBR: Constant Bit Rate. It maintains a constant output bitrate during video encoding regardless of changes in image complexity. It is suitable for scenarios with strict network bandwidth requirements, such as live streaming.</li><li>VCRF: Constant quality factor. It controls video quality by setting a quality factor to achieve constant quality encoding of videos. The bitrate is automatically adjusted based on content complexity. It is suitable for scenarios where maintaining a certain image quality is desired.</li></ul><p>Default value: VBR</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Bitrate control mode.</p><p>Enumeration values:</p><ul><li>VBR: Variable Bit Rate. It dynamically adjusts the output bitrate based on the complexity of the video image to ensure higher image quality. It is suitable for storage scenarios and applications with high image quality requirements.</li><li>ABR: Average Bit Rate. It tries to stabilize the average bitrate of the output video as much as possible while allowing short-term bitrate fluctuation. It is suitable for scenarios where you need to minimize the overall bitrate while maintaining a certain image quality.</li><li>CBR: Constant Bit Rate. It maintains a constant output bitrate during video encoding regardless of changes in image complexity. It is suitable for scenarios with strict network bandwidth requirements, such as live streaming.</li><li>VCRF: Constant quality factor. It controls video quality by setting a quality factor to achieve constant quality encoding of videos. The bitrate is automatically adjusted based on content complexity. It is suitable for scenarios where maintaining a certain image quality is desired.</li></ul><p>Default value: VBR</p>
                     * @param _mode <p>Bitrate control mode.</p><p>Enumeration values:</p><ul><li>VBR: Variable Bit Rate. It dynamically adjusts the output bitrate based on the complexity of the video image to ensure higher image quality. It is suitable for storage scenarios and applications with high image quality requirements.</li><li>ABR: Average Bit Rate. It tries to stabilize the average bitrate of the output video as much as possible while allowing short-term bitrate fluctuation. It is suitable for scenarios where you need to minimize the overall bitrate while maintaining a certain image quality.</li><li>CBR: Constant Bit Rate. It maintains a constant output bitrate during video encoding regardless of changes in image complexity. It is suitable for scenarios with strict network bandwidth requirements, such as live streaming.</li><li>VCRF: Constant quality factor. It controls video quality by setting a quality factor to achieve constant quality encoding of videos. The bitrate is automatically adjusted based on content complexity. It is suitable for scenarios where maintaining a certain image quality is desired.</li></ul><p>Default value: VBR</p>
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
                     * 获取<p>Number of B-frames between reference frames. The default is auto.</p><p>Value range: [0, 16]</p>
                     * @return Bframes <p>Number of B-frames between reference frames. The default is auto.</p><p>Value range: [0, 16]</p>
                     * 
                     */
                    int64_t GetBframes() const;

                    /**
                     * 设置<p>Number of B-frames between reference frames. The default is auto.</p><p>Value range: [0, 16]</p>
                     * @param _bframes <p>Number of B-frames between reference frames. The default is auto.</p><p>Value range: [0, 16]</p>
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
                     * 获取<p>Average shard duration. 0 or empty means auto, and an appropriate shard duration will be automatically selected based on features such as the video GOP.</p><p>Value range: [0, 10]</p><p>Unit: second</p><p>Supports only transcoding templates. Adaptive bitrate templates are not currently supported.</p>
                     * @return HlsTime <p>Average shard duration. 0 or empty means auto, and an appropriate shard duration will be automatically selected based on features such as the video GOP.</p><p>Value range: [0, 10]</p><p>Unit: second</p><p>Supports only transcoding templates. Adaptive bitrate templates are not currently supported.</p>
                     * 
                     */
                    int64_t GetHlsTime() const;

                    /**
                     * 设置<p>Average shard duration. 0 or empty means auto, and an appropriate shard duration will be automatically selected based on features such as the video GOP.</p><p>Value range: [0, 10]</p><p>Unit: second</p><p>Supports only transcoding templates. Adaptive bitrate templates are not currently supported.</p>
                     * @param _hlsTime <p>Average shard duration. 0 or empty means auto, and an appropriate shard duration will be automatically selected based on features such as the video GOP.</p><p>Value range: [0, 10]</p><p>Unit: second</p><p>Supports only transcoding templates. Adaptive bitrate templates are not currently supported.</p>
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
                     * 获取<p>A predefined group of encoding tools or features allowed in the video encoding standard, suitable for different scenarios.</p><p>Enumeration values:</p><ul><li>baseline: Supports only I/P frames and non-interlaced scenarios, suitable for video calls, mobile video, and other scenarios.</li><li>main: The mainstream profile, provides I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices.</li><li>high: The highest encoding level, adds 8X8 prediction on top of the Main Profile and supports custom quantification. It is widely used in Blu-ray storage, HDTV, and other scenarios.</li><li>default: Automatic filling along with the original video.  </li></ul><p>Default value: default</p><p>This configuration item is valid only when Codec is libx264.</p>
                     * @return VideoProfile <p>A predefined group of encoding tools or features allowed in the video encoding standard, suitable for different scenarios.</p><p>Enumeration values:</p><ul><li>baseline: Supports only I/P frames and non-interlaced scenarios, suitable for video calls, mobile video, and other scenarios.</li><li>main: The mainstream profile, provides I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices.</li><li>high: The highest encoding level, adds 8X8 prediction on top of the Main Profile and supports custom quantification. It is widely used in Blu-ray storage, HDTV, and other scenarios.</li><li>default: Automatic filling along with the original video.  </li></ul><p>Default value: default</p><p>This configuration item is valid only when Codec is libx264.</p>
                     * 
                     */
                    std::string GetVideoProfile() const;

                    /**
                     * 设置<p>A predefined group of encoding tools or features allowed in the video encoding standard, suitable for different scenarios.</p><p>Enumeration values:</p><ul><li>baseline: Supports only I/P frames and non-interlaced scenarios, suitable for video calls, mobile video, and other scenarios.</li><li>main: The mainstream profile, provides I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices.</li><li>high: The highest encoding level, adds 8X8 prediction on top of the Main Profile and supports custom quantification. It is widely used in Blu-ray storage, HDTV, and other scenarios.</li><li>default: Automatic filling along with the original video.  </li></ul><p>Default value: default</p><p>This configuration item is valid only when Codec is libx264.</p>
                     * @param _videoProfile <p>A predefined group of encoding tools or features allowed in the video encoding standard, suitable for different scenarios.</p><p>Enumeration values:</p><ul><li>baseline: Supports only I/P frames and non-interlaced scenarios, suitable for video calls, mobile video, and other scenarios.</li><li>main: The mainstream profile, provides I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices.</li><li>high: The highest encoding level, adds 8X8 prediction on top of the Main Profile and supports custom quantification. It is widely used in Blu-ray storage, HDTV, and other scenarios.</li><li>default: Automatic filling along with the original video.  </li></ul><p>Default value: default</p><p>This configuration item is valid only when Codec is libx264.</p>
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
                     * <p>Video stream encoding format. Available values:</p><li>libx264: H.264 encoding;</li><li>libx265: H.265 encoding;</li><li>av1: AOMedia Video 1 encoding;</li><li>H.266: H.266 encoding.</li><font color="red">Note:</font><li> av1 and H.266 encoding containers currently only support mp4;</li><li> H.266 currently only supports the fixed CRF bitrate control method. </li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * <p>Video frame rate. Value range: [0, 100]. Unit: Hz.<br>When the value is 0, it means the frame rate is consistent with the original video.</p>
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * <p>Bitrate of video stream. Value range: 0 and [128, 100000]. Unit: kbps.<br>When the value is 0, it means VOD automatically sets the bitrate.</p>
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * <p>Resolution adaptation. Available values:</p><li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side;</li><li>close: disable. At this point, Width represents the video width, and Height represents the video height.</li>Default value: open.
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * <p>The maximum value of the video stream width (or long side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>The maximum value of the video stream height (or short side). Valid values: 0 and [128, 8192]. Unit: px.</p><li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "fill". Optional filling modes:</p><li>stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched".</li><li>black: Keep the video aspect ratio unchanged, with edges filled with black.</li><li>white: Keep the video aspect ratio unchanged, with edge remainder filled with white.</li><li>gauss: Gaussian blur. Keep the video aspect ratio unchanged, with Gaussian blur filling for the rest of the edges.</li>Default value: black.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * <p>Control factor for constant video bitrate. Value range: [1, 51].</p><p><font color="red">Note:</font></p><li>If you specify this parameter, the bitrate control mode for CRF will be used to transcode (video bitrate will no longer take effect);</li><li>When the encoding format of the specified video stream is H.266, this field is required. Recommended value: 28;</li><li>If there are no special requirements, it is not recommended to specify this parameter.</li>
                     */
                    uint64_t m_vcrf;
                    bool m_vcrfHasBeenSet;

                    /**
                     * <p>Interval between I-frames, in frames. Value range: 0 and [1, 100000].<br>When it is set to 0 or not set, the system will automatically set the gop length.</p>
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * <p>Gop value unit.</p><p>Enumeration values:</p><ul><li>frame: Indicates the number of frames.</li><li>second: Indicates the number of seconds.</li></ul><p>Default value: frame</p>
                     */
                    std::string m_gopUnit;
                    bool m_gopUnitHasBeenSet;

                    /**
                     * <p>Whether the transcoding output remains HDR when the raw video is HDR (High Dynamic Range). Value range:</p><li>ON: If the original file is HDR, the transcoding output remains HDR; otherwise, the transcoding output is SDR (Standard Dynamic Range).</li><li>OFF: Regardless of whether the original file is HDR or SDR, the transcoding output is SDR.</li>Default value: OFF.
                     */
                    std::string m_preserveHDRSwitch;
                    bool m_preserveHDRSwitchHasBeenSet;

                    /**
                     * <p>Encoding tag. It is valid only when the video stream encoding format is H.265. Available values:</p><li>hvc1: hvc1 tag</li><li>hev1: hev1 tag</li>Default value: hvc1.
                     */
                    std::string m_codecTag;
                    bool m_codecTagHasBeenSet;

                    /**
                     * <p>Bitrate control mode.</p><p>Enumeration values:</p><ul><li>VBR: Variable Bit Rate. It dynamically adjusts the output bitrate based on the complexity of the video image to ensure higher image quality. It is suitable for storage scenarios and applications with high image quality requirements.</li><li>ABR: Average Bit Rate. It tries to stabilize the average bitrate of the output video as much as possible while allowing short-term bitrate fluctuation. It is suitable for scenarios where you need to minimize the overall bitrate while maintaining a certain image quality.</li><li>CBR: Constant Bit Rate. It maintains a constant output bitrate during video encoding regardless of changes in image complexity. It is suitable for scenarios with strict network bandwidth requirements, such as live streaming.</li><li>VCRF: Constant quality factor. It controls video quality by setting a quality factor to achieve constant quality encoding of videos. The bitrate is automatically adjusted based on content complexity. It is suitable for scenarios where maintaining a certain image quality is desired.</li></ul><p>Default value: VBR</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Number of B-frames between reference frames. The default is auto.</p><p>Value range: [0, 16]</p>
                     */
                    int64_t m_bframes;
                    bool m_bframesHasBeenSet;

                    /**
                     * <p>Average shard duration. 0 or empty means auto, and an appropriate shard duration will be automatically selected based on features such as the video GOP.</p><p>Value range: [0, 10]</p><p>Unit: second</p><p>Supports only transcoding templates. Adaptive bitrate templates are not currently supported.</p>
                     */
                    int64_t m_hlsTime;
                    bool m_hlsTimeHasBeenSet;

                    /**
                     * <p>A predefined group of encoding tools or features allowed in the video encoding standard, suitable for different scenarios.</p><p>Enumeration values:</p><ul><li>baseline: Supports only I/P frames and non-interlaced scenarios, suitable for video calls, mobile video, and other scenarios.</li><li>main: The mainstream profile, provides I-frames, P-frames, and B-frames, and supports both interlaced and non-interlaced modes. It is mainly used in mainstream audio and video consumption products such as video players and streaming media transmission devices.</li><li>high: The highest encoding level, adds 8X8 prediction on top of the Main Profile and supports custom quantification. It is widely used in Blu-ray storage, HDTV, and other scenarios.</li><li>default: Automatic filling along with the original video.  </li></ul><p>Default value: default</p><p>This configuration item is valid only when Codec is libx264.</p>
                     */
                    std::string m_videoProfile;
                    bool m_videoProfileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTEMPLATEINFO_H_
