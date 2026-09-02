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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTRUNMODEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTRUNMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CustomAgentRunModePolicy.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAgentRunMode request structure.
                */
                class ModifyAgentRunModeRequest : public AbstractModel
                {
                public:
                    ModifyAgentRunModeRequest();
                    ~ModifyAgentRunModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id.</p>
                     * @return MemberId <p>Group account member id.</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id.</p>
                     * @param _memberId <p>Group account member id.</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Custom mode configuration</p>
                     * @return CustomPolicy <p>Custom mode configuration</p>
                     * 
                     */
                    CustomAgentRunModePolicy GetCustomPolicy() const;

                    /**
                     * 设置<p>Custom mode configuration</p>
                     * @param _customPolicy <p>Custom mode configuration</p>
                     * 
                     */
                    void SetCustomPolicy(const CustomAgentRunModePolicy& _customPolicy);

                    /**
                     * 判断参数 CustomPolicy 是否已赋值
                     * @return CustomPolicy 是否已赋值
                     * 
                     */
                    bool CustomPolicyHasBeenSet() const;

                    /**
                     * 获取<p>List of quuids in high protection mode</p>
                     * @return AdvanceModeQuuids <p>List of quuids in high protection mode</p>
                     * 
                     */
                    std::vector<std::string> GetAdvanceModeQuuids() const;

                    /**
                     * 设置<p>List of quuids in high protection mode</p>
                     * @param _advanceModeQuuids <p>List of quuids in high protection mode</p>
                     * 
                     */
                    void SetAdvanceModeQuuids(const std::vector<std::string>& _advanceModeQuuids);

                    /**
                     * 判断参数 AdvanceModeQuuids 是否已赋值
                     * @return AdvanceModeQuuids 是否已赋值
                     * 
                     */
                    bool AdvanceModeQuuidsHasBeenSet() const;

                    /**
                     * 获取<p>Custom mode quuid list</p>
                     * @return CustomModeQuuids <p>Custom mode quuid list</p>
                     * 
                     */
                    std::vector<std::string> GetCustomModeQuuids() const;

                    /**
                     * 设置<p>Custom mode quuid list</p>
                     * @param _customModeQuuids <p>Custom mode quuid list</p>
                     * 
                     */
                    void SetCustomModeQuuids(const std::vector<std::string>& _customModeQuuids);

                    /**
                     * 判断参数 CustomModeQuuids 是否已赋值
                     * @return CustomModeQuuids 是否已赋值
                     * 
                     */
                    bool CustomModeQuuidsHasBeenSet() const;

                    /**
                     * 获取<p>Log enhancement switch. 0: off, 1: on</p>
                     * @return EnhanceLogMode <p>Log enhancement switch. 0: off, 1: on</p>
                     * 
                     */
                    uint64_t GetEnhanceLogMode() const;

                    /**
                     * 设置<p>Log enhancement switch. 0: off, 1: on</p>
                     * @param _enhanceLogMode <p>Log enhancement switch. 0: off, 1: on</p>
                     * 
                     */
                    void SetEnhanceLogMode(const uint64_t& _enhanceLogMode);

                    /**
                     * 判断参数 EnhanceLogMode 是否已赋值
                     * @return EnhanceLogMode 是否已赋值
                     * 
                     */
                    bool EnhanceLogModeHasBeenSet() const;

                    /**
                     * 获取<p>Malicious file scan automatic poc mode switch. 0: off, 1: on</p>
                     * @return MalwarePocMode <p>Malicious file scan automatic poc mode switch. 0: off, 1: on</p>
                     * 
                     */
                    uint64_t GetMalwarePocMode() const;

                    /**
                     * 设置<p>Malicious file scan automatic poc mode switch. 0: off, 1: on</p>
                     * @param _malwarePocMode <p>Malicious file scan automatic poc mode switch. 0: off, 1: on</p>
                     * 
                     */
                    void SetMalwarePocMode(const uint64_t& _malwarePocMode);

                    /**
                     * 判断参数 MalwarePocMode 是否已赋值
                     * @return MalwarePocMode 是否已赋值
                     * 
                     */
                    bool MalwarePocModeHasBeenSet() const;

                    /**
                     * 获取<p>Whether the quintuple reports the source port. 0: not reported; 1: reported</p>
                     * @return ReportSourcePort <p>Whether the quintuple reports the source port. 0: not reported; 1: reported</p>
                     * 
                     */
                    uint64_t GetReportSourcePort() const;

                    /**
                     * 设置<p>Whether the quintuple reports the source port. 0: not reported; 1: reported</p>
                     * @param _reportSourcePort <p>Whether the quintuple reports the source port. 0: not reported; 1: reported</p>
                     * 
                     */
                    void SetReportSourcePort(const uint64_t& _reportSourcePort);

                    /**
                     * 判断参数 ReportSourcePort 是否已赋值
                     * @return ReportSourcePort 是否已赋值
                     * 
                     */
                    bool ReportSourcePortHasBeenSet() const;

                    /**
                     * 获取<p>Log gathering settings, collect TCP source port tcp_src_port, TCP ingress log tcp_ingress, HTTP egress connection log http_egress, HTTP ingress connection log http_ingress, and application access log app_access</p>
                     * @return LogCollectSettings <p>Log gathering settings, collect TCP source port tcp_src_port, TCP ingress log tcp_ingress, HTTP egress connection log http_egress, HTTP ingress connection log http_ingress, and application access log app_access</p>
                     * 
                     */
                    std::vector<std::string> GetLogCollectSettings() const;

                    /**
                     * 设置<p>Log gathering settings, collect TCP source port tcp_src_port, TCP ingress log tcp_ingress, HTTP egress connection log http_egress, HTTP ingress connection log http_ingress, and application access log app_access</p>
                     * @param _logCollectSettings <p>Log gathering settings, collect TCP source port tcp_src_port, TCP ingress log tcp_ingress, HTTP egress connection log http_egress, HTTP ingress connection log http_ingress, and application access log app_access</p>
                     * 
                     */
                    void SetLogCollectSettings(const std::vector<std::string>& _logCollectSettings);

                    /**
                     * 判断参数 LogCollectSettings 是否已赋值
                     * @return LogCollectSettings 是否已赋值
                     * 
                     */
                    bool LogCollectSettingsHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id.</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Custom mode configuration</p>
                     */
                    CustomAgentRunModePolicy m_customPolicy;
                    bool m_customPolicyHasBeenSet;

                    /**
                     * <p>List of quuids in high protection mode</p>
                     */
                    std::vector<std::string> m_advanceModeQuuids;
                    bool m_advanceModeQuuidsHasBeenSet;

                    /**
                     * <p>Custom mode quuid list</p>
                     */
                    std::vector<std::string> m_customModeQuuids;
                    bool m_customModeQuuidsHasBeenSet;

                    /**
                     * <p>Log enhancement switch. 0: off, 1: on</p>
                     */
                    uint64_t m_enhanceLogMode;
                    bool m_enhanceLogModeHasBeenSet;

                    /**
                     * <p>Malicious file scan automatic poc mode switch. 0: off, 1: on</p>
                     */
                    uint64_t m_malwarePocMode;
                    bool m_malwarePocModeHasBeenSet;

                    /**
                     * <p>Whether the quintuple reports the source port. 0: not reported; 1: reported</p>
                     */
                    uint64_t m_reportSourcePort;
                    bool m_reportSourcePortHasBeenSet;

                    /**
                     * <p>Log gathering settings, collect TCP source port tcp_src_port, TCP ingress log tcp_ingress, HTTP egress connection log http_egress, HTTP ingress connection log http_ingress, and application access log app_access</p>
                     */
                    std::vector<std::string> m_logCollectSettings;
                    bool m_logCollectSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTRUNMODEREQUEST_H_
