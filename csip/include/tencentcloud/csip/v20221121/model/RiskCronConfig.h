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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCRONCONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCRONCONFIG_H_

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
                * Cloud resource configuration risk periodic scan configuration
                */
                class RiskCronConfig : public AbstractModel
                {
                public:
                    RiskCronConfig();
                    ~RiskCronConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>appid of the periodic task creator.</p>
                     * @return CreateAppID <p>appid of the periodic task creator.</p>
                     * 
                     */
                    uint64_t GetCreateAppID() const;

                    /**
                     * 设置<p>appid of the periodic task creator.</p>
                     * @param _createAppID <p>appid of the periodic task creator.</p>
                     * 
                     */
                    void SetCreateAppID(const uint64_t& _createAppID);

                    /**
                     * 判断参数 CreateAppID 是否已赋值
                     * @return CreateAppID 是否已赋值
                     * 
                     */
                    bool CreateAppIDHasBeenSet() const;

                    /**
                     * 获取<p>Periodic schedule</p>
                     * @return PlanContent <p>Periodic schedule</p>
                     * 
                     */
                    std::string GetPlanContent() const;

                    /**
                     * 设置<p>Periodic schedule</p>
                     * @param _planContent <p>Periodic schedule</p>
                     * 
                     */
                    void SetPlanContent(const std::string& _planContent);

                    /**
                     * 判断参数 PlanContent 是否已赋值
                     * @return PlanContent 是否已赋值
                     * 
                     */
                    bool PlanContentHasBeenSet() const;

                    /**
                     * 获取<p>Period scanning enabled status</p>
                     * @return CronStatus <p>Period scanning enabled status</p>
                     * 
                     */
                    uint64_t GetCronStatus() const;

                    /**
                     * 设置<p>Period scanning enabled status</p>
                     * @param _cronStatus <p>Period scanning enabled status</p>
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
                     * 获取<p>Whether to automatically join the scan for new rules</p>
                     * @return AddRuleEnableStatus <p>Whether to automatically join the scan for new rules</p>
                     * 
                     */
                    bool GetAddRuleEnableStatus() const;

                    /**
                     * 设置<p>Whether to automatically join the scan for new rules</p>
                     * @param _addRuleEnableStatus <p>Whether to automatically join the scan for new rules</p>
                     * 
                     */
                    void SetAddRuleEnableStatus(const bool& _addRuleEnableStatus);

                    /**
                     * 判断参数 AddRuleEnableStatus 是否已赋值
                     * @return AddRuleEnableStatus 是否已赋值
                     * 
                     */
                    bool AddRuleEnableStatusHasBeenSet() const;

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
                     * <p>appid of the periodic task creator.</p>
                     */
                    uint64_t m_createAppID;
                    bool m_createAppIDHasBeenSet;

                    /**
                     * <p>Periodic schedule</p>
                     */
                    std::string m_planContent;
                    bool m_planContentHasBeenSet;

                    /**
                     * <p>Period scanning enabled status</p>
                     */
                    uint64_t m_cronStatus;
                    bool m_cronStatusHasBeenSet;

                    /**
                     * <p>Whether to automatically join the scan for new rules</p>
                     */
                    bool m_addRuleEnableStatus;
                    bool m_addRuleEnableStatusHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCRONCONFIG_H_
