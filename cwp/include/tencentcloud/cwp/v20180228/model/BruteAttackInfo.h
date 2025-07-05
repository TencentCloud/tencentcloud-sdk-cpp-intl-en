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
                     * 获取CWPP client UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uuid CWPP client UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWPP client UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uuid CWPP client UUID
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
                     * 获取Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineIp Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineIp Host IP address
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
                     * 获取Source IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcIp Source IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Source IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcIp Source IP address
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
                     * 获取SUCCESS: cracking successful; FAILED: cracking failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status SUCCESS: cracking successful; FAILED: cracking failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置SUCCESS: cracking successful; FAILED: cracking failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status SUCCESS: cracking successful; FAILED: cracking failed
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取0: no blocking (not supported for the client version)1: blocked
2: blocking failed (program exception)
3: no blocking (do not block for the private network)
4: availability zone does not support blocking
10: blocking
81: no blocking (blocking disabled)
82: no blocking (non-Pro Edition)
83: no blocking (added to the allowlist)
86: no blocking (system allowlist)
87: no blocking (client offline)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BanStatus 0: no blocking (not supported for the client version)1: blocked
2: blocking failed (program exception)
3: no blocking (do not block for the private network)
4: availability zone does not support blocking
10: blocking
81: no blocking (blocking disabled)
82: no blocking (non-Pro Edition)
83: no blocking (added to the allowlist)
86: no blocking (system allowlist)
87: no blocking (client offline)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetBanStatus() const;

                    /**
                     * 设置0: no blocking (not supported for the client version)1: blocked
2: blocking failed (program exception)
3: no blocking (do not block for the private network)
4: availability zone does not support blocking
10: blocking
81: no blocking (blocking disabled)
82: no blocking (non-Pro Edition)
83: no blocking (added to the allowlist)
86: no blocking (system allowlist)
87: no blocking (client offline)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _banStatus 0: no blocking (not supported for the client version)1: blocked
2: blocking failed (program exception)
3: no blocking (do not block for the private network)
4: availability zone does not support blocking
10: blocking
81: no blocking (blocking disabled)
82: no blocking (non-Pro Edition)
83: no blocking (added to the allowlist)
86: no blocking (system allowlist)
87: no blocking (client offline)
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Event type. 200: brute force cracking event; 300: event of successful brute force cracking (page display); 400: event of brute force cracking on a non-existent account.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventType Event type. 200: brute force cracking event; 300: event of successful brute force cracking (page display); 400: event of brute force cracking on a non-existent account.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEventType() const;

                    /**
                     * 设置Event type. 200: brute force cracking event; 300: event of successful brute force cracking (page display); 400: event of brute force cracking on a non-existent account.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventType Event type. 200: brute force cracking event; 300: event of successful brute force cracking (page display); 400: event of brute force cracking on a non-existent account.Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Count Occurrence count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Occurrence count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _count Occurrence count
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Machine UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuid Machine UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Machine UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuid Machine UUID
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
                     * 获取Whether it is of the Pro Edition (true/false)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsProVersion Whether it is of the Pro Edition (true/false)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置Whether it is of the Pro Edition (true/false)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isProVersion Whether it is of the Pro Edition (true/false)
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Username of the attacked service
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Username of the attacked service
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Username of the attacked service
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port Port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port Port
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Last attack time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last attack time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Last attack time
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
                     * 获取Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataStatus 0: pending; 1: ignored; 5: fixed; 6: added to allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDataStatus() const;

                    /**
                     * 设置0: pending; 1: ignored; 5: fixed; 6: added to allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataStatus 0: pending; 1: ignored; 5: fixed; 6: added to allowlist
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Geo-location in Chinese
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Location Geo-location in Chinese
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Geo-location in Chinese
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _location Geo-location in Chinese
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
                     * 获取Threat level. 0: low-risk; 1: medium-risk; 2: high-risk.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskLevel Threat level. 0: low-risk; 1: medium-risk; 2: high-risk.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置Threat level. 0: low-risk; 1: medium-risk; 2: high-risk.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _riskLevel Threat level. 0: low-risk; 1: medium-risk; 2: high-risk.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Event source. 0: blocking rule; 1: threat intelligence.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataFrom Event source. 0: blocking rule; 1: threat intelligence.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDataFrom() const;

                    /**
                     * 设置Event source. 0: blocking rule; 1: threat intelligence.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataFrom Event source. 0: blocking rule; 1: threat intelligence.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Description of the brute force cracking status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackStatusDesc Description of the brute force cracking status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAttackStatusDesc() const;

                    /**
                     * 设置Description of the brute force cracking status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackStatusDesc Description of the brute force cracking status
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Blocking expiration time (valid only for events in blocking status)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BanExpiredTime Blocking expiration time (valid only for events in blocking status)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBanExpiredTime() const;

                    /**
                     * 设置Blocking expiration time (valid only for events in blocking status)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _banExpiredTime Blocking expiration time (valid only for events in blocking status)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBanExpiredTime(const std::string& _banExpiredTime);

                    /**
                     * 判断参数 BanExpiredTime 是否已赋值
                     * @return BanExpiredTime 是否已赋值
                     * 
                     */
                    bool BanExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * Unique ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CWPP client UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host IP address
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
                     * Source IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * SUCCESS: cracking successful; FAILED: cracking failed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
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
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 0: no blocking (not supported for the client version)1: blocked
2: blocking failed (program exception)
3: no blocking (do not block for the private network)
4: availability zone does not support blocking
10: blocking
81: no blocking (blocking disabled)
82: no blocking (non-Pro Edition)
83: no blocking (added to the allowlist)
86: no blocking (system allowlist)
87: no blocking (client offline)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_banStatus;
                    bool m_banStatusHasBeenSet;

                    /**
                     * Event type. 200: brute force cracking event; 300: event of successful brute force cracking (page display); 400: event of brute force cracking on a non-existent account.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Occurrence count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Machine UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Whether it is of the Pro Edition (true/false)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * Username of the attacked service
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Last attack time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 0: pending; 1: ignored; 5: fixed; 6: added to allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_dataStatus;
                    bool m_dataStatusHasBeenSet;

                    /**
                     * Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Geo-location in Chinese
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Threat level. 0: low-risk; 1: medium-risk; 2: high-risk.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Event source. 0: blocking rule; 1: threat intelligence.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dataFrom;
                    bool m_dataFromHasBeenSet;

                    /**
                     * Description of the brute force cracking status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackStatusDesc;
                    bool m_attackStatusDescHasBeenSet;

                    /**
                     * Blocking expiration time (valid only for events in blocking status)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_banExpiredTime;
                    bool m_banExpiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKINFO_H_
