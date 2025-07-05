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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_REALTIMESPEECHSTATISTICSITEM_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_REALTIMESPEECHSTATISTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * Voice Chat usage statistics
                */
                class RealTimeSpeechStatisticsItem : public AbstractModel
                {
                public:
                    RealTimeSpeechStatisticsItem();
                    ~RealTimeSpeechStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DAUs in the Chinese mainland
                     * @return MainLandDau DAUs in the Chinese mainland
                     * 
                     */
                    uint64_t GetMainLandDau() const;

                    /**
                     * 设置DAUs in the Chinese mainland
                     * @param _mainLandDau DAUs in the Chinese mainland
                     * 
                     */
                    void SetMainLandDau(const uint64_t& _mainLandDau);

                    /**
                     * 判断参数 MainLandDau 是否已赋值
                     * @return MainLandDau 是否已赋值
                     * 
                     */
                    bool MainLandDauHasBeenSet() const;

                    /**
                     * 获取PCUs in the Chinese mainland
                     * @return MainLandPcu PCUs in the Chinese mainland
                     * 
                     */
                    uint64_t GetMainLandPcu() const;

                    /**
                     * 设置PCUs in the Chinese mainland
                     * @param _mainLandPcu PCUs in the Chinese mainland
                     * 
                     */
                    void SetMainLandPcu(const uint64_t& _mainLandPcu);

                    /**
                     * 判断参数 MainLandPcu 是否已赋值
                     * @return MainLandPcu 是否已赋值
                     * 
                     */
                    bool MainLandPcuHasBeenSet() const;

                    /**
                     * 获取Total duration of use in the Chinese mainland (in minutes)
                     * @return MainLandDuration Total duration of use in the Chinese mainland (in minutes)
                     * 
                     */
                    uint64_t GetMainLandDuration() const;

                    /**
                     * 设置Total duration of use in the Chinese mainland (in minutes)
                     * @param _mainLandDuration Total duration of use in the Chinese mainland (in minutes)
                     * 
                     */
                    void SetMainLandDuration(const uint64_t& _mainLandDuration);

                    /**
                     * 判断参数 MainLandDuration 是否已赋值
                     * @return MainLandDuration 是否已赋值
                     * 
                     */
                    bool MainLandDurationHasBeenSet() const;

                    /**
                     * 获取DAUs outside the Chinese mainland
                     * @return OverseaDau DAUs outside the Chinese mainland
                     * 
                     */
                    uint64_t GetOverseaDau() const;

                    /**
                     * 设置DAUs outside the Chinese mainland
                     * @param _overseaDau DAUs outside the Chinese mainland
                     * 
                     */
                    void SetOverseaDau(const uint64_t& _overseaDau);

                    /**
                     * 判断参数 OverseaDau 是否已赋值
                     * @return OverseaDau 是否已赋值
                     * 
                     */
                    bool OverseaDauHasBeenSet() const;

                    /**
                     * 获取PCUs outside the Chinese mainland
                     * @return OverseaPcu PCUs outside the Chinese mainland
                     * 
                     */
                    uint64_t GetOverseaPcu() const;

                    /**
                     * 设置PCUs outside the Chinese mainland
                     * @param _overseaPcu PCUs outside the Chinese mainland
                     * 
                     */
                    void SetOverseaPcu(const uint64_t& _overseaPcu);

                    /**
                     * 判断参数 OverseaPcu 是否已赋值
                     * @return OverseaPcu 是否已赋值
                     * 
                     */
                    bool OverseaPcuHasBeenSet() const;

                    /**
                     * 获取Total duration of use outside the Chinese mainland (in minutes)
                     * @return OverseaDuration Total duration of use outside the Chinese mainland (in minutes)
                     * 
                     */
                    uint64_t GetOverseaDuration() const;

                    /**
                     * 设置Total duration of use outside the Chinese mainland (in minutes)
                     * @param _overseaDuration Total duration of use outside the Chinese mainland (in minutes)
                     * 
                     */
                    void SetOverseaDuration(const uint64_t& _overseaDuration);

                    /**
                     * 判断参数 OverseaDuration 是否已赋值
                     * @return OverseaDuration 是否已赋值
                     * 
                     */
                    bool OverseaDurationHasBeenSet() const;

                private:

                    /**
                     * DAUs in the Chinese mainland
                     */
                    uint64_t m_mainLandDau;
                    bool m_mainLandDauHasBeenSet;

                    /**
                     * PCUs in the Chinese mainland
                     */
                    uint64_t m_mainLandPcu;
                    bool m_mainLandPcuHasBeenSet;

                    /**
                     * Total duration of use in the Chinese mainland (in minutes)
                     */
                    uint64_t m_mainLandDuration;
                    bool m_mainLandDurationHasBeenSet;

                    /**
                     * DAUs outside the Chinese mainland
                     */
                    uint64_t m_overseaDau;
                    bool m_overseaDauHasBeenSet;

                    /**
                     * PCUs outside the Chinese mainland
                     */
                    uint64_t m_overseaPcu;
                    bool m_overseaPcuHasBeenSet;

                    /**
                     * Total duration of use outside the Chinese mainland (in minutes)
                     */
                    uint64_t m_overseaDuration;
                    bool m_overseaDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_REALTIMESPEECHSTATISTICSITEM_H_
