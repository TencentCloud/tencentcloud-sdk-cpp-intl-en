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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_HLSREMUXSETTINGSINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_HLSREMUXSETTINGSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * HLS protocol configuration.
                */
                class HlsRemuxSettingsInfo : public AbstractModel
                {
                public:
                    HlsRemuxSettingsInfo();
                    ~HlsRemuxSettingsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     * @return SegmentDuration Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     * 
                     */
                    uint64_t GetSegmentDuration() const;

                    /**
                     * 设置Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     * @param _segmentDuration Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     * 
                     */
                    void SetSegmentDuration(const uint64_t& _segmentDuration);

                    /**
                     * 判断参数 SegmentDuration 是否已赋值
                     * @return SegmentDuration 是否已赋值
                     * 
                     */
                    bool SegmentDurationHasBeenSet() const;

                    /**
                     * 获取Number of segments. Value range: [3,30]. Default value: 5.
                     * @return SegmentNumber Number of segments. Value range: [3,30]. Default value: 5.
                     * 
                     */
                    uint64_t GetSegmentNumber() const;

                    /**
                     * 设置Number of segments. Value range: [3,30]. Default value: 5.
                     * @param _segmentNumber Number of segments. Value range: [3,30]. Default value: 5.
                     * 
                     */
                    void SetSegmentNumber(const uint64_t& _segmentNumber);

                    /**
                     * 判断参数 SegmentNumber 是否已赋值
                     * @return SegmentNumber 是否已赋值
                     * 
                     */
                    bool SegmentNumberHasBeenSet() const;

                    /**
                     * 获取Whether to enable PDT insertion. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     * @return PdtInsertion Whether to enable PDT insertion. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     * 
                     */
                    std::string GetPdtInsertion() const;

                    /**
                     * 设置Whether to enable PDT insertion. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     * @param _pdtInsertion Whether to enable PDT insertion. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     * 
                     */
                    void SetPdtInsertion(const std::string& _pdtInsertion);

                    /**
                     * 判断参数 PdtInsertion 是否已赋值
                     * @return PdtInsertion 是否已赋值
                     * 
                     */
                    bool PdtInsertionHasBeenSet() const;

                    /**
                     * 获取PDT duration in seconds. Value range: (0,3000]. Default value: 600.
                     * @return PdtDuration PDT duration in seconds. Value range: (0,3000]. Default value: 600.
                     * 
                     */
                    uint64_t GetPdtDuration() const;

                    /**
                     * 设置PDT duration in seconds. Value range: (0,3000]. Default value: 600.
                     * @param _pdtDuration PDT duration in seconds. Value range: (0,3000]. Default value: 600.
                     * 
                     */
                    void SetPdtDuration(const uint64_t& _pdtDuration);

                    /**
                     * 判断参数 PdtDuration 是否已赋值
                     * @return PdtDuration 是否已赋值
                     * 
                     */
                    bool PdtDurationHasBeenSet() const;

                    /**
                     * 获取Audio/Video packaging scheme. Valid values: `SEPARATE`, `MERGE`. Default value is: SEPARATE.
                     * @return Scheme Audio/Video packaging scheme. Valid values: `SEPARATE`, `MERGE`. Default value is: SEPARATE.
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Audio/Video packaging scheme. Valid values: `SEPARATE`, `MERGE`. Default value is: SEPARATE.
                     * @param _scheme Audio/Video packaging scheme. Valid values: `SEPARATE`, `MERGE`. Default value is: SEPARATE.
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取The segment type. Valid values: `ts` (default), `fmp4`.
Currently, fMP4 segments do not support DRM or time shifting.
                     * @return SegmentType The segment type. Valid values: `ts` (default), `fmp4`.
Currently, fMP4 segments do not support DRM or time shifting.
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置The segment type. Valid values: `ts` (default), `fmp4`.
Currently, fMP4 segments do not support DRM or time shifting.
                     * @param _segmentType The segment type. Valid values: `ts` (default), `fmp4`.
Currently, fMP4 segments do not support DRM or time shifting.
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
                     * 获取The HLS package type when the H.265 codec is used. Valid values: `hvc1`, `hev1` (default).
                     * @return H265PackageType The HLS package type when the H.265 codec is used. Valid values: `hvc1`, `hev1` (default).
                     * 
                     */
                    std::string GetH265PackageType() const;

                    /**
                     * 设置The HLS package type when the H.265 codec is used. Valid values: `hvc1`, `hev1` (default).
                     * @param _h265PackageType The HLS package type when the H.265 codec is used. Valid values: `hvc1`, `hev1` (default).
                     * 
                     */
                    void SetH265PackageType(const std::string& _h265PackageType);

                    /**
                     * 判断参数 H265PackageType 是否已赋值
                     * @return H265PackageType 是否已赋值
                     * 
                     */
                    bool H265PackageTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable low latency 0:CLOSE, 1:OPEN, default value: 0.
                     * @return LowLatency Whether to enable low latency 0:CLOSE, 1:OPEN, default value: 0.
                     * 
                     */
                    uint64_t GetLowLatency() const;

                    /**
                     * 设置Whether to enable low latency 0:CLOSE, 1:OPEN, default value: 0.
                     * @param _lowLatency Whether to enable low latency 0:CLOSE, 1:OPEN, default value: 0.
                     * 
                     */
                    void SetLowLatency(const uint64_t& _lowLatency);

                    /**
                     * 判断参数 LowLatency 是否已赋值
                     * @return LowLatency 是否已赋值
                     * 
                     */
                    bool LowLatencyHasBeenSet() const;

                    /**
                     * 获取Low latency slice size, unit ms. Value range: integer [200-HlsRemuxSettings.SegmentDuration] Default value: 500ms.
                     * @return PartialSegmentDuration Low latency slice size, unit ms. Value range: integer [200-HlsRemuxSettings.SegmentDuration] Default value: 500ms.
                     * 
                     */
                    uint64_t GetPartialSegmentDuration() const;

                    /**
                     * 设置Low latency slice size, unit ms. Value range: integer [200-HlsRemuxSettings.SegmentDuration] Default value: 500ms.
                     * @param _partialSegmentDuration Low latency slice size, unit ms. Value range: integer [200-HlsRemuxSettings.SegmentDuration] Default value: 500ms.
                     * 
                     */
                    void SetPartialSegmentDuration(const uint64_t& _partialSegmentDuration);

                    /**
                     * 判断参数 PartialSegmentDuration 是否已赋值
                     * @return PartialSegmentDuration 是否已赋值
                     * 
                     */
                    bool PartialSegmentDurationHasBeenSet() const;

                    /**
                     * 获取Low latency slice playback position, unit ms. Value range: integer [3*HlsRemuxSettings.PartiSegmentDuration - 3*HlsRemuxSettings.SegmentDuration], Default value: 3*HlsRemuxSettings.PartiSegmentDuration.
                     * @return PartialSegmentPlaySite Low latency slice playback position, unit ms. Value range: integer [3*HlsRemuxSettings.PartiSegmentDuration - 3*HlsRemuxSettings.SegmentDuration], Default value: 3*HlsRemuxSettings.PartiSegmentDuration.
                     * 
                     */
                    uint64_t GetPartialSegmentPlaySite() const;

                    /**
                     * 设置Low latency slice playback position, unit ms. Value range: integer [3*HlsRemuxSettings.PartiSegmentDuration - 3*HlsRemuxSettings.SegmentDuration], Default value: 3*HlsRemuxSettings.PartiSegmentDuration.
                     * @param _partialSegmentPlaySite Low latency slice playback position, unit ms. Value range: integer [3*HlsRemuxSettings.PartiSegmentDuration - 3*HlsRemuxSettings.SegmentDuration], Default value: 3*HlsRemuxSettings.PartiSegmentDuration.
                     * 
                     */
                    void SetPartialSegmentPlaySite(const uint64_t& _partialSegmentPlaySite);

                    /**
                     * 判断参数 PartialSegmentPlaySite 是否已赋值
                     * @return PartialSegmentPlaySite 是否已赋值
                     * 
                     */
                    bool PartialSegmentPlaySiteHasBeenSet() const;

                    /**
                     * 获取Hls main m3u8 file sorting rules by bitrate, optional values: 1: video bitrate ascending order; 2: video bitrate descending order. Default value: 1.
                     * @return StreamOrder Hls main m3u8 file sorting rules by bitrate, optional values: 1: video bitrate ascending order; 2: video bitrate descending order. Default value: 1.
                     * 
                     */
                    uint64_t GetStreamOrder() const;

                    /**
                     * 设置Hls main m3u8 file sorting rules by bitrate, optional values: 1: video bitrate ascending order; 2: video bitrate descending order. Default value: 1.
                     * @param _streamOrder Hls main m3u8 file sorting rules by bitrate, optional values: 1: video bitrate ascending order; 2: video bitrate descending order. Default value: 1.
                     * 
                     */
                    void SetStreamOrder(const uint64_t& _streamOrder);

                    /**
                     * 判断参数 StreamOrder 是否已赋值
                     * @return StreamOrder 是否已赋值
                     * 
                     */
                    bool StreamOrderHasBeenSet() const;

                    /**
                     * 获取Whether the Hls main m3u8 file contains resolution information, optional values: 1: INCLUDE includes video resolution; 2: EXCLUDE does not include video resolution. Default value: 1.
                     * @return VideoResolution Whether the Hls main m3u8 file contains resolution information, optional values: 1: INCLUDE includes video resolution; 2: EXCLUDE does not include video resolution. Default value: 1.
                     * 
                     */
                    uint64_t GetVideoResolution() const;

                    /**
                     * 设置Whether the Hls main m3u8 file contains resolution information, optional values: 1: INCLUDE includes video resolution; 2: EXCLUDE does not include video resolution. Default value: 1.
                     * @param _videoResolution Whether the Hls main m3u8 file contains resolution information, optional values: 1: INCLUDE includes video resolution; 2: EXCLUDE does not include video resolution. Default value: 1.
                     * 
                     */
                    void SetVideoResolution(const uint64_t& _videoResolution);

                    /**
                     * 判断参数 VideoResolution 是否已赋值
                     * @return VideoResolution 是否已赋值
                     * 
                     */
                    bool VideoResolutionHasBeenSet() const;

                private:

                    /**
                     * Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     */
                    uint64_t m_segmentDuration;
                    bool m_segmentDurationHasBeenSet;

                    /**
                     * Number of segments. Value range: [3,30]. Default value: 5.
                     */
                    uint64_t m_segmentNumber;
                    bool m_segmentNumberHasBeenSet;

                    /**
                     * Whether to enable PDT insertion. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     */
                    std::string m_pdtInsertion;
                    bool m_pdtInsertionHasBeenSet;

                    /**
                     * PDT duration in seconds. Value range: (0,3000]. Default value: 600.
                     */
                    uint64_t m_pdtDuration;
                    bool m_pdtDurationHasBeenSet;

                    /**
                     * Audio/Video packaging scheme. Valid values: `SEPARATE`, `MERGE`. Default value is: SEPARATE.
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * The segment type. Valid values: `ts` (default), `fmp4`.
Currently, fMP4 segments do not support DRM or time shifting.
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                    /**
                     * The HLS package type when the H.265 codec is used. Valid values: `hvc1`, `hev1` (default).
                     */
                    std::string m_h265PackageType;
                    bool m_h265PackageTypeHasBeenSet;

                    /**
                     * Whether to enable low latency 0:CLOSE, 1:OPEN, default value: 0.
                     */
                    uint64_t m_lowLatency;
                    bool m_lowLatencyHasBeenSet;

                    /**
                     * Low latency slice size, unit ms. Value range: integer [200-HlsRemuxSettings.SegmentDuration] Default value: 500ms.
                     */
                    uint64_t m_partialSegmentDuration;
                    bool m_partialSegmentDurationHasBeenSet;

                    /**
                     * Low latency slice playback position, unit ms. Value range: integer [3*HlsRemuxSettings.PartiSegmentDuration - 3*HlsRemuxSettings.SegmentDuration], Default value: 3*HlsRemuxSettings.PartiSegmentDuration.
                     */
                    uint64_t m_partialSegmentPlaySite;
                    bool m_partialSegmentPlaySiteHasBeenSet;

                    /**
                     * Hls main m3u8 file sorting rules by bitrate, optional values: 1: video bitrate ascending order; 2: video bitrate descending order. Default value: 1.
                     */
                    uint64_t m_streamOrder;
                    bool m_streamOrderHasBeenSet;

                    /**
                     * Whether the Hls main m3u8 file contains resolution information, optional values: 1: INCLUDE includes video resolution; 2: EXCLUDE does not include video resolution. Default value: 1.
                     */
                    uint64_t m_videoResolution;
                    bool m_videoResolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_HLSREMUXSETTINGSINFO_H_
