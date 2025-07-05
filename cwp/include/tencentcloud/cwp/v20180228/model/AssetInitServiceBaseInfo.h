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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETINITSERVICEBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETINITSERVICEBASEINFO_H_

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
                * List of asset management startup services
                */
                class AssetInitServiceBaseInfo : public AbstractModel
                {
                public:
                    AssetInitServiceBaseInfo();
                    ~AssetInitServiceBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
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
                     * 获取Type:
1: Encoder
2: IE plugin
3: Network provider
4: Mirror hijacking
5: LSA provider
6:KnownDLLs
7: Start execution
8:WMI
9: Scheduled task
10: Winsock provider
11: Print monitor
12: Resource manager
13: Driver service
14: Log-in
                     * @return Type Type:
1: Encoder
2: IE plugin
3: Network provider
4: Mirror hijacking
5: LSA provider
6:KnownDLLs
7: Start execution
8:WMI
9: Scheduled task
10: Winsock provider
11: Print monitor
12: Resource manager
13: Driver service
14: Log-in
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Type:
1: Encoder
2: IE plugin
3: Network provider
4: Mirror hijacking
5: LSA provider
6:KnownDLLs
7: Start execution
8:WMI
9: Scheduled task
10: Winsock provider
11: Print monitor
12: Resource manager
13: Driver service
14: Log-in
                     * @param _type Type:
1: Encoder
2: IE plugin
3: Network provider
4: Mirror hijacking
5: LSA provider
6:KnownDLLs
7: Start execution
8:WMI
9: Scheduled task
10: Winsock provider
11: Print monitor
12: Resource manager
13: Driver service
14: Log-in
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Default enabling status: 0 - disabled; 1 - enabled
                     * @return Status Default enabling status: 0 - disabled; 1 - enabled
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Default enabling status: 0 - disabled; 1 - enabled
                     * @param _status Default enabling status: 0 - disabled; 1 - enabled
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
                     * 获取Path
                     * @return Path Path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path
                     * @param _path Path
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
                     * 获取Server IP
                     * @return MachineIp Server IP
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Server IP
                     * @param _machineIp Server IP
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
                     * 获取Name
                     * @return MachineName Name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Name
                     * @param _machineName Name
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
                     * 获取Data update time
                     * @return UpdateTime Data update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Data update time
                     * @param _updateTime Data update time
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
                     * 获取Server Public IP
                     * @return MachineWanIp Server Public IP
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Server Public IP
                     * @param _machineWanIp Server Public IP
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
                     * 获取Start at boot [0: No|1: Yes]
                     * @return IsAutoRun Start at boot [0: No|1: Yes]
                     * 
                     */
                    int64_t GetIsAutoRun() const;

                    /**
                     * 设置Start at boot [0: No|1: Yes]
                     * @param _isAutoRun Start at boot [0: No|1: Yes]
                     * 
                     */
                    void SetIsAutoRun(const int64_t& _isAutoRun);

                    /**
                     * 判断参数 IsAutoRun 是否已赋值
                     * @return IsAutoRun 是否已赋值
                     * 
                     */
                    bool IsAutoRunHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Type:
1: Encoder
2: IE plugin
3: Network provider
4: Mirror hijacking
5: LSA provider
6:KnownDLLs
7: Start execution
8:WMI
9: Scheduled task
10: Winsock provider
11: Print monitor
12: Resource manager
13: Driver service
14: Log-in
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Default enabling status: 0 - disabled; 1 - enabled
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Startup user
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Server IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Operating system
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

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
                     * Data update time
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
                     * Server Public IP
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Additional information

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Start at boot [0: No|1: Yes]
                     */
                    int64_t m_isAutoRun;
                    bool m_isAutoRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETINITSERVICEBASEINFO_H_
