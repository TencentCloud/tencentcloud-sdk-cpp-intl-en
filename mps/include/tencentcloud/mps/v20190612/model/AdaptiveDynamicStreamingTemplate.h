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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTEMPLATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Details of an adaptive bitrate streaming template
                */
                class AdaptiveDynamicStreamingTemplate : public AbstractModel
                {
                public:
                    AdaptiveDynamicStreamingTemplate();
                    ~AdaptiveDynamicStreamingTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of an adaptive bitrate streaming template.
                     * @return Definition Unique ID of an adaptive bitrate streaming template.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of an adaptive bitrate streaming template.
                     * @param _definition Unique ID of an adaptive bitrate streaming template.
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     * @return Type Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     * @param _type Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Name of an adaptive bitrate streaming template.
                     * @return Name Name of an adaptive bitrate streaming template.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of an adaptive bitrate streaming template.
                     * @param _name Name of an adaptive bitrate streaming template.
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
                     * 获取Description of an adaptive bitrate streaming template.
                     * @return Comment Description of an adaptive bitrate streaming template.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description of an adaptive bitrate streaming template.
                     * @param _comment Description of an adaptive bitrate streaming template.
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
                     * 获取Adaptive bitrate streaming format. Valid values:
<li>HLS;</li>
<li>MPEG-DASH.</li>
                     * @return Format Adaptive bitrate streaming format. Valid values:
<li>HLS;</li>
<li>MPEG-DASH.</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Adaptive bitrate streaming format. Valid values:
<li>HLS;</li>
<li>MPEG-DASH.</li>
                     * @param _format Adaptive bitrate streaming format. Valid values:
<li>HLS;</li>
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
                     * 获取Parameter information of input streams for transcoding to adaptive bitrate streaming. Up to 10 streams can be input.
                     * @return StreamInfos Parameter information of input streams for transcoding to adaptive bitrate streaming. Up to 10 streams can be input.
                     * 
                     */
                    std::vector<AdaptiveStreamTemplate> GetStreamInfos() const;

                    /**
                     * 设置Parameter information of input streams for transcoding to adaptive bitrate streaming. Up to 10 streams can be input.
                     * @param _streamInfos Parameter information of input streams for transcoding to adaptive bitrate streaming. Up to 10 streams can be input.
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
                     * 获取Whether to prohibit transcoding from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     * @return DisableHigherVideoBitrate Whether to prohibit transcoding from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     * 
                     */
                    uint64_t GetDisableHigherVideoBitrate() const;

                    /**
                     * 设置Whether to prohibit transcoding from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     * @param _disableHigherVideoBitrate Whether to prohibit transcoding from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
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
                     * @return DisableHigherVideoResolution Whether to prohibit transcoding from low resolution to high resolution. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     * 
                     */
                    uint64_t GetDisableHigherVideoResolution() const;

                    /**
                     * 设置Whether to prohibit transcoding from low resolution to high resolution. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     * @param _disableHigherVideoResolution Whether to prohibit transcoding from low resolution to high resolution. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
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
                     * 获取Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _createTime Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return UpdateTime Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _updateTime Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Whether it is an audio-only template. 0: video template. 1: audio-only template.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PureAudio Whether it is an audio-only template. 0: video template. 1: audio-only template.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPureAudio() const;

                    /**
                     * 设置Whether it is an audio-only template. 0: video template. 1: audio-only template.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pureAudio Whether it is an audio-only template. 0: video template. 1: audio-only template.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取HLS segment type. Valid values:
<li>ts-segment: HLS+TS segment.</li>
<li>ts-byterange: HLS+TS byte range.</li>
<li>mp4-segment: HLS+MP4 segment.</li>
<li>mp4-byterange: HLS+MP4 byte range.</li>
<li>ts-packed-audio: TS+Packed audio.</li>
<li>mp4-packed-audio: MP4+Packed audio.</li>
Default value: ts-segment.

Note: The HLS segment format for adaptive bitrate streaming is based on this field.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SegmentType HLS segment type. Valid values:
<li>ts-segment: HLS+TS segment.</li>
<li>ts-byterange: HLS+TS byte range.</li>
<li>mp4-segment: HLS+MP4 segment.</li>
<li>mp4-byterange: HLS+MP4 byte range.</li>
<li>ts-packed-audio: TS+Packed audio.</li>
<li>mp4-packed-audio: MP4+Packed audio.</li>
Default value: ts-segment.

Note: The HLS segment format for adaptive bitrate streaming is based on this field.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置HLS segment type. Valid values:
<li>ts-segment: HLS+TS segment.</li>
<li>ts-byterange: HLS+TS byte range.</li>
<li>mp4-segment: HLS+MP4 segment.</li>
<li>mp4-byterange: HLS+MP4 byte range.</li>
<li>ts-packed-audio: TS+Packed audio.</li>
<li>mp4-packed-audio: MP4+Packed audio.</li>
Default value: ts-segment.

Note: The HLS segment format for adaptive bitrate streaming is based on this field.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _segmentType HLS segment type. Valid values:
<li>ts-segment: HLS+TS segment.</li>
<li>ts-byterange: HLS+TS byte range.</li>
<li>mp4-segment: HLS+MP4 segment.</li>
<li>mp4-byterange: HLS+MP4 byte range.</li>
<li>ts-packed-audio: TS+Packed audio.</li>
<li>mp4-packed-audio: MP4+Packed audio.</li>
Default value: ts-segment.

Note: The HLS segment format for adaptive bitrate streaming is based on this field.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Unique ID of an adaptive bitrate streaming template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Name of an adaptive bitrate streaming template.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of an adaptive bitrate streaming template.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Adaptive bitrate streaming format. Valid values:
<li>HLS;</li>
<li>MPEG-DASH.</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Parameter information of input streams for transcoding to adaptive bitrate streaming. Up to 10 streams can be input.
                     */
                    std::vector<AdaptiveStreamTemplate> m_streamInfos;
                    bool m_streamInfosHasBeenSet;

                    /**
                     * Whether to prohibit transcoding from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     */
                    uint64_t m_disableHigherVideoBitrate;
                    bool m_disableHigherVideoBitrateHasBeenSet;

                    /**
                     * Whether to prohibit transcoding from low resolution to high resolution. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     */
                    uint64_t m_disableHigherVideoResolution;
                    bool m_disableHigherVideoResolutionHasBeenSet;

                    /**
                     * Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether it is an audio-only template. 0: video template. 1: audio-only template.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_pureAudio;
                    bool m_pureAudioHasBeenSet;

                    /**
                     * HLS segment type. Valid values:
<li>ts-segment: HLS+TS segment.</li>
<li>ts-byterange: HLS+TS byte range.</li>
<li>mp4-segment: HLS+MP4 segment.</li>
<li>mp4-byterange: HLS+MP4 byte range.</li>
<li>ts-packed-audio: TS+Packed audio.</li>
<li>mp4-packed-audio: MP4+Packed audio.</li>
Default value: ts-segment.

Note: The HLS segment format for adaptive bitrate streaming is based on this field.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTEMPLATE_H_
