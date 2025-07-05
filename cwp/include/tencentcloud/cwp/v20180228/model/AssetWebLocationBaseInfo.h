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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONBASEINFO_H_

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
                * Asset management Web site list information
                */
                class AssetWebLocationBaseInfo : public AbstractModel
                {
                public:
                    AssetWebLocationBaseInfo();
                    ~AssetWebLocationBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Private IP address
                     * @return MachineIp Private IP address
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Private IP address
                     * @param _machineIp Private IP address
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
                     * 获取Public IP address
                     * @return MachineWanIp Public IP address
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Public IP address
                     * @param _machineWanIp Public IP address
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
                     * 获取Operating system
                     * @return OsInfo Operating system
                     * 
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置Operating system
                     * @param _osInfo Operating system
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
                     * 获取Domain name
                     * @return Name Domain name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Domain name
                     * @param _name Domain name
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
                     * 获取Site port
                     * @return Port Site port
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Site port
                     * @param _port Site port
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
                     * 获取Site protocol
                     * @return Proto Site protocol
                     * 
                     */
                    std::string GetProto() const;

                    /**
                     * 设置Site protocol
                     * @param _proto Site protocol
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
                     * 获取Service type
                     * @return ServiceType Service type
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Service type
                     * @param _serviceType Service type
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取Number of site paths
                     * @return PathCount Number of site paths
                     * 
                     */
                    uint64_t GetPathCount() const;

                    /**
                     * 设置Number of site paths
                     * @param _pathCount Number of site paths
                     * 
                     */
                    void SetPathCount(const uint64_t& _pathCount);

                    /**
                     * 判断参数 PathCount 是否已赋值
                     * @return PathCount 是否已赋值
                     * 
                     */
                    bool PathCountHasBeenSet() const;

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
                     * 获取Home directory
                     * @return MainPath Home directory
                     * 
                     */
                    std::string GetMainPath() const;

                    /**
                     * 设置Home directory
                     * @param _mainPath Home directory
                     * 
                     */
                    void SetMainPath(const std::string& _mainPath);

                    /**
                     * 判断参数 MainPath 是否已赋值
                     * @return MainPath 是否已赋值
                     * 
                     */
                    bool MainPathHasBeenSet() const;

                    /**
                     * 获取Home directory owner
                     * @return MainPathOwner Home directory owner
                     * 
                     */
                    std::string GetMainPathOwner() const;

                    /**
                     * 设置Home directory owner
                     * @param _mainPathOwner Home directory owner
                     * 
                     */
                    void SetMainPathOwner(const std::string& _mainPathOwner);

                    /**
                     * 判断参数 MainPathOwner 是否已赋值
                     * @return MainPathOwner 是否已赋值
                     * 
                     */
                    bool MainPathOwnerHasBeenSet() const;

                    /**
                     * 获取Owner permissions
                     * @return Permission Owner permissions
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置Owner permissions
                     * @param _permission Owner permissions
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
                     * @return Tag Host tag
                     * 
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置Host tag
                     * @param _tag Host tag
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
                     * 获取Web site ID
                     * @return Id Web site ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Web site ID
                     * @param _id Web site ID
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
                     * 获取Whether the web service is newly added [0 - no|1 - yes]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsNew Whether the web service is newly added [0 - no|1 - yes]
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsNew() const;

                    /**
                     * 设置Whether the web service is newly added [0 - no|1 - yes]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isNew Whether the web service is newly added [0 - no|1 - yes]
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Private IP address
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Operating system
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Site port
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Site protocol
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * Service type
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Number of site paths
                     */
                    uint64_t m_pathCount;
                    bool m_pathCountHasBeenSet;

                    /**
                     * Running user
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Home directory
                     */
                    std::string m_mainPath;
                    bool m_mainPathHasBeenSet;

                    /**
                     * Home directory owner
                     */
                    std::string m_mainPathOwner;
                    bool m_mainPathOwnerHasBeenSet;

                    /**
                     * Owner permissions
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * Host business group ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Host tag
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Web site ID
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
                     * Whether the web service is newly added [0 - no|1 - yes]
Note: This field may return null, indicating that no valid values can be obtained.
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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONBASEINFO_H_
