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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_

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
                * CreateAdaptiveDynamicStreamingTemplate request structure.
                */
                class CreateAdaptiveDynamicStreamingTemplateRequest : public AbstractModel
                {
                public:
                    CreateAdaptiveDynamicStreamingTemplateRequest();
                    ~CreateAdaptiveDynamicStreamingTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Adaptive Transcoding Format. Value range:</p><li>HLS;</li><li>MPEG-DASH.</li>
                     * @return Format <p>Adaptive Transcoding Format. Value range:</p><li>HLS;</li><li>MPEG-DASH.</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>Adaptive Transcoding Format. Value range:</p><li>HLS;</li><li>MPEG-DASH.</li>
                     * @param _format <p>Adaptive Transcoding Format. Value range:</p><li>HLS;</li><li>MPEG-DASH.</li>
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
                     * 获取<p>Adaptive transcoding output substream parameter information. Up to 10 substreams can be output.<br>Note: The frame rate of each substream must remain consistent. If inconsistent, the frame rate of the first substream is used as the output frame rate.</p>
                     * @return StreamInfos <p>Adaptive transcoding output substream parameter information. Up to 10 substreams can be output.<br>Note: The frame rate of each substream must remain consistent. If inconsistent, the frame rate of the first substream is used as the output frame rate.</p>
                     * 
                     */
                    std::vector<AdaptiveStreamTemplate> GetStreamInfos() const;

                    /**
                     * 设置<p>Adaptive transcoding output substream parameter information. Up to 10 substreams can be output.<br>Note: The frame rate of each substream must remain consistent. If inconsistent, the frame rate of the first substream is used as the output frame rate.</p>
                     * @param _streamInfos <p>Adaptive transcoding output substream parameter information. Up to 10 substreams can be output.<br>Note: The frame rate of each substream must remain consistent. If inconsistent, the frame rate of the first substream is used as the output frame rate.</p>
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
                     * 获取<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the application ID.</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the application ID.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the application ID.</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the application ID.</b></p>
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
                     * 获取<p>Template name. Length limit: 64 characters.</p>
                     * @return Name <p>Template name. Length limit: 64 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Template name. Length limit: 64 characters.</p>
                     * @param _name <p>Template name. Length limit: 64 characters.</p>
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
                     * 获取<p>DRM solution type. Value range:</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>The default value is an empty string. If the value is an empty string, it means no DRM protection is applied to the video.
                     * @return DrmType <p>DRM solution type. Value range:</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>The default value is an empty string. If the value is an empty string, it means no DRM protection is applied to the video.
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置<p>DRM solution type. Value range:</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>The default value is an empty string. If the value is an empty string, it means no DRM protection is applied to the video.
                     * @param _drmType <p>DRM solution type. Value range:</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>The default value is an empty string. If the value is an empty string, it means no DRM protection is applied to the video.
                     * 
                     */
                    void SetDrmType(const std::string& _drmType);

                    /**
                     * 判断参数 DrmType 是否已赋值
                     * @return DrmType 是否已赋值
                     * 
                     */
                    bool DrmTypeHasBeenSet() const;

                    /**
                     * 获取<p>Key provider for DRM. Valid values:</p><li>SDMC: SDMC;</li><li>VOD: VOD.</li>Default value: VOD.<p>The SDMC service will be gradually phased out. Please use VOD DRM encryption service.</p>
                     * @return DrmKeyProvider <p>Key provider for DRM. Valid values:</p><li>SDMC: SDMC;</li><li>VOD: VOD.</li>Default value: VOD.<p>The SDMC service will be gradually phased out. Please use VOD DRM encryption service.</p>
                     * 
                     */
                    std::string GetDrmKeyProvider() const;

                    /**
                     * 设置<p>Key provider for DRM. Valid values:</p><li>SDMC: SDMC;</li><li>VOD: VOD.</li>Default value: VOD.<p>The SDMC service will be gradually phased out. Please use VOD DRM encryption service.</p>
                     * @param _drmKeyProvider <p>Key provider for DRM. Valid values:</p><li>SDMC: SDMC;</li><li>VOD: VOD.</li>Default value: VOD.<p>The SDMC service will be gradually phased out. Please use VOD DRM encryption service.</p>
                     * 
                     */
                    void SetDrmKeyProvider(const std::string& _drmKeyProvider);

                    /**
                     * 判断参数 DrmKeyProvider 是否已赋值
                     * @return DrmKeyProvider 是否已赋值
                     * 
                     */
                    bool DrmKeyProviderHasBeenSet() const;

                    /**
                     * 获取<p>Encryption method. Available values:<br>cbcs: supported by Widevine, FairPlay, and WideVine+FairPlay;<br>cenc: supported by Widevine;   </p><p>If left blank<br>FairPlay: cbcs by default;<br>Widevine: cenc by default;<br>WideVine+FairPlay: cbcs by default;</p>
                     * @return DrmEncryptType <p>Encryption method. Available values:<br>cbcs: supported by Widevine, FairPlay, and WideVine+FairPlay;<br>cenc: supported by Widevine;   </p><p>If left blank<br>FairPlay: cbcs by default;<br>Widevine: cenc by default;<br>WideVine+FairPlay: cbcs by default;</p>
                     * 
                     */
                    std::string GetDrmEncryptType() const;

                    /**
                     * 设置<p>Encryption method. Available values:<br>cbcs: supported by Widevine, FairPlay, and WideVine+FairPlay;<br>cenc: supported by Widevine;   </p><p>If left blank<br>FairPlay: cbcs by default;<br>Widevine: cenc by default;<br>WideVine+FairPlay: cbcs by default;</p>
                     * @param _drmEncryptType <p>Encryption method. Available values:<br>cbcs: supported by Widevine, FairPlay, and WideVine+FairPlay;<br>cenc: supported by Widevine;   </p><p>If left blank<br>FairPlay: cbcs by default;<br>Widevine: cenc by default;<br>WideVine+FairPlay: cbcs by default;</p>
                     * 
                     */
                    void SetDrmEncryptType(const std::string& _drmEncryptType);

                    /**
                     * 判断参数 DrmEncryptType 是否已赋值
                     * @return DrmEncryptType 是否已赋值
                     * 
                     */
                    bool DrmEncryptTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to prohibit video low bitrate to high bitrate conversion. Value range:</p><li>0: No,</li><li>1: Yes.</li>Default: No.
                     * @return DisableHigherVideoBitrate <p>Whether to prohibit video low bitrate to high bitrate conversion. Value range:</p><li>0: No,</li><li>1: Yes.</li>Default: No.
                     * 
                     */
                    uint64_t GetDisableHigherVideoBitrate() const;

                    /**
                     * 设置<p>Whether to prohibit video low bitrate to high bitrate conversion. Value range:</p><li>0: No,</li><li>1: Yes.</li>Default: No.
                     * @param _disableHigherVideoBitrate <p>Whether to prohibit video low bitrate to high bitrate conversion. Value range:</p><li>0: No,</li><li>1: Yes.</li>Default: No.
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
                     * 获取<p>Whether to prohibit video resolution to high resolution conversion. Value range:</p><li>0: No,</li><li>1: Yes.</li>No by default.
                     * @return DisableHigherVideoResolution <p>Whether to prohibit video resolution to high resolution conversion. Value range:</p><li>0: No,</li><li>1: Yes.</li>No by default.
                     * 
                     */
                    uint64_t GetDisableHigherVideoResolution() const;

                    /**
                     * 设置<p>Whether to prohibit video resolution to high resolution conversion. Value range:</p><li>0: No,</li><li>1: Yes.</li>No by default.
                     * @param _disableHigherVideoResolution <p>Whether to prohibit video resolution to high resolution conversion. Value range:</p><li>0: No,</li><li>1: Yes.</li>No by default.
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
                     * 获取<p>Transcoding template description. Length limit: 256 characters.</p>
                     * @return Comment <p>Transcoding template description. Length limit: 256 characters.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Transcoding template description. Length limit: 256 characters.</p>
                     * @param _comment <p>Transcoding template description. Length limit: 256 characters.</p>
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
                     * 获取<p>Segment type. Valid values:<br>ts: HLS, internally mapped to ts-segment</p><p>mp4: HLS/DASH, internally mapped to mp4-mp4-segment for HLS and mp4-mp4-byterange for DASH</p><p>ts-segment: HLS+TS segment</p><p>ts-byterange: HLS+TS byte range</p><p>mp4-segment: HLS+MP4 segment</p><p>mp4-byterange: HLS+MP4 byte range</p><p>ts-packed-audio: HLS+TS+Packed Audio segment</p><p>mp4-packed-audio: HLS+MP4+Packed Audio segment</p><p>ts-ts-segment: HLS+TS+TS segment</p><p>ts-ts-byterange: HLS+TS+TS byte range</p><p>mp4-mp4-segment: HLS+MP4+MP4 segment</p><p>mp4-mp4-byterange: HLS/DASH+MP4+MP4 byte range</p><p>ts-packed-audio-byterange: HLS+TS+Packed Audio byte range</p><p>mp4-packed-audio-byterange: HLS+MP4+Packed Audio byte range<br> Default value: ts-segment. Note: The segment format for adaptive bitrate streams is based on this field. For DASH, SegmentType can only be mp4-mp4-byterange.</p><p>FairPlay: can only be used for HLS, and the segment format can only be mp4 or mp4-mp4-segment. Widevine: can be used for HLS and DASH. For HLS, the segment format can only be mp4 or mp4-mp4-segment. For DASH, the segment format can only be mp4 or mp4-mp4-byterange.<br>Widevine+FairPlay: can only be used for HLS, and the segment format can only be mp4 or mp4-mp4-segment</p>
                     * @return SegmentType <p>Segment type. Valid values:<br>ts: HLS, internally mapped to ts-segment</p><p>mp4: HLS/DASH, internally mapped to mp4-mp4-segment for HLS and mp4-mp4-byterange for DASH</p><p>ts-segment: HLS+TS segment</p><p>ts-byterange: HLS+TS byte range</p><p>mp4-segment: HLS+MP4 segment</p><p>mp4-byterange: HLS+MP4 byte range</p><p>ts-packed-audio: HLS+TS+Packed Audio segment</p><p>mp4-packed-audio: HLS+MP4+Packed Audio segment</p><p>ts-ts-segment: HLS+TS+TS segment</p><p>ts-ts-byterange: HLS+TS+TS byte range</p><p>mp4-mp4-segment: HLS+MP4+MP4 segment</p><p>mp4-mp4-byterange: HLS/DASH+MP4+MP4 byte range</p><p>ts-packed-audio-byterange: HLS+TS+Packed Audio byte range</p><p>mp4-packed-audio-byterange: HLS+MP4+Packed Audio byte range<br> Default value: ts-segment. Note: The segment format for adaptive bitrate streams is based on this field. For DASH, SegmentType can only be mp4-mp4-byterange.</p><p>FairPlay: can only be used for HLS, and the segment format can only be mp4 or mp4-mp4-segment. Widevine: can be used for HLS and DASH. For HLS, the segment format can only be mp4 or mp4-mp4-segment. For DASH, the segment format can only be mp4 or mp4-mp4-byterange.<br>Widevine+FairPlay: can only be used for HLS, and the segment format can only be mp4 or mp4-mp4-segment</p>
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置<p>Segment type. Valid values:<br>ts: HLS, internally mapped to ts-segment</p><p>mp4: HLS/DASH, internally mapped to mp4-mp4-segment for HLS and mp4-mp4-byterange for DASH</p><p>ts-segment: HLS+TS segment</p><p>ts-byterange: HLS+TS byte range</p><p>mp4-segment: HLS+MP4 segment</p><p>mp4-byterange: HLS+MP4 byte range</p><p>ts-packed-audio: HLS+TS+Packed Audio segment</p><p>mp4-packed-audio: HLS+MP4+Packed Audio segment</p><p>ts-ts-segment: HLS+TS+TS segment</p><p>ts-ts-byterange: HLS+TS+TS byte range</p><p>mp4-mp4-segment: HLS+MP4+MP4 segment</p><p>mp4-mp4-byterange: HLS/DASH+MP4+MP4 byte range</p><p>ts-packed-audio-byterange: HLS+TS+Packed Audio byte range</p><p>mp4-packed-audio-byterange: HLS+MP4+Packed Audio byte range<br> Default value: ts-segment. Note: The segment format for adaptive bitrate streams is based on this field. For DASH, SegmentType can only be mp4-mp4-byterange.</p><p>FairPlay: can only be used for HLS, and the segment format can only be mp4 or mp4-mp4-segment. Widevine: can be used for HLS and DASH. For HLS, the segment format can only be mp4 or mp4-mp4-segment. For DASH, the segment format can only be mp4 or mp4-mp4-byterange.<br>Widevine+FairPlay: can only be used for HLS, and the segment format can only be mp4 or mp4-mp4-segment</p>
                     * @param _segmentType <p>Segment type. Valid values:<br>ts: HLS, internally mapped to ts-segment</p><p>mp4: HLS/DASH, internally mapped to mp4-mp4-segment for HLS and mp4-mp4-byterange for DASH</p><p>ts-segment: HLS+TS segment</p><p>ts-byterange: HLS+TS byte range</p><p>mp4-segment: HLS+MP4 segment</p><p>mp4-byterange: HLS+MP4 byte range</p><p>ts-packed-audio: HLS+TS+Packed Audio segment</p><p>mp4-packed-audio: HLS+MP4+Packed Audio segment</p><p>ts-ts-segment: HLS+TS+TS segment</p><p>ts-ts-byterange: HLS+TS+TS byte range</p><p>mp4-mp4-segment: HLS+MP4+MP4 segment</p><p>mp4-mp4-byterange: HLS/DASH+MP4+MP4 byte range</p><p>ts-packed-audio-byterange: HLS+TS+Packed Audio byte range</p><p>mp4-packed-audio-byterange: HLS+MP4+Packed Audio byte range<br> Default value: ts-segment. Note: The segment format for adaptive bitrate streams is based on this field. For DASH, SegmentType can only be mp4-mp4-byterange.</p><p>FairPlay: can only be used for HLS, and the segment format can only be mp4 or mp4-mp4-segment. Widevine: can be used for HLS and DASH. For HLS, the segment format can only be mp4 or mp4-mp4-segment. For DASH, the segment format can only be mp4 or mp4-mp4-byterange.<br>Widevine+FairPlay: can only be used for HLS, and the segment format can only be mp4 or mp4-mp4-segment</p>
                     * 
                     */
                    void SetSegmentType(const std::string& _segmentType);

                    /**
                     * 判断参数 SegmentType 是否已赋值
                     * @return SegmentType 是否已赋值
                     * 
                     */
                    bool SegmentTypeHasBeenSet() const;

                    /**
                     * 获取<p>Segment duration.</p><p>Value range: [1, 10]</p><p>Unit: seconds</p><p>Default value: 6</p>
                     * @return SegmentDuration <p>Segment duration.</p><p>Value range: [1, 10]</p><p>Unit: seconds</p><p>Default value: 6</p>
                     * 
                     */
                    int64_t GetSegmentDuration() const;

                    /**
                     * 设置<p>Segment duration.</p><p>Value range: [1, 10]</p><p>Unit: seconds</p><p>Default value: 6</p>
                     * @param _segmentDuration <p>Segment duration.</p><p>Value range: [1, 10]</p><p>Unit: seconds</p><p>Default value: 6</p>
                     * 
                     */
                    void SetSegmentDuration(const int64_t& _segmentDuration);

                    /**
                     * 判断参数 SegmentDuration 是否已赋值
                     * @return SegmentDuration 是否已赋值
                     * 
                     */
                    bool SegmentDurationHasBeenSet() const;

                private:

                    /**
                     * <p>Adaptive Transcoding Format. Value range:</p><li>HLS;</li><li>MPEG-DASH.</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>Adaptive transcoding output substream parameter information. Up to 10 substreams can be output.<br>Note: The frame rate of each substream must remain consistent. If inconsistent, the frame rate of the first substream is used as the output frame rate.</p>
                     */
                    std::vector<AdaptiveStreamTemplate> m_streamInfos;
                    bool m_streamInfosHasBeenSet;

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the application ID.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Template name. Length limit: 64 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>DRM solution type. Value range:</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>The default value is an empty string. If the value is an empty string, it means no DRM protection is applied to the video.
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * <p>Key provider for DRM. Valid values:</p><li>SDMC: SDMC;</li><li>VOD: VOD.</li>Default value: VOD.<p>The SDMC service will be gradually phased out. Please use VOD DRM encryption service.</p>
                     */
                    std::string m_drmKeyProvider;
                    bool m_drmKeyProviderHasBeenSet;

                    /**
                     * <p>Encryption method. Available values:<br>cbcs: supported by Widevine, FairPlay, and WideVine+FairPlay;<br>cenc: supported by Widevine;   </p><p>If left blank<br>FairPlay: cbcs by default;<br>Widevine: cenc by default;<br>WideVine+FairPlay: cbcs by default;</p>
                     */
                    std::string m_drmEncryptType;
                    bool m_drmEncryptTypeHasBeenSet;

                    /**
                     * <p>Whether to prohibit video low bitrate to high bitrate conversion. Value range:</p><li>0: No,</li><li>1: Yes.</li>Default: No.
                     */
                    uint64_t m_disableHigherVideoBitrate;
                    bool m_disableHigherVideoBitrateHasBeenSet;

                    /**
                     * <p>Whether to prohibit video resolution to high resolution conversion. Value range:</p><li>0: No,</li><li>1: Yes.</li>No by default.
                     */
                    uint64_t m_disableHigherVideoResolution;
                    bool m_disableHigherVideoResolutionHasBeenSet;

                    /**
                     * <p>Transcoding template description. Length limit: 256 characters.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Segment type. Valid values:<br>ts: HLS, internally mapped to ts-segment</p><p>mp4: HLS/DASH, internally mapped to mp4-mp4-segment for HLS and mp4-mp4-byterange for DASH</p><p>ts-segment: HLS+TS segment</p><p>ts-byterange: HLS+TS byte range</p><p>mp4-segment: HLS+MP4 segment</p><p>mp4-byterange: HLS+MP4 byte range</p><p>ts-packed-audio: HLS+TS+Packed Audio segment</p><p>mp4-packed-audio: HLS+MP4+Packed Audio segment</p><p>ts-ts-segment: HLS+TS+TS segment</p><p>ts-ts-byterange: HLS+TS+TS byte range</p><p>mp4-mp4-segment: HLS+MP4+MP4 segment</p><p>mp4-mp4-byterange: HLS/DASH+MP4+MP4 byte range</p><p>ts-packed-audio-byterange: HLS+TS+Packed Audio byte range</p><p>mp4-packed-audio-byterange: HLS+MP4+Packed Audio byte range<br> Default value: ts-segment. Note: The segment format for adaptive bitrate streams is based on this field. For DASH, SegmentType can only be mp4-mp4-byterange.</p><p>FairPlay: can only be used for HLS, and the segment format can only be mp4 or mp4-mp4-segment. Widevine: can be used for HLS and DASH. For HLS, the segment format can only be mp4 or mp4-mp4-segment. For DASH, the segment format can only be mp4 or mp4-mp4-byterange.<br>Widevine+FairPlay: can only be used for HLS, and the segment format can only be mp4 or mp4-mp4-segment</p>
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                    /**
                     * <p>Segment duration.</p><p>Value range: [1, 10]</p><p>Unit: seconds</p><p>Default value: 6</p>
                     */
                    int64_t m_segmentDuration;
                    bool m_segmentDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_
