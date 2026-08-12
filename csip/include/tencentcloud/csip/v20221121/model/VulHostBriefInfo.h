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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULHOSTBRIEFINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULHOSTBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AccountBriefInfo.h>
#include <tencentcloud/csip/v20221121/model/VPRRatingInfo.h>
#include <tencentcloud/csip/v20221121/model/MiniTagItem.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Host brief information
                */
                class VulHostBriefInfo : public AbstractModel
                {
                public:
                    VulHostBriefInfo();
                    ~VulHostBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cloud host instance ID<br>Parameter format: such as ins-xxxxxxxx</p>
                     * @return InstanceID <p>Cloud host instance ID<br>Parameter format: such as ins-xxxxxxxx</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>Cloud host instance ID<br>Parameter format: such as ins-xxxxxxxx</p>
                     * @param _instanceID <p>Cloud host instance ID<br>Parameter format: such as ins-xxxxxxxx</p>
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
                     * 获取<p>Host name.</p>
                     * @return Name <p>Host name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Host name.</p>
                     * @param _name <p>Host name.</p>
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
                     * 获取<p>Public network IP address</p>
                     * @return PublicIP <p>Public network IP address</p>
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置<p>Public network IP address</p>
                     * @param _publicIP <p>Public network IP address</p>
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取<p>Private IP address</p>
                     * @return PrivateIP <p>Private IP address</p>
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置<p>Private IP address</p>
                     * @param _privateIP <p>Private IP address</p>
                     * 
                     */
                    void SetPrivateIP(const std::string& _privateIP);

                    /**
                     * 判断参数 PrivateIP 是否已赋值
                     * @return PrivateIP 是否已赋值
                     * 
                     */
                    bool PrivateIPHasBeenSet() const;

                    /**
                     * 获取<p>Protection edition<br>Enumeration value:<br>NONE: No protection<br>BASIC: Basic version<br>PRO: Pro edition<br>ULTIMATE: Flagship edition<br>PRO_LH: Lightweight edition</p>
                     * @return DefendVersion <p>Protection edition<br>Enumeration value:<br>NONE: No protection<br>BASIC: Basic version<br>PRO: Pro edition<br>ULTIMATE: Flagship edition<br>PRO_LH: Lightweight edition</p>
                     * 
                     */
                    std::string GetDefendVersion() const;

                    /**
                     * 设置<p>Protection edition<br>Enumeration value:<br>NONE: No protection<br>BASIC: Basic version<br>PRO: Pro edition<br>ULTIMATE: Flagship edition<br>PRO_LH: Lightweight edition</p>
                     * @param _defendVersion <p>Protection edition<br>Enumeration value:<br>NONE: No protection<br>BASIC: Basic version<br>PRO: Pro edition<br>ULTIMATE: Flagship edition<br>PRO_LH: Lightweight edition</p>
                     * 
                     */
                    void SetDefendVersion(const std::string& _defendVersion);

                    /**
                     * 判断参数 DefendVersion 是否已赋值
                     * @return DefendVersion 是否已赋值
                     * 
                     */
                    bool DefendVersionHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability defense status<br>Enumeration value:<br>ENABLED: Enabled<br>NOT_SUPPORTED: Unsupported<br>NOT_ENABLED: Not enabled</p>
                     * @return DefendStatus <p>Vulnerability defense status<br>Enumeration value:<br>ENABLED: Enabled<br>NOT_SUPPORTED: Unsupported<br>NOT_ENABLED: Not enabled</p>
                     * 
                     */
                    std::string GetDefendStatus() const;

                    /**
                     * 设置<p>Vulnerability defense status<br>Enumeration value:<br>ENABLED: Enabled<br>NOT_SUPPORTED: Unsupported<br>NOT_ENABLED: Not enabled</p>
                     * @param _defendStatus <p>Vulnerability defense status<br>Enumeration value:<br>ENABLED: Enabled<br>NOT_SUPPORTED: Unsupported<br>NOT_ENABLED: Not enabled</p>
                     * 
                     */
                    void SetDefendStatus(const std::string& _defendStatus);

                    /**
                     * 判断参数 DefendStatus 是否已赋值
                     * @return DefendStatus 是否已赋值
                     * 
                     */
                    bool DefendStatusHasBeenSet() const;

                    /**
                     * 获取<p>Associated account information</p>
                     * @return Account <p>Associated account information</p>
                     * 
                     */
                    AccountBriefInfo GetAccount() const;

                    /**
                     * 设置<p>Associated account information</p>
                     * @param _account <p>Associated account information</p>
                     * 
                     */
                    void SetAccount(const AccountBriefInfo& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取<p>Cloud host instance status<br>Enumeration value:<br>RUNNING: running<br>STOPPED: stopped<br>UNKNOWN: unknown</p>
                     * @return InstanceStatus <p>Cloud host instance status<br>Enumeration value:<br>RUNNING: running<br>STOPPED: stopped<br>UNKNOWN: unknown</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>Cloud host instance status<br>Enumeration value:<br>RUNNING: running<br>STOPPED: stopped<br>UNKNOWN: unknown</p>
                     * @param _instanceStatus <p>Cloud host instance status<br>Enumeration value:<br>RUNNING: running<br>STOPPED: stopped<br>UNKNOWN: unknown</p>
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>Remediation status enumeration values.</p><p>Enumeration values: </p><ul><li>PENDING: To be fixed, </li><li>SCANNING: Scan in progress, </li><li>FIXED: Fixed, </li><li>IGNORED: Ignored, </li><li>FIXING: In remediation, </li><li>FIX_FAILED: Fix failure, </li><li>NEED_REBOOT: Pending restart.</li></ul>
                     * @return RiskStatus <p>Remediation status enumeration values.</p><p>Enumeration values: </p><ul><li>PENDING: To be fixed, </li><li>SCANNING: Scan in progress, </li><li>FIXED: Fixed, </li><li>IGNORED: Ignored, </li><li>FIXING: In remediation, </li><li>FIX_FAILED: Fix failure, </li><li>NEED_REBOOT: Pending restart.</li></ul>
                     * 
                     */
                    std::string GetRiskStatus() const;

                    /**
                     * 设置<p>Remediation status enumeration values.</p><p>Enumeration values: </p><ul><li>PENDING: To be fixed, </li><li>SCANNING: Scan in progress, </li><li>FIXED: Fixed, </li><li>IGNORED: Ignored, </li><li>FIXING: In remediation, </li><li>FIX_FAILED: Fix failure, </li><li>NEED_REBOOT: Pending restart.</li></ul>
                     * @param _riskStatus <p>Remediation status enumeration values.</p><p>Enumeration values: </p><ul><li>PENDING: To be fixed, </li><li>SCANNING: Scan in progress, </li><li>FIXED: Fixed, </li><li>IGNORED: Ignored, </li><li>FIXING: In remediation, </li><li>FIX_FAILED: Fix failure, </li><li>NEED_REBOOT: Pending restart.</li></ul>
                     * 
                     */
                    void SetRiskStatus(const std::string& _riskStatus);

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                    /**
                     * 获取<p>VPR rating information (including rating result and details in each dimension)</p>
                     * @return VPRRating <p>VPR rating information (including rating result and details in each dimension)</p>
                     * 
                     */
                    VPRRatingInfo GetVPRRating() const;

                    /**
                     * 设置<p>VPR rating information (including rating result and details in each dimension)</p>
                     * @param _vPRRating <p>VPR rating information (including rating result and details in each dimension)</p>
                     * 
                     */
                    void SetVPRRating(const VPRRatingInfo& _vPRRating);

                    /**
                     * 判断参数 VPRRating 是否已赋值
                     * @return VPRRating 是否已赋值
                     * 
                     */
                    bool VPRRatingHasBeenSet() const;

                    /**
                     * 获取<p>CWP Agent status<br>Enumeration value:<br>ONLINE: Online<br>OFFLINE: Offline<br>UNINSTALLED: Not installed</p>
                     * @return AgentStatus <p>CWP Agent status<br>Enumeration value:<br>ONLINE: Online<br>OFFLINE: Offline<br>UNINSTALLED: Not installed</p>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>CWP Agent status<br>Enumeration value:<br>ONLINE: Online<br>OFFLINE: Offline<br>UNINSTALLED: Not installed</p>
                     * @param _agentStatus <p>CWP Agent status<br>Enumeration value:<br>ONLINE: Online<br>OFFLINE: Offline<br>UNINSTALLED: Not installed</p>
                     * 
                     */
                    void SetAgentStatus(const std::string& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取<p>Asset tag list (CSIP internal asset tag)</p>
                     * @return TagItem <p>Asset tag list (CSIP internal asset tag)</p>
                     * 
                     */
                    std::vector<MiniTagItem> GetTagItem() const;

                    /**
                     * 设置<p>Asset tag list (CSIP internal asset tag)</p>
                     * @param _tagItem <p>Asset tag list (CSIP internal asset tag)</p>
                     * 
                     */
                    void SetTagItem(const std::vector<MiniTagItem>& _tagItem);

                    /**
                     * 判断参数 TagItem 是否已赋值
                     * @return TagItem 是否已赋值
                     * 
                     */
                    bool TagItemHasBeenSet() const;

                    /**
                     * 获取<p>Cloud tag list (cloud asset side Tag)</p>
                     * @return CloudTag <p>Cloud tag list (cloud asset side Tag)</p>
                     * 
                     */
                    std::vector<Tag> GetCloudTag() const;

                    /**
                     * 设置<p>Cloud tag list (cloud asset side Tag)</p>
                     * @param _cloudTag <p>Cloud tag list (cloud asset side Tag)</p>
                     * 
                     */
                    void SetCloudTag(const std::vector<Tag>& _cloudTag);

                    /**
                     * 判断参数 CloudTag 是否已赋值
                     * @return CloudTag 是否已赋值
                     * 
                     */
                    bool CloudTagHasBeenSet() const;

                private:

                    /**
                     * <p>Cloud host instance ID<br>Parameter format: such as ins-xxxxxxxx</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>Host name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Public network IP address</p>
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * <p>Private IP address</p>
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * <p>Protection edition<br>Enumeration value:<br>NONE: No protection<br>BASIC: Basic version<br>PRO: Pro edition<br>ULTIMATE: Flagship edition<br>PRO_LH: Lightweight edition</p>
                     */
                    std::string m_defendVersion;
                    bool m_defendVersionHasBeenSet;

                    /**
                     * <p>Vulnerability defense status<br>Enumeration value:<br>ENABLED: Enabled<br>NOT_SUPPORTED: Unsupported<br>NOT_ENABLED: Not enabled</p>
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * <p>Associated account information</p>
                     */
                    AccountBriefInfo m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>Cloud host instance status<br>Enumeration value:<br>RUNNING: running<br>STOPPED: stopped<br>UNKNOWN: unknown</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>Remediation status enumeration values.</p><p>Enumeration values: </p><ul><li>PENDING: To be fixed, </li><li>SCANNING: Scan in progress, </li><li>FIXED: Fixed, </li><li>IGNORED: Ignored, </li><li>FIXING: In remediation, </li><li>FIX_FAILED: Fix failure, </li><li>NEED_REBOOT: Pending restart.</li></ul>
                     */
                    std::string m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * <p>VPR rating information (including rating result and details in each dimension)</p>
                     */
                    VPRRatingInfo m_vPRRating;
                    bool m_vPRRatingHasBeenSet;

                    /**
                     * <p>CWP Agent status<br>Enumeration value:<br>ONLINE: Online<br>OFFLINE: Offline<br>UNINSTALLED: Not installed</p>
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * <p>Asset tag list (CSIP internal asset tag)</p>
                     */
                    std::vector<MiniTagItem> m_tagItem;
                    bool m_tagItemHasBeenSet;

                    /**
                     * <p>Cloud tag list (cloud asset side Tag)</p>
                     */
                    std::vector<Tag> m_cloudTag;
                    bool m_cloudTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULHOSTBRIEFINFO_H_
