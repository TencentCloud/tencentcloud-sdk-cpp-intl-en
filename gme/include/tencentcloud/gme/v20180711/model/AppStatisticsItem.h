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
                     * 获取Voice chat statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealtimeSpeechStatisticsItem Voice chat statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RealTimeSpeechStatisticsItem GetRealtimeSpeechStatisticsItem() const;

                    /**
                     * 设置Voice chat statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RealtimeSpeechStatisticsItem Voice chat statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRealtimeSpeechStatisticsItem(const RealTimeSpeechStatisticsItem& _realtimeSpeechStatisticsItem);

                    /**
                     * 判断参数 RealtimeSpeechStatisticsItem 是否已赋值
                     * @return RealtimeSpeechStatisticsItem 是否已赋值
                     */
                    bool RealtimeSpeechStatisticsItemHasBeenSet() const;

                    /**
                     * 获取Voice messaging statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VoiceMessageStatisticsItem Voice messaging statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VoiceMessageStatisticsItem GetVoiceMessageStatisticsItem() const;

                    /**
                     * 设置Voice messaging statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param VoiceMessageStatisticsItem Voice messaging statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVoiceMessageStatisticsItem(const VoiceMessageStatisticsItem& _voiceMessageStatisticsItem);

                    /**
                     * 判断参数 VoiceMessageStatisticsItem 是否已赋值
                     * @return VoiceMessageStatisticsItem 是否已赋值
                     */
                    bool VoiceMessageStatisticsItemHasBeenSet() const;

                    /**
                     * 获取Phrase filtering statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VoiceFilterStatisticsItem Phrase filtering statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VoiceFilterStatisticsItem GetVoiceFilterStatisticsItem() const;

                    /**
                     * 设置Phrase filtering statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param VoiceFilterStatisticsItem Phrase filtering statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVoiceFilterStatisticsItem(const VoiceFilterStatisticsItem& _voiceFilterStatisticsItem);

                    /**
                     * 判断参数 VoiceFilterStatisticsItem 是否已赋值
                     * @return VoiceFilterStatisticsItem 是否已赋值
                     */
                    bool VoiceFilterStatisticsItemHasBeenSet() const;

                    /**
                     * 获取Statistical period
                     * @return Date Statistical period
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Statistical period
                     * @param Date Statistical period
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * Voice chat statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RealTimeSpeechStatisticsItem m_realtimeSpeechStatisticsItem;
                    bool m_realtimeSpeechStatisticsItemHasBeenSet;

                    /**
                     * Voice messaging statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VoiceMessageStatisticsItem m_voiceMessageStatisticsItem;
                    bool m_voiceMessageStatisticsItemHasBeenSet;

                    /**
                     * Phrase filtering statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VoiceFilterStatisticsItem m_voiceFilterStatisticsItem;
                    bool m_voiceFilterStatisticsItemHasBeenSet;

                    /**
                     * Statistical period
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_APPSTATISTICSITEM_H_
