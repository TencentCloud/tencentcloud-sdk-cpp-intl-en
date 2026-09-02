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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRISKSCANCRONCONFIGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRISKSCANCRONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRiskScanCronConfig request structure.
                */
                class ModifyRiskScanCronConfigRequest : public AbstractModel
                {
                public:
                    ModifyRiskScanCronConfigRequest();
                    ~ModifyRiskScanCronConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
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
                     * 获取<p>Plan enabled status</p>
                     * @return CronStatus <p>Plan enabled status</p>
                     * 
                     */
                    uint64_t GetCronStatus() const;

                    /**
                     * 设置<p>Plan enabled status</p>
                     * @param _cronStatus <p>Plan enabled status</p>
                     * 
                     */
                    void SetCronStatus(const uint64_t& _cronStatus);

                    /**
                     * 判断参数 CronStatus 是否已赋值
                     * @return CronStatus 是否已赋值
                     * 
                     */
                    bool CronStatusHasBeenSet() const;

                    /**
                     * 获取<p>Plan expression</p>
                     * @return CronPlanContent <p>Plan expression</p>
                     * 
                     */
                    std::string GetCronPlanContent() const;

                    /**
                     * 设置<p>Plan expression</p>
                     * @param _cronPlanContent <p>Plan expression</p>
                     * 
                     */
                    void SetCronPlanContent(const std::string& _cronPlanContent);

                    /**
                     * 判断参数 CronPlanContent 是否已赋值
                     * @return CronPlanContent 是否已赋值
                     * 
                     */
                    bool CronPlanContentHasBeenSet() const;

                    /**
                     * 获取<p>Whether to automatically execute new rules</p>
                     * @return RuleAutoEnable <p>Whether to automatically execute new rules</p>
                     * 
                     */
                    bool GetRuleAutoEnable() const;

                    /**
                     * 设置<p>Whether to automatically execute new rules</p>
                     * @param _ruleAutoEnable <p>Whether to automatically execute new rules</p>
                     * 
                     */
                    void SetRuleAutoEnable(const bool& _ruleAutoEnable);

                    /**
                     * 判断参数 RuleAutoEnable 是否已赋值
                     * @return RuleAutoEnable 是否已赋值
                     * 
                     */
                    bool RuleAutoEnableHasBeenSet() const;

                    /**
                     * 获取<p>Time zone</p>
                     * @return ScanPlanTimezone <p>Time zone</p>
                     * 
                     */
                    std::string GetScanPlanTimezone() const;

                    /**
                     * 设置<p>Time zone</p>
                     * @param _scanPlanTimezone <p>Time zone</p>
                     * 
                     */
                    void SetScanPlanTimezone(const std::string& _scanPlanTimezone);

                    /**
                     * 判断参数 ScanPlanTimezone 是否已赋值
                     * @return ScanPlanTimezone 是否已赋值
                     * 
                     */
                    bool ScanPlanTimezoneHasBeenSet() const;

                    /**
                     * 获取<p>Enable risk scan for incremental assets</p>
                     * @return IncrementAssetScanRisk <p>Enable risk scan for incremental assets</p>
                     * 
                     */
                    bool GetIncrementAssetScanRisk() const;

                    /**
                     * 设置<p>Enable risk scan for incremental assets</p>
                     * @param _incrementAssetScanRisk <p>Enable risk scan for incremental assets</p>
                     * 
                     */
                    void SetIncrementAssetScanRisk(const bool& _incrementAssetScanRisk);

                    /**
                     * 判断参数 IncrementAssetScanRisk 是否已赋值
                     * @return IncrementAssetScanRisk 是否已赋值
                     * 
                     */
                    bool IncrementAssetScanRiskHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Plan enabled status</p>
                     */
                    uint64_t m_cronStatus;
                    bool m_cronStatusHasBeenSet;

                    /**
                     * <p>Plan expression</p>
                     */
                    std::string m_cronPlanContent;
                    bool m_cronPlanContentHasBeenSet;

                    /**
                     * <p>Whether to automatically execute new rules</p>
                     */
                    bool m_ruleAutoEnable;
                    bool m_ruleAutoEnableHasBeenSet;

                    /**
                     * <p>Time zone</p>
                     */
                    std::string m_scanPlanTimezone;
                    bool m_scanPlanTimezoneHasBeenSet;

                    /**
                     * <p>Enable risk scan for incremental assets</p>
                     */
                    bool m_incrementAssetScanRisk;
                    bool m_incrementAssetScanRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRISKSCANCRONCONFIGREQUEST_H_
