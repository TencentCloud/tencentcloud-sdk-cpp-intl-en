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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AdaptiveStreamTemplate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAdaptiveDynamicStreamingTemplate request structure.
                */
                class CreateAdaptiveDynamicStreamingTemplateRequest : public AbstractModel
                {
                public:
                    CreateAdaptiveDynamicStreamingTemplateRequest();
                    ~CreateAdaptiveDynamicStreamingTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Adaptive bitrate streaming format. Valid values:
<li>HLS,</li>
<li>MPEG-DASH.</li>
                     * @return Format Adaptive bitrate streaming format. Valid values:
<li>HLS,</li>
<li>MPEG-DASH.</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Adaptive bitrate streaming format. Valid values:
<li>HLS,</li>
<li>MPEG-DASH.</li>
                     * @param _format Adaptive bitrate streaming format. Valid values:
<li>HLS,</li>
<li>MPEG-DASH.</li>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Parameter information of output substreams for transcoding to adaptive bitrate streaming. Up to 10 substreams can be output.
Note: the frame rate of each substream must be consistent; otherwise, the frame rate of the first substream is used as the output frame rate.
                     * @return StreamInfos Parameter information of output substreams for transcoding to adaptive bitrate streaming. Up to 10 substreams can be output.
Note: the frame rate of each substream must be consistent; otherwise, the frame rate of the first substream is used as the output frame rate.
                     * 
                     */
                    std::vector<AdaptiveStreamTemplate> GetStreamInfos() const;

                    /**
                     * 设置Parameter information of output substreams for transcoding to adaptive bitrate streaming. Up to 10 substreams can be output.
Note: the frame rate of each substream must be consistent; otherwise, the frame rate of the first substream is used as the output frame rate.
                     * @param _streamInfos Parameter information of output substreams for transcoding to adaptive bitrate streaming. Up to 10 substreams can be output.
Note: the frame rate of each substream must be consistent; otherwise, the frame rate of the first substream is used as the output frame rate.
                     * 
                     */
                    void SetStreamInfos(const std::vector<AdaptiveStreamTemplate>& _streamInfos);

                    /**
                     * 判断参数 StreamInfos 是否已赋值
                     * @return StreamInfos 是否已赋值
                     * 
                     */
                    bool StreamInfosHasBeenSet() const;

                    /**
                     * 获取Template name. Length limit: 64 characters.
                     * @return Name Template name. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name. Length limit: 64 characters.
                     * @param _name Template name. Length limit: 64 characters.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Whether to prohibit transcoding from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: 0.
                     * @return DisableHigherVideoBitrate Whether to prohibit transcoding from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: 0.
                     * 
                     */
                    uint64_t GetDisableHigherVideoBitrate() const;

                    /**
                     * 设置Whether to prohibit transcoding from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: 0.
                     * @param _disableHigherVideoBitrate Whether to prohibit transcoding from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: 0.
                     * 
                     */
                    void SetDisableHigherVideoBitrate(const uint64_t& _disableHigherVideoBitrate);

                    /**
                     * 判断参数 DisableHigherVideoBitrate 是否已赋值
                     * @return DisableHigherVideoBitrate 是否已赋值
                     * 
                     */
                    bool DisableHigherVideoBitrateHasBeenSet() const;

                    /**
                     * 获取Whether to prohibit transcoding from low resolution to high resolution. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: 0.
                     * @return DisableHigherVideoResolution Whether to prohibit transcoding from low resolution to high resolution. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: 0.
                     * 
                     */
                    uint64_t GetDisableHigherVideoResolution() const;

                    /**
                     * 设置Whether to prohibit transcoding from low resolution to high resolution. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: 0.
                     * @param _disableHigherVideoResolution Whether to prohibit transcoding from low resolution to high resolution. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: 0.
                     * 
                     */
                    void SetDisableHigherVideoResolution(const uint64_t& _disableHigherVideoResolution);

                    /**
                     * 判断参数 DisableHigherVideoResolution 是否已赋值
                     * @return DisableHigherVideoResolution 是否已赋值
                     * 
                     */
                    bool DisableHigherVideoResolutionHasBeenSet() const;

                    /**
                     * 获取Template description. Length limit: 256 characters.
                     * @return Comment Template description. Length limit: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. Length limit: 256 characters.
                     * @param _comment Template description. Length limit: 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Indicates whether it is audio-only. 0 means video template, 1 means audio-only template.
When the value is 1.
1. StreamInfos.N.RemoveVideo=1
2. StreamInfos.N.RemoveAudio=0
3. StreamInfos.N.Video.Codec=copy
When the value is 0.
1. StreamInfos.N.Video.Codec cannot be copy.
2. StreamInfos.N.Video.Fps cannot be null.

Note:

This value only distinguishes template types. The task uses the values of RemoveAudio and RemoveVideo.
                     * @return PureAudio Indicates whether it is audio-only. 0 means video template, 1 means audio-only template.
When the value is 1.
1. StreamInfos.N.RemoveVideo=1
2. StreamInfos.N.RemoveAudio=0
3. StreamInfos.N.Video.Codec=copy
When the value is 0.
1. StreamInfos.N.Video.Codec cannot be copy.
2. StreamInfos.N.Video.Fps cannot be null.

Note:

This value only distinguishes template types. The task uses the values of RemoveAudio and RemoveVideo.
                     * 
                     */
                    uint64_t GetPureAudio() const;

                    /**
                     * 设置Indicates whether it is audio-only. 0 means video template, 1 means audio-only template.
When the value is 1.
1. StreamInfos.N.RemoveVideo=1
2. StreamInfos.N.RemoveAudio=0
3. StreamInfos.N.Video.Codec=copy
When the value is 0.
1. StreamInfos.N.Video.Codec cannot be copy.
2. StreamInfos.N.Video.Fps cannot be null.

Note:

This value only distinguishes template types. The task uses the values of RemoveAudio and RemoveVideo.
                     * @param _pureAudio Indicates whether it is audio-only. 0 means video template, 1 means audio-only template.
When the value is 1.
1. StreamInfos.N.RemoveVideo=1
2. StreamInfos.N.RemoveAudio=0
3. StreamInfos.N.Video.Codec=copy
When the value is 0.
1. StreamInfos.N.Video.Codec cannot be copy.
2. StreamInfos.N.Video.Fps cannot be null.

Note:

This value only distinguishes template types. The task uses the values of RemoveAudio and RemoveVideo.
                     * 
                     */
                    void SetPureAudio(const uint64_t& _pureAudio);

                    /**
                     * 判断参数 PureAudio 是否已赋值
                     * @return PureAudio 是否已赋值
                     * 
                     */
                    bool PureAudioHasBeenSet() const;

                    /**
                     * 获取HLS segment type. Valid values: <li>ts-segment: HLS+TS segment.</li> <li>ts-byterange: HLS+TS byte range.</li> <li>mp4-segment: HLS+MP4 segment.</li> <li>mp4-byterange: HLS+MP4 byte range.</li> <li>ts-packed-audio: TS+Packed audio.</li> <li>mp4-packed-audio: MP4+Packed audio.</li> Default value: ts-segment.
Note: The HLS segment format for adaptive bitrate streaming is based on this field.
                     * @return SegmentType HLS segment type. Valid values: <li>ts-segment: HLS+TS segment.</li> <li>ts-byterange: HLS+TS byte range.</li> <li>mp4-segment: HLS+MP4 segment.</li> <li>mp4-byterange: HLS+MP4 byte range.</li> <li>ts-packed-audio: TS+Packed audio.</li> <li>mp4-packed-audio: MP4+Packed audio.</li> Default value: ts-segment.
Note: The HLS segment format for adaptive bitrate streaming is based on this field.
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置HLS segment type. Valid values: <li>ts-segment: HLS+TS segment.</li> <li>ts-byterange: HLS+TS byte range.</li> <li>mp4-segment: HLS+MP4 segment.</li> <li>mp4-byterange: HLS+MP4 byte range.</li> <li>ts-packed-audio: TS+Packed audio.</li> <li>mp4-packed-audio: MP4+Packed audio.</li> Default value: ts-segment.
Note: The HLS segment format for adaptive bitrate streaming is based on this field.
                     * @param _segmentType HLS segment type. Valid values: <li>ts-segment: HLS+TS segment.</li> <li>ts-byterange: HLS+TS byte range.</li> <li>mp4-segment: HLS+MP4 segment.</li> <li>mp4-byterange: HLS+MP4 byte range.</li> <li>ts-packed-audio: TS+Packed audio.</li> <li>mp4-packed-audio: MP4+Packed audio.</li> Default value: ts-segment.
Note: The HLS segment format for adaptive bitrate streaming is based on this field.
                     * 
                     */
                    void SetSegmentType(const std::string& _segmentType);

                    /**
                     * 判断参数 SegmentType 是否已赋值
                     * @return SegmentType 是否已赋值
                     * 
                     */
                    bool SegmentTypeHasBeenSet() const;

                private:

                    /**
                     * Adaptive bitrate streaming format. Valid values:
<li>HLS,</li>
<li>MPEG-DASH.</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Parameter information of output substreams for transcoding to adaptive bitrate streaming. Up to 10 substreams can be output.
Note: the frame rate of each substream must be consistent; otherwise, the frame rate of the first substream is used as the output frame rate.
                     */
                    std::vector<AdaptiveStreamTemplate> m_streamInfos;
                    bool m_streamInfosHasBeenSet;

                    /**
                     * Template name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether to prohibit transcoding from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: 0.
                     */
                    uint64_t m_disableHigherVideoBitrate;
                    bool m_disableHigherVideoBitrateHasBeenSet;

                    /**
                     * Whether to prohibit transcoding from low resolution to high resolution. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: 0.
                     */
                    uint64_t m_disableHigherVideoResolution;
                    bool m_disableHigherVideoResolutionHasBeenSet;

                    /**
                     * Template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Indicates whether it is audio-only. 0 means video template, 1 means audio-only template.
When the value is 1.
1. StreamInfos.N.RemoveVideo=1
2. StreamInfos.N.RemoveAudio=0
3. StreamInfos.N.Video.Codec=copy
When the value is 0.
1. StreamInfos.N.Video.Codec cannot be copy.
2. StreamInfos.N.Video.Fps cannot be null.

Note:

This value only distinguishes template types. The task uses the values of RemoveAudio and RemoveVideo.
                     */
                    uint64_t m_pureAudio;
                    bool m_pureAudioHasBeenSet;

                    /**
                     * HLS segment type. Valid values: <li>ts-segment: HLS+TS segment.</li> <li>ts-byterange: HLS+TS byte range.</li> <li>mp4-segment: HLS+MP4 segment.</li> <li>mp4-byterange: HLS+MP4 byte range.</li> <li>ts-packed-audio: TS+Packed audio.</li> <li>mp4-packed-audio: MP4+Packed audio.</li> Default value: ts-segment.
Note: The HLS segment format for adaptive bitrate streaming is based on this field.
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_
