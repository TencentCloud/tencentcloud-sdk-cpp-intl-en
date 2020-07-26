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
                * Push quality data of a stream.
                */
                class PushQualityData : public AbstractModel
                {
                public:
                    PushQualityData();
                    ~PushQualityData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data time in the format of `%Y-%m-%d %H:%M:%S.%ms` and accurate down to the millisecond level.
                     * @return Time Data time in the format of `%Y-%m-%d %H:%M:%S.%ms` and accurate down to the millisecond level.
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Data time in the format of `%Y-%m-%d %H:%M:%S.%ms` and accurate down to the millisecond level.
                     * @param Time Data time in the format of `%Y-%m-%d %H:%M:%S.%ms` and accurate down to the millisecond level.
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Push domain name.
                     * @return PushDomain Push domain name.
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置Push domain name.
                     * @param PushDomain Push domain name.
                     */
                    void SetPushDomain(const std::string& _pushDomain);

                    /**
                     * 判断参数 PushDomain 是否已赋值
                     * @return PushDomain 是否已赋值
                     */
                    bool PushDomainHasBeenSet() const;

                    /**
                     * 获取Push path.
                     * @return AppName Push path.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path.
                     * @param AppName Push path.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Push client IP.
                     * @return ClientIp Push client IP.
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Push client IP.
                     * @param ClientIp Push client IP.
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取Push start time in the format of `%Y-%m-%d %H:%M:%S.%ms` and accurate down to the millisecond level.
                     * @return BeginPushTime Push start time in the format of `%Y-%m-%d %H:%M:%S.%ms` and accurate down to the millisecond level.
                     */
                    std::string GetBeginPushTime() const;

                    /**
                     * 设置Push start time in the format of `%Y-%m-%d %H:%M:%S.%ms` and accurate down to the millisecond level.
                     * @param BeginPushTime Push start time in the format of `%Y-%m-%d %H:%M:%S.%ms` and accurate down to the millisecond level.
                     */
                    void SetBeginPushTime(const std::string& _beginPushTime);

                    /**
                     * 判断参数 BeginPushTime 是否已赋值
                     * @return BeginPushTime 是否已赋值
                     */
                    bool BeginPushTimeHasBeenSet() const;

                    /**
                     * 获取Resolution information.
                     * @return Resolution Resolution information.
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置Resolution information.
                     * @param Resolution Resolution information.
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取Video codec.
                     * @return VCodec Video codec.
                     */
                    std::string GetVCodec() const;

                    /**
                     * 设置Video codec.
                     * @param VCodec Video codec.
                     */
                    void SetVCodec(const std::string& _vCodec);

                    /**
                     * 判断参数 VCodec 是否已赋值
                     * @return VCodec 是否已赋值
                     */
                    bool VCodecHasBeenSet() const;

                    /**
                     * 获取Audio codec.
                     * @return ACodec Audio codec.
                     */
                    std::string GetACodec() const;

                    /**
                     * 设置Audio codec.
                     * @param ACodec Audio codec.
                     */
                    void SetACodec(const std::string& _aCodec);

                    /**
                     * 判断参数 ACodec 是否已赋值
                     * @return ACodec 是否已赋值
                     */
                    bool ACodecHasBeenSet() const;

                    /**
                     * 获取Push serial number, which uniquely identifies a push.
                     * @return Sequence Push serial number, which uniquely identifies a push.
                     */
                    std::string GetSequence() const;

                    /**
                     * 设置Push serial number, which uniquely identifies a push.
                     * @param Sequence Push serial number, which uniquely identifies a push.
                     */
                    void SetSequence(const std::string& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     */
                    bool SequenceHasBeenSet() const;

                    /**
                     * 获取Video frame rate.
                     * @return VideoFps Video frame rate.
                     */
                    uint64_t GetVideoFps() const;

                    /**
                     * 设置Video frame rate.
                     * @param VideoFps Video frame rate.
                     */
                    void SetVideoFps(const uint64_t& _videoFps);

                    /**
                     * 判断参数 VideoFps 是否已赋值
                     * @return VideoFps 是否已赋值
                     */
                    bool VideoFpsHasBeenSet() const;

                    /**
                     * 获取Video bitrate in bps.
                     * @return VideoRate Video bitrate in bps.
                     */
                    uint64_t GetVideoRate() const;

                    /**
                     * 设置Video bitrate in bps.
                     * @param VideoRate Video bitrate in bps.
                     */
                    void SetVideoRate(const uint64_t& _videoRate);

                    /**
                     * 判断参数 VideoRate 是否已赋值
                     * @return VideoRate 是否已赋值
                     */
                    bool VideoRateHasBeenSet() const;

                    /**
                     * 获取Audio frame rate.
                     * @return AudioFps Audio frame rate.
                     */
                    uint64_t GetAudioFps() const;

                    /**
                     * 设置Audio frame rate.
                     * @param AudioFps Audio frame rate.
                     */
                    void SetAudioFps(const uint64_t& _audioFps);

                    /**
                     * 判断参数 AudioFps 是否已赋值
                     * @return AudioFps 是否已赋值
                     */
                    bool AudioFpsHasBeenSet() const;

                    /**
                     * 获取Audio bitrate in bps.
                     * @return AudioRate Audio bitrate in bps.
                     */
                    uint64_t GetAudioRate() const;

                    /**
                     * 设置Audio bitrate in bps.
                     * @param AudioRate Audio bitrate in bps.
                     */
                    void SetAudioRate(const uint64_t& _audioRate);

                    /**
                     * 判断参数 AudioRate 是否已赋值
                     * @return AudioRate 是否已赋值
                     */
                    bool AudioRateHasBeenSet() const;

                    /**
                     * 获取Local elapsed time in milliseconds. The greater the difference between audio/video elapsed time and local elapsed time, the poorer the push quality and the more serious the upstream lag.
                     * @return LocalTs Local elapsed time in milliseconds. The greater the difference between audio/video elapsed time and local elapsed time, the poorer the push quality and the more serious the upstream lag.
                     */
                    uint64_t GetLocalTs() const;

                    /**
                     * 设置Local elapsed time in milliseconds. The greater the difference between audio/video elapsed time and local elapsed time, the poorer the push quality and the more serious the upstream lag.
                     * @param LocalTs Local elapsed time in milliseconds. The greater the difference between audio/video elapsed time and local elapsed time, the poorer the push quality and the more serious the upstream lag.
                     */
                    void SetLocalTs(const uint64_t& _localTs);

                    /**
                     * 判断参数 LocalTs 是否已赋值
                     * @return LocalTs 是否已赋值
                     */
                    bool LocalTsHasBeenSet() const;

                    /**
                     * 获取Video elapsed time in milliseconds.
                     * @return VideoTs Video elapsed time in milliseconds.
                     */
                    uint64_t GetVideoTs() const;

                    /**
                     * 设置Video elapsed time in milliseconds.
                     * @param VideoTs Video elapsed time in milliseconds.
                     */
                    void SetVideoTs(const uint64_t& _videoTs);

                    /**
                     * 判断参数 VideoTs 是否已赋值
                     * @return VideoTs 是否已赋值
                     */
                    bool VideoTsHasBeenSet() const;

                    /**
                     * 获取Audio elapsed time in milliseconds.
                     * @return AudioTs Audio elapsed time in milliseconds.
                     */
                    uint64_t GetAudioTs() const;

                    /**
                     * 设置Audio elapsed time in milliseconds.
                     * @param AudioTs Audio elapsed time in milliseconds.
                     */
                    void SetAudioTs(const uint64_t& _audioTs);

                    /**
                     * 判断参数 AudioTs 是否已赋值
                     * @return AudioTs 是否已赋值
                     */
                    bool AudioTsHasBeenSet() const;

                    /**
                     * 获取Video bitrate in `metadata` in Kbps.
                     * @return MetaVideoRate Video bitrate in `metadata` in Kbps.
                     */
                    uint64_t GetMetaVideoRate() const;

                    /**
                     * 设置Video bitrate in `metadata` in Kbps.
                     * @param MetaVideoRate Video bitrate in `metadata` in Kbps.
                     */
                    void SetMetaVideoRate(const uint64_t& _metaVideoRate);

                    /**
                     * 判断参数 MetaVideoRate 是否已赋值
                     * @return MetaVideoRate 是否已赋值
                     */
                    bool MetaVideoRateHasBeenSet() const;

                    /**
                     * 获取Audio bitrate in `metadata` in Kbps.
                     * @return MetaAudioRate Audio bitrate in `metadata` in Kbps.
                     */
                    uint64_t GetMetaAudioRate() const;

                    /**
                     * 设置Audio bitrate in `metadata` in Kbps.
                     * @param MetaAudioRate Audio bitrate in `metadata` in Kbps.
                     */
                    void SetMetaAudioRate(const uint64_t& _metaAudioRate);

                    /**
                     * 判断参数 MetaAudioRate 是否已赋值
                     * @return MetaAudioRate 是否已赋值
                     */
                    bool MetaAudioRateHasBeenSet() const;

                    /**
                     * 获取Frame rate in `metadata`.
                     * @return MateFps Frame rate in `metadata`.
                     */
                    uint64_t GetMateFps() const;

                    /**
                     * 设置Frame rate in `metadata`.
                     * @param MateFps Frame rate in `metadata`.
                     */
                    void SetMateFps(const uint64_t& _mateFps);

                    /**
                     * 判断参数 MateFps 是否已赋值
                     * @return MateFps 是否已赋值
                     */
                    bool MateFpsHasBeenSet() const;

                private:

                    /**
                     * Data time in the format of `%Y-%m-%d %H:%M:%S.%ms` and accurate down to the millisecond level.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Push domain name.
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * Push path.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Push client IP.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * Push start time in the format of `%Y-%m-%d %H:%M:%S.%ms` and accurate down to the millisecond level.
                     */
                    std::string m_beginPushTime;
                    bool m_beginPushTimeHasBeenSet;

                    /**
                     * Resolution information.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * Video codec.
                     */
                    std::string m_vCodec;
                    bool m_vCodecHasBeenSet;

                    /**
                     * Audio codec.
                     */
                    std::string m_aCodec;
                    bool m_aCodecHasBeenSet;

                    /**
                     * Push serial number, which uniquely identifies a push.
                     */
                    std::string m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * Video frame rate.
                     */
                    uint64_t m_videoFps;
                    bool m_videoFpsHasBeenSet;

                    /**
                     * Video bitrate in bps.
                     */
                    uint64_t m_videoRate;
                    bool m_videoRateHasBeenSet;

                    /**
                     * Audio frame rate.
                     */
                    uint64_t m_audioFps;
                    bool m_audioFpsHasBeenSet;

                    /**
                     * Audio bitrate in bps.
                     */
                    uint64_t m_audioRate;
                    bool m_audioRateHasBeenSet;

                    /**
                     * Local elapsed time in milliseconds. The greater the difference between audio/video elapsed time and local elapsed time, the poorer the push quality and the more serious the upstream lag.
                     */
                    uint64_t m_localTs;
                    bool m_localTsHasBeenSet;

                    /**
                     * Video elapsed time in milliseconds.
                     */
                    uint64_t m_videoTs;
                    bool m_videoTsHasBeenSet;

                    /**
                     * Audio elapsed time in milliseconds.
                     */
                    uint64_t m_audioTs;
                    bool m_audioTsHasBeenSet;

                    /**
                     * Video bitrate in `metadata` in Kbps.
                     */
                    uint64_t m_metaVideoRate;
                    bool m_metaVideoRateHasBeenSet;

                    /**
                     * Audio bitrate in `metadata` in Kbps.
                     */
                    uint64_t m_metaAudioRate;
                    bool m_metaAudioRateHasBeenSet;

                    /**
                     * Frame rate in `metadata`.
                     */
                    uint64_t m_mateFps;
                    bool m_mateFpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHQUALITYDATA_H_
