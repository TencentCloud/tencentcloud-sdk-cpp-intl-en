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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKINFO_H_

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
                * Password cracking list entity
                */
                class BruteAttackInfo : public AbstractModel
                {
                public:
                    BruteAttackInfo();
                    ~BruteAttackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID
                     * @return Id Unique ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique ID
                     * @param _id Unique ID
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
                     * 获取CWP client UUID.
                     * @return Uuid CWP client UUID.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP client UUID.
                     * @param _uuid CWP client UUID.
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
                     * 获取host name
                     * @return MachineName host name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置host name
                     * @param _machineName host name
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
                     * 获取SUCCESS: cracking successful; FAILED: cracking failed
                     * @return Status SUCCESS: cracking successful; FAILED: cracking failed
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置SUCCESS: cracking successful; FAILED: cracking failed
                     * @param _status SUCCESS: cracking successful; FAILED: cracking failed
                     * 
                     */
                    void SetStatus(const std::string& _status);

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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取0 - No blocking (not supported by the client version)
1: blocked
2: Blocking failed (program exception)
3: No blocking (No blocking for the private network)
4: Availability zone does not support blocking
10: blocking
81: no blocking (blocking disabled)
82-No Blocking (Non-Pro Edition)
83: no blocking (added to the allowlist)
86: no blocking (system allowlist)
87: No blocking (client offline)
88-No blocking (Source Ip belongs to the same customer)
89: no blocking (blocking is not supported for ipv6)
                     * @return BanStatus 0 - No blocking (not supported by the client version)
1: blocked
2: Blocking failed (program exception)
3: No blocking (No blocking for the private network)
4: Availability zone does not support blocking
10: blocking
81: no blocking (blocking disabled)
82-No Blocking (Non-Pro Edition)
83: no blocking (added to the allowlist)
86: no blocking (system allowlist)
87: No blocking (client offline)
88-No blocking (Source Ip belongs to the same customer)
89: no blocking (blocking is not supported for ipv6)
                     * 
                     */
                    uint64_t GetBanStatus() const;

                    /**
                     * 设置0 - No blocking (not supported by the client version)
1: blocked
2: Blocking failed (program exception)
3: No blocking (No blocking for the private network)
4: Availability zone does not support blocking
10: blocking
81: no blocking (blocking disabled)
82-No Blocking (Non-Pro Edition)
83: no blocking (added to the allowlist)
86: no blocking (system allowlist)
87: No blocking (client offline)
88-No blocking (Source Ip belongs to the same customer)
89: no blocking (blocking is not supported for ipv6)
                     * @param _banStatus 0 - No blocking (not supported by the client version)
1: blocked
2: Blocking failed (program exception)
3: No blocking (No blocking for the private network)
4: Availability zone does not support blocking
10: blocking
81: no blocking (blocking disabled)
82-No Blocking (Non-Pro Edition)
83: no blocking (added to the allowlist)
86: no blocking (system allowlist)
87: No blocking (client offline)
88-No blocking (Source Ip belongs to the same customer)
89: no blocking (blocking is not supported for ipv6)
                     * 
                     */
                    void SetBanStatus(const uint64_t& _banStatus);

                    /**
                     * 判断参数 BanStatus 是否已赋值
                     * @return BanStatus 是否已赋值
                     * 
                     */
                    bool BanStatusHasBeenSet() const;

                    /**
                     * 获取Event type: 200 - brute force cracking event; 300 - successful brute force cracking event (the status is displayed on the page); 400 - brute force cracking event for non-existent accounts.
                     * @return EventType Event type: 200 - brute force cracking event; 300 - successful brute force cracking event (the status is displayed on the page); 400 - brute force cracking event for non-existent accounts.
                     * 
                     */
                    uint64_t GetEventType() const;

                    /**
                     * 设置Event type: 200 - brute force cracking event; 300 - successful brute force cracking event (the status is displayed on the page); 400 - brute force cracking event for non-existent accounts.
                     * @param _eventType Event type: 200 - brute force cracking event; 300 - successful brute force cracking event (the status is displayed on the page); 400 - brute force cracking event for non-existent accounts.
                     * 
                     */
                    void SetEventType(const uint64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Occurrence count
                     * @return Count Occurrence count
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Occurrence count
                     * @param _count Occurrence count
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取CVM instance UUID.
                     * @return Quuid CVM instance UUID.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置CVM instance UUID.
                     * @param _quuid CVM instance UUID.
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
                     * 获取Whether it is the Pro Edition (true/false)
                     * @return IsProVersion Whether it is the Pro Edition (true/false)
                     * 
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置Whether it is the Pro Edition (true/false)
                     * @param _isProVersion Whether it is the Pro Edition (true/false)
                     * 
                     */
                    void SetIsProVersion(const bool& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     * 
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取Username of the attacked service
                     * @return Protocol Username of the attacked service
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Username of the attacked service
                     * @param _protocol Username of the attacked service
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Port
                     * @return Port Port
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port
                     * @param _port Port
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Last attack time
                     * @return ModifyTime Last attack time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last attack time
                     * @param _modifyTime Last attack time
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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取0: pending; 1: ignored; 5: fixed; 6: added to allowlist
                     * @return DataStatus 0: pending; 1: ignored; 5: fixed; 6: added to allowlist
                     * 
                     */
                    uint64_t GetDataStatus() const;

                    /**
                     * 设置0: pending; 1: ignored; 5: fixed; 6: added to allowlist
                     * @param _dataStatus 0: pending; 1: ignored; 5: fixed; 6: added to allowlist
                     * 
                     */
                    void SetDataStatus(const uint64_t& _dataStatus);

                    /**
                     * 判断参数 DataStatus 是否已赋值
                     * @return DataStatus 是否已赋值
                     * 
                     */
                    bool DataStatusHasBeenSet() const;

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
                     * 获取Chinese name of a geo location.
                     * @return Location Chinese name of a geo location.
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Chinese name of a geo location.
                     * @param _location Chinese name of a geo location.
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
                     * 获取Threat level. 0: low risk, 1: medium risk, 2: high risk.
                     * @return RiskLevel Threat level. 0: low risk, 1: medium risk, 2: high risk.
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置Threat level. 0: low risk, 1: medium risk, 2: high risk.
                     * @param _riskLevel Threat level. 0: low risk, 1: medium risk, 2: high risk.
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
                     * 获取Event source. 0: blocking rule, 1: threat intelligence.
                     * @return DataFrom Event source. 0: blocking rule, 1: threat intelligence.
                     * 
                     */
                    int64_t GetDataFrom() const;

                    /**
                     * 设置Event source. 0: blocking rule, 1: threat intelligence.
                     * @param _dataFrom Event source. 0: blocking rule, 1: threat intelligence.
                     * 
                     */
                    void SetDataFrom(const int64_t& _dataFrom);

                    /**
                     * 判断参数 DataFrom 是否已赋值
                     * @return DataFrom 是否已赋值
                     * 
                     */
                    bool DataFromHasBeenSet() const;

                    /**
                     * 获取Cracking status description.
                     * @return AttackStatusDesc Cracking status description.
                     * 
                     */
                    std::string GetAttackStatusDesc() const;

                    /**
                     * 设置Cracking status description.
                     * @param _attackStatusDesc Cracking status description.
                     * 
                     */
                    void SetAttackStatusDesc(const std::string& _attackStatusDesc);

                    /**
                     * 判断参数 AttackStatusDesc 是否已赋值
                     * @return AttackStatusDesc 是否已赋值
                     * 
                     */
                    bool AttackStatusDescHasBeenSet() const;

                    /**
                     * 获取Block expiration time (only valid for blocked events).
                     * @return BanExpiredTime Block expiration time (only valid for blocked events).
                     * 
                     */
                    std::string GetBanExpiredTime() const;

                    /**
                     * 设置Block expiration time (only valid for blocked events).
                     * @param _banExpiredTime Block expiration time (only valid for blocked events).
                     * 
                     */
                    void SetBanExpiredTime(const std::string& _banExpiredTime);

                    /**
                     * 判断参数 BanExpiredTime 是否已赋值
                     * @return BanExpiredTime 是否已赋值
                     * 
                     */
                    bool BanExpiredTimeHasBeenSet() const;

                    /**
                     * 获取IP analysis
                     * @return IPAnalyse IP analysis
                     * 
                     */
                    IPAnalyse GetIPAnalyse() const;

                    /**
                     * 设置IP analysis
                     * @param _iPAnalyse IP analysis
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
                     * Unique ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CWP client UUID.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host IP address
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * host name
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
                     * SUCCESS: cracking successful; FAILED: cracking failed
                     */
                    std::string m_status;
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
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 0 - No blocking (not supported by the client version)
1: blocked
2: Blocking failed (program exception)
3: No blocking (No blocking for the private network)
4: Availability zone does not support blocking
10: blocking
81: no blocking (blocking disabled)
82-No Blocking (Non-Pro Edition)
83: no blocking (added to the allowlist)
86: no blocking (system allowlist)
87: No blocking (client offline)
88-No blocking (Source Ip belongs to the same customer)
89: no blocking (blocking is not supported for ipv6)
                     */
                    uint64_t m_banStatus;
                    bool m_banStatusHasBeenSet;

                    /**
                     * Event type: 200 - brute force cracking event; 300 - successful brute force cracking event (the status is displayed on the page); 400 - brute force cracking event for non-existent accounts.
                     */
                    uint64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Occurrence count
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * CVM instance UUID.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Whether it is the Pro Edition (true/false)
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * Username of the attacked service
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Last attack time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 0: pending; 1: ignored; 5: fixed; 6: added to allowlist
                     */
                    uint64_t m_dataStatus;
                    bool m_dataStatusHasBeenSet;

                    /**
                     * Additional information
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Chinese name of a geo location.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Threat level. 0: low risk, 1: medium risk, 2: high risk.
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Event source. 0: blocking rule, 1: threat intelligence.
                     */
                    int64_t m_dataFrom;
                    bool m_dataFromHasBeenSet;

                    /**
                     * Cracking status description.
                     */
                    std::string m_attackStatusDesc;
                    bool m_attackStatusDescHasBeenSet;

                    /**
                     * Block expiration time (only valid for blocked events).
                     */
                    std::string m_banExpiredTime;
                    bool m_banExpiredTimeHasBeenSet;

                    /**
                     * IP analysis
                     */
                    IPAnalyse m_iPAnalyse;
                    bool m_iPAnalyseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKINFO_H_
