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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_REGIONLATENCY_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_REGIONLATENCY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * The network delay time for players to reach different regions.
                */
                class RegionLatency : public AbstractModel
                {
                public:
                    RegionLatency();
                    ~RegionLatency() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region
ap-beijing          North China (Beijing)
ap-chengdu          Southwest China (Chengdu)
ap-guangzhou           South China (Guangzhou)
ap-hongkong           Hong Kong/Macao/Taiwan (Hong Kong, China)
ap-seoul          Asia Pacific (Seoul)
ap-shanghai          East China (Shanghai)
ap-singapore          Southeast Asia (Singapore)
eu-frankfurt          Europe (Frankfurt)
na-siliconvalley          Western US (Silicon Valley)
na-toronto           North America (Toronto)
ap-mumbai           Asia Pacific (Mumbai)
na-ashburn          Eastern US (Virginia)
ap-bangkok           Asia Pacific (Bangkok)
eu-moscow           Europe (Moscow)
ap-tokyo           Asia Pacific (Tokyo)
                     * @return Region Region
ap-beijing          North China (Beijing)
ap-chengdu          Southwest China (Chengdu)
ap-guangzhou           South China (Guangzhou)
ap-hongkong           Hong Kong/Macao/Taiwan (Hong Kong, China)
ap-seoul          Asia Pacific (Seoul)
ap-shanghai          East China (Shanghai)
ap-singapore          Southeast Asia (Singapore)
eu-frankfurt          Europe (Frankfurt)
na-siliconvalley          Western US (Silicon Valley)
na-toronto           North America (Toronto)
ap-mumbai           Asia Pacific (Mumbai)
na-ashburn          Eastern US (Virginia)
ap-bangkok           Asia Pacific (Bangkok)
eu-moscow           Europe (Moscow)
ap-tokyo           Asia Pacific (Tokyo)
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
ap-beijing          North China (Beijing)
ap-chengdu          Southwest China (Chengdu)
ap-guangzhou           South China (Guangzhou)
ap-hongkong           Hong Kong/Macao/Taiwan (Hong Kong, China)
ap-seoul          Asia Pacific (Seoul)
ap-shanghai          East China (Shanghai)
ap-singapore          Southeast Asia (Singapore)
eu-frankfurt          Europe (Frankfurt)
na-siliconvalley          Western US (Silicon Valley)
na-toronto           North America (Toronto)
ap-mumbai           Asia Pacific (Mumbai)
na-ashburn          Eastern US (Virginia)
ap-bangkok           Asia Pacific (Bangkok)
eu-moscow           Europe (Moscow)
ap-tokyo           Asia Pacific (Tokyo)
                     * @param Region Region
ap-beijing          North China (Beijing)
ap-chengdu          Southwest China (Chengdu)
ap-guangzhou           South China (Guangzhou)
ap-hongkong           Hong Kong/Macao/Taiwan (Hong Kong, China)
ap-seoul          Asia Pacific (Seoul)
ap-shanghai          East China (Shanghai)
ap-singapore          Southeast Asia (Singapore)
eu-frankfurt          Europe (Frankfurt)
na-siliconvalley          Western US (Silicon Valley)
na-toronto           North America (Toronto)
ap-mumbai           Asia Pacific (Mumbai)
na-ashburn          Eastern US (Virginia)
ap-bangkok           Asia Pacific (Bangkok)
eu-moscow           Europe (Moscow)
ap-tokyo           Asia Pacific (Tokyo)
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Delay time in ms. Value range: 0 - 999999
                     * @return Latency Delay time in ms. Value range: 0 - 999999
                     */
                    uint64_t GetLatency() const;

                    /**
                     * 设置Delay time in ms. Value range: 0 - 999999
                     * @param Latency Delay time in ms. Value range: 0 - 999999
                     */
                    void SetLatency(const uint64_t& _latency);

                    /**
                     * 判断参数 Latency 是否已赋值
                     * @return Latency 是否已赋值
                     */
                    bool LatencyHasBeenSet() const;

                private:

                    /**
                     * Region
ap-beijing          North China (Beijing)
ap-chengdu          Southwest China (Chengdu)
ap-guangzhou           South China (Guangzhou)
ap-hongkong           Hong Kong/Macao/Taiwan (Hong Kong, China)
ap-seoul          Asia Pacific (Seoul)
ap-shanghai          East China (Shanghai)
ap-singapore          Southeast Asia (Singapore)
eu-frankfurt          Europe (Frankfurt)
na-siliconvalley          Western US (Silicon Valley)
na-toronto           North America (Toronto)
ap-mumbai           Asia Pacific (Mumbai)
na-ashburn          Eastern US (Virginia)
ap-bangkok           Asia Pacific (Bangkok)
eu-moscow           Europe (Moscow)
ap-tokyo           Asia Pacific (Tokyo)
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Delay time in ms. Value range: 0 - 999999
                     */
                    uint64_t m_latency;
                    bool m_latencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_REGIONLATENCY_H_
