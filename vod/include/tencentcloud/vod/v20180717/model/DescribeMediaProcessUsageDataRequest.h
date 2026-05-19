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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAPROCESSUSAGEDATAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAPROCESSUSAGEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeMediaProcessUsageData request structure.
                */
                class DescribeMediaProcessUsageDataRequest : public AbstractModel
                {
                public:
                    DescribeMediaProcessUsageDataRequest();
                    ~DescribeMediaProcessUsageDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @return StartTime Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @param _startTime Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End date, which must be greater than or equal to the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @return EndTime End date, which must be greater than or equal to the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End date, which must be greater than or equal to the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @param _endTime End date, which must be greater than or equal to the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
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
                     * 获取Query video processing task type. Currently supported task types include:
<li>Transcoding: standard transcoding.</li>
<li>Transcoding-TESHD: TSC transcoding</li>
<li>Editing: video editing</li>
<li>Editing-TESHD: Extremely fast high-definition video editing</li>
<li>AdaptiveBitrateStreaming: adaptive bitrate streaming</li>
<li>ContentAudit: content moderation</li>
<li>ContentRecognition: content recognition</li>
<li> RemoveWatermark: Remove watermark</li>
<li>ExtractTraceWatermark: extract watermark</li>
<li> AddTraceWatermark: Add watermark</li>
<li> RebuildMedia: Audio and video quality revival</li>
<li>QualityInspect: audio and video quality inspection</li>
<li>VideoHighlight: Video intelligent highlights</li>
<li>VideoTag: video intelligent tag</li>
<li>VideoClassification: video intelligent classification</li>
<li>VideoCover: video intelligent cover</li>
<li>VideoSegment: video intelligent splitting</li>
<li>VideoProduce: video production</li>
<li>MediaCast: media forwarding</li>
<li>Transcode: Transcode, including standard transcoding, top speed Codec, and video editing (This is not recommended)</li>
<li>VoiceTranslation: speech translation</li>
<li>JITTranscoding: JIT transcoding.</li>
<li>VideoSnapshot: video screenshot.</li>
<li>JITEncryption: Real-time encryption</li>
<li>MediaEnhancement: audio and video enhancement</li>
<li>ImageCompression: image compression</li>
<li>ImageEnhancement: image enhancement</li>
<li>ImageSuperResolution: image super resolution</li>
<li>ImageAdvanceCompression: image advanced compression</li>
<li>ImageUnderstanding: image understanding</li>
<li>AddTraceWatermark: Add a traceable watermark</li>
<li>AddBlindWatermark: Add blind watermark</li>
<li>AddNagraWatermark: Add NAGRA digital watermark</li>
<li>ExtractTraceWatermark: extract traceability watermark</li>
<li>ExtractBlindWatermark: extract a blind watermark</li>
<li>ExtractNagraWatermark: Extract NAGRA digital watermark</li>

                     * @return Type Query video processing task type. Currently supported task types include:
<li>Transcoding: standard transcoding.</li>
<li>Transcoding-TESHD: TSC transcoding</li>
<li>Editing: video editing</li>
<li>Editing-TESHD: Extremely fast high-definition video editing</li>
<li>AdaptiveBitrateStreaming: adaptive bitrate streaming</li>
<li>ContentAudit: content moderation</li>
<li>ContentRecognition: content recognition</li>
<li> RemoveWatermark: Remove watermark</li>
<li>ExtractTraceWatermark: extract watermark</li>
<li> AddTraceWatermark: Add watermark</li>
<li> RebuildMedia: Audio and video quality revival</li>
<li>QualityInspect: audio and video quality inspection</li>
<li>VideoHighlight: Video intelligent highlights</li>
<li>VideoTag: video intelligent tag</li>
<li>VideoClassification: video intelligent classification</li>
<li>VideoCover: video intelligent cover</li>
<li>VideoSegment: video intelligent splitting</li>
<li>VideoProduce: video production</li>
<li>MediaCast: media forwarding</li>
<li>Transcode: Transcode, including standard transcoding, top speed Codec, and video editing (This is not recommended)</li>
<li>VoiceTranslation: speech translation</li>
<li>JITTranscoding: JIT transcoding.</li>
<li>VideoSnapshot: video screenshot.</li>
<li>JITEncryption: Real-time encryption</li>
<li>MediaEnhancement: audio and video enhancement</li>
<li>ImageCompression: image compression</li>
<li>ImageEnhancement: image enhancement</li>
<li>ImageSuperResolution: image super resolution</li>
<li>ImageAdvanceCompression: image advanced compression</li>
<li>ImageUnderstanding: image understanding</li>
<li>AddTraceWatermark: Add a traceable watermark</li>
<li>AddBlindWatermark: Add blind watermark</li>
<li>AddNagraWatermark: Add NAGRA digital watermark</li>
<li>ExtractTraceWatermark: extract traceability watermark</li>
<li>ExtractBlindWatermark: extract a blind watermark</li>
<li>ExtractNagraWatermark: Extract NAGRA digital watermark</li>

                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Query video processing task type. Currently supported task types include:
<li>Transcoding: standard transcoding.</li>
<li>Transcoding-TESHD: TSC transcoding</li>
<li>Editing: video editing</li>
<li>Editing-TESHD: Extremely fast high-definition video editing</li>
<li>AdaptiveBitrateStreaming: adaptive bitrate streaming</li>
<li>ContentAudit: content moderation</li>
<li>ContentRecognition: content recognition</li>
<li> RemoveWatermark: Remove watermark</li>
<li>ExtractTraceWatermark: extract watermark</li>
<li> AddTraceWatermark: Add watermark</li>
<li> RebuildMedia: Audio and video quality revival</li>
<li>QualityInspect: audio and video quality inspection</li>
<li>VideoHighlight: Video intelligent highlights</li>
<li>VideoTag: video intelligent tag</li>
<li>VideoClassification: video intelligent classification</li>
<li>VideoCover: video intelligent cover</li>
<li>VideoSegment: video intelligent splitting</li>
<li>VideoProduce: video production</li>
<li>MediaCast: media forwarding</li>
<li>Transcode: Transcode, including standard transcoding, top speed Codec, and video editing (This is not recommended)</li>
<li>VoiceTranslation: speech translation</li>
<li>JITTranscoding: JIT transcoding.</li>
<li>VideoSnapshot: video screenshot.</li>
<li>JITEncryption: Real-time encryption</li>
<li>MediaEnhancement: audio and video enhancement</li>
<li>ImageCompression: image compression</li>
<li>ImageEnhancement: image enhancement</li>
<li>ImageSuperResolution: image super resolution</li>
<li>ImageAdvanceCompression: image advanced compression</li>
<li>ImageUnderstanding: image understanding</li>
<li>AddTraceWatermark: Add a traceable watermark</li>
<li>AddBlindWatermark: Add blind watermark</li>
<li>AddNagraWatermark: Add NAGRA digital watermark</li>
<li>ExtractTraceWatermark: extract traceability watermark</li>
<li>ExtractBlindWatermark: extract a blind watermark</li>
<li>ExtractNagraWatermark: Extract NAGRA digital watermark</li>

                     * @param _type Query video processing task type. Currently supported task types include:
<li>Transcoding: standard transcoding.</li>
<li>Transcoding-TESHD: TSC transcoding</li>
<li>Editing: video editing</li>
<li>Editing-TESHD: Extremely fast high-definition video editing</li>
<li>AdaptiveBitrateStreaming: adaptive bitrate streaming</li>
<li>ContentAudit: content moderation</li>
<li>ContentRecognition: content recognition</li>
<li> RemoveWatermark: Remove watermark</li>
<li>ExtractTraceWatermark: extract watermark</li>
<li> AddTraceWatermark: Add watermark</li>
<li> RebuildMedia: Audio and video quality revival</li>
<li>QualityInspect: audio and video quality inspection</li>
<li>VideoHighlight: Video intelligent highlights</li>
<li>VideoTag: video intelligent tag</li>
<li>VideoClassification: video intelligent classification</li>
<li>VideoCover: video intelligent cover</li>
<li>VideoSegment: video intelligent splitting</li>
<li>VideoProduce: video production</li>
<li>MediaCast: media forwarding</li>
<li>Transcode: Transcode, including standard transcoding, top speed Codec, and video editing (This is not recommended)</li>
<li>VoiceTranslation: speech translation</li>
<li>JITTranscoding: JIT transcoding.</li>
<li>VideoSnapshot: video screenshot.</li>
<li>JITEncryption: Real-time encryption</li>
<li>MediaEnhancement: audio and video enhancement</li>
<li>ImageCompression: image compression</li>
<li>ImageEnhancement: image enhancement</li>
<li>ImageSuperResolution: image super resolution</li>
<li>ImageAdvanceCompression: image advanced compression</li>
<li>ImageUnderstanding: image understanding</li>
<li>AddTraceWatermark: Add a traceable watermark</li>
<li>AddBlindWatermark: Add blind watermark</li>
<li>AddNagraWatermark: Add NAGRA digital watermark</li>
<li>ExtractTraceWatermark: extract traceability watermark</li>
<li>ExtractBlindWatermark: extract a blind watermark</li>
<li>ExtractNagraWatermark: Extract NAGRA digital watermark</li>

                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End date, which must be greater than or equal to the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Query video processing task type. Currently supported task types include:
<li>Transcoding: standard transcoding.</li>
<li>Transcoding-TESHD: TSC transcoding</li>
<li>Editing: video editing</li>
<li>Editing-TESHD: Extremely fast high-definition video editing</li>
<li>AdaptiveBitrateStreaming: adaptive bitrate streaming</li>
<li>ContentAudit: content moderation</li>
<li>ContentRecognition: content recognition</li>
<li> RemoveWatermark: Remove watermark</li>
<li>ExtractTraceWatermark: extract watermark</li>
<li> AddTraceWatermark: Add watermark</li>
<li> RebuildMedia: Audio and video quality revival</li>
<li>QualityInspect: audio and video quality inspection</li>
<li>VideoHighlight: Video intelligent highlights</li>
<li>VideoTag: video intelligent tag</li>
<li>VideoClassification: video intelligent classification</li>
<li>VideoCover: video intelligent cover</li>
<li>VideoSegment: video intelligent splitting</li>
<li>VideoProduce: video production</li>
<li>MediaCast: media forwarding</li>
<li>Transcode: Transcode, including standard transcoding, top speed Codec, and video editing (This is not recommended)</li>
<li>VoiceTranslation: speech translation</li>
<li>JITTranscoding: JIT transcoding.</li>
<li>VideoSnapshot: video screenshot.</li>
<li>JITEncryption: Real-time encryption</li>
<li>MediaEnhancement: audio and video enhancement</li>
<li>ImageCompression: image compression</li>
<li>ImageEnhancement: image enhancement</li>
<li>ImageSuperResolution: image super resolution</li>
<li>ImageAdvanceCompression: image advanced compression</li>
<li>ImageUnderstanding: image understanding</li>
<li>AddTraceWatermark: Add a traceable watermark</li>
<li>AddBlindWatermark: Add blind watermark</li>
<li>AddNagraWatermark: Add NAGRA digital watermark</li>
<li>ExtractTraceWatermark: extract traceability watermark</li>
<li>ExtractBlindWatermark: extract a blind watermark</li>
<li>ExtractNagraWatermark: Extract NAGRA digital watermark</li>

                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAPROCESSUSAGEDATAREQUEST_H_
