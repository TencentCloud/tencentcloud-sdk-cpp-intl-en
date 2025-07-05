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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RECORDINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Client Exception Information Structure
                */
                class RecordInfo : public AbstractModel
                {
                public:
                    RecordInfo();
                    ~RecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host IP
                     * @return HostIP Host IP
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Host IP
                     * @param _hostIP Host IP
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取Host Instance ID
                     * @return InstanceID Host Instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Host Instance ID
                     * @param _instanceID Host Instance ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Client Offline Time
                     * @return OfflineTime Client Offline Time
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置Client Offline Time
                     * @param _offlineTime Client Offline Time
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取Client Uninstallation Time
                     * @return UninstallTime Client Uninstallation Time
                     * 
                     */
                    std::string GetUninstallTime() const;

                    /**
                     * 设置Client Uninstallation Time
                     * @param _uninstallTime Client Uninstallation Time
                     * 
                     */
                    void SetUninstallTime(const std::string& _uninstallTime);

                    /**
                     * 判断参数 UninstallTime 是否已赋值
                     * @return UninstallTime 是否已赋值
                     * 
                     */
                    bool UninstallTimeHasBeenSet() const;

                    /**
                     * 获取Client Uninstallation Call Chain
                     * @return UninstallCmd Client Uninstallation Call Chain
                     * 
                     */
                    std::string GetUninstallCmd() const;

                    /**
                     * 设置Client Uninstallation Call Chain
                     * @param _uninstallCmd Client Uninstallation Call Chain
                     * 
                     */
                    void SetUninstallCmd(const std::string& _uninstallCmd);

                    /**
                     * 判断参数 UninstallCmd 是否已赋值
                     * @return UninstallCmd 是否已赋值
                     * 
                     */
                    bool UninstallCmdHasBeenSet() const;

                    /**
                     * 获取Client UUID
                     * @return Uuid Client UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Client UUID
                     * @param _uuid Client UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * Host IP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Host Instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Client Offline Time
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * Client Uninstallation Time
                     */
                    std::string m_uninstallTime;
                    bool m_uninstallTimeHasBeenSet;

                    /**
                     * Client Uninstallation Call Chain
                     */
                    std::string m_uninstallCmd;
                    bool m_uninstallCmdHasBeenSet;

                    /**
                     * Client UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RECORDINFO_H_
