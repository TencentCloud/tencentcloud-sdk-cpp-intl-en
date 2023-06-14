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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHDATAINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHDATAINFO_H_

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
                * Push information
                */
                class PushDataInfo : public AbstractModel
                {
                public:
                    PushDataInfo();
                    ~PushDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Stream name.
                     * @return StreamName Stream name.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name.
                     * @param _streamName Stream name.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Push path.
                     * @return AppName Push path.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path.
                     * @param _appName Push path.
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
                     * 获取Push client IP.
                     * @return ClientIp Push client IP.
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Push client IP.
                     * @param _clientIp Push client IP.
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
                     * 获取IP of the server that receives the stream.
                     * @return ServerIp IP of the server that receives the stream.
                     * 
                     */
                    std::string GetServerIp() const;

                    /**
                     * 设置IP of the server that receives the stream.
                     * @param _serverIp IP of the server that receives the stream.
                     * 
                     */
                    void SetServerIp(const std::string& _serverIp);

                    /**
                     * 判断参数 ServerIp 是否已赋值
                     * @return ServerIp 是否已赋值
                     * 
                     */
                    bool ServerIpHasBeenSet() const;

                    /**
                     * 获取Pushed video frame rate in Hz.
                     * @return VideoFps Pushed video frame rate in Hz.
                     * 
                     */
                    uint64_t GetVideoFps() const;

                    /**
                     * 设置Pushed video frame rate in Hz.
                     * @param _videoFps Pushed video frame rate in Hz.
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
                     * 获取Video bitrate (bps) for publishing
                     * @return VideoSpeed Video bitrate (bps) for publishing
                     * 
                     */
                    uint64_t GetVideoSpeed() const;

                    /**
                     * 设置Video bitrate (bps) for publishing
                     * @param _videoSpeed Video bitrate (bps) for publishing
                     * 
                     */
                    void SetVideoSpeed(const uint64_t& _videoSpeed);

                    /**
                     * 判断参数 VideoSpeed 是否已赋值
                     * @return VideoSpeed 是否已赋值
                     * 
                     */
                    bool VideoSpeedHasBeenSet() const;

                    /**
                     * 获取Pushed audio frame rate in Hz.
                     * @return AudioFps Pushed audio frame rate in Hz.
                     * 
                     */
                    uint64_t GetAudioFps() const;

                    /**
                     * 设置Pushed audio frame rate in Hz.
                     * @param _audioFps Pushed audio frame rate in Hz.
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
                     * 获取Audio bitrate (bps) for publishing
                     * @return AudioSpeed Audio bitrate (bps) for publishing
                     * 
                     */
                    uint64_t GetAudioSpeed() const;

                    /**
                     * 设置Audio bitrate (bps) for publishing
                     * @param _audioSpeed Audio bitrate (bps) for publishing
                     * 
                     */
                    void SetAudioSpeed(const uint64_t& _audioSpeed);

                    /**
                     * 判断参数 AudioSpeed 是否已赋值
                     * @return AudioSpeed 是否已赋值
                     * 
                     */
                    bool AudioSpeedHasBeenSet() const;

                    /**
                     * 获取Push domain name.
                     * @return PushDomain Push domain name.
                     * 
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置Push domain name.
                     * @param _pushDomain Push domain name.
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
                     * 获取Push start time.
                     * @return BeginPushTime Push start time.
                     * 
                     */
                    std::string GetBeginPushTime() const;

                    /**
                     * 设置Push start time.
                     * @param _beginPushTime Push start time.
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
                     * 获取Audio codec,
Example: AAC.
                     * @return Acodec Audio codec,
Example: AAC.
                     * 
                     */
                    std::string GetAcodec() const;

                    /**
                     * 设置Audio codec,
Example: AAC.
                     * @param _acodec Audio codec,
Example: AAC.
                     * 
                     */
                    void SetAcodec(const std::string& _acodec);

                    /**
                     * 判断参数 Acodec 是否已赋值
                     * @return Acodec 是否已赋值
                     * 
                     */
                    bool AcodecHasBeenSet() const;

                    /**
                     * 获取Video codec,
Example: H.264.
                     * @return Vcodec Video codec,
Example: H.264.
                     * 
                     */
                    std::string GetVcodec() const;

                    /**
                     * 设置Video codec,
Example: H.264.
                     * @param _vcodec Video codec,
Example: H.264.
                     * 
                     */
                    void SetVcodec(const std::string& _vcodec);

                    /**
                     * 判断参数 Vcodec 是否已赋值
                     * @return Vcodec 是否已赋值
                     * 
                     */
                    bool VcodecHasBeenSet() const;

                    /**
                     * 获取Resolution.
                     * @return Resolution Resolution.
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置Resolution.
                     * @param _resolution Resolution.
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
                     * 获取Sample rate.
                     * @return AsampleRate Sample rate.
                     * 
                     */
                    uint64_t GetAsampleRate() const;

                    /**
                     * 设置Sample rate.
                     * @param _asampleRate Sample rate.
                     * 
                     */
                    void SetAsampleRate(const uint64_t& _asampleRate);

                    /**
                     * 判断参数 AsampleRate 是否已赋值
                     * @return AsampleRate 是否已赋值
                     * 
                     */
                    bool AsampleRateHasBeenSet() const;

                    /**
                     * 获取Audio bitrate (bps) in metadata
                     * @return MetaAudioSpeed Audio bitrate (bps) in metadata
                     * 
                     */
                    uint64_t GetMetaAudioSpeed() const;

                    /**
                     * 设置Audio bitrate (bps) in metadata
                     * @param _metaAudioSpeed Audio bitrate (bps) in metadata
                     * 
                     */
                    void SetMetaAudioSpeed(const uint64_t& _metaAudioSpeed);

                    /**
                     * 判断参数 MetaAudioSpeed 是否已赋值
                     * @return MetaAudioSpeed 是否已赋值
                     * 
                     */
                    bool MetaAudioSpeedHasBeenSet() const;

                    /**
                     * 获取Video bitrate (bps) in metadata
                     * @return MetaVideoSpeed Video bitrate (bps) in metadata
                     * 
                     */
                    uint64_t GetMetaVideoSpeed() const;

                    /**
                     * 设置Video bitrate (bps) in metadata
                     * @param _metaVideoSpeed Video bitrate (bps) in metadata
                     * 
                     */
                    void SetMetaVideoSpeed(const uint64_t& _metaVideoSpeed);

                    /**
                     * 判断参数 MetaVideoSpeed 是否已赋值
                     * @return MetaVideoSpeed 是否已赋值
                     * 
                     */
                    bool MetaVideoSpeedHasBeenSet() const;

                    /**
                     * 获取Frame rate in `metadata`.
                     * @return MetaFps Frame rate in `metadata`.
                     * 
                     */
                    uint64_t GetMetaFps() const;

                    /**
                     * 设置Frame rate in `metadata`.
                     * @param _metaFps Frame rate in `metadata`.
                     * 
                     */
                    void SetMetaFps(const uint64_t& _metaFps);

                    /**
                     * 判断参数 MetaFps 是否已赋值
                     * @return MetaFps 是否已赋值
                     * 
                     */
                    bool MetaFpsHasBeenSet() const;

                private:

                    /**
                     * Stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

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
                     * IP of the server that receives the stream.
                     */
                    std::string m_serverIp;
                    bool m_serverIpHasBeenSet;

                    /**
                     * Pushed video frame rate in Hz.
                     */
                    uint64_t m_videoFps;
                    bool m_videoFpsHasBeenSet;

                    /**
                     * Video bitrate (bps) for publishing
                     */
                    uint64_t m_videoSpeed;
                    bool m_videoSpeedHasBeenSet;

                    /**
                     * Pushed audio frame rate in Hz.
                     */
                    uint64_t m_audioFps;
                    bool m_audioFpsHasBeenSet;

                    /**
                     * Audio bitrate (bps) for publishing
                     */
                    uint64_t m_audioSpeed;
                    bool m_audioSpeedHasBeenSet;

                    /**
                     * Push domain name.
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * Push start time.
                     */
                    std::string m_beginPushTime;
                    bool m_beginPushTimeHasBeenSet;

                    /**
                     * Audio codec,
Example: AAC.
                     */
                    std::string m_acodec;
                    bool m_acodecHasBeenSet;

                    /**
                     * Video codec,
Example: H.264.
                     */
                    std::string m_vcodec;
                    bool m_vcodecHasBeenSet;

                    /**
                     * Resolution.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * Sample rate.
                     */
                    uint64_t m_asampleRate;
                    bool m_asampleRateHasBeenSet;

                    /**
                     * Audio bitrate (bps) in metadata
                     */
                    uint64_t m_metaAudioSpeed;
                    bool m_metaAudioSpeedHasBeenSet;

                    /**
                     * Video bitrate (bps) in metadata
                     */
                    uint64_t m_metaVideoSpeed;
                    bool m_metaVideoSpeedHasBeenSet;

                    /**
                     * Frame rate in `metadata`.
                     */
                    uint64_t m_metaFps;
                    bool m_metaFpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHDATAINFO_H_
