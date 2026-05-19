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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AdaptiveStreamTemplate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyAdaptiveDynamicStreamingTemplate request structure.
                */
                class ModifyAdaptiveDynamicStreamingTemplateRequest : public AbstractModel
                {
                public:
                    ModifyAdaptiveDynamicStreamingTemplateRequest();
                    ~ModifyAdaptiveDynamicStreamingTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique identifier of the adaptive transcoding template.
                     * @return Definition Unique identifier of the adaptive transcoding template.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of the adaptive transcoding template.
                     * @param _definition Unique identifier of the adaptive transcoding template.
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
                     * 获取<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Template name. The length cannot exceed 64 characters.
                     * @return Name Template name. The length cannot exceed 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name. The length cannot exceed 64 characters.
                     * @param _name Template name. The length cannot exceed 64 characters.
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
                     * 获取Adaptive Transcoding Format, with a value range of
<li>HLS;</li>
<li>MPEG-DASH.</li>
                     * @return Format Adaptive Transcoding Format, with a value range of
<li>HLS;</li>
<li>MPEG-DASH.</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Adaptive Transcoding Format, with a value range of
<li>HLS;</li>
<li>MPEG-DASH.</li>
                     * @param _format Adaptive Transcoding Format, with a value range of
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
                     * 获取Whether to prohibit video low bitrate to high bitrate conversion, value ranges from...to...
<li>`0`: no,</li>
<li>1: Yes.</li>
                     * @return DisableHigherVideoBitrate Whether to prohibit video low bitrate to high bitrate conversion, value ranges from...to...
<li>`0`: no,</li>
<li>1: Yes.</li>
                     * 
                     */
                    uint64_t GetDisableHigherVideoBitrate() const;

                    /**
                     * 设置Whether to prohibit video low bitrate to high bitrate conversion, value ranges from...to...
<li>`0`: no,</li>
<li>1: Yes.</li>
                     * @param _disableHigherVideoBitrate Whether to prohibit video low bitrate to high bitrate conversion, value ranges from...to...
<li>`0`: no,</li>
<li>1: Yes.</li>
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
                     * 获取Whether to prohibit video resolution to high resolution conversion. Value ranges from...to...
<li>`0`: no,</li>
<li>1: Yes.</li>
                     * @return DisableHigherVideoResolution Whether to prohibit video resolution to high resolution conversion. Value ranges from...to...
<li>`0`: no,</li>
<li>1: Yes.</li>
                     * 
                     */
                    uint64_t GetDisableHigherVideoResolution() const;

                    /**
                     * 设置Whether to prohibit video resolution to high resolution conversion. Value ranges from...to...
<li>`0`: no,</li>
<li>1: Yes.</li>
                     * @param _disableHigherVideoResolution Whether to prohibit video resolution to high resolution conversion. Value ranges from...to...
<li>`0`: no,</li>
<li>1: Yes.</li>
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
                     * 获取Adaptive Transcoding Input Stream Parameter Information, up to 10 entries.
Note: The frame rate of each stream must remain consistent. If inconsistent, use the frame rate of the first stream as the output frame rate.
                     * @return StreamInfos Adaptive Transcoding Input Stream Parameter Information, up to 10 entries.
Note: The frame rate of each stream must remain consistent. If inconsistent, use the frame rate of the first stream as the output frame rate.
                     * 
                     */
                    std::vector<AdaptiveStreamTemplate> GetStreamInfos() const;

                    /**
                     * 设置Adaptive Transcoding Input Stream Parameter Information, up to 10 entries.
Note: The frame rate of each stream must remain consistent. If inconsistent, use the frame rate of the first stream as the output frame rate.
                     * @param _streamInfos Adaptive Transcoding Input Stream Parameter Information, up to 10 entries.
Note: The frame rate of each stream must remain consistent. If inconsistent, use the frame rate of the first stream as the output frame rate.
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
                     * 获取Template description, with a length limit of 256 characters.
                     * @return Comment Template description, with a length limit of 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description, with a length limit of 256 characters.
                     * @param _comment Template description, with a length limit of 256 characters.
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
                     * 获取Segment type, valid when Format is HLS. Value range:
<li>ts: ts slicing;</li>
<li>fmp4: fmp4 segment.</li>
                     * @return SegmentType Segment type, valid when Format is HLS. Value range:
<li>ts: ts slicing;</li>
<li>fmp4: fmp4 segment.</li>
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置Segment type, valid when Format is HLS. Value range:
<li>ts: ts slicing;</li>
<li>fmp4: fmp4 segment.</li>
                     * @param _segmentType Segment type, valid when Format is HLS. Value range:
<li>ts: ts slicing;</li>
<li>fmp4: fmp4 segment.</li>
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
                     * Unique identifier of the adaptive transcoding template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Template name. The length cannot exceed 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Adaptive Transcoding Format, with a value range of
<li>HLS;</li>
<li>MPEG-DASH.</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Whether to prohibit video low bitrate to high bitrate conversion, value ranges from...to...
<li>`0`: no,</li>
<li>1: Yes.</li>
                     */
                    uint64_t m_disableHigherVideoBitrate;
                    bool m_disableHigherVideoBitrateHasBeenSet;

                    /**
                     * Whether to prohibit video resolution to high resolution conversion. Value ranges from...to...
<li>`0`: no,</li>
<li>1: Yes.</li>
                     */
                    uint64_t m_disableHigherVideoResolution;
                    bool m_disableHigherVideoResolutionHasBeenSet;

                    /**
                     * Adaptive Transcoding Input Stream Parameter Information, up to 10 entries.
Note: The frame rate of each stream must remain consistent. If inconsistent, use the frame rate of the first stream as the output frame rate.
                     */
                    std::vector<AdaptiveStreamTemplate> m_streamInfos;
                    bool m_streamInfosHasBeenSet;

                    /**
                     * Template description, with a length limit of 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Segment type, valid when Format is HLS. Value range:
<li>ts: ts slicing;</li>
<li>fmp4: fmp4 segment.</li>
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_
