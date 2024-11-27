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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_SITEDETAIL_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_SITEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Site details
                */
                class SiteDetail : public AbstractModel
                {
                public:
                    SiteDetail();
                    ~SiteDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Site id
                     * @return SiteId Site id
                     * 
                     */
                    std::string GetSiteId() const;

                    /**
                     * 设置Site id
                     * @param _siteId Site id
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
                     * 获取Site name
                     * @return Name Site name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Site name
                     * @param _name Site name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Site description
                     * @return Description Site description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Site description
                     * @param _description Site description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Site creation time
                     * @return CreateTime Site creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Site creation time
                     * @param _createTime Site creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Optical fiber type
                     * @return FiberType Optical fiber type
                     * 
                     */
                    std::string GetFiberType() const;

                    /**
                     * 设置Optical fiber type
                     * @param _fiberType Optical fiber type
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
                     * 获取Optical standard used to connect the CDC device to the network
                     * @return OpticalStandard Optical standard used to connect the CDC device to the network
                     * 
                     */
                    std::string GetOpticalStandard() const;

                    /**
                     * 设置Optical standard used to connect the CDC device to the network
                     * @param _opticalStandard Optical standard used to connect the CDC device to the network
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
                     * 获取Power consumption (KW)
                     * @return PowerDrawKva Power consumption (KW)
                     * 
                     */
                    double GetPowerDrawKva() const;

                    /**
                     * 设置Power consumption (KW)
                     * @param _powerDrawKva Power consumption (KW)
                     * 
                     */
                    void SetPowerDrawKva(const double& _powerDrawKva);

                    /**
                     * 判断参数 PowerDrawKva 是否已赋值
                     * @return PowerDrawKva 是否已赋值
                     * 
                     */
                    bool PowerDrawKvaHasBeenSet() const;

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
                     * 获取Site address
                     * @return AddressLine Site address
                     * 
                     */
                    std::string GetAddressLine() const;

                    /**
                     * 设置Site address
                     * @param _addressLine Site address
                     * 
                     */
                    void SetAddressLine(const std::string& _addressLine);

                    /**
                     * 判断参数 AddressLine 是否已赋值
                     * @return AddressLine 是否已赋值
                     * 
                     */
                    bool AddressLineHasBeenSet() const;

                    /**
                     * 获取Detailed address of the site area (to be added)
                     * @return OptionalAddressLine Detailed address of the site area (to be added)
                     * 
                     */
                    std::string GetOptionalAddressLine() const;

                    /**
                     * 设置Detailed address of the site area (to be added)
                     * @param _optionalAddressLine Detailed address of the site area (to be added)
                     * 
                     */
                    void SetOptionalAddressLine(const std::string& _optionalAddressLine);

                    /**
                     * 判断参数 OptionalAddressLine 是否已赋值
                     * @return OptionalAddressLine 是否已赋值
                     * 
                     */
                    bool OptionalAddressLineHasBeenSet() const;

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
                     * 获取Country where the site is located
                     * @return Country Country where the site is located
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置Country where the site is located
                     * @param _country Country where the site is located
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取Province where the site is located
                     * @return Province Province where the site is located
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置Province where the site is located
                     * @param _province Province where the site is located
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取City where the site is located
                     * @return City City where the site is located
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置City where the site is located
                     * @param _city City where the site is located
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Postal code of the site area
                     * @return PostalCode Postal code of the site area
                     * 
                     */
                    int64_t GetPostalCode() const;

                    /**
                     * 设置Postal code of the site area
                     * @param _postalCode Postal code of the site area
                     * 
                     */
                    void SetPostalCode(const int64_t& _postalCode);

                    /**
                     * 判断参数 PostalCode 是否已赋值
                     * @return PostalCode 是否已赋值
                     * 
                     */
                    bool PostalCodeHasBeenSet() const;

                private:

                    /**
                     * Site id
                     */
                    std::string m_siteId;
                    bool m_siteIdHasBeenSet;

                    /**
                     * Site name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Site description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Site creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Optical fiber type
                     */
                    std::string m_fiberType;
                    bool m_fiberTypeHasBeenSet;

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
                     * Optical standard used to connect the CDC device to the network
                     */
                    std::string m_opticalStandard;
                    bool m_opticalStandardHasBeenSet;

                    /**
                     * Whether redundant upstream equipment (switch or router) is provided so that both network devices can be connected to the network.
                     */
                    bool m_redundantNetworking;
                    bool m_redundantNetworkingHasBeenSet;

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
                     * Power consumption (KW)
                     */
                    double m_powerDrawKva;
                    bool m_powerDrawKvaHasBeenSet;

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
                     * Maximum weight capacity (KG)
                     */
                    int64_t m_maxWeight;
                    bool m_maxWeightHasBeenSet;

                    /**
                     * Site address
                     */
                    std::string m_addressLine;
                    bool m_addressLineHasBeenSet;

                    /**
                     * Detailed address of the site area (to be added)
                     */
                    std::string m_optionalAddressLine;
                    bool m_optionalAddressLineHasBeenSet;

                    /**
                     * Whether you need help from Tencent Cloud for rack installation?
                     */
                    bool m_needHelp;
                    bool m_needHelpHasBeenSet;

                    /**
                     * Whether there is an upstream circuit breaker?
                     */
                    bool m_breakerRequirement;
                    bool m_breakerRequirementHasBeenSet;

                    /**
                     * Whether there is power redundancy?
                     */
                    bool m_redundantPower;
                    bool m_redundantPowerHasBeenSet;

                    /**
                     * Country where the site is located
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * Province where the site is located
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * City where the site is located
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Postal code of the site area
                     */
                    int64_t m_postalCode;
                    bool m_postalCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_SITEDETAIL_H_
