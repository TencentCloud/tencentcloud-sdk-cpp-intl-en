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
                     * 获取UUID string
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uuid UUID string
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置UUID string
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uuid UUID string
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Host IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineIp Host IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Host IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineIp Host IP
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineName Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineName Host name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Username
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userName Username
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcIp Source IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Source IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcIp Source IP
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Country Country/Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCountry() const;

                    /**
                     * 设置Country/Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _country Country/Region ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return City City ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCity() const;

                    /**
                     * 设置City ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _city City ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Province ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Province Province ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProvince() const;

                    /**
                     * 设置Province ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _province Province ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoginTime Log-in time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 设置Log-in time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loginTime Log-in time
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Modification time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether hit the exception of cross-region log-in: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsRiskArea Whether hit the exception of cross-region log-in: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsRiskArea() const;

                    /**
                     * 设置Whether hit the exception of cross-region log-in: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isRiskArea Whether hit the exception of cross-region log-in: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsRiskUser Whether hit the exception of abnormal user: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsRiskUser() const;

                    /**
                     * 设置Whether hit the exception of abnormal user: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isRiskUser Whether hit the exception of abnormal user: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsRiskTime Whether hit the exception of abnormal time: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsRiskTime() const;

                    /**
                     * 设置Whether hit the exception of abnormal time: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isRiskTime Whether hit the exception of abnormal time: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsRiskSrcIp Whether hit the exception of abnormal IP: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsRiskSrcIp() const;

                    /**
                     * 设置Whether hit the exception of abnormal IP: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isRiskSrcIp Whether hit the exception of abnormal IP: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
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
0: high
1: suspicious
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskLevel Risk level:
0: high
1: suspicious
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置Risk level:
0: high
1: suspicious
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _riskLevel Risk level:
0: high
1: suspicious
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Location Location name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Location name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _location Location name
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuid Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuid Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
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
ABROAD - overseas IP
XTI - threat intelligence
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Desc High-risk information description:
ABROAD - overseas IP
XTI - threat intelligence
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置High-risk information description:
ABROAD - overseas IP
XTI - threat intelligence
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _desc High-risk information description:
ABROAD - overseas IP
XTI - threat intelligence
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Additional information
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Request destination port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port Request destination port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Request destination port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port Request destination port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * Record ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * UUID string
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Username
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Source IP
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * City ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Province ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * Log-in time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * Modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Whether hit the exception of cross-region log-in: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isRiskArea;
                    bool m_isRiskAreaHasBeenSet;

                    /**
                     * Whether hit the exception of abnormal user: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isRiskUser;
                    bool m_isRiskUserHasBeenSet;

                    /**
                     * Whether hit the exception of abnormal time: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isRiskTime;
                    bool m_isRiskTimeHasBeenSet;

                    /**
                     * Whether hit the exception of abnormal IP: 1: yes; 0: no
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isRiskSrcIp;
                    bool m_isRiskSrcIpHasBeenSet;

                    /**
                     * Risk level:
0: high
1: suspicious
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Location name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * High-risk information description:
ABROAD - overseas IP
XTI - threat intelligence
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Request destination port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_HOSTLOGINLIST_H_
