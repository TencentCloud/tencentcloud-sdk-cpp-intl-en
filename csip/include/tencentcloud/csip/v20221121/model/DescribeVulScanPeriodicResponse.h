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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANPERIODICRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANPERIODICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * DescribeVulScanPeriodic response structure.
                */
                class DescribeVulScanPeriodicResponse : public AbstractModel
                {
                public:
                    DescribeVulScanPeriodicResponse();
                    ~DescribeVulScanPeriodicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Periodic scan switch (0-Disable, 1-Enable)</p>
                     * @return Status <p>Periodic scan switch (0-Disable, 1-Enable)</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability type</p><p>Enumeration values:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * @return VulCategory <p>Vulnerability type</p><p>Enumeration values:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * 
                     */
                    std::vector<std::string> GetVulCategory() const;

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability level (INVALID: invalid, INFO: notification, LOW: low risk, MEDIUM: medium risk, HIGH: high risk, CRITICAL: critical)</p>
                     * @return Level <p>Vulnerability level (INVALID: invalid, INFO: notification, LOW: low risk, MEDIUM: medium risk, HIGH: high risk, CRITICAL: critical)</p>
                     * 
                     */
                    std::vector<std::string> GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>Scan mode (VersionCompare: version comparison, POC: POC detection, VersionComparePOC: version comparison + POC detection)</p>
                     * @return Method <p>Scan mode (VersionCompare: version comparison, POC: POC detection, VersionComparePOC: version comparison + POC detection)</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>Periodic scan type</p><p>Enumeration values:</p><ul><li>1: Daily</li><li>2: Weekly</li><li>3: Per month</li></ul>
                     * @return CycleType <p>Periodic scan type</p><p>Enumeration values:</p><ul><li>1: Daily</li><li>2: Weekly</li><li>3: Per month</li></ul>
                     * 
                     */
                    uint64_t GetCycleType() const;

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取<p>Start time (09:00:00)</p>
                     * @return StartTime <p>Start time (09:00:00)</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time (18:00:00)</p>
                     * @return EndTime <p>End time (18:00:00)</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Asset scope (0 - all assets, 1 - custom asset, 2 - remove asset)</p>
                     * @return AssetRange <p>Asset scope (0 - all assets, 1 - custom asset, 2 - remove asset)</p>
                     * 
                     */
                    int64_t GetAssetRange() const;

                    /**
                     * 判断参数 AssetRange 是否已赋值
                     * @return AssetRange 是否已赋值
                     * 
                     */
                    bool AssetRangeHasBeenSet() const;

                    /**
                     * 获取<p>Asset list (instance_id list)</p>
                     * @return AssetList <p>Asset list (instance_id list)</p>
                     * 
                     */
                    std::vector<std::string> GetAssetList() const;

                    /**
                     * 判断参数 AssetList 是否已赋值
                     * @return AssetList 是否已赋值
                     * 
                     */
                    bool AssetListHasBeenSet() const;

                    /**
                     * 获取<p>Cycle value</p><p>Unit: day of the week or day per month</p>
                     * @return CycleValue <p>Cycle value</p><p>Unit: day of the week or day per month</p>
                     * 
                     */
                    std::vector<uint64_t> GetCycleValue() const;

                    /**
                     * 判断参数 CycleValue 是否已赋值
                     * @return CycleValue 是否已赋值
                     * 
                     */
                    bool CycleValueHasBeenSet() const;

                    /**
                     * 获取<p>Timeout duration</p><p>Unit: seconds</p>
                     * @return Timeout <p>Timeout duration</p><p>Unit: seconds</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Whether to run the synchronized configuration. 0: not allowed, 1: allowed</p>
                     * @return AllowSync <p>Whether to run the synchronized configuration. 0: not allowed, 1: allowed</p>
                     * 
                     */
                    uint64_t GetAllowSync() const;

                    /**
                     * 判断参数 AllowSync 是否已赋值
                     * @return AllowSync 是否已赋值
                     * 
                     */
                    bool AllowSyncHasBeenSet() const;

                    /**
                     * 获取<p>Whether automatic synchronization is enabled for the admin account. 0: disabled, 1: enabled</p>
                     * @return EnableSync <p>Whether automatic synchronization is enabled for the admin account. 0: disabled, 1: enabled</p>
                     * 
                     */
                    uint64_t GetEnableSync() const;

                    /**
                     * 判断参数 EnableSync 是否已赋值
                     * @return EnableSync 是否已赋值
                     * 
                     */
                    bool EnableSyncHasBeenSet() const;

                    /**
                     * 获取<p>Which account the configuration message comes from. Being empty indicates it is set by oneself.</p>
                     * @return AdminInfo <p>Which account the configuration message comes from. Being empty indicates it is set by oneself.</p>
                     * 
                     */
                    AccountBriefInfo GetAdminInfo() const;

                    /**
                     * 判断参数 AdminInfo 是否已赋值
                     * @return AdminInfo 是否已赋值
                     * 
                     */
                    bool AdminInfoHasBeenSet() const;

                    /**
                     * 获取<p>Tag id</p>
                     * @return TagIds <p>Tag id</p>
                     * 
                     */
                    std::vector<uint64_t> GetTagIds() const;

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to prefer Tencent Cloud software sources</p>
                     * @return PreferCloudSource <p>Whether to prefer Tencent Cloud software sources</p>
                     * 
                     */
                    bool GetPreferCloudSource() const;

                    /**
                     * 判断参数 PreferCloudSource 是否已赋值
                     * @return PreferCloudSource 是否已赋值
                     * 
                     */
                    bool PreferCloudSourceHasBeenSet() const;

                private:

                    /**
                     * <p>Periodic scan switch (0-Disable, 1-Enable)</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Vulnerability type</p><p>Enumeration values:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     */
                    std::vector<std::string> m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * <p>Vulnerability level (INVALID: invalid, INFO: notification, LOW: low risk, MEDIUM: medium risk, HIGH: high risk, CRITICAL: critical)</p>
                     */
                    std::vector<std::string> m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Scan mode (VersionCompare: version comparison, POC: POC detection, VersionComparePOC: version comparison + POC detection)</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>Periodic scan type</p><p>Enumeration values:</p><ul><li>1: Daily</li><li>2: Weekly</li><li>3: Per month</li></ul>
                     */
                    uint64_t m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>Start time (09:00:00)</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time (18:00:00)</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Asset scope (0 - all assets, 1 - custom asset, 2 - remove asset)</p>
                     */
                    int64_t m_assetRange;
                    bool m_assetRangeHasBeenSet;

                    /**
                     * <p>Asset list (instance_id list)</p>
                     */
                    std::vector<std::string> m_assetList;
                    bool m_assetListHasBeenSet;

                    /**
                     * <p>Cycle value</p><p>Unit: day of the week or day per month</p>
                     */
                    std::vector<uint64_t> m_cycleValue;
                    bool m_cycleValueHasBeenSet;

                    /**
                     * <p>Timeout duration</p><p>Unit: seconds</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Whether to run the synchronized configuration. 0: not allowed, 1: allowed</p>
                     */
                    uint64_t m_allowSync;
                    bool m_allowSyncHasBeenSet;

                    /**
                     * <p>Whether automatic synchronization is enabled for the admin account. 0: disabled, 1: enabled</p>
                     */
                    uint64_t m_enableSync;
                    bool m_enableSyncHasBeenSet;

                    /**
                     * <p>Which account the configuration message comes from. Being empty indicates it is set by oneself.</p>
                     */
                    AccountBriefInfo m_adminInfo;
                    bool m_adminInfoHasBeenSet;

                    /**
                     * <p>Tag id</p>
                     */
                    std::vector<uint64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * <p>Whether to prefer Tencent Cloud software sources</p>
                     */
                    bool m_preferCloudSource;
                    bool m_preferCloudSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANPERIODICRESPONSE_H_
