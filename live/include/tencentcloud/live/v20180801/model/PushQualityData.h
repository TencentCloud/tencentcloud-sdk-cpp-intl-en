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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHQUALITYDATA_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHQUALITYDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * The push data of a stream.
                */
                class PushQualityData : public AbstractModel
                {
                public:
                    PushQualityData();
                    ~PushQualityData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The time of the data in the format of “%Y-%m-%d %H:%M:%S.%ms” (accurate to the millisecond).
                     * @return Time The time of the data in the format of “%Y-%m-%d %H:%M:%S.%ms” (accurate to the millisecond).
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置The time of the data in the format of “%Y-%m-%d %H:%M:%S.%ms” (accurate to the millisecond).
                     * @param _time The time of the data in the format of “%Y-%m-%d %H:%M:%S.%ms” (accurate to the millisecond).
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取The push domain.
                     * @return PushDomain The push domain.
                     * 
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置The push domain.
                     * @param _pushDomain The push domain.
                     * 
                     */
                    void SetPushDomain(const std::string& _pushDomain);

                    /**
                     * 判断参数 PushDomain 是否已赋值
                     * @return PushDomain 是否已赋值
                     * 
                     */
                    bool PushDomainHasBeenSet() const;

                    /**
                     * 获取The push path.
                     * @return AppName The push path.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The push path.
                     * @param _appName The push path.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取The IP address of the push client.
                     * @return ClientIp The IP address of the push client.
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置The IP address of the push client.
                     * @param _clientIp The IP address of the push client.
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取The push start time in the format of “%Y-%m-%d %H:%M:%S.%ms” (accurate to the millisecond).
                     * @return BeginPushTime The push start time in the format of “%Y-%m-%d %H:%M:%S.%ms” (accurate to the millisecond).
                     * 
                     */
                    std::string GetBeginPushTime() const;

                    /**
                     * 设置The push start time in the format of “%Y-%m-%d %H:%M:%S.%ms” (accurate to the millisecond).
                     * @param _beginPushTime The push start time in the format of “%Y-%m-%d %H:%M:%S.%ms” (accurate to the millisecond).
                     * 
                     */
                    void SetBeginPushTime(const std::string& _beginPushTime);

                    /**
                     * 判断参数 BeginPushTime 是否已赋值
                     * @return BeginPushTime 是否已赋值
                     * 
                     */
                    bool BeginPushTimeHasBeenSet() const;

                    /**
                     * 获取The resolution.
                     * @return Resolution The resolution.
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置The resolution.
                     * @param _resolution The resolution.
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取The video codec.
                     * @return VCodec The video codec.
                     * 
                     */
                    std::string GetVCodec() const;

                    /**
                     * 设置The video codec.
                     * @param _vCodec The video codec.
                     * 
                     */
                    void SetVCodec(const std::string& _vCodec);

                    /**
                     * 判断参数 VCodec 是否已赋值
                     * @return VCodec 是否已赋值
                     * 
                     */
                    bool VCodecHasBeenSet() const;

                    /**
                     * 获取The audio codec.
                     * @return ACodec The audio codec.
                     * 
                     */
                    std::string GetACodec() const;

                    /**
                     * 设置The audio codec.
                     * @param _aCodec The audio codec.
                     * 
                     */
                    void SetACodec(const std::string& _aCodec);

                    /**
                     * 判断参数 ACodec 是否已赋值
                     * @return ACodec 是否已赋值
                     * 
                     */
                    bool ACodecHasBeenSet() const;

                    /**
                     * 获取The push sequence number, which uniquely identifies a push.
                     * @return Sequence The push sequence number, which uniquely identifies a push.
                     * 
                     */
                    std::string GetSequence() const;

                    /**
                     * 设置The push sequence number, which uniquely identifies a push.
                     * @param _sequence The push sequence number, which uniquely identifies a push.
                     * 
                     */
                    void SetSequence(const std::string& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     * 
                     */
                    bool SequenceHasBeenSet() const;

                    /**
                     * 获取The video frame rate.
                     * @return VideoFps The video frame rate.
                     * 
                     */
                    uint64_t GetVideoFps() const;

                    /**
                     * 设置The video frame rate.
                     * @param _videoFps The video frame rate.
                     * 
                     */
                    void SetVideoFps(const uint64_t& _videoFps);

                    /**
                     * 判断参数 VideoFps 是否已赋值
                     * @return VideoFps 是否已赋值
                     * 
                     */
                    bool VideoFpsHasBeenSet() const;

                    /**
                     * 获取The video bitrate (bps).
                     * @return VideoRate The video bitrate (bps).
                     * 
                     */
                    uint64_t GetVideoRate() const;

                    /**
                     * 设置The video bitrate (bps).
                     * @param _videoRate The video bitrate (bps).
                     * 
                     */
                    void SetVideoRate(const uint64_t& _videoRate);

                    /**
                     * 判断参数 VideoRate 是否已赋值
                     * @return VideoRate 是否已赋值
                     * 
                     */
                    bool VideoRateHasBeenSet() const;

                    /**
                     * 获取The audio frame rate.
                     * @return AudioFps The audio frame rate.
                     * 
                     */
                    uint64_t GetAudioFps() const;

                    /**
                     * 设置The audio frame rate.
                     * @param _audioFps The audio frame rate.
                     * 
                     */
                    void SetAudioFps(const uint64_t& _audioFps);

                    /**
                     * 判断参数 AudioFps 是否已赋值
                     * @return AudioFps 是否已赋值
                     * 
                     */
                    bool AudioFpsHasBeenSet() const;

                    /**
                     * 获取The audio bitrate (bps).
                     * @return AudioRate The audio bitrate (bps).
                     * 
                     */
                    uint64_t GetAudioRate() const;

                    /**
                     * 设置The audio bitrate (bps).
                     * @param _audioRate The audio bitrate (bps).
                     * 
                     */
                    void SetAudioRate(const uint64_t& _audioRate);

                    /**
                     * 判断参数 AudioRate 是否已赋值
                     * @return AudioRate 是否已赋值
                     * 
                     */
                    bool AudioRateHasBeenSet() const;

                    /**
                     * 获取The local elapsed time (milliseconds). The greater the difference between the local elapsed time and audio/video elapsed time, the poorer the push quality and the more severe the upstream lag.
                     * @return LocalTs The local elapsed time (milliseconds). The greater the difference between the local elapsed time and audio/video elapsed time, the poorer the push quality and the more severe the upstream lag.
                     * 
                     */
                    uint64_t GetLocalTs() const;

                    /**
                     * 设置The local elapsed time (milliseconds). The greater the difference between the local elapsed time and audio/video elapsed time, the poorer the push quality and the more severe the upstream lag.
                     * @param _localTs The local elapsed time (milliseconds). The greater the difference between the local elapsed time and audio/video elapsed time, the poorer the push quality and the more severe the upstream lag.
                     * 
                     */
                    void SetLocalTs(const uint64_t& _localTs);

                    /**
                     * 判断参数 LocalTs 是否已赋值
                     * @return LocalTs 是否已赋值
                     * 
                     */
                    bool LocalTsHasBeenSet() const;

                    /**
                     * 获取The video elapsed time (milliseconds).
                     * @return VideoTs The video elapsed time (milliseconds).
                     * 
                     */
                    uint64_t GetVideoTs() const;

                    /**
                     * 设置The video elapsed time (milliseconds).
                     * @param _videoTs The video elapsed time (milliseconds).
                     * 
                     */
                    void SetVideoTs(const uint64_t& _videoTs);

                    /**
                     * 判断参数 VideoTs 是否已赋值
                     * @return VideoTs 是否已赋值
                     * 
                     */
                    bool VideoTsHasBeenSet() const;

                    /**
                     * 获取The audio elapsed time (milliseconds).
                     * @return AudioTs The audio elapsed time (milliseconds).
                     * 
                     */
                    uint64_t GetAudioTs() const;

                    /**
                     * 设置The audio elapsed time (milliseconds).
                     * @param _audioTs The audio elapsed time (milliseconds).
                     * 
                     */
                    void SetAudioTs(const uint64_t& _audioTs);

                    /**
                     * 判断参数 AudioTs 是否已赋值
                     * @return AudioTs 是否已赋值
                     * 
                     */
                    bool AudioTsHasBeenSet() const;

                    /**
                     * 获取The video bitrate (Kbps) in the metadata.
                     * @return MetaVideoRate The video bitrate (Kbps) in the metadata.
                     * 
                     */
                    uint64_t GetMetaVideoRate() const;

                    /**
                     * 设置The video bitrate (Kbps) in the metadata.
                     * @param _metaVideoRate The video bitrate (Kbps) in the metadata.
                     * 
                     */
                    void SetMetaVideoRate(const uint64_t& _metaVideoRate);

                    /**
                     * 判断参数 MetaVideoRate 是否已赋值
                     * @return MetaVideoRate 是否已赋值
                     * 
                     */
                    bool MetaVideoRateHasBeenSet() const;

                    /**
                     * 获取The audio bitrate (Kbps) in the metadata.
                     * @return MetaAudioRate The audio bitrate (Kbps) in the metadata.
                     * 
                     */
                    uint64_t GetMetaAudioRate() const;

                    /**
                     * 设置The audio bitrate (Kbps) in the metadata.
                     * @param _metaAudioRate The audio bitrate (Kbps) in the metadata.
                     * 
                     */
                    void SetMetaAudioRate(const uint64_t& _metaAudioRate);

                    /**
                     * 判断参数 MetaAudioRate 是否已赋值
                     * @return MetaAudioRate 是否已赋值
                     * 
                     */
                    bool MetaAudioRateHasBeenSet() const;

                    /**
                     * 获取The frame rate in the metadata.
                     * @return MateFps The frame rate in the metadata.
                     * 
                     */
                    uint64_t GetMateFps() const;

                    /**
                     * 设置The frame rate in the metadata.
                     * @param _mateFps The frame rate in the metadata.
                     * 
                     */
                    void SetMateFps(const uint64_t& _mateFps);

                    /**
                     * 判断参数 MateFps 是否已赋值
                     * @return MateFps 是否已赋值
                     * 
                     */
                    bool MateFpsHasBeenSet() const;

                    /**
                     * 获取The push parameter.
                     * @return StreamParam The push parameter.
                     * 
                     */
                    std::string GetStreamParam() const;

                    /**
                     * 设置The push parameter.
                     * @param _streamParam The push parameter.
                     * 
                     */
                    void SetStreamParam(const std::string& _streamParam);

                    /**
                     * 判断参数 StreamParam 是否已赋值
                     * @return StreamParam 是否已赋值
                     * 
                     */
                    bool StreamParamHasBeenSet() const;

                    /**
                     * 获取The bandwidth (Mbps).
                     * @return Bandwidth The bandwidth (Mbps).
                     * 
                     */
                    double GetBandwidth() const;

                    /**
                     * 设置The bandwidth (Mbps).
                     * @param _bandwidth The bandwidth (Mbps).
                     * 
                     */
                    void SetBandwidth(const double& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取The traffic (MB).
                     * @return Flux The traffic (MB).
                     * 
                     */
                    double GetFlux() const;

                    /**
                     * 设置The traffic (MB).
                     * @param _flux The traffic (MB).
                     * 
                     */
                    void SetFlux(const double& _flux);

                    /**
                     * 判断参数 Flux 是否已赋值
                     * @return Flux 是否已赋值
                     * 
                     */
                    bool FluxHasBeenSet() const;

                    /**
                     * 获取The IP address of the push client.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServerIp The IP address of the push client.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServerIp() const;

                    /**
                     * 设置The IP address of the push client.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serverIp The IP address of the push client.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServerIp(const std::string& _serverIp);

                    /**
                     * 判断参数 ServerIp 是否已赋值
                     * @return ServerIp 是否已赋值
                     * 
                     */
                    bool ServerIpHasBeenSet() const;

                private:

                    /**
                     * The time of the data in the format of “%Y-%m-%d %H:%M:%S.%ms” (accurate to the millisecond).
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * The push domain.
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * The push path.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * The IP address of the push client.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * The push start time in the format of “%Y-%m-%d %H:%M:%S.%ms” (accurate to the millisecond).
                     */
                    std::string m_beginPushTime;
                    bool m_beginPushTimeHasBeenSet;

                    /**
                     * The resolution.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * The video codec.
                     */
                    std::string m_vCodec;
                    bool m_vCodecHasBeenSet;

                    /**
                     * The audio codec.
                     */
                    std::string m_aCodec;
                    bool m_aCodecHasBeenSet;

                    /**
                     * The push sequence number, which uniquely identifies a push.
                     */
                    std::string m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * The video frame rate.
                     */
                    uint64_t m_videoFps;
                    bool m_videoFpsHasBeenSet;

                    /**
                     * The video bitrate (bps).
                     */
                    uint64_t m_videoRate;
                    bool m_videoRateHasBeenSet;

                    /**
                     * The audio frame rate.
                     */
                    uint64_t m_audioFps;
                    bool m_audioFpsHasBeenSet;

                    /**
                     * The audio bitrate (bps).
                     */
                    uint64_t m_audioRate;
                    bool m_audioRateHasBeenSet;

                    /**
                     * The local elapsed time (milliseconds). The greater the difference between the local elapsed time and audio/video elapsed time, the poorer the push quality and the more severe the upstream lag.
                     */
                    uint64_t m_localTs;
                    bool m_localTsHasBeenSet;

                    /**
                     * The video elapsed time (milliseconds).
                     */
                    uint64_t m_videoTs;
                    bool m_videoTsHasBeenSet;

                    /**
                     * The audio elapsed time (milliseconds).
                     */
                    uint64_t m_audioTs;
                    bool m_audioTsHasBeenSet;

                    /**
                     * The video bitrate (Kbps) in the metadata.
                     */
                    uint64_t m_metaVideoRate;
                    bool m_metaVideoRateHasBeenSet;

                    /**
                     * The audio bitrate (Kbps) in the metadata.
                     */
                    uint64_t m_metaAudioRate;
                    bool m_metaAudioRateHasBeenSet;

                    /**
                     * The frame rate in the metadata.
                     */
                    uint64_t m_mateFps;
                    bool m_mateFpsHasBeenSet;

                    /**
                     * The push parameter.
                     */
                    std::string m_streamParam;
                    bool m_streamParamHasBeenSet;

                    /**
                     * The bandwidth (Mbps).
                     */
                    double m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * The traffic (MB).
                     */
                    double m_flux;
                    bool m_fluxHasBeenSet;

                    /**
                     * The IP address of the push client.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serverIp;
                    bool m_serverIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHQUALITYDATA_H_
