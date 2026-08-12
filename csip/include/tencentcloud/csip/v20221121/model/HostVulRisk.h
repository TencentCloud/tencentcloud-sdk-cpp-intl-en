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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AccountBriefInfo.h>
#include <tencentcloud/csip/v20221121/model/VulDetailInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Host vulnerability risk
                */
                class HostVulRisk : public AbstractModel
                {
                public:
                    HostVulRisk();
                    ~HostVulRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Risk record ID (host_vul_risk.id)</p>
                     * @return RiskID <p>Risk record ID (host_vul_risk.id)</p>
                     * 
                     */
                    uint64_t GetRiskID() const;

                    /**
                     * 设置<p>Risk record ID (host_vul_risk.id)</p>
                     * @param _riskID <p>Risk record ID (host_vul_risk.id)</p>
                     * 
                     */
                    void SetRiskID(const uint64_t& _riskID);

                    /**
                     * 判断参数 RiskID 是否已赋值
                     * @return RiskID 是否已赋值
                     * 
                     */
                    bool RiskIDHasBeenSet() const;

                    /**
                     * 获取<p>Number of affected hosts</p>
                     * @return EffectHostCount <p>Number of affected hosts</p>
                     * 
                     */
                    uint64_t GetEffectHostCount() const;

                    /**
                     * 设置<p>Number of affected hosts</p>
                     * @param _effectHostCount <p>Number of affected hosts</p>
                     * 
                     */
                    void SetEffectHostCount(const uint64_t& _effectHostCount);

                    /**
                     * 判断参数 EffectHostCount 是否已赋值
                     * @return EffectHostCount 是否已赋值
                     * 
                     */
                    bool EffectHostCountHasBeenSet() const;

                    /**
                     * 获取<p>Latest scan time<br>Parameter format: YYYY-MM-DD HH:mm:ss</p>
                     * @return LatestScanTime <p>Latest scan time<br>Parameter format: YYYY-MM-DD HH:mm:ss</p>
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置<p>Latest scan time<br>Parameter format: YYYY-MM-DD HH:mm:ss</p>
                     * @param _latestScanTime <p>Latest scan time<br>Parameter format: YYYY-MM-DD HH:mm:ss</p>
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>Account list it belongs to</p>
                     * @return Account <p>Account list it belongs to</p>
                     * 
                     */
                    std::vector<AccountBriefInfo> GetAccount() const;

                    /**
                     * 设置<p>Account list it belongs to</p>
                     * @param _account <p>Account list it belongs to</p>
                     * 
                     */
                    void SetAccount(const std::vector<AccountBriefInfo>& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

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
                     * 获取<p>Remediation status<br>Enumeration values:<br>PENDING: to be fixed<br>SCANNING: scan in progress<br>FIXED: fixed<br>IGNORED: whitelisted<br>FIXING: fix<br>FIX_FAILED: FIX_FAILURE<br>NOTSCAN: unscanned<br>WITHOUT_RISK: no risk<br>NEED_REBOOT: pending restart</p>
                     * @return RiskStatus <p>Remediation status<br>Enumeration values:<br>PENDING: to be fixed<br>SCANNING: scan in progress<br>FIXED: fixed<br>IGNORED: whitelisted<br>FIXING: fix<br>FIX_FAILED: FIX_FAILURE<br>NOTSCAN: unscanned<br>WITHOUT_RISK: no risk<br>NEED_REBOOT: pending restart</p>
                     * 
                     */
                    std::string GetRiskStatus() const;

                    /**
                     * 设置<p>Remediation status<br>Enumeration values:<br>PENDING: to be fixed<br>SCANNING: scan in progress<br>FIXED: fixed<br>IGNORED: whitelisted<br>FIXING: fix<br>FIX_FAILED: FIX_FAILURE<br>NOTSCAN: unscanned<br>WITHOUT_RISK: no risk<br>NEED_REBOOT: pending restart</p>
                     * @param _riskStatus <p>Remediation status<br>Enumeration values:<br>PENDING: to be fixed<br>SCANNING: scan in progress<br>FIXED: fixed<br>IGNORED: whitelisted<br>FIXING: fix<br>FIX_FAILED: FIX_FAILURE<br>NOTSCAN: unscanned<br>WITHOUT_RISK: no risk<br>NEED_REBOOT: pending restart</p>
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
                     * 获取<p>Vulnerability details</p>
                     * @return VulDetail <p>Vulnerability details</p>
                     * 
                     */
                    VulDetailInfo GetVulDetail() const;

                    /**
                     * 设置<p>Vulnerability details</p>
                     * @param _vulDetail <p>Vulnerability details</p>
                     * 
                     */
                    void SetVulDetail(const VulDetailInfo& _vulDetail);

                    /**
                     * 判断参数 VulDetail 是否已赋值
                     * @return VulDetail 是否已赋值
                     * 
                     */
                    bool VulDetailHasBeenSet() const;

                private:

                    /**
                     * <p>Risk record ID (host_vul_risk.id)</p>
                     */
                    uint64_t m_riskID;
                    bool m_riskIDHasBeenSet;

                    /**
                     * <p>Number of affected hosts</p>
                     */
                    uint64_t m_effectHostCount;
                    bool m_effectHostCountHasBeenSet;

                    /**
                     * <p>Latest scan time<br>Parameter format: YYYY-MM-DD HH:mm:ss</p>
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * <p>Account list it belongs to</p>
                     */
                    std::vector<AccountBriefInfo> m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>Vulnerability defense status<br>Enumeration value:<br>ENABLED: Enabled<br>NOT_SUPPORTED: Unsupported<br>NOT_ENABLED: Not enabled</p>
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * <p>Remediation status<br>Enumeration values:<br>PENDING: to be fixed<br>SCANNING: scan in progress<br>FIXED: fixed<br>IGNORED: whitelisted<br>FIXING: fix<br>FIX_FAILED: FIX_FAILURE<br>NOTSCAN: unscanned<br>WITHOUT_RISK: no risk<br>NEED_REBOOT: pending restart</p>
                     */
                    std::string m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * <p>Vulnerability details</p>
                     */
                    VulDetailInfo m_vulDetail;
                    bool m_vulDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULRISK_H_
