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
                     * 获取Video stream codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
                     * @return Codec Video stream codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Video stream codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
                     * @param Codec Video stream codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取Video frame rate in Hz. Value range: [0, 100].
If the value is 0, the frame rate will be the same as that of the source video.
                     * @return Fps Video frame rate in Hz. Value range: [0, 100].
If the value is 0, the frame rate will be the same as that of the source video.
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置Video frame rate in Hz. Value range: [0, 100].
If the value is 0, the frame rate will be the same as that of the source video.
                     * @param Fps Video frame rate in Hz. Value range: [0, 100].
If the value is 0, the frame rate will be the same as that of the source video.
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Video stream bitrate (Kbps). Valid values: `0`; [75, 35000]
If the value is `0`, the original video bitrate will be used.
                     * @return Bitrate Video stream bitrate (Kbps). Valid values: `0`; [75, 35000]
If the value is `0`, the original video bitrate will be used.
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置Video stream bitrate (Kbps). Valid values: `0`; [75, 35000]
If the value is `0`, the original video bitrate will be used.
                     * @param Bitrate Video stream bitrate (Kbps). Valid values: `0`; [75, 35000]
If the value is `0`, the original video bitrate will be used.
                     */
                    void SetBitrate(const uint64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取Resolution adaption. Valid values:
<li>open: Enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: Disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     * @return ResolutionAdaptive Resolution adaption. Valid values:
<li>open: Enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: Disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaption. Valid values:
<li>open: Enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: Disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     * @param ResolutionAdaptive Resolution adaption. Valid values:
<li>open: Enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: Disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     */
                    void SetResolutionAdaptive(const std::string& _resolutionAdaptive);

                    /**
                     * 判断参数 ResolutionAdaptive 是否已赋值
                     * @return ResolutionAdaptive 是否已赋值
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
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Maximum value of the width (or long side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     * @param Width Maximum value of the width (or long side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
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
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Maximum value of the height (or short side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     * @param Height Maximum value of the height (or short side) of a video stream in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Frame interval between I keyframes. Value range: 0 and [1,100000].
If this parameter is 0 or left empty, the system will automatically set the GOP length.
                     * @return Gop Frame interval between I keyframes. Value range: 0 and [1,100000].
If this parameter is 0 or left empty, the system will automatically set the GOP length.
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置Frame interval between I keyframes. Value range: 0 and [1,100000].
If this parameter is 0 or left empty, the system will automatically set the GOP length.
                     * @param Gop Frame interval between I keyframes. Value range: 0 and [1,100000].
If this parameter is 0 or left empty, the system will automatically set the GOP length.
                     */
                    void SetGop(const uint64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     */
                    bool GopHasBeenSet() const;

                    /**
                     * 获取Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
<li>white: fill with white. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with white color blocks.</li>
<li>gauss: fill with Gaussian blur. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with Gaussian blur.</li>
Default value: black.
                     * @return FillType Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
<li>white: fill with white. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with white color blocks.</li>
<li>gauss: fill with Gaussian blur. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with Gaussian blur.</li>
Default value: black.
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
<li>white: fill with white. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with white color blocks.</li>
<li>gauss: fill with Gaussian blur. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with Gaussian blur.</li>
Default value: black.
                     * @param FillType Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
<li>white: fill with white. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with white color blocks.</li>
<li>gauss: fill with Gaussian blur. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with Gaussian blur.</li>
Default value: black.
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     */
                    bool FillTypeHasBeenSet() const;

                    /**
                     * 获取The control factor of video constant bitrate. Value range: [1, 51]
If this parameter is specified, CRF (a bitrate control method) will be used for transcoding. (Video bitrate will no longer take effect.)
It is not recommended to specify this parameter if there are no special requirements.
                     * @return Vcrf The control factor of video constant bitrate. Value range: [1, 51]
If this parameter is specified, CRF (a bitrate control method) will be used for transcoding. (Video bitrate will no longer take effect.)
It is not recommended to specify this parameter if there are no special requirements.
                     */
                    uint64_t GetVcrf() const;

                    /**
                     * 设置The control factor of video constant bitrate. Value range: [1, 51]
If this parameter is specified, CRF (a bitrate control method) will be used for transcoding. (Video bitrate will no longer take effect.)
It is not recommended to specify this parameter if there are no special requirements.
                     * @param Vcrf The control factor of video constant bitrate. Value range: [1, 51]
If this parameter is specified, CRF (a bitrate control method) will be used for transcoding. (Video bitrate will no longer take effect.)
It is not recommended to specify this parameter if there are no special requirements.
                     */
                    void SetVcrf(const uint64_t& _vcrf);

                    /**
                     * 判断参数 Vcrf 是否已赋值
                     * @return Vcrf 是否已赋值
                     */
                    bool VcrfHasBeenSet() const;

                private:

                    /**
                     * Video stream codec. Valid values:
<li>`libx264`: H.264</li>
<li>`libx265`: H.265</li>
<li>`av1`: AOMedia Video 1</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Video frame rate in Hz. Value range: [0, 100].
If the value is 0, the frame rate will be the same as that of the source video.
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Video stream bitrate (Kbps). Valid values: `0`; [75, 35000]
If the value is `0`, the original video bitrate will be used.
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Resolution adaption. Valid values:
<li>open: Enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: Disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
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
                     * Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
<li>white: fill with white. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with white color blocks.</li>
<li>gauss: fill with Gaussian blur. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with Gaussian blur.</li>
Default value: black.
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
