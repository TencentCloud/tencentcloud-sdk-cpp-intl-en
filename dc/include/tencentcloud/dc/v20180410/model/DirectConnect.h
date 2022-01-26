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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECT_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/Tag.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * Connection information list.
                */
                class DirectConnect : public AbstractModel
                {
                public:
                    DirectConnect();
                    ~DirectConnect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Connection ID.
                     * @return DirectConnectId Connection ID.
                     */
                    std::string GetDirectConnectId() const;

                    /**
                     * 设置Connection ID.
                     * @param DirectConnectId Connection ID.
                     */
                    void SetDirectConnectId(const std::string& _directConnectId);

                    /**
                     * 判断参数 DirectConnectId 是否已赋值
                     * @return DirectConnectId 是否已赋值
                     */
                    bool DirectConnectIdHasBeenSet() const;

                    /**
                     * 获取Connection name.
                     * @return DirectConnectName Connection name.
                     */
                    std::string GetDirectConnectName() const;

                    /**
                     * 设置Connection name.
                     * @param DirectConnectName Connection name.
                     */
                    void SetDirectConnectName(const std::string& _directConnectName);

                    /**
                     * 判断参数 DirectConnectName 是否已赋值
                     * @return DirectConnectName 是否已赋值
                     */
                    bool DirectConnectNameHasBeenSet() const;

                    /**
                     * 获取Access point ID of a connection.
                     * @return AccessPointId Access point ID of a connection.
                     */
                    std::string GetAccessPointId() const;

                    /**
                     * 设置Access point ID of a connection.
                     * @param AccessPointId Access point ID of a connection.
                     */
                    void SetAccessPointId(const std::string& _accessPointId);

                    /**
                     * 判断参数 AccessPointId 是否已赋值
                     * @return AccessPointId 是否已赋值
                     */
                    bool AccessPointIdHasBeenSet() const;

                    /**
                     * 获取Connection status.
PENDING: Applying. 
REJECTED: Application rejected.   
TOPAY: Payment pending. 
PAID: Paid. 
ALLOCATED: Constructing.   
AVAILABLE: Available.  
DELETING: Deleting.
DELETED: Deleted.
                     * @return State Connection status.
PENDING: Applying. 
REJECTED: Application rejected.   
TOPAY: Payment pending. 
PAID: Paid. 
ALLOCATED: Constructing.   
AVAILABLE: Available.  
DELETING: Deleting.
DELETED: Deleted.
                     */
                    std::string GetState() const;

                    /**
                     * 设置Connection status.
PENDING: Applying. 
REJECTED: Application rejected.   
TOPAY: Payment pending. 
PAID: Paid. 
ALLOCATED: Constructing.   
AVAILABLE: Available.  
DELETING: Deleting.
DELETED: Deleted.
                     * @param State Connection status.
PENDING: Applying. 
REJECTED: Application rejected.   
TOPAY: Payment pending. 
PAID: Paid. 
ALLOCATED: Constructing.   
AVAILABLE: Available.  
DELETING: Deleting.
DELETED: Deleted.
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Connection creation time.
                     * @return CreatedTime Connection creation time.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Connection creation time.
                     * @param CreatedTime Connection creation time.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Connection activation time.
                     * @return EnabledTime Connection activation time.
                     */
                    std::string GetEnabledTime() const;

                    /**
                     * 设置Connection activation time.
                     * @param EnabledTime Connection activation time.
                     */
                    void SetEnabledTime(const std::string& _enabledTime);

                    /**
                     * 判断参数 EnabledTime 是否已赋值
                     * @return EnabledTime 是否已赋值
                     */
                    bool EnabledTimeHasBeenSet() const;

                    /**
                     * 获取ISP that provides connections. Valid values: ChinaTelecom (China Telecom), ChinaMobile (China Mobile), ChinaUnicom (China Unicom), In-houseWiring (in-house wiring), ChinaOther (other Chinese ISPs), InternationalOperator (international ISPs).
                     * @return LineOperator ISP that provides connections. Valid values: ChinaTelecom (China Telecom), ChinaMobile (China Mobile), ChinaUnicom (China Unicom), In-houseWiring (in-house wiring), ChinaOther (other Chinese ISPs), InternationalOperator (international ISPs).
                     */
                    std::string GetLineOperator() const;

                    /**
                     * 设置ISP that provides connections. Valid values: ChinaTelecom (China Telecom), ChinaMobile (China Mobile), ChinaUnicom (China Unicom), In-houseWiring (in-house wiring), ChinaOther (other Chinese ISPs), InternationalOperator (international ISPs).
                     * @param LineOperator ISP that provides connections. Valid values: ChinaTelecom (China Telecom), ChinaMobile (China Mobile), ChinaUnicom (China Unicom), In-houseWiring (in-house wiring), ChinaOther (other Chinese ISPs), InternationalOperator (international ISPs).
                     */
                    void SetLineOperator(const std::string& _lineOperator);

                    /**
                     * 判断参数 LineOperator 是否已赋值
                     * @return LineOperator 是否已赋值
                     */
                    bool LineOperatorHasBeenSet() const;

                    /**
                     * 获取Location of a local IDC.
                     * @return Location Location of a local IDC.
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Location of a local IDC.
                     * @param Location Location of a local IDC.
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Connection port bandwidth in Mbps.
                     * @return Bandwidth Connection port bandwidth in Mbps.
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Connection port bandwidth in Mbps.
                     * @param Bandwidth Connection port bandwidth in Mbps.
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取User-side port type of a connection. Valid values: 100Base-T (100-Megabit electrical Ethernet interface), 1000Base-T (1-Gigabit electrical Ethernet interface; it is the default value), 1000Base-LX (1-Gigabit single-mode optical Ethernet interface; 10 KM), 10GBase-T (10-Gigabit electrical Ethernet interface), 10GBase-LR (10-Gigabit single-mode optical Ethernet interface; 10 KM).
                     * @return PortType User-side port type of a connection. Valid values: 100Base-T (100-Megabit electrical Ethernet interface), 1000Base-T (1-Gigabit electrical Ethernet interface; it is the default value), 1000Base-LX (1-Gigabit single-mode optical Ethernet interface; 10 KM), 10GBase-T (10-Gigabit electrical Ethernet interface), 10GBase-LR (10-Gigabit single-mode optical Ethernet interface; 10 KM).
                     */
                    std::string GetPortType() const;

                    /**
                     * 设置User-side port type of a connection. Valid values: 100Base-T (100-Megabit electrical Ethernet interface), 1000Base-T (1-Gigabit electrical Ethernet interface; it is the default value), 1000Base-LX (1-Gigabit single-mode optical Ethernet interface; 10 KM), 10GBase-T (10-Gigabit electrical Ethernet interface), 10GBase-LR (10-Gigabit single-mode optical Ethernet interface; 10 KM).
                     * @param PortType User-side port type of a connection. Valid values: 100Base-T (100-Megabit electrical Ethernet interface), 1000Base-T (1-Gigabit electrical Ethernet interface; it is the default value), 1000Base-LX (1-Gigabit single-mode optical Ethernet interface; 10 KM), 10GBase-T (10-Gigabit electrical Ethernet interface), 10GBase-LR (10-Gigabit single-mode optical Ethernet interface; 10 KM).
                     */
                    void SetPortType(const std::string& _portType);

                    /**
                     * 判断参数 PortType 是否已赋值
                     * @return PortType 是否已赋值
                     */
                    bool PortTypeHasBeenSet() const;

                    /**
                     * 获取Circuit code of a connection, which is provided by the ISP or service provider.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CircuitCode Circuit code of a connection, which is provided by the ISP or service provider.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCircuitCode() const;

                    /**
                     * 设置Circuit code of a connection, which is provided by the ISP or service provider.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CircuitCode Circuit code of a connection, which is provided by the ISP or service provider.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCircuitCode(const std::string& _circuitCode);

                    /**
                     * 判断参数 CircuitCode 是否已赋值
                     * @return CircuitCode 是否已赋值
                     */
                    bool CircuitCodeHasBeenSet() const;

                    /**
                     * 获取ID of a redundant connection.
                     * @return RedundantDirectConnectId ID of a redundant connection.
                     */
                    std::string GetRedundantDirectConnectId() const;

                    /**
                     * 设置ID of a redundant connection.
                     * @param RedundantDirectConnectId ID of a redundant connection.
                     */
                    void SetRedundantDirectConnectId(const std::string& _redundantDirectConnectId);

                    /**
                     * 判断参数 RedundantDirectConnectId 是否已赋值
                     * @return RedundantDirectConnectId 是否已赋值
                     */
                    bool RedundantDirectConnectIdHasBeenSet() const;

                    /**
                     * 获取VLAN for connection debugging, which is enabled and automatically assigned by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Vlan VLAN for connection debugging, which is enabled and automatically assigned by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetVlan() const;

                    /**
                     * 设置VLAN for connection debugging, which is enabled and automatically assigned by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Vlan VLAN for connection debugging, which is enabled and automatically assigned by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVlan(const int64_t& _vlan);

                    /**
                     * 判断参数 Vlan 是否已赋值
                     * @return Vlan 是否已赋值
                     */
                    bool VlanHasBeenSet() const;

                    /**
                     * 获取Tencent-side IP address for connection debugging.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TencentAddress Tencent-side IP address for connection debugging.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置Tencent-side IP address for connection debugging.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TencentAddress Tencent-side IP address for connection debugging.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTencentAddress(const std::string& _tencentAddress);

                    /**
                     * 判断参数 TencentAddress 是否已赋值
                     * @return TencentAddress 是否已赋值
                     */
                    bool TencentAddressHasBeenSet() const;

                    /**
                     * 获取User-side IP address for connection debugging.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CustomerAddress User-side IP address for connection debugging.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置User-side IP address for connection debugging.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CustomerAddress User-side IP address for connection debugging.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCustomerAddress(const std::string& _customerAddress);

                    /**
                     * 判断参数 CustomerAddress 是否已赋值
                     * @return CustomerAddress 是否已赋值
                     */
                    bool CustomerAddressHasBeenSet() const;

                    /**
                     * 获取Name of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CustomerName Name of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置Name of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CustomerName Name of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取Email address of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CustomerContactMail Email address of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCustomerContactMail() const;

                    /**
                     * 设置Email address of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CustomerContactMail Email address of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCustomerContactMail(const std::string& _customerContactMail);

                    /**
                     * 判断参数 CustomerContactMail 是否已赋值
                     * @return CustomerContactMail 是否已赋值
                     */
                    bool CustomerContactMailHasBeenSet() const;

                    /**
                     * 获取Contact number of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CustomerContactNumber Contact number of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCustomerContactNumber() const;

                    /**
                     * 设置Contact number of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CustomerContactNumber Contact number of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCustomerContactNumber(const std::string& _customerContactNumber);

                    /**
                     * 判断参数 CustomerContactNumber 是否已赋值
                     * @return CustomerContactNumber 是否已赋值
                     */
                    bool CustomerContactNumberHasBeenSet() const;

                    /**
                     * 获取Connection expiration time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExpiredTime Connection expiration time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Connection expiration time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ExpiredTime Connection expiration time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Connection billing mode. NON_RECURRING_CHARGE: One-time charge for accessing service
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ChargeType Connection billing mode. NON_RECURRING_CHARGE: One-time charge for accessing service
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Connection billing mode. NON_RECURRING_CHARGE: One-time charge for accessing service
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ChargeType Connection billing mode. NON_RECURRING_CHARGE: One-time charge for accessing service
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Fault reporting contact person.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FaultReportContactPerson Fault reporting contact person.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFaultReportContactPerson() const;

                    /**
                     * 设置Fault reporting contact person.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FaultReportContactPerson Fault reporting contact person.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFaultReportContactPerson(const std::string& _faultReportContactPerson);

                    /**
                     * 判断参数 FaultReportContactPerson 是否已赋值
                     * @return FaultReportContactPerson 是否已赋值
                     */
                    bool FaultReportContactPersonHasBeenSet() const;

                    /**
                     * 获取Fault reporting contact number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FaultReportContactNumber Fault reporting contact number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFaultReportContactNumber() const;

                    /**
                     * 设置Fault reporting contact number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FaultReportContactNumber Fault reporting contact number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFaultReportContactNumber(const std::string& _faultReportContactNumber);

                    /**
                     * 判断参数 FaultReportContactNumber 是否已赋值
                     * @return FaultReportContactNumber 是否已赋值
                     */
                    bool FaultReportContactNumberHasBeenSet() const;

                    /**
                     * 获取Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TagSet Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TagSet Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Access point type of a connection.
                     * @return AccessPointType Access point type of a connection.
                     */
                    std::string GetAccessPointType() const;

                    /**
                     * 设置Access point type of a connection.
                     * @param AccessPointType Access point type of a connection.
                     */
                    void SetAccessPointType(const std::string& _accessPointType);

                    /**
                     * 判断参数 AccessPointType 是否已赋值
                     * @return AccessPointType 是否已赋值
                     */
                    bool AccessPointTypeHasBeenSet() const;

                    /**
                     * 获取IDC city.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IdcCity IDC city.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIdcCity() const;

                    /**
                     * 设置IDC city.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IdcCity IDC city.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIdcCity(const std::string& _idcCity);

                    /**
                     * 判断参数 IdcCity 是否已赋值
                     * @return IdcCity 是否已赋值
                     */
                    bool IdcCityHasBeenSet() const;

                    /**
                     * 获取Billing status
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ChargeState Billing status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetChargeState() const;

                    /**
                     * 设置Billing status
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ChargeState Billing status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetChargeState(const std::string& _chargeState);

                    /**
                     * 判断参数 ChargeState 是否已赋值
                     * @return ChargeState 是否已赋值
                     */
                    bool ChargeStateHasBeenSet() const;

                    /**
                     * 获取Connection activation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Connection activation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Connection activation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param StartTime Connection activation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Whether the connection has the service agreement signed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return SignLaw Whether the connection has the service agreement signed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    bool GetSignLaw() const;

                    /**
                     * 设置Whether the connection has the service agreement signed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param SignLaw Whether the connection has the service agreement signed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetSignLaw(const bool& _signLaw);

                    /**
                     * 判断参数 SignLaw 是否已赋值
                     * @return SignLaw 是否已赋值
                     */
                    bool SignLawHasBeenSet() const;

                    /**
                     * 获取Whether the connection is an edge zone.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return LocalZone Whether the connection is an edge zone.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    bool GetLocalZone() const;

                    /**
                     * 设置Whether the connection is an edge zone.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param LocalZone Whether the connection is an edge zone.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetLocalZone(const bool& _localZone);

                    /**
                     * 判断参数 LocalZone 是否已赋值
                     * @return LocalZone 是否已赋值
                     */
                    bool LocalZoneHasBeenSet() const;

                    /**
                     * 获取Number of dedicated tunnels with disabled VLAN in the connection
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return VlanZeroDirectConnectTunnelCount Number of dedicated tunnels with disabled VLAN in the connection
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t GetVlanZeroDirectConnectTunnelCount() const;

                    /**
                     * 设置Number of dedicated tunnels with disabled VLAN in the connection
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param VlanZeroDirectConnectTunnelCount Number of dedicated tunnels with disabled VLAN in the connection
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetVlanZeroDirectConnectTunnelCount(const uint64_t& _vlanZeroDirectConnectTunnelCount);

                    /**
                     * 判断参数 VlanZeroDirectConnectTunnelCount 是否已赋值
                     * @return VlanZeroDirectConnectTunnelCount 是否已赋值
                     */
                    bool VlanZeroDirectConnectTunnelCountHasBeenSet() const;

                    /**
                     * 获取Number of dedicated tunnels with enabled VLAN in the connection
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return OtherVlanDirectConnectTunnelCount Number of dedicated tunnels with enabled VLAN in the connection
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetOtherVlanDirectConnectTunnelCount() const;

                    /**
                     * 设置Number of dedicated tunnels with enabled VLAN in the connection
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param OtherVlanDirectConnectTunnelCount Number of dedicated tunnels with enabled VLAN in the connection
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetOtherVlanDirectConnectTunnelCount(const uint64_t& _otherVlanDirectConnectTunnelCount);

                    /**
                     * 判断参数 OtherVlanDirectConnectTunnelCount 是否已赋值
                     * @return OtherVlanDirectConnectTunnelCount 是否已赋值
                     */
                    bool OtherVlanDirectConnectTunnelCountHasBeenSet() const;

                    /**
                     * 获取Minimum bandwidth of the connection
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MinBandwidth Minimum bandwidth of the connection
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMinBandwidth() const;

                    /**
                     * 设置Minimum bandwidth of the connection
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param MinBandwidth Minimum bandwidth of the connection
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMinBandwidth(const uint64_t& _minBandwidth);

                    /**
                     * 判断参数 MinBandwidth 是否已赋值
                     * @return MinBandwidth 是否已赋值
                     */
                    bool MinBandwidthHasBeenSet() const;

                private:

                    /**
                     * Connection ID.
                     */
                    std::string m_directConnectId;
                    bool m_directConnectIdHasBeenSet;

                    /**
                     * Connection name.
                     */
                    std::string m_directConnectName;
                    bool m_directConnectNameHasBeenSet;

                    /**
                     * Access point ID of a connection.
                     */
                    std::string m_accessPointId;
                    bool m_accessPointIdHasBeenSet;

                    /**
                     * Connection status.
PENDING: Applying. 
REJECTED: Application rejected.   
TOPAY: Payment pending. 
PAID: Paid. 
ALLOCATED: Constructing.   
AVAILABLE: Available.  
DELETING: Deleting.
DELETED: Deleted.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Connection creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Connection activation time.
                     */
                    std::string m_enabledTime;
                    bool m_enabledTimeHasBeenSet;

                    /**
                     * ISP that provides connections. Valid values: ChinaTelecom (China Telecom), ChinaMobile (China Mobile), ChinaUnicom (China Unicom), In-houseWiring (in-house wiring), ChinaOther (other Chinese ISPs), InternationalOperator (international ISPs).
                     */
                    std::string m_lineOperator;
                    bool m_lineOperatorHasBeenSet;

                    /**
                     * Location of a local IDC.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Connection port bandwidth in Mbps.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * User-side port type of a connection. Valid values: 100Base-T (100-Megabit electrical Ethernet interface), 1000Base-T (1-Gigabit electrical Ethernet interface; it is the default value), 1000Base-LX (1-Gigabit single-mode optical Ethernet interface; 10 KM), 10GBase-T (10-Gigabit electrical Ethernet interface), 10GBase-LR (10-Gigabit single-mode optical Ethernet interface; 10 KM).
                     */
                    std::string m_portType;
                    bool m_portTypeHasBeenSet;

                    /**
                     * Circuit code of a connection, which is provided by the ISP or service provider.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_circuitCode;
                    bool m_circuitCodeHasBeenSet;

                    /**
                     * ID of a redundant connection.
                     */
                    std::string m_redundantDirectConnectId;
                    bool m_redundantDirectConnectIdHasBeenSet;

                    /**
                     * VLAN for connection debugging, which is enabled and automatically assigned by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vlan;
                    bool m_vlanHasBeenSet;

                    /**
                     * Tencent-side IP address for connection debugging.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * User-side IP address for connection debugging.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_customerAddress;
                    bool m_customerAddressHasBeenSet;

                    /**
                     * Name of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * Email address of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_customerContactMail;
                    bool m_customerContactMailHasBeenSet;

                    /**
                     * Contact number of the connection applicant, which is obtained from the account system by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_customerContactNumber;
                    bool m_customerContactNumberHasBeenSet;

                    /**
                     * Connection expiration time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Connection billing mode. NON_RECURRING_CHARGE: One-time charge for accessing service
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Fault reporting contact person.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_faultReportContactPerson;
                    bool m_faultReportContactPersonHasBeenSet;

                    /**
                     * Fault reporting contact number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_faultReportContactNumber;
                    bool m_faultReportContactNumberHasBeenSet;

                    /**
                     * Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Access point type of a connection.
                     */
                    std::string m_accessPointType;
                    bool m_accessPointTypeHasBeenSet;

                    /**
                     * IDC city.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_idcCity;
                    bool m_idcCityHasBeenSet;

                    /**
                     * Billing status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_chargeState;
                    bool m_chargeStateHasBeenSet;

                    /**
                     * Connection activation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Whether the connection has the service agreement signed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    bool m_signLaw;
                    bool m_signLawHasBeenSet;

                    /**
                     * Whether the connection is an edge zone.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    bool m_localZone;
                    bool m_localZoneHasBeenSet;

                    /**
                     * Number of dedicated tunnels with disabled VLAN in the connection
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_vlanZeroDirectConnectTunnelCount;
                    bool m_vlanZeroDirectConnectTunnelCountHasBeenSet;

                    /**
                     * Number of dedicated tunnels with enabled VLAN in the connection
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_otherVlanDirectConnectTunnelCount;
                    bool m_otherVlanDirectConnectTunnelCountHasBeenSet;

                    /**
                     * Minimum bandwidth of the connection
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_minBandwidth;
                    bool m_minBandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECT_H_
