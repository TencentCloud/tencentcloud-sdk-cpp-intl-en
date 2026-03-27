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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECSELLSTATUS_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECSELLSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ZoneStatus.h>
#include <tencentcloud/sqlserver/v20180328/model/Price.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Offering Configuration Status
                */
                class SpecSellStatus : public AbstractModel
                {
                public:
                    SpecSellStatus();
                    ~SpecSellStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sellable Specification Unique ID
                     * @return Id Sellable Specification Unique ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Sellable Specification Unique ID
                     * @param _id Sellable Specification Unique ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Instance Type ID
                     * @return SpecId Instance Type ID
                     * 
                     */
                    uint64_t GetSpecId() const;

                    /**
                     * 设置Instance Type ID
                     * @param _specId Instance Type ID
                     * 
                     */
                    void SetSpecId(const uint64_t& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取Supported payment modes for this specification: POST - only supports pay-as-you-go, PRE - only supports yearly/monthly subscription, ALL - supports all.
                     * @return PayModeStatus Supported payment modes for this specification: POST - only supports pay-as-you-go, PRE - only supports yearly/monthly subscription, ALL - supports all.
                     * 
                     */
                    std::string GetPayModeStatus() const;

                    /**
                     * 设置Supported payment modes for this specification: POST - only supports pay-as-you-go, PRE - only supports yearly/monthly subscription, ALL - supports all.
                     * @param _payModeStatus Supported payment modes for this specification: POST - only supports pay-as-you-go, PRE - only supports yearly/monthly subscription, ALL - supports all.
                     * 
                     */
                    void SetPayModeStatus(const std::string& _payModeStatus);

                    /**
                     * 判断参数 PayModeStatus 是否已赋值
                     * @return PayModeStatus 是否已赋值
                     * 
                     */
                    bool PayModeStatusHasBeenSet() const;

                    /**
                     * 获取Product type. Types of instances for purchase: HA - Local Disk High Availability (including dual-node high availability, alwaysOn cluster), RO - Local Disk Read-Only Replica, SI - Cloud Disk Edition Single Node, BI - Business Intelligence Service, cvmHA - Cloud Disk Edition High Availability, cvmRO - Cloud Disk Edition Read-Only Replica, MultiHA - Multi-node, cvmMultiHA - Cloud Disk Multi-node.
                     * @return InstanceType Product type. Types of instances for purchase: HA - Local Disk High Availability (including dual-node high availability, alwaysOn cluster), RO - Local Disk Read-Only Replica, SI - Cloud Disk Edition Single Node, BI - Business Intelligence Service, cvmHA - Cloud Disk Edition High Availability, cvmRO - Cloud Disk Edition Read-Only Replica, MultiHA - Multi-node, cvmMultiHA - Cloud Disk Multi-node.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Product type. Types of instances for purchase: HA - Local Disk High Availability (including dual-node high availability, alwaysOn cluster), RO - Local Disk Read-Only Replica, SI - Cloud Disk Edition Single Node, BI - Business Intelligence Service, cvmHA - Cloud Disk Edition High Availability, cvmRO - Cloud Disk Edition Read-Only Replica, MultiHA - Multi-node, cvmMultiHA - Cloud Disk Multi-node.
                     * @param _instanceType Product type. Types of instances for purchase: HA - Local Disk High Availability (including dual-node high availability, alwaysOn cluster), RO - Local Disk Read-Only Replica, SI - Cloud Disk Edition Single Node, BI - Business Intelligence Service, cvmHA - Cloud Disk Edition High Availability, cvmRO - Cloud Disk Edition Read-Only Replica, MultiHA - Multi-node, cvmMultiHA - Cloud Disk Multi-node.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Whether this specification supports cross-AZ deployment: MultiZones - only supports cross-AZ, SameZones - only supports same-AZ, ALL - supports all.
                     * @return MultiZonesStatus Whether this specification supports cross-AZ deployment: MultiZones - only supports cross-AZ, SameZones - only supports same-AZ, ALL - supports all.
                     * 
                     */
                    std::string GetMultiZonesStatus() const;

                    /**
                     * 设置Whether this specification supports cross-AZ deployment: MultiZones - only supports cross-AZ, SameZones - only supports same-AZ, ALL - supports all.
                     * @param _multiZonesStatus Whether this specification supports cross-AZ deployment: MultiZones - only supports cross-AZ, SameZones - only supports same-AZ, ALL - supports all.
                     * 
                     */
                    void SetMultiZonesStatus(const std::string& _multiZonesStatus);

                    /**
                     * 判断参数 MultiZonesStatus 是否已赋值
                     * @return MultiZonesStatus 是否已赋值
                     * 
                     */
                    bool MultiZonesStatusHasBeenSet() const;

                    /**
                     * 获取Architecture Type, SINGLE - single node, DOUBLE - dual node, TRIPLE - three-node, MULTI - multi-node
Example value: SINGLE
                     * @return Architecture Architecture Type, SINGLE - single node, DOUBLE - dual node, TRIPLE - three-node, MULTI - multi-node
Example value: SINGLE
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置Architecture Type, SINGLE - single node, DOUBLE - dual node, TRIPLE - three-node, MULTI - multi-node
Example value: SINGLE
                     * @param _architecture Architecture Type, SINGLE - single node, DOUBLE - dual node, TRIPLE - three-node, MULTI - multi-node
Example value: SINGLE
                     * 
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取Type identifier, EXCLUSIVE - Dedicated, SHARED - Shared
                     * @return Style Type identifier, EXCLUSIVE - Dedicated, SHARED - Shared
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置Type identifier, EXCLUSIVE - Dedicated, SHARED - Shared
                     * @param _style Type identifier, EXCLUSIVE - Dedicated, SHARED - Shared
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取Database Version Information
                     * @return Version Database Version Information
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Database Version Information
                     * @param _version Database Version Information
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Sellable Status Set Per AZ
                     * @return ZoneStatusSet Sellable Status Set Per AZ
                     * 
                     */
                    std::vector<ZoneStatus> GetZoneStatusSet() const;

                    /**
                     * 设置Sellable Status Set Per AZ
                     * @param _zoneStatusSet Sellable Status Set Per AZ
                     * 
                     */
                    void SetZoneStatusSet(const std::vector<ZoneStatus>& _zoneStatusSet);

                    /**
                     * 判断参数 ZoneStatusSet 是否已赋值
                     * @return ZoneStatusSet 是否已赋值
                     * 
                     */
                    bool ZoneStatusSetHasBeenSet() const;

                    /**
                     * 获取Reference price for specifications. The actual price is subject to the quotation API.
                     * @return Price Reference price for specifications. The actual price is subject to the quotation API.
                     * 
                     */
                    Price GetPrice() const;

                    /**
                     * 设置Reference price for specifications. The actual price is subject to the quotation API.
                     * @param _price Reference price for specifications. The actual price is subject to the quotation API.
                     * 
                     */
                    void SetPrice(const Price& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Specification Sale Status: 1 - Normal, 2 - Sale disabled but upgradable, 3 - Sale completely disabled.
                     * @return Status Specification Sale Status: 1 - Normal, 2 - Sale disabled but upgradable, 3 - Sale completely disabled.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Specification Sale Status: 1 - Normal, 2 - Sale disabled but upgradable, 3 - Sale completely disabled.
                     * @param _status Specification Sale Status: 1 - Normal, 2 - Sale disabled but upgradable, 3 - Sale completely disabled.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Sellable Specification Unique ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Instance Type ID
                     */
                    uint64_t m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * Supported payment modes for this specification: POST - only supports pay-as-you-go, PRE - only supports yearly/monthly subscription, ALL - supports all.
                     */
                    std::string m_payModeStatus;
                    bool m_payModeStatusHasBeenSet;

                    /**
                     * Product type. Types of instances for purchase: HA - Local Disk High Availability (including dual-node high availability, alwaysOn cluster), RO - Local Disk Read-Only Replica, SI - Cloud Disk Edition Single Node, BI - Business Intelligence Service, cvmHA - Cloud Disk Edition High Availability, cvmRO - Cloud Disk Edition Read-Only Replica, MultiHA - Multi-node, cvmMultiHA - Cloud Disk Multi-node.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Whether this specification supports cross-AZ deployment: MultiZones - only supports cross-AZ, SameZones - only supports same-AZ, ALL - supports all.
                     */
                    std::string m_multiZonesStatus;
                    bool m_multiZonesStatusHasBeenSet;

                    /**
                     * Architecture Type, SINGLE - single node, DOUBLE - dual node, TRIPLE - three-node, MULTI - multi-node
Example value: SINGLE
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * Type identifier, EXCLUSIVE - Dedicated, SHARED - Shared
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * Database Version Information
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Sellable Status Set Per AZ
                     */
                    std::vector<ZoneStatus> m_zoneStatusSet;
                    bool m_zoneStatusSetHasBeenSet;

                    /**
                     * Reference price for specifications. The actual price is subject to the quotation API.
                     */
                    Price m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Specification Sale Status: 1 - Normal, 2 - Sale disabled but upgradable, 3 - Sale completely disabled.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECSELLSTATUS_H_
