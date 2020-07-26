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
                * Voice chat usage statistics
                */
                class RealTimeSpeechStatisticsItem : public AbstractModel
                {
                public:
                    RealTimeSpeechStatisticsItem();
                    ~RealTimeSpeechStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DAU in Mainland China
                     * @return MainLandDau DAU in Mainland China
                     */
                    uint64_t GetMainLandDau() const;

                    /**
                     * 设置DAU in Mainland China
                     * @param MainLandDau DAU in Mainland China
                     */
                    void SetMainLandDau(const uint64_t& _mainLandDau);

                    /**
                     * 判断参数 MainLandDau 是否已赋值
                     * @return MainLandDau 是否已赋值
                     */
                    bool MainLandDauHasBeenSet() const;

                    /**
                     * 获取PCU in Mainland China
                     * @return MainLandPcu PCU in Mainland China
                     */
                    uint64_t GetMainLandPcu() const;

                    /**
                     * 设置PCU in Mainland China
                     * @param MainLandPcu PCU in Mainland China
                     */
                    void SetMainLandPcu(const uint64_t& _mainLandPcu);

                    /**
                     * 判断参数 MainLandPcu 是否已赋值
                     * @return MainLandPcu 是否已赋值
                     */
                    bool MainLandPcuHasBeenSet() const;

                    /**
                     * 获取Total duration of use in Mainland China in minutes
                     * @return MainLandDuration Total duration of use in Mainland China in minutes
                     */
                    uint64_t GetMainLandDuration() const;

                    /**
                     * 设置Total duration of use in Mainland China in minutes
                     * @param MainLandDuration Total duration of use in Mainland China in minutes
                     */
                    void SetMainLandDuration(const uint64_t& _mainLandDuration);

                    /**
                     * 判断参数 MainLandDuration 是否已赋值
                     * @return MainLandDuration 是否已赋值
                     */
                    bool MainLandDurationHasBeenSet() const;

                    /**
                     * 获取DAU outside Mainland China
                     * @return OverseaDau DAU outside Mainland China
                     */
                    uint64_t GetOverseaDau() const;

                    /**
                     * 设置DAU outside Mainland China
                     * @param OverseaDau DAU outside Mainland China
                     */
                    void SetOverseaDau(const uint64_t& _overseaDau);

                    /**
                     * 判断参数 OverseaDau 是否已赋值
                     * @return OverseaDau 是否已赋值
                     */
                    bool OverseaDauHasBeenSet() const;

                    /**
                     * 获取PCU outside Mainland China
                     * @return OverseaPcu PCU outside Mainland China
                     */
                    uint64_t GetOverseaPcu() const;

                    /**
                     * 设置PCU outside Mainland China
                     * @param OverseaPcu PCU outside Mainland China
                     */
                    void SetOverseaPcu(const uint64_t& _overseaPcu);

                    /**
                     * 判断参数 OverseaPcu 是否已赋值
                     * @return OverseaPcu 是否已赋值
                     */
                    bool OverseaPcuHasBeenSet() const;

                    /**
                     * 获取Total duration of use outside Mainland China in minutes
                     * @return OverseaDuration Total duration of use outside Mainland China in minutes
                     */
                    uint64_t GetOverseaDuration() const;

                    /**
                     * 设置Total duration of use outside Mainland China in minutes
                     * @param OverseaDuration Total duration of use outside Mainland China in minutes
                     */
                    void SetOverseaDuration(const uint64_t& _overseaDuration);

                    /**
                     * 判断参数 OverseaDuration 是否已赋值
                     * @return OverseaDuration 是否已赋值
                     */
                    bool OverseaDurationHasBeenSet() const;

                private:

                    /**
                     * DAU in Mainland China
                     */
                    uint64_t m_mainLandDau;
                    bool m_mainLandDauHasBeenSet;

                    /**
                     * PCU in Mainland China
                     */
                    uint64_t m_mainLandPcu;
                    bool m_mainLandPcuHasBeenSet;

                    /**
                     * Total duration of use in Mainland China in minutes
                     */
                    uint64_t m_mainLandDuration;
                    bool m_mainLandDurationHasBeenSet;

                    /**
                     * DAU outside Mainland China
                     */
                    uint64_t m_overseaDau;
                    bool m_overseaDauHasBeenSet;

                    /**
                     * PCU outside Mainland China
                     */
                    uint64_t m_overseaPcu;
                    bool m_overseaPcuHasBeenSet;

                    /**
                     * Total duration of use outside Mainland China in minutes
                     */
                    uint64_t m_overseaDuration;
                    bool m_overseaDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_REALTIMESPEECHSTATISTICSITEM_H_
