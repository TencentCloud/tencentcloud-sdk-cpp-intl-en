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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBAPPBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBAPPBASEINFO_H_

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
                * List of the information on the resource management web application
                */
                class AssetWebAppBaseInfo : public AbstractModel
                {
                public:
                    AssetWebAppBaseInfo();
                    ~AssetWebAppBaseInfo() = default;
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
                     * 获取Operating system information
                     * @return OsInfo Operating system information
                     * 
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置Operating system information
                     * @param _osInfo Operating system information
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
                     * 获取Application name
                     * @return Name Application name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Application name
                     * @param _name Application name
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
                     * 获取Root path
                     * @return RootPath Root path
                     * 
                     */
                    std::string GetRootPath() const;

                    /**
                     * 设置Root path
                     * @param _rootPath Root path
                     * 
                     */
                    void SetRootPath(const std::string& _rootPath);

                    /**
                     * 判断参数 RootPath 是否已赋值
                     * @return RootPath 是否已赋值
                     * 
                     */
                    bool RootPathHasBeenSet() const;

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
                     * 获取Site domain name
                     * @return Domain Site domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Site domain name
                     * @param _domain Site domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Virtual path
                     * @return VirtualPath Virtual path
                     * 
                     */
                    std::string GetVirtualPath() const;

                    /**
                     * 设置Virtual path
                     * @param _virtualPath Virtual path
                     * 
                     */
                    void SetVirtualPath(const std::string& _virtualPath);

                    /**
                     * 判断参数 VirtualPath 是否已赋值
                     * @return VirtualPath 是否已赋值
                     * 
                     */
                    bool VirtualPathHasBeenSet() const;

                    /**
                     * 获取Number of plugins
                     * @return PluginCount Number of plugins
                     * 
                     */
                    uint64_t GetPluginCount() const;

                    /**
                     * 设置Number of plugins
                     * @param _pluginCount Number of plugins
                     * 
                     */
                    void SetPluginCount(const uint64_t& _pluginCount);

                    /**
                     * 判断参数 PluginCount 是否已赋值
                     * @return PluginCount 是否已赋值
                     * 
                     */
                    bool PluginCountHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return Id Application ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Application ID
                     * @param _id Application ID
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
                     * 获取Application description
                     * @return Desc Application description
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Application description
                     * @param _desc Application description
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
                     * 获取Whether it is newly added [0: no | 1: yes]
                     * @return IsNew Whether it is newly added [0: no | 1: yes]
                     * 
                     */
                    int64_t GetIsNew() const;

                    /**
                     * 设置Whether it is newly added [0: no | 1: yes]
                     * @param _isNew Whether it is newly added [0: no | 1: yes]
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
                     * Operating system information
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
                     * Application name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Root path
                     */
                    std::string m_rootPath;
                    bool m_rootPathHasBeenSet;

                    /**
                     * Service type
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Site domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Virtual path
                     */
                    std::string m_virtualPath;
                    bool m_virtualPathHasBeenSet;

                    /**
                     * Number of plugins
                     */
                    uint64_t m_pluginCount;
                    bool m_pluginCountHasBeenSet;

                    /**
                     * Application ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Application description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

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
                     * Whether it is newly added [0: no | 1: yes]
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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBAPPBASEINFO_H_
