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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTKBRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTKBRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/KBDetail.h>
#include <tencentcloud/csip/v20221121/model/AccountBriefInfo.h>


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
                class HostKBRisk : public AbstractModel
                {
                public:
                    HostKBRisk();
                    ~HostKBRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Risk record ID (kb_risk.id)</p>
                     * @return RiskID <p>Risk record ID (kb_risk.id)</p>
                     * 
                     */
                    uint64_t GetRiskID() const;

                    /**
                     * 设置<p>Risk record ID (kb_risk.id)</p>
                     * @param _riskID <p>Risk record ID (kb_risk.id)</p>
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
                     * 获取<p>Windows KB patch detailed information</p>
                     * @return KBDetail <p>Windows KB patch detailed information</p>
                     * 
                     */
                    KBDetail GetKBDetail() const;

                    /**
                     * 设置<p>Windows KB patch detailed information</p>
                     * @param _kBDetail <p>Windows KB patch detailed information</p>
                     * 
                     */
                    void SetKBDetail(const KBDetail& _kBDetail);

                    /**
                     * 判断参数 KBDetail 是否已赋值
                     * @return KBDetail 是否已赋值
                     * 
                     */
                    bool KBDetailHasBeenSet() const;

                    /**
                     * 获取<p>Number of affected hosts.</p>
                     * @return EffectHostCount <p>Number of affected hosts.</p>
                     * 
                     */
                    uint64_t GetEffectHostCount() const;

                    /**
                     * 设置<p>Number of affected hosts.</p>
                     * @param _effectHostCount <p>Number of affected hosts.</p>
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
                     * 获取<p>Latest scan time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ</p>
                     * @return LatestScanTime <p>Latest scan time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ</p>
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置<p>Latest scan time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ</p>
                     * @param _latestScanTime <p>Latest scan time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ</p>
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
                     * 获取<p>Associated account list</p>
                     * @return Account <p>Associated account list</p>
                     * 
                     */
                    std::vector<AccountBriefInfo> GetAccount() const;

                    /**
                     * 设置<p>Associated account list</p>
                     * @param _account <p>Associated account list</p>
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
                     * 获取<p>Remediation status<br>Enumeration values:<br>PENDING: To be fixed<br>SCANNING: Scan in progress<br>FIXED: Fixed<br>IGNORED: Allowlisted<br>FIXING: In remediation<br>FIX_FAILED: Fix failure</p>
                     * @return RiskStatus <p>Remediation status<br>Enumeration values:<br>PENDING: To be fixed<br>SCANNING: Scan in progress<br>FIXED: Fixed<br>IGNORED: Allowlisted<br>FIXING: In remediation<br>FIX_FAILED: Fix failure</p>
                     * 
                     */
                    std::string GetRiskStatus() const;

                    /**
                     * 设置<p>Remediation status<br>Enumeration values:<br>PENDING: To be fixed<br>SCANNING: Scan in progress<br>FIXED: Fixed<br>IGNORED: Allowlisted<br>FIXING: In remediation<br>FIX_FAILED: Fix failure</p>
                     * @param _riskStatus <p>Remediation status<br>Enumeration values:<br>PENDING: To be fixed<br>SCANNING: Scan in progress<br>FIXED: Fixed<br>IGNORED: Allowlisted<br>FIXING: In remediation<br>FIX_FAILED: Fix failure</p>
                     * 
                     */
                    void SetRiskStatus(const std::string& _riskStatus);

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                private:

                    /**
                     * <p>Risk record ID (kb_risk.id)</p>
                     */
                    uint64_t m_riskID;
                    bool m_riskIDHasBeenSet;

                    /**
                     * <p>Windows KB patch detailed information</p>
                     */
                    KBDetail m_kBDetail;
                    bool m_kBDetailHasBeenSet;

                    /**
                     * <p>Number of affected hosts.</p>
                     */
                    uint64_t m_effectHostCount;
                    bool m_effectHostCountHasBeenSet;

                    /**
                     * <p>Latest scan time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ</p>
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * <p>Associated account list</p>
                     */
                    std::vector<AccountBriefInfo> m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>Remediation status<br>Enumeration values:<br>PENDING: To be fixed<br>SCANNING: Scan in progress<br>FIXED: Fixed<br>IGNORED: Allowlisted<br>FIXING: In remediation<br>FIX_FAILED: Fix failure</p>
                     */
                    std::string m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTKBRISK_H_
