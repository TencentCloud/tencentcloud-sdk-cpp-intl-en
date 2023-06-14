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
                     * 获取The adaptive bitrate streaming format. Valid values:
<li>HLS</li>
<li>MPEG-DASH</li>
                     * @return Format The adaptive bitrate streaming format. Valid values:
<li>HLS</li>
<li>MPEG-DASH</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置The adaptive bitrate streaming format. Valid values:
<li>HLS</li>
<li>MPEG-DASH</li>
                     * @param _format The adaptive bitrate streaming format. Valid values:
<li>HLS</li>
<li>MPEG-DASH</li>
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
                     * 获取Parameter information of output substream for adaptive bitrate streaming. Up to 10 substreams can be output.
Note: the frame rate of all substreams must be the same; otherwise, the frame rate of the first substream will be used as the output frame rate.
                     * @return StreamInfos Parameter information of output substream for adaptive bitrate streaming. Up to 10 substreams can be output.
Note: the frame rate of all substreams must be the same; otherwise, the frame rate of the first substream will be used as the output frame rate.
                     * 
                     */
                    std::vector<AdaptiveStreamTemplate> GetStreamInfos() const;

                    /**
                     * 设置Parameter information of output substream for adaptive bitrate streaming. Up to 10 substreams can be output.
Note: the frame rate of all substreams must be the same; otherwise, the frame rate of the first substream will be used as the output frame rate.
                     * @param _streamInfos Parameter information of output substream for adaptive bitrate streaming. Up to 10 substreams can be output.
Note: the frame rate of all substreams must be the same; otherwise, the frame rate of the first substream will be used as the output frame rate.
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
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param _subAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
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
                     * 获取The DRM type. Valid values:
<li>SimpleAES</li>
<li>Widevine</li>
<li>FairPlay</li>
If this parameter is an empty string, it indicates that the video is not protected by DRM.
                     * @return DrmType The DRM type. Valid values:
<li>SimpleAES</li>
<li>Widevine</li>
<li>FairPlay</li>
If this parameter is an empty string, it indicates that the video is not protected by DRM.
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置The DRM type. Valid values:
<li>SimpleAES</li>
<li>Widevine</li>
<li>FairPlay</li>
If this parameter is an empty string, it indicates that the video is not protected by DRM.
                     * @param _drmType The DRM type. Valid values:
<li>SimpleAES</li>
<li>Widevine</li>
<li>FairPlay</li>
If this parameter is an empty string, it indicates that the video is not protected by DRM.
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
                     * 获取The provider of the DRM key. Valid values:
<li>SDMC</li>
<li>VOD</li>
The default is `VOD`.
                     * @return DrmKeyProvider The provider of the DRM key. Valid values:
<li>SDMC</li>
<li>VOD</li>
The default is `VOD`.
                     * 
                     */
                    std::string GetDrmKeyProvider() const;

                    /**
                     * 设置The provider of the DRM key. Valid values:
<li>SDMC</li>
<li>VOD</li>
The default is `VOD`.
                     * @param _drmKeyProvider The provider of the DRM key. Valid values:
<li>SDMC</li>
<li>VOD</li>
The default is `VOD`.
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
                     * 获取Whether to prohibit transcoding video from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: no.
                     * @return DisableHigherVideoBitrate Whether to prohibit transcoding video from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: no.
                     * 
                     */
                    uint64_t GetDisableHigherVideoBitrate() const;

                    /**
                     * 设置Whether to prohibit transcoding video from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: no.
                     * @param _disableHigherVideoBitrate Whether to prohibit transcoding video from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: no.
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
Default value: no.
                     * @return DisableHigherVideoResolution Whether to prohibit transcoding from low resolution to high resolution. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: no.
                     * 
                     */
                    uint64_t GetDisableHigherVideoResolution() const;

                    /**
                     * 设置Whether to prohibit transcoding from low resolution to high resolution. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: no.
                     * @param _disableHigherVideoResolution Whether to prohibit transcoding from low resolution to high resolution. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: no.
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
                     * 获取The segment type. This parameter is valid only if `Format` is `HLS`. Valid values:
<li>ts: TS segment</li>
<li>fmp4: fMP4 segment</li>
Default: ts
                     * @return SegmentType The segment type. This parameter is valid only if `Format` is `HLS`. Valid values:
<li>ts: TS segment</li>
<li>fmp4: fMP4 segment</li>
Default: ts
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置The segment type. This parameter is valid only if `Format` is `HLS`. Valid values:
<li>ts: TS segment</li>
<li>fmp4: fMP4 segment</li>
Default: ts
                     * @param _segmentType The segment type. This parameter is valid only if `Format` is `HLS`. Valid values:
<li>ts: TS segment</li>
<li>fmp4: fMP4 segment</li>
Default: ts
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
                     * The adaptive bitrate streaming format. Valid values:
<li>HLS</li>
<li>MPEG-DASH</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Parameter information of output substream for adaptive bitrate streaming. Up to 10 substreams can be output.
Note: the frame rate of all substreams must be the same; otherwise, the frame rate of the first substream will be used as the output frame rate.
                     */
                    std::vector<AdaptiveStreamTemplate> m_streamInfos;
                    bool m_streamInfosHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Template name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The DRM type. Valid values:
<li>SimpleAES</li>
<li>Widevine</li>
<li>FairPlay</li>
If this parameter is an empty string, it indicates that the video is not protected by DRM.
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * The provider of the DRM key. Valid values:
<li>SDMC</li>
<li>VOD</li>
The default is `VOD`.
                     */
                    std::string m_drmKeyProvider;
                    bool m_drmKeyProviderHasBeenSet;

                    /**
                     * Whether to prohibit transcoding video from low bitrate to high bitrate. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: no.
                     */
                    uint64_t m_disableHigherVideoBitrate;
                    bool m_disableHigherVideoBitrateHasBeenSet;

                    /**
                     * Whether to prohibit transcoding from low resolution to high resolution. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
Default value: no.
                     */
                    uint64_t m_disableHigherVideoResolution;
                    bool m_disableHigherVideoResolutionHasBeenSet;

                    /**
                     * Template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * The segment type. This parameter is valid only if `Format` is `HLS`. Valid values:
<li>ts: TS segment</li>
<li>fmp4: fMP4 segment</li>
Default: ts
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_
