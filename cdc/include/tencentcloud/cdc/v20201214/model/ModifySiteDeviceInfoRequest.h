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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYSITEDEVICEINFOREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYSITEDEVICEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * ModifySiteDeviceInfo request structure.
                */
                class ModifySiteDeviceInfoRequest : public AbstractModel
                {
                public:
                    ModifySiteDeviceInfoRequest();
                    ~ModifySiteDeviceInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Equipment room ID
                     * @return SiteId Equipment room ID
                     * 
                     */
                    std::string GetSiteId() const;

                    /**
                     * 设置Equipment room ID
                     * @param _siteId Equipment room ID
                     * 
                     */
                    void SetSiteId(const std::string& _siteId);

                    /**
                     * 判断参数 SiteId 是否已赋值
                     * @return SiteId 是否已赋值
                     * 
                     */
                    bool SiteIdHasBeenSet() const;

                    /**
                     * 获取You are using optical fiber type to connect the CDC device to the network Single-mode or multi-mode fibers are available.
                     * @return FiberType You are using optical fiber type to connect the CDC device to the network Single-mode or multi-mode fibers are available.
                     * 
                     */
                    std::string GetFiberType() const;

                    /**
                     * 设置You are using optical fiber type to connect the CDC device to the network Single-mode or multi-mode fibers are available.
                     * @param _fiberType You are using optical fiber type to connect the CDC device to the network Single-mode or multi-mode fibers are available.
                     * 
                     */
                    void SetFiberType(const std::string& _fiberType);

                    /**
                     * 判断参数 FiberType 是否已赋值
                     * @return FiberType 是否已赋值
                     * 
                     */
                    bool FiberTypeHasBeenSet() const;

                    /**
                     * 获取Optical standard used to connect the CDC device to the network This field depends on the uplink speed, optical fiber type, and distance to upstream equipment.
                     * @return OpticalStandard Optical standard used to connect the CDC device to the network This field depends on the uplink speed, optical fiber type, and distance to upstream equipment.
                     * 
                     */
                    std::string GetOpticalStandard() const;

                    /**
                     * 设置Optical standard used to connect the CDC device to the network This field depends on the uplink speed, optical fiber type, and distance to upstream equipment.
                     * @param _opticalStandard Optical standard used to connect the CDC device to the network This field depends on the uplink speed, optical fiber type, and distance to upstream equipment.
                     * 
                     */
                    void SetOpticalStandard(const std::string& _opticalStandard);

                    /**
                     * 判断参数 OpticalStandard 是否已赋值
                     * @return OpticalStandard 是否已赋值
                     * 
                     */
                    bool OpticalStandardHasBeenSet() const;

                    /**
                     * 获取Type of power connector
                     * @return PowerConnectors Type of power connector
                     * 
                     */
                    std::string GetPowerConnectors() const;

                    /**
                     * 设置Type of power connector
                     * @param _powerConnectors Type of power connector
                     * 
                     */
                    void SetPowerConnectors(const std::string& _powerConnectors);

                    /**
                     * 判断参数 PowerConnectors 是否已赋值
                     * @return PowerConnectors 是否已赋值
                     * 
                     */
                    bool PowerConnectorsHasBeenSet() const;

                    /**
                     * 获取Whether power is supplied from above or below the rack
                     * @return PowerFeedDrop Whether power is supplied from above or below the rack
                     * 
                     */
                    std::string GetPowerFeedDrop() const;

                    /**
                     * 设置Whether power is supplied from above or below the rack
                     * @param _powerFeedDrop Whether power is supplied from above or below the rack
                     * 
                     */
                    void SetPowerFeedDrop(const std::string& _powerFeedDrop);

                    /**
                     * 判断参数 PowerFeedDrop 是否已赋值
                     * @return PowerFeedDrop 是否已赋值
                     * 
                     */
                    bool PowerFeedDropHasBeenSet() const;

                    /**
                     * 获取Maximum weight capacity (KG)
                     * @return MaxWeight Maximum weight capacity (KG)
                     * 
                     */
                    int64_t GetMaxWeight() const;

                    /**
                     * 设置Maximum weight capacity (KG)
                     * @param _maxWeight Maximum weight capacity (KG)
                     * 
                     */
                    void SetMaxWeight(const int64_t& _maxWeight);

                    /**
                     * 判断参数 MaxWeight 是否已赋值
                     * @return MaxWeight 是否已赋值
                     * 
                     */
                    bool MaxWeightHasBeenSet() const;

                    /**
                     * 获取Power consumption (KW)
                     * @return PowerDrawKva Power consumption (KW)
                     * 
                     */
                    int64_t GetPowerDrawKva() const;

                    /**
                     * 设置Power consumption (KW)
                     * @param _powerDrawKva Power consumption (KW)
                     * 
                     */
                    void SetPowerDrawKva(const int64_t& _powerDrawKva);

                    /**
                     * 判断参数 PowerDrawKva 是否已赋值
                     * @return PowerDrawKva 是否已赋值
                     * 
                     */
                    bool PowerDrawKvaHasBeenSet() const;

                    /**
                     * 获取Uplink speed from the network to Tencent Cloud Region
                     * @return UplinkSpeedGbps Uplink speed from the network to Tencent Cloud Region
                     * 
                     */
                    int64_t GetUplinkSpeedGbps() const;

                    /**
                     * 设置Uplink speed from the network to Tencent Cloud Region
                     * @param _uplinkSpeedGbps Uplink speed from the network to Tencent Cloud Region
                     * 
                     */
                    void SetUplinkSpeedGbps(const int64_t& _uplinkSpeedGbps);

                    /**
                     * 判断参数 UplinkSpeedGbps 是否已赋值
                     * @return UplinkSpeedGbps 是否已赋值
                     * 
                     */
                    bool UplinkSpeedGbpsHasBeenSet() const;

                    /**
                     * 获取Number of uplinks used by each CDC device (2 devices per rack) when connected to the network
                     * @return UplinkCount Number of uplinks used by each CDC device (2 devices per rack) when connected to the network
                     * 
                     */
                    int64_t GetUplinkCount() const;

                    /**
                     * 设置Number of uplinks used by each CDC device (2 devices per rack) when connected to the network
                     * @param _uplinkCount Number of uplinks used by each CDC device (2 devices per rack) when connected to the network
                     * 
                     */
                    void SetUplinkCount(const int64_t& _uplinkCount);

                    /**
                     * 判断参数 UplinkCount 是否已赋值
                     * @return UplinkCount 是否已赋值
                     * 
                     */
                    bool UplinkCountHasBeenSet() const;

                    /**
                     * 获取Whether the following environmental conditions are met: 
1. There are no material requirements or the acceptance standard on site that will affect the delivery and installation of the CDC device. 
2. The following conditions are met for finalized rack positions: 
Temperature ranges from 41 to 104°F (5 to 40°C). 
Humidity ranges from 10°F (-12°C) to 70°F (21°C) and relative humidity ranges from 8% RH to 80% RH. 
Air flows from front to back at the rack position and there is sufficient air in CFM (cubic feet per minute). The air quantity in CFM must be 145.8 times the power consumption (in KVA) of CDC.
                     * @return ConditionRequirement Whether the following environmental conditions are met: 
1. There are no material requirements or the acceptance standard on site that will affect the delivery and installation of the CDC device. 
2. The following conditions are met for finalized rack positions: 
Temperature ranges from 41 to 104°F (5 to 40°C). 
Humidity ranges from 10°F (-12°C) to 70°F (21°C) and relative humidity ranges from 8% RH to 80% RH. 
Air flows from front to back at the rack position and there is sufficient air in CFM (cubic feet per minute). The air quantity in CFM must be 145.8 times the power consumption (in KVA) of CDC.
                     * 
                     */
                    bool GetConditionRequirement() const;

                    /**
                     * 设置Whether the following environmental conditions are met: 
1. There are no material requirements or the acceptance standard on site that will affect the delivery and installation of the CDC device. 
2. The following conditions are met for finalized rack positions: 
Temperature ranges from 41 to 104°F (5 to 40°C). 
Humidity ranges from 10°F (-12°C) to 70°F (21°C) and relative humidity ranges from 8% RH to 80% RH. 
Air flows from front to back at the rack position and there is sufficient air in CFM (cubic feet per minute). The air quantity in CFM must be 145.8 times the power consumption (in KVA) of CDC.
                     * @param _conditionRequirement Whether the following environmental conditions are met: 
1. There are no material requirements or the acceptance standard on site that will affect the delivery and installation of the CDC device. 
2. The following conditions are met for finalized rack positions: 
Temperature ranges from 41 to 104°F (5 to 40°C). 
Humidity ranges from 10°F (-12°C) to 70°F (21°C) and relative humidity ranges from 8% RH to 80% RH. 
Air flows from front to back at the rack position and there is sufficient air in CFM (cubic feet per minute). The air quantity in CFM must be 145.8 times the power consumption (in KVA) of CDC.
                     * 
                     */
                    void SetConditionRequirement(const bool& _conditionRequirement);

                    /**
                     * 判断参数 ConditionRequirement 是否已赋值
                     * @return ConditionRequirement 是否已赋值
                     * 
                     */
                    bool ConditionRequirementHasBeenSet() const;

                    /**
                     * 获取Whether the following dimension conditions are met: 
Your loading dock can accommodate one rack container (H x W x D = 94" x 54" x 48"). 
You can provide a clear route from the delivery point of your rack (H x W x D = 80" x 24" x 48") to its final installation location. You should consider platforms, corridors, doors, turns, ramps, freight elevators as well as other access restrictions when measuring the depth. 
There shall be a 48" or greater front clearance and a 24" or greater rear clearance where the CDC is finally installed.
                     * @return DimensionRequirement Whether the following dimension conditions are met: 
Your loading dock can accommodate one rack container (H x W x D = 94" x 54" x 48"). 
You can provide a clear route from the delivery point of your rack (H x W x D = 80" x 24" x 48") to its final installation location. You should consider platforms, corridors, doors, turns, ramps, freight elevators as well as other access restrictions when measuring the depth. 
There shall be a 48" or greater front clearance and a 24" or greater rear clearance where the CDC is finally installed.
                     * 
                     */
                    bool GetDimensionRequirement() const;

                    /**
                     * 设置Whether the following dimension conditions are met: 
Your loading dock can accommodate one rack container (H x W x D = 94" x 54" x 48"). 
You can provide a clear route from the delivery point of your rack (H x W x D = 80" x 24" x 48") to its final installation location. You should consider platforms, corridors, doors, turns, ramps, freight elevators as well as other access restrictions when measuring the depth. 
There shall be a 48" or greater front clearance and a 24" or greater rear clearance where the CDC is finally installed.
                     * @param _dimensionRequirement Whether the following dimension conditions are met: 
Your loading dock can accommodate one rack container (H x W x D = 94" x 54" x 48"). 
You can provide a clear route from the delivery point of your rack (H x W x D = 80" x 24" x 48") to its final installation location. You should consider platforms, corridors, doors, turns, ramps, freight elevators as well as other access restrictions when measuring the depth. 
There shall be a 48" or greater front clearance and a 24" or greater rear clearance where the CDC is finally installed.
                     * 
                     */
                    void SetDimensionRequirement(const bool& _dimensionRequirement);

                    /**
                     * 判断参数 DimensionRequirement 是否已赋值
                     * @return DimensionRequirement 是否已赋值
                     * 
                     */
                    bool DimensionRequirementHasBeenSet() const;

                    /**
                     * 获取Whether redundant upstream equipment (switch or router) is provided so that both network devices can be connected to the network.
                     * @return RedundantNetworking Whether redundant upstream equipment (switch or router) is provided so that both network devices can be connected to the network.
                     * 
                     */
                    bool GetRedundantNetworking() const;

                    /**
                     * 设置Whether redundant upstream equipment (switch or router) is provided so that both network devices can be connected to the network.
                     * @param _redundantNetworking Whether redundant upstream equipment (switch or router) is provided so that both network devices can be connected to the network.
                     * 
                     */
                    void SetRedundantNetworking(const bool& _redundantNetworking);

                    /**
                     * 判断参数 RedundantNetworking 是否已赋值
                     * @return RedundantNetworking 是否已赋值
                     * 
                     */
                    bool RedundantNetworkingHasBeenSet() const;

                    /**
                     * 获取Whether you need help from Tencent Cloud for rack installation?
                     * @return NeedHelp Whether you need help from Tencent Cloud for rack installation?
                     * 
                     */
                    bool GetNeedHelp() const;

                    /**
                     * 设置Whether you need help from Tencent Cloud for rack installation?
                     * @param _needHelp Whether you need help from Tencent Cloud for rack installation?
                     * 
                     */
                    void SetNeedHelp(const bool& _needHelp);

                    /**
                     * 判断参数 NeedHelp 是否已赋值
                     * @return NeedHelp 是否已赋值
                     * 
                     */
                    bool NeedHelpHasBeenSet() const;

                    /**
                     * 获取Whether there is power redundancy?
                     * @return RedundantPower Whether there is power redundancy?
                     * 
                     */
                    bool GetRedundantPower() const;

                    /**
                     * 设置Whether there is power redundancy?
                     * @param _redundantPower Whether there is power redundancy?
                     * 
                     */
                    void SetRedundantPower(const bool& _redundantPower);

                    /**
                     * 判断参数 RedundantPower 是否已赋值
                     * @return RedundantPower 是否已赋值
                     * 
                     */
                    bool RedundantPowerHasBeenSet() const;

                    /**
                     * 获取Whether there is an upstream circuit breaker?
                     * @return BreakerRequirement Whether there is an upstream circuit breaker?
                     * 
                     */
                    bool GetBreakerRequirement() const;

                    /**
                     * 设置Whether there is an upstream circuit breaker?
                     * @param _breakerRequirement Whether there is an upstream circuit breaker?
                     * 
                     */
                    void SetBreakerRequirement(const bool& _breakerRequirement);

                    /**
                     * 判断参数 BreakerRequirement 是否已赋值
                     * @return BreakerRequirement 是否已赋值
                     * 
                     */
                    bool BreakerRequirementHasBeenSet() const;

                private:

                    /**
                     * Equipment room ID
                     */
                    std::string m_siteId;
                    bool m_siteIdHasBeenSet;

                    /**
                     * You are using optical fiber type to connect the CDC device to the network Single-mode or multi-mode fibers are available.
                     */
                    std::string m_fiberType;
                    bool m_fiberTypeHasBeenSet;

                    /**
                     * Optical standard used to connect the CDC device to the network This field depends on the uplink speed, optical fiber type, and distance to upstream equipment.
                     */
                    std::string m_opticalStandard;
                    bool m_opticalStandardHasBeenSet;

                    /**
                     * Type of power connector
                     */
                    std::string m_powerConnectors;
                    bool m_powerConnectorsHasBeenSet;

                    /**
                     * Whether power is supplied from above or below the rack
                     */
                    std::string m_powerFeedDrop;
                    bool m_powerFeedDropHasBeenSet;

                    /**
                     * Maximum weight capacity (KG)
                     */
                    int64_t m_maxWeight;
                    bool m_maxWeightHasBeenSet;

                    /**
                     * Power consumption (KW)
                     */
                    int64_t m_powerDrawKva;
                    bool m_powerDrawKvaHasBeenSet;

                    /**
                     * Uplink speed from the network to Tencent Cloud Region
                     */
                    int64_t m_uplinkSpeedGbps;
                    bool m_uplinkSpeedGbpsHasBeenSet;

                    /**
                     * Number of uplinks used by each CDC device (2 devices per rack) when connected to the network
                     */
                    int64_t m_uplinkCount;
                    bool m_uplinkCountHasBeenSet;

                    /**
                     * Whether the following environmental conditions are met: 
1. There are no material requirements or the acceptance standard on site that will affect the delivery and installation of the CDC device. 
2. The following conditions are met for finalized rack positions: 
Temperature ranges from 41 to 104°F (5 to 40°C). 
Humidity ranges from 10°F (-12°C) to 70°F (21°C) and relative humidity ranges from 8% RH to 80% RH. 
Air flows from front to back at the rack position and there is sufficient air in CFM (cubic feet per minute). The air quantity in CFM must be 145.8 times the power consumption (in KVA) of CDC.
                     */
                    bool m_conditionRequirement;
                    bool m_conditionRequirementHasBeenSet;

                    /**
                     * Whether the following dimension conditions are met: 
Your loading dock can accommodate one rack container (H x W x D = 94" x 54" x 48"). 
You can provide a clear route from the delivery point of your rack (H x W x D = 80" x 24" x 48") to its final installation location. You should consider platforms, corridors, doors, turns, ramps, freight elevators as well as other access restrictions when measuring the depth. 
There shall be a 48" or greater front clearance and a 24" or greater rear clearance where the CDC is finally installed.
                     */
                    bool m_dimensionRequirement;
                    bool m_dimensionRequirementHasBeenSet;

                    /**
                     * Whether redundant upstream equipment (switch or router) is provided so that both network devices can be connected to the network.
                     */
                    bool m_redundantNetworking;
                    bool m_redundantNetworkingHasBeenSet;

                    /**
                     * Whether you need help from Tencent Cloud for rack installation?
                     */
                    bool m_needHelp;
                    bool m_needHelpHasBeenSet;

                    /**
                     * Whether there is power redundancy?
                     */
                    bool m_redundantPower;
                    bool m_redundantPowerHasBeenSet;

                    /**
                     * Whether there is an upstream circuit breaker?
                     */
                    bool m_breakerRequirement;
                    bool m_breakerRequirementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYSITEDEVICEINFOREQUEST_H_
