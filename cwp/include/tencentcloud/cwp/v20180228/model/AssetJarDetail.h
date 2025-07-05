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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETJARDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETJARDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetAppProcessInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Asset management jar package details
                */
                class AssetJarDetail : public AbstractModel
                {
                public:
                    AssetJarDetail();
                    ~AssetJarDetail() = default;
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
                     * 获取Type: 1: application; 2: system library; 3: Web service built-in library; 8: other
                     * @return Type Type: 1: application; 2: system library; 3: Web service built-in library; 8: other
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Type: 1: application; 2: system library; 3: Web service built-in library; 8: other
                     * @param _type Type: 1: application; 2: system library; 3: Web service built-in library; 8: other
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether executable: 0: unknown; 1: yes; 2: no
                     * @return Status Whether executable: 0: unknown; 1: yes; 2: no
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Whether executable: 0: unknown; 1: yes; 2: no
                     * @param _status Whether executable: 0: unknown; 1: yes; 2: no
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
                     * 获取Server name
                     * @return MachineName Server name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name
                     * @param _machineName Server name
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
                     * 获取Reference process list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Process Reference process list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetAppProcessInfo> GetProcess() const;

                    /**
                     * 设置Reference process list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _process Reference process list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcess(const std::vector<AssetAppProcessInfo>& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取Jar package Md5
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Md5 Jar package Md5
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置Jar package Md5
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _md5 Jar package Md5
Note: This field may return null, indicating that no valid values can be obtained.
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

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Type: 1: application; 2: system library; 3: Web service built-in library; 8: other
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether executable: 0: unknown; 1: yes; 2: no
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

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
                     * Server name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Operating system
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * Reference process list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetAppProcessInfo> m_process;
                    bool m_processHasBeenSet;

                    /**
                     * Jar package Md5
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETJARDETAIL_H_
