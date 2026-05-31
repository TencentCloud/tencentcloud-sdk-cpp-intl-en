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
                     * 获取Segment duration in milliseconds. Input range is [1000, 30000], default 4000, can only be a multiple of 1000.
                     * @return SegmentDuration Segment duration in milliseconds. Input range is [1000, 30000], default 4000, can only be a multiple of 1000.
                     * 
                     */
                    uint64_t GetSegmentDuration() const;

                    /**
                     * 设置Segment duration in milliseconds. Input range is [1000, 30000], default 4000, can only be a multiple of 1000.
                     * @param _segmentDuration Segment duration in milliseconds. Input range is [1000, 30000], default 4000, can only be a multiple of 1000.
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
                     * 获取Number of shards. Input range [3, 30]. Default is 5.
                     * @return SegmentNumber Number of shards. Input range [3, 30]. Default is 5.
                     * 
                     */
                    uint64_t GetSegmentNumber() const;

                    /**
                     * 设置Number of shards. Input range [3, 30]. Default is 5.
                     * @param _segmentNumber Number of shards. Input range [3, 30]. Default is 5.
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
                     * 获取Whether to enable Pdt insertion. CLOSE/OPEN. Default is CLOSE.
                     * @return PdtInsertion Whether to enable Pdt insertion. CLOSE/OPEN. Default is CLOSE.
                     * 
                     */
                    std::string GetPdtInsertion() const;

                    /**
                     * 设置Whether to enable Pdt insertion. CLOSE/OPEN. Default is CLOSE.
                     * @param _pdtInsertion Whether to enable Pdt insertion. CLOSE/OPEN. Default is CLOSE.
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
                     * 获取Pdt duration in seconds. Input range (0, 3000]. Default 600.
                     * @return PdtDuration Pdt duration in seconds. Input range (0, 3000]. Default 600.
                     * 
                     */
                    uint64_t GetPdtDuration() const;

                    /**
                     * 设置Pdt duration in seconds. Input range (0, 3000]. Default 600.
                     * @param _pdtDuration Pdt duration in seconds. Input range (0, 3000]. Default 600.
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
                     * 获取Video packaging type, selectable SEPARATE|MERGE.
                     * @return Scheme Video packaging type, selectable SEPARATE|MERGE.
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Video packaging type, selectable SEPARATE|MERGE.
                     * @param _scheme Video packaging type, selectable SEPARATE|MERGE.
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
                     * 获取Segment type, supports [ts|fmp4], default ts.
fmp4 does not currently support DRM and time shifting.
                     * @return SegmentType Segment type, supports [ts|fmp4], default ts.
fmp4 does not currently support DRM and time shifting.
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置Segment type, supports [ts|fmp4], default ts.
fmp4 does not currently support DRM and time shifting.
                     * @param _segmentType Segment type, supports [ts|fmp4], default ts.
fmp4 does not currently support DRM and time shifting.
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
                     * 获取When the transcoding type is H265, the HLS H265 encapsulation type is selectable [hvc1|hev1], default is hev1.
                     * @return H265PackageType When the transcoding type is H265, the HLS H265 encapsulation type is selectable [hvc1|hev1], default is hev1.
                     * 
                     */
                    std::string GetH265PackageType() const;

                    /**
                     * 设置When the transcoding type is H265, the HLS H265 encapsulation type is selectable [hvc1|hev1], default is hev1.
                     * @param _h265PackageType When the transcoding type is H265, the HLS H265 encapsulation type is selectable [hvc1|hev1], default is hev1.
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
                     * 获取Whether to enable low delay. 0:CLOSE. Default is 0. 1:OPEN.
                     * @return LowLatency Whether to enable low delay. 0:CLOSE. Default is 0. 1:OPEN.
                     * 
                     */
                    uint64_t GetLowLatency() const;

                    /**
                     * 设置Whether to enable low delay. 0:CLOSE. Default is 0. 1:OPEN.
                     * @param _lowLatency Whether to enable low delay. 0:CLOSE. Default is 0. 1:OPEN.
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
                     * 获取Small slice size in milliseconds. Value ranges from 200 to SegmentDuration (integer). Default value: 500 ms.
                     * @return PartialSegmentDuration Small slice size in milliseconds. Value ranges from 200 to SegmentDuration (integer). Default value: 500 ms.
                     * 
                     */
                    uint64_t GetPartialSegmentDuration() const;

                    /**
                     * 设置Small slice size in milliseconds. Value ranges from 200 to SegmentDuration (integer). Default value: 500 ms.
                     * @param _partialSegmentDuration Small slice size in milliseconds. Value ranges from 200 to SegmentDuration (integer). Default value: 500 ms.
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
                     * 获取Small slice playback position in milliseconds. Value ranges from 3*PartiSegmentDuration to 3*SegmentDuration (integer). Default value: 3*PartiSegmentDuration.
                     * @return PartialSegmentPlaySite Small slice playback position in milliseconds. Value ranges from 3*PartiSegmentDuration to 3*SegmentDuration (integer). Default value: 3*PartiSegmentDuration.
                     * 
                     */
                    uint64_t GetPartialSegmentPlaySite() const;

                    /**
                     * 设置Small slice playback position in milliseconds. Value ranges from 3*PartiSegmentDuration to 3*SegmentDuration (integer). Default value: 3*PartiSegmentDuration.
                     * @param _partialSegmentPlaySite Small slice playback position in milliseconds. Value ranges from 3*PartiSegmentDuration to 3*SegmentDuration (integer). Default value: 3*PartiSegmentDuration.
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
                     * 获取Hls master m3u8 file sorting rule by bitrate. Available values:
1: Video bitrate ascending 2: Video bitrate descending
Default value: 1
                     * @return StreamOrder Hls master m3u8 file sorting rule by bitrate. Available values:
1: Video bitrate ascending 2: Video bitrate descending
Default value: 1
                     * 
                     */
                    uint64_t GetStreamOrder() const;

                    /**
                     * 设置Hls master m3u8 file sorting rule by bitrate. Available values:
1: Video bitrate ascending 2: Video bitrate descending
Default value: 1
                     * @param _streamOrder Hls master m3u8 file sorting rule by bitrate. Available values:
1: Video bitrate ascending 2: Video bitrate descending
Default value: 1
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
                     * 获取Whether the Hls master m3u8 file contains resolution information. Available values:
1: INCLUDE includes video resolution 2: EXCLUDE excludes video resolution.
Default value: 1.
                     * @return VideoResolution Whether the Hls master m3u8 file contains resolution information. Available values:
1: INCLUDE includes video resolution 2: EXCLUDE excludes video resolution.
Default value: 1.
                     * 
                     */
                    uint64_t GetVideoResolution() const;

                    /**
                     * 设置Whether the Hls master m3u8 file contains resolution information. Available values:
1: INCLUDE includes video resolution 2: EXCLUDE excludes video resolution.
Default value: 1.
                     * @param _videoResolution Whether the Hls master m3u8 file contains resolution information. Available values:
1: INCLUDE includes video resolution 2: EXCLUDE excludes video resolution.
Default value: 1.
                     * 
                     */
                    void SetVideoResolution(const uint64_t& _videoResolution);

                    /**
                     * 判断参数 VideoResolution 是否已赋值
                     * @return VideoResolution 是否已赋值
                     * 
                     */
                    bool VideoResolutionHasBeenSet() const;

                    /**
                     * 获取Whether the content contains the `EXT-X-ENDLIST` tag. 1: contains; 2: does not contain. Default: 1.
                     * @return EndListTag Whether the content contains the `EXT-X-ENDLIST` tag. 1: contains; 2: does not contain. Default: 1.
                     * 
                     */
                    int64_t GetEndListTag() const;

                    /**
                     * 设置Whether the content contains the `EXT-X-ENDLIST` tag. 1: contains; 2: does not contain. Default: 1.
                     * @param _endListTag Whether the content contains the `EXT-X-ENDLIST` tag. 1: contains; 2: does not contain. Default: 1.
                     * 
                     */
                    void SetEndListTag(const int64_t& _endListTag);

                    /**
                     * 判断参数 EndListTag 是否已赋值
                     * @return EndListTag 是否已赋值
                     * 
                     */
                    bool EndListTagHasBeenSet() const;

                    /**
                     * 获取Option: `ENHANCED_SCTE35`, `DATERANGE`; default `ENHANCED_SCTE35`.
                     * @return AdMarkupType Option: `ENHANCED_SCTE35`, `DATERANGE`; default `ENHANCED_SCTE35`.
                     * 
                     */
                    std::string GetAdMarkupType() const;

                    /**
                     * 设置Option: `ENHANCED_SCTE35`, `DATERANGE`; default `ENHANCED_SCTE35`.
                     * @param _adMarkupType Option: `ENHANCED_SCTE35`, `DATERANGE`; default `ENHANCED_SCTE35`.
                     * 
                     */
                    void SetAdMarkupType(const std::string& _adMarkupType);

                    /**
                     * 判断参数 AdMarkupType 是否已赋值
                     * @return AdMarkupType 是否已赋值
                     * 
                     */
                    bool AdMarkupTypeHasBeenSet() const;

                private:

                    /**
                     * Segment duration in milliseconds. Input range is [1000, 30000], default 4000, can only be a multiple of 1000.
                     */
                    uint64_t m_segmentDuration;
                    bool m_segmentDurationHasBeenSet;

                    /**
                     * Number of shards. Input range [3, 30]. Default is 5.
                     */
                    uint64_t m_segmentNumber;
                    bool m_segmentNumberHasBeenSet;

                    /**
                     * Whether to enable Pdt insertion. CLOSE/OPEN. Default is CLOSE.
                     */
                    std::string m_pdtInsertion;
                    bool m_pdtInsertionHasBeenSet;

                    /**
                     * Pdt duration in seconds. Input range (0, 3000]. Default 600.
                     */
                    uint64_t m_pdtDuration;
                    bool m_pdtDurationHasBeenSet;

                    /**
                     * Video packaging type, selectable SEPARATE|MERGE.
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * Segment type, supports [ts|fmp4], default ts.
fmp4 does not currently support DRM and time shifting.
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                    /**
                     * When the transcoding type is H265, the HLS H265 encapsulation type is selectable [hvc1|hev1], default is hev1.
                     */
                    std::string m_h265PackageType;
                    bool m_h265PackageTypeHasBeenSet;

                    /**
                     * Whether to enable low delay. 0:CLOSE. Default is 0. 1:OPEN.
                     */
                    uint64_t m_lowLatency;
                    bool m_lowLatencyHasBeenSet;

                    /**
                     * Small slice size in milliseconds. Value ranges from 200 to SegmentDuration (integer). Default value: 500 ms.
                     */
                    uint64_t m_partialSegmentDuration;
                    bool m_partialSegmentDurationHasBeenSet;

                    /**
                     * Small slice playback position in milliseconds. Value ranges from 3*PartiSegmentDuration to 3*SegmentDuration (integer). Default value: 3*PartiSegmentDuration.
                     */
                    uint64_t m_partialSegmentPlaySite;
                    bool m_partialSegmentPlaySiteHasBeenSet;

                    /**
                     * Hls master m3u8 file sorting rule by bitrate. Available values:
1: Video bitrate ascending 2: Video bitrate descending
Default value: 1
                     */
                    uint64_t m_streamOrder;
                    bool m_streamOrderHasBeenSet;

                    /**
                     * Whether the Hls master m3u8 file contains resolution information. Available values:
1: INCLUDE includes video resolution 2: EXCLUDE excludes video resolution.
Default value: 1.
                     */
                    uint64_t m_videoResolution;
                    bool m_videoResolutionHasBeenSet;

                    /**
                     * Whether the content contains the `EXT-X-ENDLIST` tag. 1: contains; 2: does not contain. Default: 1.
                     */
                    int64_t m_endListTag;
                    bool m_endListTagHasBeenSet;

                    /**
                     * Option: `ENHANCED_SCTE35`, `DATERANGE`; default `ENHANCED_SCTE35`.
                     */
                    std::string m_adMarkupType;
                    bool m_adMarkupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_HLSREMUXSETTINGSINFO_H_
