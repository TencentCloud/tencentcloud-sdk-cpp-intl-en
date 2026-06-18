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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICPLUGINSTATE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICPLUGINSTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * AI Agent traffic sandbox plug-in status
                */
                class TrafficPluginState : public AbstractModel
                {
                public:
                    TrafficPluginState();
                    ~TrafficPluginState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Plugin installation status (upper layer aggregation)
Enumeration value:
NONE: Not installed
INSTALLING
INSTALLED: Installed
INSTALL_FAIL: Installation failure
                     * @return InstallStatus Plugin installation status (upper layer aggregation)
Enumeration value:
NONE: Not installed
INSTALLING
INSTALLED: Installed
INSTALL_FAIL: Installation failure
                     * 
                     */
                    std::string GetInstallStatus() const;

                    /**
                     * 设置Plugin installation status (upper layer aggregation)
Enumeration value:
NONE: Not installed
INSTALLING
INSTALLED: Installed
INSTALL_FAIL: Installation failure
                     * @param _installStatus Plugin installation status (upper layer aggregation)
Enumeration value:
NONE: Not installed
INSTALLING
INSTALLED: Installed
INSTALL_FAIL: Installation failure
                     * 
                     */
                    void SetInstallStatus(const std::string& _installStatus);

                    /**
                     * 判断参数 InstallStatus 是否已赋值
                     * @return InstallStatus 是否已赋值
                     * 
                     */
                    bool InstallStatusHasBeenSet() const;

                    /**
                     * 获取Plugin installation sub-status. The value corresponds to InstallStatus: empty string when not installed (InstallStatus=UNINSTALL); SUCCESS when successfully installed (InstallStatus=INSTALLED); specific failure reason when installation failure (InstallStatus=INSTALL_FAIL).
Enumeration value:
NOT_SUPPORT: Unsupported environment
CONTAINER_NOT_FOUND: Container does not exist.
RESTART required
CA_FAILED: CA failed
EBPF_FAILED: eBPF failed
IPTABLE_FAILED: iptables failed.
REDIRECT_FAILED: Traffic redirection failed.
                     * @return Status Plugin installation sub-status. The value corresponds to InstallStatus: empty string when not installed (InstallStatus=UNINSTALL); SUCCESS when successfully installed (InstallStatus=INSTALLED); specific failure reason when installation failure (InstallStatus=INSTALL_FAIL).
Enumeration value:
NOT_SUPPORT: Unsupported environment
CONTAINER_NOT_FOUND: Container does not exist.
RESTART required
CA_FAILED: CA failed
EBPF_FAILED: eBPF failed
IPTABLE_FAILED: iptables failed.
REDIRECT_FAILED: Traffic redirection failed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Plugin installation sub-status. The value corresponds to InstallStatus: empty string when not installed (InstallStatus=UNINSTALL); SUCCESS when successfully installed (InstallStatus=INSTALLED); specific failure reason when installation failure (InstallStatus=INSTALL_FAIL).
Enumeration value:
NOT_SUPPORT: Unsupported environment
CONTAINER_NOT_FOUND: Container does not exist.
RESTART required
CA_FAILED: CA failed
EBPF_FAILED: eBPF failed
IPTABLE_FAILED: iptables failed.
REDIRECT_FAILED: Traffic redirection failed.
                     * @param _status Plugin installation sub-status. The value corresponds to InstallStatus: empty string when not installed (InstallStatus=UNINSTALL); SUCCESS when successfully installed (InstallStatus=INSTALLED); specific failure reason when installation failure (InstallStatus=INSTALL_FAIL).
Enumeration value:
NOT_SUPPORT: Unsupported environment
CONTAINER_NOT_FOUND: Container does not exist.
RESTART required
CA_FAILED: CA failed
EBPF_FAILED: eBPF failed
IPTABLE_FAILED: iptables failed.
REDIRECT_FAILED: Traffic redirection failed.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Status copywriting (internationalization description derived from Status based on request language)
                     * @return Message Status copywriting (internationalization description derived from Status based on request language)
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Status copywriting (internationalization description derived from Status based on request language)
                     * @param _message Status copywriting (internationalization description derived from Status based on request language)
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Recent activity time of the plug-in
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @return ActivityTime Recent activity time of the plug-in
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    std::string GetActivityTime() const;

                    /**
                     * 设置Recent activity time of the plug-in
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @param _activityTime Recent activity time of the plug-in
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    void SetActivityTime(const std::string& _activityTime);

                    /**
                     * 判断参数 ActivityTime 是否已赋值
                     * @return ActivityTime 是否已赋值
                     * 
                     */
                    bool ActivityTimeHasBeenSet() const;

                private:

                    /**
                     * Plugin installation status (upper layer aggregation)
Enumeration value:
NONE: Not installed
INSTALLING
INSTALLED: Installed
INSTALL_FAIL: Installation failure
                     */
                    std::string m_installStatus;
                    bool m_installStatusHasBeenSet;

                    /**
                     * Plugin installation sub-status. The value corresponds to InstallStatus: empty string when not installed (InstallStatus=UNINSTALL); SUCCESS when successfully installed (InstallStatus=INSTALLED); specific failure reason when installation failure (InstallStatus=INSTALL_FAIL).
Enumeration value:
NOT_SUPPORT: Unsupported environment
CONTAINER_NOT_FOUND: Container does not exist.
RESTART required
CA_FAILED: CA failed
EBPF_FAILED: eBPF failed
IPTABLE_FAILED: iptables failed.
REDIRECT_FAILED: Traffic redirection failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status copywriting (internationalization description derived from Status based on request language)
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Recent activity time of the plug-in
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     */
                    std::string m_activityTime;
                    bool m_activityTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICPLUGINSTATE_H_
