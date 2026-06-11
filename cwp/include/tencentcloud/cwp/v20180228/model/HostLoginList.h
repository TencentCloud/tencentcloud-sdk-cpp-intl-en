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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_HOSTLOGINLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_HOSTLOGINLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>
#include <tencentcloud/cwp/v20180228/model/IPAnalyse.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Log-in audit list entity
                */
                class HostLoginList : public AbstractModel
                {
                public:
                    HostLoginList();
                    ~HostLoginList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record ID
                     * @return Id Record ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Record ID
                     * @param _id Record ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Host UUID
                     * @return Uuid Host UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
                     * @param _uuid Host UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Host IP address
                     * @return MachineIp Host IP address
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Host IP address
                     * @param _machineIp Host IP address
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Host name
                     * @return MachineName Host name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Host name
                     * @param _machineName Host name
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Username.
                     * @return UserName Username.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
                     * @param _userName Username.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Source IP
                     * @return SrcIp Source IP
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Source IP
                     * @param _srcIp Source IP
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取1: normal log-in; 2: cross-region log-in; 5: allowlisted; 14: processed; 15: ignored
                     * @return Status 1: normal log-in; 2: cross-region log-in; 5: allowlisted; 14: processed; 15: ignored
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置1: normal log-in; 2: cross-region log-in; 5: allowlisted; 14: processed; 15: ignored
                     * @param _status 1: normal log-in; 2: cross-region log-in; 5: allowlisted; 14: processed; 15: ignored
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Country/Region ID
                     * @return Country Country/Region ID
                     * 
                     */
                    uint64_t GetCountry() const;

                    /**
                     * 设置Country/Region ID
                     * @param _country Country/Region ID
                     * 
                     */
                    void SetCountry(const uint64_t& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取City ID
                     * @return City City ID
                     * 
                     */
                    uint64_t GetCity() const;

                    /**
                     * 设置City ID
                     * @param _city City ID
                     * 
                     */
                    void SetCity(const uint64_t& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Province id
                     * @return Province Province id
                     * 
                     */
                    uint64_t GetProvince() const;

                    /**
                     * 设置Province id
                     * @param _province Province id
                     * 
                     */
                    void SetProvince(const uint64_t& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取Log-in time
                     * @return LoginTime Log-in time
                     * 
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 设置Log-in time
                     * @param _loginTime Log-in time
                     * 
                     */
                    void SetLoginTime(const std::string& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifyTime Modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
                     * @param _modifyTime Modification time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Whether hit the exception of cross-region log-in: 1 means hit the exception, 0 means not hit
                     * @return IsRiskArea Whether hit the exception of cross-region log-in: 1 means hit the exception, 0 means not hit
                     * 
                     */
                    uint64_t GetIsRiskArea() const;

                    /**
                     * 设置Whether hit the exception of cross-region log-in: 1 means hit the exception, 0 means not hit
                     * @param _isRiskArea Whether hit the exception of cross-region log-in: 1 means hit the exception, 0 means not hit
                     * 
                     */
                    void SetIsRiskArea(const uint64_t& _isRiskArea);

                    /**
                     * 判断参数 IsRiskArea 是否已赋值
                     * @return IsRiskArea 是否已赋值
                     * 
                     */
                    bool IsRiskAreaHasBeenSet() const;

                    /**
                     * 获取Whether hit the exception of abnormal user: 1: yes; 0: no
                     * @return IsRiskUser Whether hit the exception of abnormal user: 1: yes; 0: no
                     * 
                     */
                    uint64_t GetIsRiskUser() const;

                    /**
                     * 设置Whether hit the exception of abnormal user: 1: yes; 0: no
                     * @param _isRiskUser Whether hit the exception of abnormal user: 1: yes; 0: no
                     * 
                     */
                    void SetIsRiskUser(const uint64_t& _isRiskUser);

                    /**
                     * 判断参数 IsRiskUser 是否已赋值
                     * @return IsRiskUser 是否已赋值
                     * 
                     */
                    bool IsRiskUserHasBeenSet() const;

                    /**
                     * 获取Whether hit the exception of abnormal time: 1: yes; 0: no
                     * @return IsRiskTime Whether hit the exception of abnormal time: 1: yes; 0: no
                     * 
                     */
                    uint64_t GetIsRiskTime() const;

                    /**
                     * 设置Whether hit the exception of abnormal time: 1: yes; 0: no
                     * @param _isRiskTime Whether hit the exception of abnormal time: 1: yes; 0: no
                     * 
                     */
                    void SetIsRiskTime(const uint64_t& _isRiskTime);

                    /**
                     * 判断参数 IsRiskTime 是否已赋值
                     * @return IsRiskTime 是否已赋值
                     * 
                     */
                    bool IsRiskTimeHasBeenSet() const;

                    /**
                     * 获取Whether hit the exception of abnormal IP: 1: yes; 0: no
                     * @return IsRiskSrcIp Whether hit the exception of abnormal IP: 1: yes; 0: no
                     * 
                     */
                    uint64_t GetIsRiskSrcIp() const;

                    /**
                     * 设置Whether hit the exception of abnormal IP: 1: yes; 0: no
                     * @param _isRiskSrcIp Whether hit the exception of abnormal IP: 1: yes; 0: no
                     * 
                     */
                    void SetIsRiskSrcIp(const uint64_t& _isRiskSrcIp);

                    /**
                     * 判断参数 IsRiskSrcIp 是否已赋值
                     * @return IsRiskSrcIp 是否已赋值
                     * 
                     */
                    bool IsRiskSrcIpHasBeenSet() const;

                    /**
                     * 获取Risk level:
0: high risk
1: Suspicious
                     * @return RiskLevel Risk level:
0: high risk
1: Suspicious
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置Risk level:
0: high risk
1: Suspicious
                     * @param _riskLevel Risk level:
0: high risk
1: Suspicious
                     * 
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Location name
                     * @return Location Location name
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Location name
                     * @param _location Location name
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Host QUUID
                     * @return Quuid Host QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
                     * @param _quuid Host QUUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取High-risk information description:
ABROAD - IP outside Chinese mainland
XTI - Threat Intelligence
                     * @return Desc High-risk information description:
ABROAD - IP outside Chinese mainland
XTI - Threat Intelligence
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置High-risk information description:
ABROAD - IP outside Chinese mainland
XTI - Threat Intelligence
                     * @param _desc High-risk information description:
ABROAD - IP outside Chinese mainland
XTI - Threat Intelligence
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Additional information
                     * @return MachineExtraInfo Additional information
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Additional information
                     * @param _machineExtraInfo Additional information
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取Request destination port.
                     * @return Port Request destination port.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Request destination port.
                     * @param _port Request destination port.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取ip analysis
                     * @return IPAnalyse ip analysis
                     * 
                     */
                    IPAnalyse GetIPAnalyse() const;

                    /**
                     * 设置ip analysis
                     * @param _iPAnalyse ip analysis
                     * 
                     */
                    void SetIPAnalyse(const IPAnalyse& _iPAnalyse);

                    /**
                     * 判断参数 IPAnalyse 是否已赋值
                     * @return IPAnalyse 是否已赋值
                     * 
                     */
                    bool IPAnalyseHasBeenSet() const;

                private:

                    /**
                     * Record ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host IP address
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Source IP
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 1: normal log-in; 2: cross-region log-in; 5: allowlisted; 14: processed; 15: ignored
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Country/Region ID
                     */
                    uint64_t m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * City ID
                     */
                    uint64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Province id
                     */
                    uint64_t m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * Log-in time
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Whether hit the exception of cross-region log-in: 1 means hit the exception, 0 means not hit
                     */
                    uint64_t m_isRiskArea;
                    bool m_isRiskAreaHasBeenSet;

                    /**
                     * Whether hit the exception of abnormal user: 1: yes; 0: no
                     */
                    uint64_t m_isRiskUser;
                    bool m_isRiskUserHasBeenSet;

                    /**
                     * Whether hit the exception of abnormal time: 1: yes; 0: no
                     */
                    uint64_t m_isRiskTime;
                    bool m_isRiskTimeHasBeenSet;

                    /**
                     * Whether hit the exception of abnormal IP: 1: yes; 0: no
                     */
                    uint64_t m_isRiskSrcIp;
                    bool m_isRiskSrcIpHasBeenSet;

                    /**
                     * Risk level:
0: high risk
1: Suspicious
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Location name
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * High-risk information description:
ABROAD - IP outside Chinese mainland
XTI - Threat Intelligence
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Additional information
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Request destination port.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * ip analysis
                     */
                    IPAnalyse m_iPAnalyse;
                    bool m_iPAnalyseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_HOSTLOGINLIST_H_
