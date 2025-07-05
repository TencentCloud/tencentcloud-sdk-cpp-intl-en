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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/GameProperty.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * Game session details
                */
                class GameServerSession : public AbstractModel
                {
                public:
                    GameServerSession();
                    ~GameServerSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Game server session creation time
                     * @return CreationTime Game server session creation time
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Game server session creation time
                     * @param _creationTime Game server session creation time
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取Creator ID. Up to 1024 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return CreatorId Creator ID. Up to 1024 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置Creator ID. Up to 1024 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _creatorId Creator ID. Up to 1024 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取The current number of players, which cannot be less than 0.
                     * @return CurrentPlayerSessionCount The current number of players, which cannot be less than 0.
                     * 
                     */
                    uint64_t GetCurrentPlayerSessionCount() const;

                    /**
                     * 设置The current number of players, which cannot be less than 0.
                     * @param _currentPlayerSessionCount The current number of players, which cannot be less than 0.
                     * 
                     */
                    void SetCurrentPlayerSessionCount(const uint64_t& _currentPlayerSessionCount);

                    /**
                     * 判断参数 CurrentPlayerSessionCount 是否已赋值
                     * @return CurrentPlayerSessionCount 是否已赋值
                     * 
                     */
                    bool CurrentPlayerSessionCountHasBeenSet() const;

                    /**
                     * 获取CVM DNS ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DnsName CVM DNS ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDnsName() const;

                    /**
                     * 设置CVM DNS ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _dnsName CVM DNS ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDnsName(const std::string& _dnsName);

                    /**
                     * 判断参数 DnsName 是否已赋值
                     * @return DnsName 是否已赋值
                     * 
                     */
                    bool DnsNameHasBeenSet() const;

                    /**
                     * 获取Fleet ID
                     * @return FleetId Fleet ID
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置Fleet ID
                     * @param _fleetId Fleet ID
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取Game attributes. Up to 16 groups of attributes are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return GameProperties Game attributes. Up to 16 groups of attributes are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<GameProperty> GetGameProperties() const;

                    /**
                     * 设置Game attributes. Up to 16 groups of attributes are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _gameProperties Game attributes. Up to 16 groups of attributes are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetGameProperties(const std::vector<GameProperty>& _gameProperties);

                    /**
                     * 判断参数 GameProperties 是否已赋值
                     * @return GameProperties 是否已赋值
                     * 
                     */
                    bool GamePropertiesHasBeenSet() const;

                    /**
                     * 获取The attribute details of game server session. Up to 4096 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return GameServerSessionData The attribute details of game server session. Up to 4096 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetGameServerSessionData() const;

                    /**
                     * 设置The attribute details of game server session. Up to 4096 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _gameServerSessionData The attribute details of game server session. Up to 4096 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetGameServerSessionData(const std::string& _gameServerSessionData);

                    /**
                     * 判断参数 GameServerSessionData 是否已赋值
                     * @return GameServerSessionData 是否已赋值
                     * 
                     */
                    bool GameServerSessionDataHasBeenSet() const;

                    /**
                     * 获取Game server session ID. It should contain 1 to 48 ASCII characters.
                     * @return GameServerSessionId Game server session ID. It should contain 1 to 48 ASCII characters.
                     * 
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置Game server session ID. It should contain 1 to 48 ASCII characters.
                     * @param _gameServerSessionId Game server session ID. It should contain 1 to 48 ASCII characters.
                     * 
                     */
                    void SetGameServerSessionId(const std::string& _gameServerSessionId);

                    /**
                     * 判断参数 GameServerSessionId 是否已赋值
                     * @return GameServerSessionId 是否已赋值
                     * 
                     */
                    bool GameServerSessionIdHasBeenSet() const;

                    /**
                     * 获取CVM IP address
                     * @return IpAddress CVM IP address
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置CVM IP address
                     * @param _ipAddress CVM IP address
                     * 
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取Battle progress details. Up to 400,000 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return MatchmakerData Battle progress details. Up to 400,000 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetMatchmakerData() const;

                    /**
                     * 设置Battle progress details. Up to 400,000 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _matchmakerData Battle progress details. Up to 400,000 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetMatchmakerData(const std::string& _matchmakerData);

                    /**
                     * 判断参数 MatchmakerData 是否已赋值
                     * @return MatchmakerData 是否已赋值
                     * 
                     */
                    bool MatchmakerDataHasBeenSet() const;

                    /**
                     * 获取The maximum number of players, which cannot be less than 0.
                     * @return MaximumPlayerSessionCount The maximum number of players, which cannot be less than 0.
                     * 
                     */
                    uint64_t GetMaximumPlayerSessionCount() const;

                    /**
                     * 设置The maximum number of players, which cannot be less than 0.
                     * @param _maximumPlayerSessionCount The maximum number of players, which cannot be less than 0.
                     * 
                     */
                    void SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount);

                    /**
                     * 判断参数 MaximumPlayerSessionCount 是否已赋值
                     * @return MaximumPlayerSessionCount 是否已赋值
                     * 
                     */
                    bool MaximumPlayerSessionCountHasBeenSet() const;

                    /**
                     * 获取The name of game server session. Up to 1024 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Name The name of game server session. Up to 1024 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name of game server session. Up to 1024 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _name The name of game server session. Up to 1024 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
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
                     * 获取Player session creation policy. Valid values: ACCEPT_ALL, DENY_ALL
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return PlayerSessionCreationPolicy Player session creation policy. Valid values: ACCEPT_ALL, DENY_ALL
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetPlayerSessionCreationPolicy() const;

                    /**
                     * 设置Player session creation policy. Valid values: ACCEPT_ALL, DENY_ALL
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _playerSessionCreationPolicy Player session creation policy. Valid values: ACCEPT_ALL, DENY_ALL
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetPlayerSessionCreationPolicy(const std::string& _playerSessionCreationPolicy);

                    /**
                     * 判断参数 PlayerSessionCreationPolicy 是否已赋值
                     * @return PlayerSessionCreationPolicy 是否已赋值
                     * 
                     */
                    bool PlayerSessionCreationPolicyHasBeenSet() const;

                    /**
                     * 获取Port number. It should be a value between 1 to 60000.
                     * @return Port Port number. It should be a value between 1 to 60000.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port number. It should be a value between 1 to 60000.
                     * @param _port Port number. It should be a value between 1 to 60000.
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
                     * 获取Game server session status. Valid values: ACTIVE, ACTIVATING, TERMINATED, TERMINATING, ERROR
                     * @return Status Game server session status. Valid values: ACTIVE, ACTIVATING, TERMINATED, TERMINATING, ERROR
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Game server session status. Valid values: ACTIVE, ACTIVATING, TERMINATED, TERMINATING, ERROR
                     * @param _status Game server session status. Valid values: ACTIVE, ACTIVATING, TERMINATED, TERMINATING, ERROR
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
                     * 获取Additional information of game server session status
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StatusReason Additional information of game server session status
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusReason() const;

                    /**
                     * 设置Additional information of game server session status
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _statusReason Additional information of game server session status
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusReason(const std::string& _statusReason);

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

                    /**
                     * 获取Termination time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TerminationTime Termination time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTerminationTime() const;

                    /**
                     * 设置Termination time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _terminationTime Termination time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTerminationTime(const std::string& _terminationTime);

                    /**
                     * 判断参数 TerminationTime 是否已赋值
                     * @return TerminationTime 是否已赋值
                     * 
                     */
                    bool TerminationTimeHasBeenSet() const;

                    /**
                     * 获取Instance type. Up to 128 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return InstanceType Instance type. Up to 128 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type. Up to 128 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _instanceType Instance type. Up to 128 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
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
                     * 获取Current custom count
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CurrentCustomCount Current custom count
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCurrentCustomCount() const;

                    /**
                     * 设置Current custom count
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _currentCustomCount Current custom count
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCurrentCustomCount(const int64_t& _currentCustomCount);

                    /**
                     * 判断参数 CurrentCustomCount 是否已赋值
                     * @return CurrentCustomCount 是否已赋值
                     * 
                     */
                    bool CurrentCustomCountHasBeenSet() const;

                    /**
                     * 获取Maximum custom count
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxCustomCount Maximum custom count
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxCustomCount() const;

                    /**
                     * 设置Maximum custom count
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxCustomCount Maximum custom count
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxCustomCount(const int64_t& _maxCustomCount);

                    /**
                     * 判断参数 MaxCustomCount 是否已赋值
                     * @return MaxCustomCount 是否已赋值
                     * 
                     */
                    bool MaxCustomCountHasBeenSet() const;

                    /**
                     * 获取Weight
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Weight Weight
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Weight
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _weight Weight
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Session availability status, i.e., whether it is blocked. Valid value: Enable, Disable
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return AvailabilityStatus Session availability status, i.e., whether it is blocked. Valid value: Enable, Disable
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetAvailabilityStatus() const;

                    /**
                     * 设置Session availability status, i.e., whether it is blocked. Valid value: Enable, Disable
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _availabilityStatus Session availability status, i.e., whether it is blocked. Valid value: Enable, Disable
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetAvailabilityStatus(const std::string& _availabilityStatus);

                    /**
                     * 判断参数 AvailabilityStatus 是否已赋值
                     * @return AvailabilityStatus 是否已赋值
                     * 
                     */
                    bool AvailabilityStatusHasBeenSet() const;

                private:

                    /**
                     * Game server session creation time
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Creator ID. Up to 1024 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * The current number of players, which cannot be less than 0.
                     */
                    uint64_t m_currentPlayerSessionCount;
                    bool m_currentPlayerSessionCountHasBeenSet;

                    /**
                     * CVM DNS ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dnsName;
                    bool m_dnsNameHasBeenSet;

                    /**
                     * Fleet ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * Game attributes. Up to 16 groups of attributes are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<GameProperty> m_gameProperties;
                    bool m_gamePropertiesHasBeenSet;

                    /**
                     * The attribute details of game server session. Up to 4096 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_gameServerSessionData;
                    bool m_gameServerSessionDataHasBeenSet;

                    /**
                     * Game server session ID. It should contain 1 to 48 ASCII characters.
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * CVM IP address
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * Battle progress details. Up to 400,000 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_matchmakerData;
                    bool m_matchmakerDataHasBeenSet;

                    /**
                     * The maximum number of players, which cannot be less than 0.
                     */
                    uint64_t m_maximumPlayerSessionCount;
                    bool m_maximumPlayerSessionCountHasBeenSet;

                    /**
                     * The name of game server session. Up to 1024 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Player session creation policy. Valid values: ACCEPT_ALL, DENY_ALL
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_playerSessionCreationPolicy;
                    bool m_playerSessionCreationPolicyHasBeenSet;

                    /**
                     * Port number. It should be a value between 1 to 60000.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Game server session status. Valid values: ACTIVE, ACTIVATING, TERMINATED, TERMINATING, ERROR
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Additional information of game server session status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusReason;
                    bool m_statusReasonHasBeenSet;

                    /**
                     * Termination time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_terminationTime;
                    bool m_terminationTimeHasBeenSet;

                    /**
                     * Instance type. Up to 128 ASCII characters are allowed.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Current custom count
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_currentCustomCount;
                    bool m_currentCustomCountHasBeenSet;

                    /**
                     * Maximum custom count
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxCustomCount;
                    bool m_maxCustomCountHasBeenSet;

                    /**
                     * Weight
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Session availability status, i.e., whether it is blocked. Valid value: Enable, Disable
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_availabilityStatus;
                    bool m_availabilityStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSION_H_
