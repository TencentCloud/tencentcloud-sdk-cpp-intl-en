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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERBASEINFO_H_

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
                * Resource management account basic information
                */
                class AssetUserBaseInfo : public AbstractModel
                {
                public:
                    AssetUserBaseInfo();
                    ~AssetUserBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host private IP address
                     * @return MachineIp Host private IP address
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Host private IP address
                     * @param _machineIp Host private IP address
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
                     * 获取Host public IP address
                     * @return MachineWanIp Host public IP address
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Host public IP address
                     * @param _machineWanIp Host public IP address
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

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
                     * 获取Operating System Information
                     * @return OsInfo Operating System Information
                     * 
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置Operating System Information
                     * @param _osInfo Operating System Information
                     * 
                     */
                    void SetOsInfo(const std::string& _osInfo);

                    /**
                     * 判断参数 OsInfo 是否已赋值
                     * @return OsInfo 是否已赋值
                     * 
                     */
                    bool OsInfoHasBeenSet() const;

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
                     * 获取Account UID
                     * @return Uid Account UID
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置Account UID
                     * @param _uid Account UID
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取Account GID
                     * @return Gid Account GID
                     * 
                     */
                    std::string GetGid() const;

                    /**
                     * 设置Account GID
                     * @param _gid Account GID
                     * 
                     */
                    void SetGid(const std::string& _gid);

                    /**
                     * 判断参数 Gid 是否已赋值
                     * @return Gid 是否已赋值
                     * 
                     */
                    bool GidHasBeenSet() const;

                    /**
                     * 获取Account status. 0: disabled; 1: enabled
                     * @return Status Account status. 0: disabled; 1: enabled
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Account status. 0: disabled; 1: enabled
                     * @param _status Account status. 0: disabled; 1: enabled
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
                     * 获取Whether there is root permission. 0: no; 1: yes; 999: null (Linux only)
                     * @return IsRoot Whether there is root permission. 0: no; 1: yes; 999: null (Linux only)
                     * 
                     */
                    uint64_t GetIsRoot() const;

                    /**
                     * 设置Whether there is root permission. 0: no; 1: yes; 999: null (Linux only)
                     * @param _isRoot Whether there is root permission. 0: no; 1: yes; 999: null (Linux only)
                     * 
                     */
                    void SetIsRoot(const uint64_t& _isRoot);

                    /**
                     * 判断参数 IsRoot 是否已赋值
                     * @return IsRoot 是否已赋值
                     * 
                     */
                    bool IsRootHasBeenSet() const;

                    /**
                     * 获取Log-in method. 0: log-in not allowed; 1: only key-based log-in allowed; 2: only password-based log-in allowed; 3: both key-based log-in and password-based log-in allowed; 999: null (Linux only)
                     * @return LoginType Log-in method. 0: log-in not allowed; 1: only key-based log-in allowed; 2: only password-based log-in allowed; 3: both key-based log-in and password-based log-in allowed; 999: null (Linux only)
                     * 
                     */
                    uint64_t GetLoginType() const;

                    /**
                     * 设置Log-in method. 0: log-in not allowed; 1: only key-based log-in allowed; 2: only password-based log-in allowed; 3: both key-based log-in and password-based log-in allowed; 999: null (Linux only)
                     * @param _loginType Log-in method. 0: log-in not allowed; 1: only key-based log-in allowed; 2: only password-based log-in allowed; 3: both key-based log-in and password-based log-in allowed; 999: null (Linux only)
                     * 
                     */
                    void SetLoginType(const uint64_t& _loginType);

                    /**
                     * 判断参数 LoginType 是否已赋值
                     * @return LoginType 是否已赋值
                     * 
                     */
                    bool LoginTypeHasBeenSet() const;

                    /**
                     * 获取Last log-in time
                     * @return LastLoginTime Last log-in time
                     * 
                     */
                    std::string GetLastLoginTime() const;

                    /**
                     * 设置Last log-in time
                     * @param _lastLoginTime Last log-in time
                     * 
                     */
                    void SetLastLoginTime(const std::string& _lastLoginTime);

                    /**
                     * 判断参数 LastLoginTime 是否已赋值
                     * @return LastLoginTime 是否已赋值
                     * 
                     */
                    bool LastLoginTimeHasBeenSet() const;

                    /**
                     * 获取Account name
                     * @return Name Account name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Account name
                     * @param _name Account name
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
                     * 获取Host business group ID
                     * @return ProjectId Host business group ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Host business group ID
                     * @param _projectId Host business group ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Account type. 0: guest user; 1: standard user; 2: administrator user; 999: null (Windows only)
                     * @return UserType Account type. 0: guest user; 1: standard user; 2: administrator user; 999: null (Windows only)
                     * 
                     */
                    uint64_t GetUserType() const;

                    /**
                     * 设置Account type. 0: guest user; 1: standard user; 2: administrator user; 999: null (Windows only)
                     * @param _userType Account type. 0: guest user; 1: standard user; 2: administrator user; 999: null (Windows only)
                     * 
                     */
                    void SetUserType(const uint64_t& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取Whether a domain account. 0: no; 1: yes; 2: no; 999: null (Windows only)
                     * @return IsDomain Whether a domain account. 0: no; 1: yes; 2: no; 999: null (Windows only)
                     * 
                     */
                    uint64_t GetIsDomain() const;

                    /**
                     * 设置Whether a domain account. 0: no; 1: yes; 2: no; 999: null (Windows only)
                     * @param _isDomain Whether a domain account. 0: no; 1: yes; 2: no; 999: null (Windows only)
                     * 
                     */
                    void SetIsDomain(const uint64_t& _isDomain);

                    /**
                     * 判断参数 IsDomain 是否已赋值
                     * @return IsDomain 是否已赋值
                     * 
                     */
                    bool IsDomainHasBeenSet() const;

                    /**
                     * 获取Whether there is sudo permissions: 1: yes; 0: No; 999: null (Linux only)
                     * @return IsSudo Whether there is sudo permissions: 1: yes; 0: No; 999: null (Linux only)
                     * 
                     */
                    uint64_t GetIsSudo() const;

                    /**
                     * 设置Whether there is sudo permissions: 1: yes; 0: No; 999: null (Linux only)
                     * @param _isSudo Whether there is sudo permissions: 1: yes; 0: No; 999: null (Linux only)
                     * 
                     */
                    void SetIsSudo(const uint64_t& _isSudo);

                    /**
                     * 判断参数 IsSudo 是否已赋值
                     * @return IsSudo 是否已赋值
                     * 
                     */
                    bool IsSudoHasBeenSet() const;

                    /**
                     * 获取Whether ssh log-in allowed. 1: yes; 0: no; 999: null (Linux only)
                     * @return IsSshLogin Whether ssh log-in allowed. 1: yes; 0: no; 999: null (Linux only)
                     * 
                     */
                    uint64_t GetIsSshLogin() const;

                    /**
                     * 设置Whether ssh log-in allowed. 1: yes; 0: no; 999: null (Linux only)
                     * @param _isSshLogin Whether ssh log-in allowed. 1: yes; 0: no; 999: null (Linux only)
                     * 
                     */
                    void SetIsSshLogin(const uint64_t& _isSshLogin);

                    /**
                     * 判断参数 IsSshLogin 是否已赋值
                     * @return IsSshLogin 是否已赋值
                     * 
                     */
                    bool IsSshLoginHasBeenSet() const;

                    /**
                     * 获取Home directory
                     * @return HomePath Home directory
                     * 
                     */
                    std::string GetHomePath() const;

                    /**
                     * 设置Home directory
                     * @param _homePath Home directory
                     * 
                     */
                    void SetHomePath(const std::string& _homePath);

                    /**
                     * 判断参数 HomePath 是否已赋值
                     * @return HomePath 是否已赋值
                     * 
                     */
                    bool HomePathHasBeenSet() const;

                    /**
                     * 获取Shell path (Linux only)
                     * @return Shell Shell path (Linux only)
                     * 
                     */
                    std::string GetShell() const;

                    /**
                     * 设置Shell path (Linux only)
                     * @param _shell Shell path (Linux only)
                     * 
                     */
                    void SetShell(const std::string& _shell);

                    /**
                     * 判断参数 Shell 是否已赋值
                     * @return Shell 是否已赋值
                     * 
                     */
                    bool ShellHasBeenSet() const;

                    /**
                     * 获取Whether shell log-in allowed. 0: no; 1: yes (Linux only)
                     * @return ShellLoginStatus Whether shell log-in allowed. 0: no; 1: yes (Linux only)
                     * 
                     */
                    uint64_t GetShellLoginStatus() const;

                    /**
                     * 设置Whether shell log-in allowed. 0: no; 1: yes (Linux only)
                     * @param _shellLoginStatus Whether shell log-in allowed. 0: no; 1: yes (Linux only)
                     * 
                     */
                    void SetShellLoginStatus(const uint64_t& _shellLoginStatus);

                    /**
                     * 判断参数 ShellLoginStatus 是否已赋值
                     * @return ShellLoginStatus 是否已赋值
                     * 
                     */
                    bool ShellLoginStatusHasBeenSet() const;

                    /**
                     * 获取Password modification time
                     * @return PasswordChangeTime Password modification time
                     * 
                     */
                    std::string GetPasswordChangeTime() const;

                    /**
                     * 设置Password modification time
                     * @param _passwordChangeTime Password modification time
                     * 
                     */
                    void SetPasswordChangeTime(const std::string& _passwordChangeTime);

                    /**
                     * 判断参数 PasswordChangeTime 是否已赋值
                     * @return PasswordChangeTime 是否已赋值
                     * 
                     */
                    bool PasswordChangeTimeHasBeenSet() const;

                    /**
                     * 获取Password expiration time (Linux only)
                     * @return PasswordDueTime Password expiration time (Linux only)
                     * 
                     */
                    std::string GetPasswordDueTime() const;

                    /**
                     * 设置Password expiration time (Linux only)
                     * @param _passwordDueTime Password expiration time (Linux only)
                     * 
                     */
                    void SetPasswordDueTime(const std::string& _passwordDueTime);

                    /**
                     * 判断参数 PasswordDueTime 是否已赋值
                     * @return PasswordDueTime 是否已赋值
                     * 
                     */
                    bool PasswordDueTimeHasBeenSet() const;

                    /**
                     * 获取Password locking time (unit: day): -1 - never locked; 999 - null (Linux only)
                     * @return PasswordLockDays Password locking time (unit: day): -1 - never locked; 999 - null (Linux only)
                     * 
                     */
                    int64_t GetPasswordLockDays() const;

                    /**
                     * 设置Password locking time (unit: day): -1 - never locked; 999 - null (Linux only)
                     * @param _passwordLockDays Password locking time (unit: day): -1 - never locked; 999 - null (Linux only)
                     * 
                     */
                    void SetPasswordLockDays(const int64_t& _passwordLockDays);

                    /**
                     * 判断参数 PasswordLockDays 是否已赋值
                     * @return PasswordLockDays 是否已赋值
                     * 
                     */
                    bool PasswordLockDaysHasBeenSet() const;

                    /**
                     * 获取Password status: 1 - normal; 2 - expiring soon; 3 - expired; 4 - locked; 999 - null (Linux only)
                     * @return PasswordStatus Password status: 1 - normal; 2 - expiring soon; 3 - expired; 4 - locked; 999 - null (Linux only)
                     * 
                     */
                    int64_t GetPasswordStatus() const;

                    /**
                     * 设置Password status: 1 - normal; 2 - expiring soon; 3 - expired; 4 - locked; 999 - null (Linux only)
                     * @param _passwordStatus Password status: 1 - normal; 2 - expiring soon; 3 - expired; 4 - locked; 999 - null (Linux only)
                     * 
                     */
                    void SetPasswordStatus(const int64_t& _passwordStatus);

                    /**
                     * 判断参数 PasswordStatus 是否已赋值
                     * @return PasswordStatus 是否已赋值
                     * 
                     */
                    bool PasswordStatusHasBeenSet() const;

                    /**
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取First collection time
                     * @return FirstTime First collection time
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置First collection time
                     * @param _firstTime First collection time
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取Whether new [0: no|1: yes]
                     * @return IsNew Whether new [0: no|1: yes]
                     * 
                     */
                    int64_t GetIsNew() const;

                    /**
                     * 设置Whether new [0: no|1: yes]
                     * @param _isNew Whether new [0: no|1: yes]
                     * 
                     */
                    void SetIsNew(const int64_t& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

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

                private:

                    /**
                     * Host private IP address
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Host public IP address
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Operating System Information
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Account UID
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Account GID
                     */
                    std::string m_gid;
                    bool m_gidHasBeenSet;

                    /**
                     * Account status. 0: disabled; 1: enabled
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether there is root permission. 0: no; 1: yes; 999: null (Linux only)
                     */
                    uint64_t m_isRoot;
                    bool m_isRootHasBeenSet;

                    /**
                     * Log-in method. 0: log-in not allowed; 1: only key-based log-in allowed; 2: only password-based log-in allowed; 3: both key-based log-in and password-based log-in allowed; 999: null (Linux only)
                     */
                    uint64_t m_loginType;
                    bool m_loginTypeHasBeenSet;

                    /**
                     * Last log-in time
                     */
                    std::string m_lastLoginTime;
                    bool m_lastLoginTimeHasBeenSet;

                    /**
                     * Account name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Host business group ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Account type. 0: guest user; 1: standard user; 2: administrator user; 999: null (Windows only)
                     */
                    uint64_t m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * Whether a domain account. 0: no; 1: yes; 2: no; 999: null (Windows only)
                     */
                    uint64_t m_isDomain;
                    bool m_isDomainHasBeenSet;

                    /**
                     * Whether there is sudo permissions: 1: yes; 0: No; 999: null (Linux only)
                     */
                    uint64_t m_isSudo;
                    bool m_isSudoHasBeenSet;

                    /**
                     * Whether ssh log-in allowed. 1: yes; 0: no; 999: null (Linux only)
                     */
                    uint64_t m_isSshLogin;
                    bool m_isSshLoginHasBeenSet;

                    /**
                     * Home directory
                     */
                    std::string m_homePath;
                    bool m_homePathHasBeenSet;

                    /**
                     * Shell path (Linux only)
                     */
                    std::string m_shell;
                    bool m_shellHasBeenSet;

                    /**
                     * Whether shell log-in allowed. 0: no; 1: yes (Linux only)
                     */
                    uint64_t m_shellLoginStatus;
                    bool m_shellLoginStatusHasBeenSet;

                    /**
                     * Password modification time
                     */
                    std::string m_passwordChangeTime;
                    bool m_passwordChangeTimeHasBeenSet;

                    /**
                     * Password expiration time (Linux only)
                     */
                    std::string m_passwordDueTime;
                    bool m_passwordDueTimeHasBeenSet;

                    /**
                     * Password locking time (unit: day): -1 - never locked; 999 - null (Linux only)
                     */
                    int64_t m_passwordLockDays;
                    bool m_passwordLockDaysHasBeenSet;

                    /**
                     * Password status: 1 - normal; 2 - expiring soon; 3 - expired; 4 - locked; 999 - null (Linux only)
                     */
                    int64_t m_passwordStatus;
                    bool m_passwordStatusHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * First collection time
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Whether new [0: no|1: yes]
                     */
                    int64_t m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERBASEINFO_H_
