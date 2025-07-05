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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPROCESSBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPROCESSBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>
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
                * Basic information on the resource management process
                */
                class AssetProcessBaseInfo : public AbstractModel
                {
                public:
                    AssetProcessBaseInfo();
                    ~AssetProcessBaseInfo() = default;
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
                     * 获取Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tag Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tag Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTag(const std::vector<MachineTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Process name
                     * @return Name Process name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Process name
                     * @param _name Process name
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
                     * 获取Process description
                     * @return Desc Process description
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Process description
                     * @param _desc Process description
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
                     * 获取Process path
                     * @return Path Process path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Process path
                     * @param _path Process path
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Process ID
                     * @return Pid Process ID
                     * 
                     */
                    std::string GetPid() const;

                    /**
                     * 设置Process ID
                     * @param _pid Process ID
                     * 
                     */
                    void SetPid(const std::string& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Running user
                     * @return User Running user
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Running user
                     * @param _user Running user
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Startup time
                     * @return StartTime Startup time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Startup time
                     * @param _startTime Startup time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Startup parameter
                     * @return Param Startup parameter
                     * 
                     */
                    std::string GetParam() const;

                    /**
                     * 设置Startup parameter
                     * @param _param Startup parameter
                     * 
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取Process TTY
                     * @return Tty Process TTY
                     * 
                     */
                    std::string GetTty() const;

                    /**
                     * 设置Process TTY
                     * @param _tty Process TTY
                     * 
                     */
                    void SetTty(const std::string& _tty);

                    /**
                     * 判断参数 Tty 是否已赋值
                     * @return Tty 是否已赋值
                     * 
                     */
                    bool TtyHasBeenSet() const;

                    /**
                     * 获取Process version
                     * @return Version Process version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Process version
                     * @param _version Process version
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
                     * 获取Process user group
                     * @return GroupName Process user group
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Process user group
                     * @param _groupName Process user group
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Process MD5
                     * @return Md5 Process MD5
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置Process MD5
                     * @param _md5 Process MD5
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取Parent process ID
                     * @return Ppid Parent process ID
                     * 
                     */
                    std::string GetPpid() const;

                    /**
                     * 设置Parent process ID
                     * @param _ppid Parent process ID
                     * 
                     */
                    void SetPpid(const std::string& _ppid);

                    /**
                     * 判断参数 Ppid 是否已赋值
                     * @return Ppid 是否已赋值
                     * 
                     */
                    bool PpidHasBeenSet() const;

                    /**
                     * 获取Parent process name
                     * @return ParentProcessName Parent process name
                     * 
                     */
                    std::string GetParentProcessName() const;

                    /**
                     * 设置Parent process name
                     * @param _parentProcessName Parent process name
                     * 
                     */
                    void SetParentProcessName(const std::string& _parentProcessName);

                    /**
                     * 判断参数 ParentProcessName 是否已赋值
                     * @return ParentProcessName 是否已赋值
                     * 
                     */
                    bool ParentProcessNameHasBeenSet() const;

                    /**
                     * 获取Process status
                     * @return Status Process status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Process status
                     * @param _status Process status
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
                     * 获取Digital signature. 0: no; 1: yes; 999: null (Windows only).
                     * @return HasSign Digital signature. 0: no; 1: yes; 999: null (Windows only).
                     * 
                     */
                    uint64_t GetHasSign() const;

                    /**
                     * 设置Digital signature. 0: no; 1: yes; 999: null (Windows only).
                     * @param _hasSign Digital signature. 0: no; 1: yes; 999: null (Windows only).
                     * 
                     */
                    void SetHasSign(const uint64_t& _hasSign);

                    /**
                     * 判断参数 HasSign 是否已赋值
                     * @return HasSign 是否已赋值
                     * 
                     */
                    bool HasSignHasBeenSet() const;

                    /**
                     * 获取Whether to install the package. 0: no; 1: yes; 999: null (Linux only).
                     * @return InstallByPackage Whether to install the package. 0: no; 1: yes; 999: null (Linux only).
                     * 
                     */
                    uint64_t GetInstallByPackage() const;

                    /**
                     * 设置Whether to install the package. 0: no; 1: yes; 999: null (Linux only).
                     * @param _installByPackage Whether to install the package. 0: no; 1: yes; 999: null (Linux only).
                     * 
                     */
                    void SetInstallByPackage(const uint64_t& _installByPackage);

                    /**
                     * 判断参数 InstallByPackage 是否已赋值
                     * @return InstallByPackage 是否已赋值
                     * 
                     */
                    bool InstallByPackageHasBeenSet() const;

                    /**
                     * 获取Software package name
                     * @return PackageName Software package name
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置Software package name
                     * @param _packageName Software package name
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

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
                     * 获取Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Data update time
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
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Operating System Information
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * Host business group ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Process name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Process description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Process path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Process ID
                     */
                    std::string m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Running user
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Startup time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Startup parameter
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * Process TTY
                     */
                    std::string m_tty;
                    bool m_ttyHasBeenSet;

                    /**
                     * Process version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Process user group
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Process MD5
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * Parent process ID
                     */
                    std::string m_ppid;
                    bool m_ppidHasBeenSet;

                    /**
                     * Parent process name
                     */
                    std::string m_parentProcessName;
                    bool m_parentProcessNameHasBeenSet;

                    /**
                     * Process status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Digital signature. 0: no; 1: yes; 999: null (Windows only).
                     */
                    uint64_t m_hasSign;
                    bool m_hasSignHasBeenSet;

                    /**
                     * Whether to install the package. 0: no; 1: yes; 999: null (Linux only).
                     */
                    uint64_t m_installByPackage;
                    bool m_installByPackageHasBeenSet;

                    /**
                     * Software package name
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Data update time
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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPROCESSBASEINFO_H_
