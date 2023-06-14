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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTATTRIBUTEREQUEST_H_

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
                * ModifyDirectConnectAttribute request structure.
                */
                class ModifyDirectConnectAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDirectConnectAttributeRequest();
                    ~ModifyDirectConnectAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Connection ID.
                     * @return DirectConnectId Connection ID.
                     * 
                     */
                    std::string GetDirectConnectId() const;

                    /**
                     * 设置Connection ID.
                     * @param _directConnectId Connection ID.
                     * 
                     */
                    void SetDirectConnectId(const std::string& _directConnectId);

                    /**
                     * 判断参数 DirectConnectId 是否已赋值
                     * @return DirectConnectId 是否已赋值
                     * 
                     */
                    bool DirectConnectIdHasBeenSet() const;

                    /**
                     * 获取Connection name.
                     * @return DirectConnectName Connection name.
                     * 
                     */
                    std::string GetDirectConnectName() const;

                    /**
                     * 设置Connection name.
                     * @param _directConnectName Connection name.
                     * 
                     */
                    void SetDirectConnectName(const std::string& _directConnectName);

                    /**
                     * 判断参数 DirectConnectName 是否已赋值
                     * @return DirectConnectName 是否已赋值
                     * 
                     */
                    bool DirectConnectNameHasBeenSet() const;

                    /**
                     * 获取Circuit code of a connection, which is provided by the ISP or connection provider.
                     * @return CircuitCode Circuit code of a connection, which is provided by the ISP or connection provider.
                     * 
                     */
                    std::string GetCircuitCode() const;

                    /**
                     * 设置Circuit code of a connection, which is provided by the ISP or connection provider.
                     * @param _circuitCode Circuit code of a connection, which is provided by the ISP or connection provider.
                     * 
                     */
                    void SetCircuitCode(const std::string& _circuitCode);

                    /**
                     * 判断参数 CircuitCode 是否已赋值
                     * @return CircuitCode 是否已赋值
                     * 
                     */
                    bool CircuitCodeHasBeenSet() const;

                    /**
                     * 获取VLAN for connection debugging.
                     * @return Vlan VLAN for connection debugging.
                     * 
                     */
                    int64_t GetVlan() const;

                    /**
                     * 设置VLAN for connection debugging.
                     * @param _vlan VLAN for connection debugging.
                     * 
                     */
                    void SetVlan(const int64_t& _vlan);

                    /**
                     * 判断参数 Vlan 是否已赋值
                     * @return Vlan 是否已赋值
                     * 
                     */
                    bool VlanHasBeenSet() const;

                    /**
                     * 获取Tencent-side IP address for connection debugging.
                     * @return TencentAddress Tencent-side IP address for connection debugging.
                     * 
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置Tencent-side IP address for connection debugging.
                     * @param _tencentAddress Tencent-side IP address for connection debugging.
                     * 
                     */
                    void SetTencentAddress(const std::string& _tencentAddress);

                    /**
                     * 判断参数 TencentAddress 是否已赋值
                     * @return TencentAddress 是否已赋值
                     * 
                     */
                    bool TencentAddressHasBeenSet() const;

                    /**
                     * 获取User-side IP address for connection debugging.
                     * @return CustomerAddress User-side IP address for connection debugging.
                     * 
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置User-side IP address for connection debugging.
                     * @param _customerAddress User-side IP address for connection debugging.
                     * 
                     */
                    void SetCustomerAddress(const std::string& _customerAddress);

                    /**
                     * 判断参数 CustomerAddress 是否已赋值
                     * @return CustomerAddress 是否已赋值
                     * 
                     */
                    bool CustomerAddressHasBeenSet() const;

                    /**
                     * 获取Name of connection applicant, which is obtained from the account system by default.
                     * @return CustomerName Name of connection applicant, which is obtained from the account system by default.
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置Name of connection applicant, which is obtained from the account system by default.
                     * @param _customerName Name of connection applicant, which is obtained from the account system by default.
                     * 
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     * 
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取Email address of connection applicant, which is obtained from the account system by default.
                     * @return CustomerContactMail Email address of connection applicant, which is obtained from the account system by default.
                     * 
                     */
                    std::string GetCustomerContactMail() const;

                    /**
                     * 设置Email address of connection applicant, which is obtained from the account system by default.
                     * @param _customerContactMail Email address of connection applicant, which is obtained from the account system by default.
                     * 
                     */
                    void SetCustomerContactMail(const std::string& _customerContactMail);

                    /**
                     * 判断参数 CustomerContactMail 是否已赋值
                     * @return CustomerContactMail 是否已赋值
                     * 
                     */
                    bool CustomerContactMailHasBeenSet() const;

                    /**
                     * 获取Contact number of connection applicant, which is obtained from the account system by default.
                     * @return CustomerContactNumber Contact number of connection applicant, which is obtained from the account system by default.
                     * 
                     */
                    std::string GetCustomerContactNumber() const;

                    /**
                     * 设置Contact number of connection applicant, which is obtained from the account system by default.
                     * @param _customerContactNumber Contact number of connection applicant, which is obtained from the account system by default.
                     * 
                     */
                    void SetCustomerContactNumber(const std::string& _customerContactNumber);

                    /**
                     * 判断参数 CustomerContactNumber 是否已赋值
                     * @return CustomerContactNumber 是否已赋值
                     * 
                     */
                    bool CustomerContactNumberHasBeenSet() const;

                    /**
                     * 获取Fault reporting contact person.
                     * @return FaultReportContactPerson Fault reporting contact person.
                     * 
                     */
                    std::string GetFaultReportContactPerson() const;

                    /**
                     * 设置Fault reporting contact person.
                     * @param _faultReportContactPerson Fault reporting contact person.
                     * 
                     */
                    void SetFaultReportContactPerson(const std::string& _faultReportContactPerson);

                    /**
                     * 判断参数 FaultReportContactPerson 是否已赋值
                     * @return FaultReportContactPerson 是否已赋值
                     * 
                     */
                    bool FaultReportContactPersonHasBeenSet() const;

                    /**
                     * 获取Fault reporting contact number.
                     * @return FaultReportContactNumber Fault reporting contact number.
                     * 
                     */
                    std::string GetFaultReportContactNumber() const;

                    /**
                     * 设置Fault reporting contact number.
                     * @param _faultReportContactNumber Fault reporting contact number.
                     * 
                     */
                    void SetFaultReportContactNumber(const std::string& _faultReportContactNumber);

                    /**
                     * 判断参数 FaultReportContactNumber 是否已赋值
                     * @return FaultReportContactNumber 是否已赋值
                     * 
                     */
                    bool FaultReportContactNumberHasBeenSet() const;

                    /**
                     * 获取Whether the connection applicant has signed the service agreement.
                     * @return SignLaw Whether the connection applicant has signed the service agreement.
                     * 
                     */
                    bool GetSignLaw() const;

                    /**
                     * 设置Whether the connection applicant has signed the service agreement.
                     * @param _signLaw Whether the connection applicant has signed the service agreement.
                     * 
                     */
                    void SetSignLaw(const bool& _signLaw);

                    /**
                     * 判断参数 SignLaw 是否已赋值
                     * @return SignLaw 是否已赋值
                     * 
                     */
                    bool SignLawHasBeenSet() const;

                    /**
                     * 获取Connection’s bandwidth
                     * @return Bandwidth Connection’s bandwidth
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置Connection’s bandwidth
                     * @param _bandwidth Connection’s bandwidth
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

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
                     * Circuit code of a connection, which is provided by the ISP or connection provider.
                     */
                    std::string m_circuitCode;
                    bool m_circuitCodeHasBeenSet;

                    /**
                     * VLAN for connection debugging.
                     */
                    int64_t m_vlan;
                    bool m_vlanHasBeenSet;

                    /**
                     * Tencent-side IP address for connection debugging.
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * User-side IP address for connection debugging.
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
                     * Whether the connection applicant has signed the service agreement.
                     */
                    bool m_signLaw;
                    bool m_signLawHasBeenSet;

                    /**
                     * Connection’s bandwidth
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTATTRIBUTEREQUEST_H_
