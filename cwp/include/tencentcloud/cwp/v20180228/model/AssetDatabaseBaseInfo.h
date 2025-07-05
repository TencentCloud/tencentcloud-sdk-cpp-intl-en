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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDATABASEBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDATABASEBASEINFO_H_

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
                * Resource management database list information
                */
                class AssetDatabaseBaseInfo : public AbstractModel
                {
                public:
                    AssetDatabaseBaseInfo();
                    ~AssetDatabaseBaseInfo() = default;
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
                     * 获取Listening port
                     * @return Port Listening port
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Listening port
                     * @param _port Listening port
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Protocol
                     * @return Proto Protocol
                     * 
                     */
                    std::string GetProto() const;

                    /**
                     * 设置Protocol
                     * @param _proto Protocol
                     * 
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     * 
                     */
                    bool ProtoHasBeenSet() const;

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
                     * 获取Bound IP
                     * @return Ip Bound IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Bound IP
                     * @param _ip Bound IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Configuration file path
                     * @return ConfigPath Configuration file path
                     * 
                     */
                    std::string GetConfigPath() const;

                    /**
                     * 设置Configuration file path
                     * @param _configPath Configuration file path
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
                     * 获取Log file path
                     * @return LogPath Log file path
                     * 
                     */
                    std::string GetLogPath() const;

                    /**
                     * 设置Log file path
                     * @param _logPath Log file path
                     * 
                     */
                    void SetLogPath(const std::string& _logPath);

                    /**
                     * 判断参数 LogPath 是否已赋值
                     * @return LogPath 是否已赋值
                     * 
                     */
                    bool LogPathHasBeenSet() const;

                    /**
                     * 获取Data path
                     * @return DataPath Data path
                     * 
                     */
                    std::string GetDataPath() const;

                    /**
                     * 设置Data path
                     * @param _dataPath Data path
                     * 
                     */
                    void SetDataPath(const std::string& _dataPath);

                    /**
                     * 判断参数 DataPath 是否已赋值
                     * @return DataPath 是否已赋值
                     * 
                     */
                    bool DataPathHasBeenSet() const;

                    /**
                     * 获取Running permission
                     * @return Permission Running permission
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置Running permission
                     * @param _permission Running permission
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取Error log path
                     * @return ErrorLogPath Error log path
                     * 
                     */
                    std::string GetErrorLogPath() const;

                    /**
                     * 设置Error log path
                     * @param _errorLogPath Error log path
                     * 
                     */
                    void SetErrorLogPath(const std::string& _errorLogPath);

                    /**
                     * 判断参数 ErrorLogPath 是否已赋值
                     * @return ErrorLogPath 是否已赋值
                     * 
                     */
                    bool ErrorLogPathHasBeenSet() const;

                    /**
                     * 获取Plugin path
                     * @return PlugInPath Plugin path
                     * 
                     */
                    std::string GetPlugInPath() const;

                    /**
                     * 设置Plugin path
                     * @param _plugInPath Plugin path
                     * 
                     */
                    void SetPlugInPath(const std::string& _plugInPath);

                    /**
                     * 判断参数 PlugInPath 是否已赋值
                     * @return PlugInPath 是否已赋值
                     * 
                     */
                    bool PlugInPathHasBeenSet() const;

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
                     * 获取Database ID
                     * @return Id Database ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Database ID
                     * @param _id Database ID
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
                     * Listening port
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Protocol
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * Running user
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Bound IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Configuration file path
                     */
                    std::string m_configPath;
                    bool m_configPathHasBeenSet;

                    /**
                     * Log file path
                     */
                    std::string m_logPath;
                    bool m_logPathHasBeenSet;

                    /**
                     * Data path
                     */
                    std::string m_dataPath;
                    bool m_dataPathHasBeenSet;

                    /**
                     * Running permission
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * Error log path
                     */
                    std::string m_errorLogPath;
                    bool m_errorLogPathHasBeenSet;

                    /**
                     * Plugin path
                     */
                    std::string m_plugInPath;
                    bool m_plugInPathHasBeenSet;

                    /**
                     * Binary path
                     */
                    std::string m_binPath;
                    bool m_binPathHasBeenSet;

                    /**
                     * Startup parameter
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * Database ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

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
                     * Host name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDATABASEBASEINFO_H_
