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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * CreateDirectConnect request structure.
                */
                class CreateDirectConnectRequest : public AbstractModel
                {
                public:
                    CreateDirectConnectRequest();
                    ~CreateDirectConnectRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Access point of connection.
You can call `DescribeAccessPoints` to get the region ID. The selected access point must exist and be available.
                     * @return AccessPointId Access point of connection.
You can call `DescribeAccessPoints` to get the region ID. The selected access point must exist and be available.
                     */
                    std::string GetAccessPointId() const;

                    /**
                     * 设置Access point of connection.
You can call `DescribeAccessPoints` to get the region ID. The selected access point must exist and be available.
                     * @param AccessPointId Access point of connection.
You can call `DescribeAccessPoints` to get the region ID. The selected access point must exist and be available.
                     */
                    void SetAccessPointId(const std::string& _accessPointId);

                    /**
                     * 判断参数 AccessPointId 是否已赋值
                     * @return AccessPointId 是否已赋值
                     */
                    bool AccessPointIdHasBeenSet() const;

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
                     * 获取Port type of connection. Valid values: 100Base-T (100-Megabit electrical Ethernet interface), 1000Base-T (1-Gigabit electrical Ethernet interface), 1000Base-LX (1-Gigabit single-module optical Ethernet interface; 10 KM), 10GBase-T (10-Gigabit electrical Ethernet interface), 10GBase-LR (10-Gigabit single-module optical Ethernet interface; 10 KM). Default value: 1000Base-LX.
                     * @return PortType Port type of connection. Valid values: 100Base-T (100-Megabit electrical Ethernet interface), 1000Base-T (1-Gigabit electrical Ethernet interface), 1000Base-LX (1-Gigabit single-module optical Ethernet interface; 10 KM), 10GBase-T (10-Gigabit electrical Ethernet interface), 10GBase-LR (10-Gigabit single-module optical Ethernet interface; 10 KM). Default value: 1000Base-LX.
                     */
                    std::string GetPortType() const;

                    /**
                     * 设置Port type of connection. Valid values: 100Base-T (100-Megabit electrical Ethernet interface), 1000Base-T (1-Gigabit electrical Ethernet interface), 1000Base-LX (1-Gigabit single-module optical Ethernet interface; 10 KM), 10GBase-T (10-Gigabit electrical Ethernet interface), 10GBase-LR (10-Gigabit single-module optical Ethernet interface; 10 KM). Default value: 1000Base-LX.
                     * @param PortType Port type of connection. Valid values: 100Base-T (100-Megabit electrical Ethernet interface), 1000Base-T (1-Gigabit electrical Ethernet interface), 1000Base-LX (1-Gigabit single-module optical Ethernet interface; 10 KM), 10GBase-T (10-Gigabit electrical Ethernet interface), 10GBase-LR (10-Gigabit single-module optical Ethernet interface; 10 KM). Default value: 1000Base-LX.
                     */
                    void SetPortType(const std::string& _portType);

                    /**
                     * 判断参数 PortType 是否已赋值
                     * @return PortType 是否已赋值
                     */
                    bool PortTypeHasBeenSet() const;

                    /**
                     * 获取Circuit code of a connection, which is provided by the ISP or connection provider.
                     * @return CircuitCode Circuit code of a connection, which is provided by the ISP or connection provider.
                     */
                    std::string GetCircuitCode() const;

                    /**
                     * 设置Circuit code of a connection, which is provided by the ISP or connection provider.
                     * @param CircuitCode Circuit code of a connection, which is provided by the ISP or connection provider.
                     */
                    void SetCircuitCode(const std::string& _circuitCode);

                    /**
                     * 判断参数 CircuitCode 是否已赋值
                     * @return CircuitCode 是否已赋值
                     */
                    bool CircuitCodeHasBeenSet() const;

                    /**
                     * 获取Local IDC location.
                     * @return Location Local IDC location.
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Local IDC location.
                     * @param Location Local IDC location.
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Connection port bandwidth in Mbps. Value range: [2,10240]. Default value: 1000.
                     * @return Bandwidth Connection port bandwidth in Mbps. Value range: [2,10240]. Default value: 1000.
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Connection port bandwidth in Mbps. Value range: [2,10240]. Default value: 1000.
                     * @param Bandwidth Connection port bandwidth in Mbps. Value range: [2,10240]. Default value: 1000.
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取ID of redundant connection.
                     * @return RedundantDirectConnectId ID of redundant connection.
                     */
                    std::string GetRedundantDirectConnectId() const;

                    /**
                     * 设置ID of redundant connection.
                     * @param RedundantDirectConnectId ID of redundant connection.
                     */
                    void SetRedundantDirectConnectId(const std::string& _redundantDirectConnectId);

                    /**
                     * 判断参数 RedundantDirectConnectId 是否已赋值
                     * @return RedundantDirectConnectId 是否已赋值
                     */
                    bool RedundantDirectConnectIdHasBeenSet() const;

                    /**
                     * 获取VLAN for connection debugging, which is enabled and automatically assigned by default.
                     * @return Vlan VLAN for connection debugging, which is enabled and automatically assigned by default.
                     */
                    int64_t GetVlan() const;

                    /**
                     * 设置VLAN for connection debugging, which is enabled and automatically assigned by default.
                     * @param Vlan VLAN for connection debugging, which is enabled and automatically assigned by default.
                     */
                    void SetVlan(const int64_t& _vlan);

                    /**
                     * 判断参数 Vlan 是否已赋值
                     * @return Vlan 是否已赋值
                     */
                    bool VlanHasBeenSet() const;

                    /**
                     * 获取Tencent-side IP address for connection debugging, which is automatically assigned by default.
                     * @return TencentAddress Tencent-side IP address for connection debugging, which is automatically assigned by default.
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置Tencent-side IP address for connection debugging, which is automatically assigned by default.
                     * @param TencentAddress Tencent-side IP address for connection debugging, which is automatically assigned by default.
                     */
                    void SetTencentAddress(const std::string& _tencentAddress);

                    /**
                     * 判断参数 TencentAddress 是否已赋值
                     * @return TencentAddress 是否已赋值
                     */
                    bool TencentAddressHasBeenSet() const;

                    /**
                     * 获取User-side IP address for connection debugging, which is automatically assigned by default.
                     * @return CustomerAddress User-side IP address for connection debugging, which is automatically assigned by default.
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置User-side IP address for connection debugging, which is automatically assigned by default.
                     * @param CustomerAddress User-side IP address for connection debugging, which is automatically assigned by default.
                     */
                    void SetCustomerAddress(const std::string& _customerAddress);

                    /**
                     * 判断参数 CustomerAddress 是否已赋值
                     * @return CustomerAddress 是否已赋值
                     */
                    bool CustomerAddressHasBeenSet() const;

                    /**
                     * 获取Name of connection applicant, which is obtained from the account system by default.
                     * @return CustomerName Name of connection applicant, which is obtained from the account system by default.
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置Name of connection applicant, which is obtained from the account system by default.
                     * @param CustomerName Name of connection applicant, which is obtained from the account system by default.
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取Email address of connection applicant, which is obtained from the account system by default.
                     * @return CustomerContactMail Email address of connection applicant, which is obtained from the account system by default.
                     */
                    std::string GetCustomerContactMail() const;

                    /**
                     * 设置Email address of connection applicant, which is obtained from the account system by default.
                     * @param CustomerContactMail Email address of connection applicant, which is obtained from the account system by default.
                     */
                    void SetCustomerContactMail(const std::string& _customerContactMail);

                    /**
                     * 判断参数 CustomerContactMail 是否已赋值
                     * @return CustomerContactMail 是否已赋值
                     */
                    bool CustomerContactMailHasBeenSet() const;

                    /**
                     * 获取Contact number of connection applicant, which is obtained from the account system by default.
                     * @return CustomerContactNumber Contact number of connection applicant, which is obtained from the account system by default.
                     */
                    std::string GetCustomerContactNumber() const;

                    /**
                     * 设置Contact number of connection applicant, which is obtained from the account system by default.
                     * @param CustomerContactNumber Contact number of connection applicant, which is obtained from the account system by default.
                     */
                    void SetCustomerContactNumber(const std::string& _customerContactNumber);

                    /**
                     * 判断参数 CustomerContactNumber 是否已赋值
                     * @return CustomerContactNumber 是否已赋值
                     */
                    bool CustomerContactNumberHasBeenSet() const;

                    /**
                     * 获取Fault reporting contact person.
                     * @return FaultReportContactPerson Fault reporting contact person.
                     */
                    std::string GetFaultReportContactPerson() const;

                    /**
                     * 设置Fault reporting contact person.
                     * @param FaultReportContactPerson Fault reporting contact person.
                     */
                    void SetFaultReportContactPerson(const std::string& _faultReportContactPerson);

                    /**
                     * 判断参数 FaultReportContactPerson 是否已赋值
                     * @return FaultReportContactPerson 是否已赋值
                     */
                    bool FaultReportContactPersonHasBeenSet() const;

                    /**
                     * 获取Fault reporting contact number.
                     * @return FaultReportContactNumber Fault reporting contact number.
                     */
                    std::string GetFaultReportContactNumber() const;

                    /**
                     * 设置Fault reporting contact number.
                     * @param FaultReportContactNumber Fault reporting contact number.
                     */
                    void SetFaultReportContactNumber(const std::string& _faultReportContactNumber);

                    /**
                     * 判断参数 FaultReportContactNumber 是否已赋值
                     * @return FaultReportContactNumber 是否已赋值
                     */
                    bool FaultReportContactNumberHasBeenSet() const;

                    /**
                     * 获取Whether the connection applicant has signed the service agreement. Default value: true.
                     * @return SignLaw Whether the connection applicant has signed the service agreement. Default value: true.
                     */
                    bool GetSignLaw() const;

                    /**
                     * 设置Whether the connection applicant has signed the service agreement. Default value: true.
                     * @param SignLaw Whether the connection applicant has signed the service agreement. Default value: true.
                     */
                    void SetSignLaw(const bool& _signLaw);

                    /**
                     * 判断参数 SignLaw 是否已赋值
                     * @return SignLaw 是否已赋值
                     */
                    bool SignLawHasBeenSet() const;

                private:

                    /**
                     * Connection name.
                     */
                    std::string m_directConnectName;
                    bool m_directConnectNameHasBeenSet;

                    /**
                     * Access point of connection.
You can call `DescribeAccessPoints` to get the region ID. The selected access point must exist and be available.
                     */
                    std::string m_accessPointId;
                    bool m_accessPointIdHasBeenSet;

                    /**
                     * ISP that provides connections. Valid values: ChinaTelecom (China Telecom), ChinaMobile (China Mobile), ChinaUnicom (China Unicom), In-houseWiring (in-house wiring), ChinaOther (other Chinese ISPs), InternationalOperator (international ISPs).
                     */
                    std::string m_lineOperator;
                    bool m_lineOperatorHasBeenSet;

                    /**
                     * Port type of connection. Valid values: 100Base-T (100-Megabit electrical Ethernet interface), 1000Base-T (1-Gigabit electrical Ethernet interface), 1000Base-LX (1-Gigabit single-module optical Ethernet interface; 10 KM), 10GBase-T (10-Gigabit electrical Ethernet interface), 10GBase-LR (10-Gigabit single-module optical Ethernet interface; 10 KM). Default value: 1000Base-LX.
                     */
                    std::string m_portType;
                    bool m_portTypeHasBeenSet;

                    /**
                     * Circuit code of a connection, which is provided by the ISP or connection provider.
                     */
                    std::string m_circuitCode;
                    bool m_circuitCodeHasBeenSet;

                    /**
                     * Local IDC location.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Connection port bandwidth in Mbps. Value range: [2,10240]. Default value: 1000.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * ID of redundant connection.
                     */
                    std::string m_redundantDirectConnectId;
                    bool m_redundantDirectConnectIdHasBeenSet;

                    /**
                     * VLAN for connection debugging, which is enabled and automatically assigned by default.
                     */
                    int64_t m_vlan;
                    bool m_vlanHasBeenSet;

                    /**
                     * Tencent-side IP address for connection debugging, which is automatically assigned by default.
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * User-side IP address for connection debugging, which is automatically assigned by default.
                     */
                    std::string m_customerAddress;
                    bool m_customerAddressHasBeenSet;

                    /**
                     * Name of connection applicant, which is obtained from the account system by default.
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * Email address of connection applicant, which is obtained from the account system by default.
                     */
                    std::string m_customerContactMail;
                    bool m_customerContactMailHasBeenSet;

                    /**
                     * Contact number of connection applicant, which is obtained from the account system by default.
                     */
                    std::string m_customerContactNumber;
                    bool m_customerContactNumberHasBeenSet;

                    /**
                     * Fault reporting contact person.
                     */
                    std::string m_faultReportContactPerson;
                    bool m_faultReportContactPersonHasBeenSet;

                    /**
                     * Fault reporting contact number.
                     */
                    std::string m_faultReportContactNumber;
                    bool m_faultReportContactNumberHasBeenSet;

                    /**
                     * Whether the connection applicant has signed the service agreement. Default value: true.
                     */
                    bool m_signLaw;
                    bool m_signLawHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTREQUEST_H_
