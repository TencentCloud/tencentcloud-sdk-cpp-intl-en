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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MACHINEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MACHINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Machine status information
                */
                class MachineInfo : public AbstractModel
                {
                public:
                    MachineInfo();
                    ~MachineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Machine IP
                     * @return Ip Machine IP
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Machine IP
                     * @param Ip Machine IP
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Machine status. Valid values: `0`: exceptional; `1`: normal
                     * @return Status Machine status. Valid values: `0`: exceptional; `1`: normal
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Machine status. Valid values: `0`: exceptional; `1`: normal
                     * @param Status Machine status. Valid values: `0`: exceptional; `1`: normal
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Machine disconnection time. If the value is empty, the machine is normal. If the machine is exceptional, a specific value will be returned.
                     * @return OfflineTime Machine disconnection time. If the value is empty, the machine is normal. If the machine is exceptional, a specific value will be returned.
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置Machine disconnection time. If the value is empty, the machine is normal. If the machine is exceptional, a specific value will be returned.
                     * @param OfflineTime Machine disconnection time. If the value is empty, the machine is normal. If the machine is exceptional, a specific value will be returned.
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable automatic update for the machine. Valid values: `0`: no; `1`: yes
                     * @return AutoUpdate Whether to enable automatic update for the machine. Valid values: `0`: no; `1`: yes
                     */
                    int64_t GetAutoUpdate() const;

                    /**
                     * 设置Whether to enable automatic update for the machine. Valid values: `0`: no; `1`: yes
                     * @param AutoUpdate Whether to enable automatic update for the machine. Valid values: `0`: no; `1`: yes
                     */
                    void SetAutoUpdate(const int64_t& _autoUpdate);

                    /**
                     * 判断参数 AutoUpdate 是否已赋值
                     * @return AutoUpdate 是否已赋值
                     */
                    bool AutoUpdateHasBeenSet() const;

                    /**
                     * 获取Current machine version number
                     * @return Version Current machine version number
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Current machine version number
                     * @param Version Current machine version number
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Machine update feature status
                     * @return UpdateStatus Machine update feature status
                     */
                    int64_t GetUpdateStatus() const;

                    /**
                     * 设置Machine update feature status
                     * @param UpdateStatus Machine update feature status
                     */
                    void SetUpdateStatus(const int64_t& _updateStatus);

                    /**
                     * 判断参数 UpdateStatus 是否已赋值
                     * @return UpdateStatus 是否已赋值
                     */
                    bool UpdateStatusHasBeenSet() const;

                    /**
                     * 获取Machine update result flag
                     * @return ErrCode Machine update result flag
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Machine update result flag
                     * @param ErrCode Machine update result flag
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Machine update result information
                     * @return ErrMsg Machine update result information
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Machine update result information
                     * @param ErrMsg Machine update result information
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * Machine IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Machine status. Valid values: `0`: exceptional; `1`: normal
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Machine disconnection time. If the value is empty, the machine is normal. If the machine is exceptional, a specific value will be returned.
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * Whether to enable automatic update for the machine. Valid values: `0`: no; `1`: yes
                     */
                    int64_t m_autoUpdate;
                    bool m_autoUpdateHasBeenSet;

                    /**
                     * Current machine version number
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Machine update feature status
                     */
                    int64_t m_updateStatus;
                    bool m_updateStatusHasBeenSet;

                    /**
                     * Machine update result flag
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Machine update result information
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MACHINEINFO_H_
