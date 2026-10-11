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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTDIRRELATEDSERVER_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTDIRRELATEDSERVER_H_

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
                * Server list information associated with the protection directory
                */
                class ProtectDirRelatedServer : public AbstractModel
                {
                public:
                    ProtectDirRelatedServer();
                    ~ProtectDirRelatedServer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID
                     * @return Id Unique ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique ID
                     * @param _id Unique ID
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
                     * 获取Server name
                     * @return HostName Server name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Server name
                     * @param _hostName Server name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Server IP address
                     * @return HostIp Server IP address
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Server IP address
                     * @param _hostIp Server IP address
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Server system
                     * @return MachineOs Server system
                     * 
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 设置Server system
                     * @param _machineOs Server system
                     * 
                     */
                    void SetMachineOs(const std::string& _machineOs);

                    /**
                     * 判断参数 MachineOs 是否已赋值
                     * @return MachineOs 是否已赋值
                     * 
                     */
                    bool MachineOsHasBeenSet() const;

                    /**
                     * 获取Number of associated directories
                     * @return RelateDirNum Number of associated directories
                     * 
                     */
                    uint64_t GetRelateDirNum() const;

                    /**
                     * 设置Number of associated directories
                     * @param _relateDirNum Number of associated directories
                     * 
                     */
                    void SetRelateDirNum(const uint64_t& _relateDirNum);

                    /**
                     * 判断参数 RelateDirNum 是否已赋值
                     * @return RelateDirNum 是否已赋值
                     * 
                     */
                    bool RelateDirNumHasBeenSet() const;

                    /**
                     * 获取Protection status
                     * @return ProtectStatus Protection status
                     * 
                     */
                    uint64_t GetProtectStatus() const;

                    /**
                     * 设置Protection status
                     * @param _protectStatus Protection status
                     * 
                     */
                    void SetProtectStatus(const uint64_t& _protectStatus);

                    /**
                     * 判断参数 ProtectStatus 是否已赋值
                     * @return ProtectStatus 是否已赋值
                     * 
                     */
                    bool ProtectStatusHasBeenSet() const;

                    /**
                     * 获取Protection switch
                     * @return ProtectSwitch Protection switch
                     * 
                     */
                    uint64_t GetProtectSwitch() const;

                    /**
                     * 设置Protection switch
                     * @param _protectSwitch Protection switch
                     * 
                     */
                    void SetProtectSwitch(const uint64_t& _protectSwitch);

                    /**
                     * 判断参数 ProtectSwitch 是否已赋值
                     * @return ProtectSwitch 是否已赋值
                     * 
                     */
                    bool ProtectSwitchHasBeenSet() const;

                    /**
                     * 获取Auto recovery switch
                     * @return AutoRestoreSwitchStatus Auto recovery switch
                     * 
                     */
                    uint64_t GetAutoRestoreSwitchStatus() const;

                    /**
                     * 设置Auto recovery switch
                     * @param _autoRestoreSwitchStatus Auto recovery switch
                     * 
                     */
                    void SetAutoRestoreSwitchStatus(const uint64_t& _autoRestoreSwitchStatus);

                    /**
                     * 判断参数 AutoRestoreSwitchStatus 是否已赋值
                     * @return AutoRestoreSwitchStatus 是否已赋值
                     * 
                     */
                    bool AutoRestoreSwitchStatusHasBeenSet() const;

                    /**
                     * 获取Unique server ID
                     * @return Quuid Unique server ID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Unique server ID
                     * @param _quuid Unique server ID
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
                     * 获取Whether it has been authorized
                     * @return Authorization Whether it has been authorized
                     * 
                     */
                    bool GetAuthorization() const;

                    /**
                     * 设置Whether it has been authorized
                     * @param _authorization Whether it has been authorized
                     * 
                     */
                    void SetAuthorization(const bool& _authorization);

                    /**
                     * 判断参数 Authorization 是否已赋值
                     * @return Authorization 是否已赋值
                     * 
                     */
                    bool AuthorizationHasBeenSet() const;

                    /**
                     * 获取Abnormal status
                     * @return Exception Abnormal status
                     * 
                     */
                    uint64_t GetException() const;

                    /**
                     * 设置Abnormal status
                     * @param _exception Abnormal status
                     * 
                     */
                    void SetException(const uint64_t& _exception);

                    /**
                     * 判断参数 Exception 是否已赋值
                     * @return Exception 是否已赋值
                     * 
                     */
                    bool ExceptionHasBeenSet() const;

                    /**
                     * 获取Transition progress
                     * @return Progress Transition progress
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Transition progress
                     * @param _progress Transition progress
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Exception message
                     * @return ExceptionMessage Exception message
                     * 
                     */
                    std::string GetExceptionMessage() const;

                    /**
                     * 设置Exception message
                     * @param _exceptionMessage Exception message
                     * 
                     */
                    void SetExceptionMessage(const std::string& _exceptionMessage);

                    /**
                     * 判断参数 ExceptionMessage 是否已赋值
                     * @return ExceptionMessage 是否已赋值
                     * 
                     */
                    bool ExceptionMessageHasBeenSet() const;

                    /**
                     * 获取Host Additional Information
                     * @return MachineExtraInfo Host Additional Information
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Host Additional Information
                     * @param _machineExtraInfo Host Additional Information
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
                     * Unique ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Server name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Server IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Server system
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * Number of associated directories
                     */
                    uint64_t m_relateDirNum;
                    bool m_relateDirNumHasBeenSet;

                    /**
                     * Protection status
                     */
                    uint64_t m_protectStatus;
                    bool m_protectStatusHasBeenSet;

                    /**
                     * Protection switch
                     */
                    uint64_t m_protectSwitch;
                    bool m_protectSwitchHasBeenSet;

                    /**
                     * Auto recovery switch
                     */
                    uint64_t m_autoRestoreSwitchStatus;
                    bool m_autoRestoreSwitchStatusHasBeenSet;

                    /**
                     * Unique server ID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Whether it has been authorized
                     */
                    bool m_authorization;
                    bool m_authorizationHasBeenSet;

                    /**
                     * Abnormal status
                     */
                    uint64_t m_exception;
                    bool m_exceptionHasBeenSet;

                    /**
                     * Transition progress
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Exception message
                     */
                    std::string m_exceptionMessage;
                    bool m_exceptionMessageHasBeenSet;

                    /**
                     * Host Additional Information
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTDIRRELATEDSERVER_H_
