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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBSERVICEBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBSERVICEBASEINFO_H_

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
                * List information on resource management Web service 
                */
                class AssetWebServiceBaseInfo : public AbstractModel
                {
                public:
                    AssetWebServiceBaseInfo();
                    ~AssetWebServiceBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private IP address of a host
                     * @return MachineIp Private IP address of a host
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Private IP address of a host
                     * @param _machineIp Private IP address of a host
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
                     * 获取Public IP address of a host
                     * @return MachineWanIp Public IP address of a host
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Public IP address of a host
                     * @param _machineWanIp Public IP address of a host
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
                     * 获取Database name
                     * @return Name Database name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Database name
                     * @param _name Database name
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
                     * 获取Version
                     * @return Version Version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version
                     * @param _version Version
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
                     * 获取Binary path
                     * @return BinPath Binary path
                     * 
                     */
                    std::string GetBinPath() const;

                    /**
                     * 设置Binary path
                     * @param _binPath Binary path
                     * 
                     */
                    void SetBinPath(const std::string& _binPath);

                    /**
                     * 判断参数 BinPath 是否已赋值
                     * @return BinPath 是否已赋值
                     * 
                     */
                    bool BinPathHasBeenSet() const;

                    /**
                     * 获取Startup user
                     * @return User Startup user
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Startup user
                     * @param _user Startup user
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
                     * 获取Installation path
                     * @return InstallPath Installation path
                     * 
                     */
                    std::string GetInstallPath() const;

                    /**
                     * 设置Installation path
                     * @param _installPath Installation path
                     * 
                     */
                    void SetInstallPath(const std::string& _installPath);

                    /**
                     * 判断参数 InstallPath 是否已赋值
                     * @return InstallPath 是否已赋值
                     * 
                     */
                    bool InstallPathHasBeenSet() const;

                    /**
                     * 获取Configuration path
                     * @return ConfigPath Configuration path
                     * 
                     */
                    std::string GetConfigPath() const;

                    /**
                     * 设置Configuration path
                     * @param _configPath Configuration path
                     * 
                     */
                    void SetConfigPath(const std::string& _configPath);

                    /**
                     * 判断参数 ConfigPath 是否已赋值
                     * @return ConfigPath 是否已赋值
                     * 
                     */
                    bool ConfigPathHasBeenSet() const;

                    /**
                     * 获取Number of associated processes
                     * @return ProcessCount Number of associated processes
                     * 
                     */
                    uint64_t GetProcessCount() const;

                    /**
                     * 设置Number of associated processes
                     * @param _processCount Number of associated processes
                     * 
                     */
                    void SetProcessCount(const uint64_t& _processCount);

                    /**
                     * 判断参数 ProcessCount 是否已赋值
                     * @return ProcessCount 是否已赋值
                     * 
                     */
                    bool ProcessCountHasBeenSet() const;

                    /**
                     * 获取Web Service ID
                     * @return Id Web Service ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Web Service ID
                     * @param _id Web Service ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取Description
                     * @return Desc Description
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description
                     * @param _desc Description
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
                     * 获取Whether newly added [0: no|1: yes]
                     * @return IsNew Whether newly added [0: no|1: yes]
                     * 
                     */
                    int64_t GetIsNew() const;

                    /**
                     * 设置Whether newly added [0: no|1: yes]
                     * @param _isNew Whether newly added [0: no|1: yes]
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
                     * Private IP address of a host
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Public IP address of a host
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
                     * Database name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Binary path
                     */
                    std::string m_binPath;
                    bool m_binPathHasBeenSet;

                    /**
                     * Startup user
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Installation path
                     */
                    std::string m_installPath;
                    bool m_installPathHasBeenSet;

                    /**
                     * Configuration path
                     */
                    std::string m_configPath;
                    bool m_configPathHasBeenSet;

                    /**
                     * Number of associated processes
                     */
                    uint64_t m_processCount;
                    bool m_processCountHasBeenSet;

                    /**
                     * Web Service ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

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
                     * Whether newly added [0: no|1: yes]
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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBSERVICEBASEINFO_H_
