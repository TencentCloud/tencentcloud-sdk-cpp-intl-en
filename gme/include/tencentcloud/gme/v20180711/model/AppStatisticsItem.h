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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_APPSTATISTICSITEM_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_APPSTATISTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/RealTimeSpeechStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/VoiceMessageStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/VoiceFilterStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/AudioTextStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/StreamTextStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/OverseaTextStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/RealtimeTextStatisticsItem.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * Application usage statistics
                */
                class AppStatisticsItem : public AbstractModel
                {
                public:
                    AppStatisticsItem();
                    ~AppStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Voice Chat statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RealtimeSpeechStatisticsItem Voice Chat statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    RealTimeSpeechStatisticsItem GetRealtimeSpeechStatisticsItem() const;

                    /**
                     * 设置Voice Chat statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _realtimeSpeechStatisticsItem Voice Chat statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRealtimeSpeechStatisticsItem(const RealTimeSpeechStatisticsItem& _realtimeSpeechStatisticsItem);

                    /**
                     * 判断参数 RealtimeSpeechStatisticsItem 是否已赋值
                     * @return RealtimeSpeechStatisticsItem 是否已赋值
                     * 
                     */
                    bool RealtimeSpeechStatisticsItemHasBeenSet() const;

                    /**
                     * 获取Voice Message statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return VoiceMessageStatisticsItem Voice Message statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    VoiceMessageStatisticsItem GetVoiceMessageStatisticsItem() const;

                    /**
                     * 设置Voice Message statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _voiceMessageStatisticsItem Voice Message statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVoiceMessageStatisticsItem(const VoiceMessageStatisticsItem& _voiceMessageStatisticsItem);

                    /**
                     * 判断参数 VoiceMessageStatisticsItem 是否已赋值
                     * @return VoiceMessageStatisticsItem 是否已赋值
                     * 
                     */
                    bool VoiceMessageStatisticsItemHasBeenSet() const;

                    /**
                     * 获取Phrase Filtering statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return VoiceFilterStatisticsItem Phrase Filtering statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    VoiceFilterStatisticsItem GetVoiceFilterStatisticsItem() const;

                    /**
                     * 设置Phrase Filtering statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _voiceFilterStatisticsItem Phrase Filtering statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVoiceFilterStatisticsItem(const VoiceFilterStatisticsItem& _voiceFilterStatisticsItem);

                    /**
                     * 判断参数 VoiceFilterStatisticsItem 是否已赋值
                     * @return VoiceFilterStatisticsItem 是否已赋值
                     * 
                     */
                    bool VoiceFilterStatisticsItemHasBeenSet() const;

                    /**
                     * 获取Reference period
                     * @return Date Reference period
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Reference period
                     * @param _date Reference period
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Recording-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AudioTextStatisticsItem Recording-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AudioTextStatisticsItem GetAudioTextStatisticsItem() const;

                    /**
                     * 设置Recording-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _audioTextStatisticsItem Recording-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAudioTextStatisticsItem(const AudioTextStatisticsItem& _audioTextStatisticsItem);

                    /**
                     * 判断参数 AudioTextStatisticsItem 是否已赋值
                     * @return AudioTextStatisticsItem 是否已赋值
                     * 
                     */
                    bool AudioTextStatisticsItemHasBeenSet() const;

                    /**
                     * 获取Stream-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return StreamTextStatisticsItem Stream-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    StreamTextStatisticsItem GetStreamTextStatisticsItem() const;

                    /**
                     * 设置Stream-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _streamTextStatisticsItem Stream-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStreamTextStatisticsItem(const StreamTextStatisticsItem& _streamTextStatisticsItem);

                    /**
                     * 判断参数 StreamTextStatisticsItem 是否已赋值
                     * @return StreamTextStatisticsItem 是否已赋值
                     * 
                     */
                    bool StreamTextStatisticsItemHasBeenSet() const;

                    /**
                     * 获取Usage statistics of Voice-to-Text of outside-MLC requests
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return OverseaTextStatisticsItem Usage statistics of Voice-to-Text of outside-MLC requests
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    OverseaTextStatisticsItem GetOverseaTextStatisticsItem() const;

                    /**
                     * 设置Usage statistics of Voice-to-Text of outside-MLC requests
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _overseaTextStatisticsItem Usage statistics of Voice-to-Text of outside-MLC requests
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOverseaTextStatisticsItem(const OverseaTextStatisticsItem& _overseaTextStatisticsItem);

                    /**
                     * 判断参数 OverseaTextStatisticsItem 是否已赋值
                     * @return OverseaTextStatisticsItem 是否已赋值
                     * 
                     */
                    bool OverseaTextStatisticsItemHasBeenSet() const;

                    /**
                     * 获取Real-time Voice-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RealtimeTextStatisticsItem Real-time Voice-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    RealtimeTextStatisticsItem GetRealtimeTextStatisticsItem() const;

                    /**
                     * 设置Real-time Voice-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _realtimeTextStatisticsItem Real-time Voice-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRealtimeTextStatisticsItem(const RealtimeTextStatisticsItem& _realtimeTextStatisticsItem);

                    /**
                     * 判断参数 RealtimeTextStatisticsItem 是否已赋值
                     * @return RealtimeTextStatisticsItem 是否已赋值
                     * 
                     */
                    bool RealtimeTextStatisticsItemHasBeenSet() const;

                private:

                    /**
                     * Voice Chat statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    RealTimeSpeechStatisticsItem m_realtimeSpeechStatisticsItem;
                    bool m_realtimeSpeechStatisticsItemHasBeenSet;

                    /**
                     * Voice Message statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    VoiceMessageStatisticsItem m_voiceMessageStatisticsItem;
                    bool m_voiceMessageStatisticsItemHasBeenSet;

                    /**
                     * Phrase Filtering statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    VoiceFilterStatisticsItem m_voiceFilterStatisticsItem;
                    bool m_voiceFilterStatisticsItemHasBeenSet;

                    /**
                     * Reference period
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Recording-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    AudioTextStatisticsItem m_audioTextStatisticsItem;
                    bool m_audioTextStatisticsItemHasBeenSet;

                    /**
                     * Stream-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    StreamTextStatisticsItem m_streamTextStatisticsItem;
                    bool m_streamTextStatisticsItemHasBeenSet;

                    /**
                     * Usage statistics of Voice-to-Text of outside-MLC requests
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    OverseaTextStatisticsItem m_overseaTextStatisticsItem;
                    bool m_overseaTextStatisticsItemHasBeenSet;

                    /**
                     * Real-time Voice-to-Text usage statistics
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    RealtimeTextStatisticsItem m_realtimeTextStatisticsItem;
                    bool m_realtimeTextStatisticsItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_APPSTATISTICSITEM_H_
