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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPLANTASK_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPLANTASK_H_

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
                * List of asset management plan tasks
                */
                class AssetPlanTask : public AbstractModel
                {
                public:
                    AssetPlanTask();
                    ~AssetPlanTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Default enabling status. 1 - enabled; 2 - not enabled
                     * @return Status Default enabling status. 1 - enabled; 2 - not enabled
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Default enabling status. 1 - enabled; 2 - not enabled
                     * @param _status Default enabling status. 1 - enabled; 2 - not enabled
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
                     * 获取Execution cycle
                     * @return Cycle Execution cycle
                     * 
                     */
                    std::string GetCycle() const;

                    /**
                     * 设置Execution cycle
                     * @param _cycle Execution cycle
                     * 
                     */
                    void SetCycle(const std::string& _cycle);

                    /**
                     * 判断参数 Cycle 是否已赋值
                     * @return Cycle 是否已赋值
                     * 
                     */
                    bool CycleHasBeenSet() const;

                    /**
                     * 获取Execute command or script
                     * @return Command Execute command or script
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Execute command or script
                     * @param _command Execute command or script
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

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

                private:

                    /**
                     * Default enabling status. 1 - enabled; 2 - not enabled
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Execution cycle
                     */
                    std::string m_cycle;
                    bool m_cycleHasBeenSet;

                    /**
                     * Execute command or script
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Startup user
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Configuration file path
                     */
                    std::string m_configPath;
                    bool m_configPathHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPLANTASK_H_
