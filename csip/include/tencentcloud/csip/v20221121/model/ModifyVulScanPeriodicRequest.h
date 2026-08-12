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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYVULSCANPERIODICREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYVULSCANPERIODICREQUEST_H_

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
                * ModifyVulScanPeriodic request structure.
                */
                class ModifyVulScanPeriodicRequest : public AbstractModel
                {
                public:
                    ModifyVulScanPeriodicRequest();
                    ~ModifyVulScanPeriodicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Period scanning switch (0-off, 1-on)</p>
                     * @return Status <p>Period scanning switch (0-off, 1-on)</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Period scanning switch (0-off, 1-on)</p>
                     * @param _status <p>Period scanning switch (0-off, 1-on)</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * @return VulCategory <p>Vulnerability type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * 
                     */
                    std::vector<std::string> GetVulCategory() const;

                    /**
                     * 设置<p>Vulnerability type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * @param _vulCategory <p>Vulnerability type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * 
                     */
                    void SetVulCategory(const std::vector<std::string>& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability level</p><p>Enumeration value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     * @return Level <p>Vulnerability level</p><p>Enumeration value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     * 
                     */
                    std::vector<std::string> GetLevel() const;

                    /**
                     * 设置<p>Vulnerability level</p><p>Enumeration value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     * @param _level <p>Vulnerability level</p><p>Enumeration value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     * 
                     */
                    void SetLevel(const std::vector<std::string>& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>Scanning method (VersionCompare: version comparison, POC: POC detection, VersionComparePOC: version comparison+POC detection)</p>
                     * @return Method <p>Scanning method (VersionCompare: version comparison, POC: POC detection, VersionComparePOC: version comparison+POC detection)</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>Scanning method (VersionCompare: version comparison, POC: POC detection, VersionComparePOC: version comparison+POC detection)</p>
                     * @param _method <p>Scanning method (VersionCompare: version comparison, POC: POC detection, VersionComparePOC: version comparison+POC detection)</p>
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>Start time (09:00:00)</p>
                     * @return StartTime <p>Start time (09:00:00)</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time (09:00:00)</p>
                     * @param _startTime <p>Start time (09:00:00)</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

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
                     * 设置<p>End time (18:00:00)</p>
                     * @param _endTime <p>End time (18:00:00)</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Asset scope (0-All assets, 1-Custom assets, 2-Remove asset, 3-Automatic asset match)</p>
                     * @return AssetRange <p>Asset scope (0-All assets, 1-Custom assets, 2-Remove asset, 3-Automatic asset match)</p>
                     * 
                     */
                    int64_t GetAssetRange() const;

                    /**
                     * 设置<p>Asset scope (0-All assets, 1-Custom assets, 2-Remove asset, 3-Automatic asset match)</p>
                     * @param _assetRange <p>Asset scope (0-All assets, 1-Custom assets, 2-Remove asset, 3-Automatic asset match)</p>
                     * 
                     */
                    void SetAssetRange(const int64_t& _assetRange);

                    /**
                     * 判断参数 AssetRange 是否已赋值
                     * @return AssetRange 是否已赋值
                     * 
                     */
                    bool AssetRangeHasBeenSet() const;

                    /**
                     * 获取<p>Period scanning type</p><p>Enumeration value:</p><ul><li>1: Daily</li><li>2: Weekly</li><li>3: Per month</li></ul>
                     * @return CycleType <p>Period scanning type</p><p>Enumeration value:</p><ul><li>1: Daily</li><li>2: Weekly</li><li>3: Per month</li></ul>
                     * 
                     */
                    uint64_t GetCycleType() const;

                    /**
                     * 设置<p>Period scanning type</p><p>Enumeration value:</p><ul><li>1: Daily</li><li>2: Weekly</li><li>3: Per month</li></ul>
                     * @param _cycleType <p>Period scanning type</p><p>Enumeration value:</p><ul><li>1: Daily</li><li>2: Weekly</li><li>3: Per month</li></ul>
                     * 
                     */
                    void SetCycleType(const uint64_t& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取<p>Scan timeout duration</p><p>Measurement unit: second</p>
                     * @return Timeout <p>Scan timeout duration</p><p>Measurement unit: second</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>Scan timeout duration</p><p>Measurement unit: second</p>
                     * @param _timeout <p>Scan timeout duration</p><p>Measurement unit: second</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Cycle value</p><p>Value ranges from 1 to 31</p><p>Measurement unit: day of the week or per month</p>
                     * @return CycleValue <p>Cycle value</p><p>Value ranges from 1 to 31</p><p>Measurement unit: day of the week or per month</p>
                     * 
                     */
                    std::vector<uint64_t> GetCycleValue() const;

                    /**
                     * 设置<p>Cycle value</p><p>Value ranges from 1 to 31</p><p>Measurement unit: day of the week or per month</p>
                     * @param _cycleValue <p>Cycle value</p><p>Value ranges from 1 to 31</p><p>Measurement unit: day of the week or per month</p>
                     * 
                     */
                    void SetCycleValue(const std::vector<uint64_t>& _cycleValue);

                    /**
                     * 判断参数 CycleValue 是否已赋值
                     * @return CycleValue 是否已赋值
                     * 
                     */
                    bool CycleValueHasBeenSet() const;

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
                     * 获取<p>Asset list (instance_id list)</p>
                     * @return AssetList <p>Asset list (instance_id list)</p>
                     * 
                     */
                    std::vector<std::string> GetAssetList() const;

                    /**
                     * 设置<p>Asset list (instance_id list)</p>
                     * @param _assetList <p>Asset list (instance_id list)</p>
                     * 
                     */
                    void SetAssetList(const std::vector<std::string>& _assetList);

                    /**
                     * 判断参数 AssetList 是否已赋值
                     * @return AssetList 是否已赋值
                     * 
                     */
                    bool AssetListHasBeenSet() const;

                    /**
                     * 获取<p>Whether to run the synchronize configuration 0-not allowed, 1-allowed</p>
                     * @return AllowSync <p>Whether to run the synchronize configuration 0-not allowed, 1-allowed</p>
                     * 
                     */
                    uint64_t GetAllowSync() const;

                    /**
                     * 设置<p>Whether to run the synchronize configuration 0-not allowed, 1-allowed</p>
                     * @param _allowSync <p>Whether to run the synchronize configuration 0-not allowed, 1-allowed</p>
                     * 
                     */
                    void SetAllowSync(const uint64_t& _allowSync);

                    /**
                     * 判断参数 AllowSync 是否已赋值
                     * @return AllowSync 是否已赋值
                     * 
                     */
                    bool AllowSyncHasBeenSet() const;

                    /**
                     * 获取<p>Whether the admin account has enabled the auto sync configuration switch 0-Off, 1-On</p>
                     * @return EnableSync <p>Whether the admin account has enabled the auto sync configuration switch 0-Off, 1-On</p>
                     * 
                     */
                    uint64_t GetEnableSync() const;

                    /**
                     * 设置<p>Whether the admin account has enabled the auto sync configuration switch 0-Off, 1-On</p>
                     * @param _enableSync <p>Whether the admin account has enabled the auto sync configuration switch 0-Off, 1-On</p>
                     * 
                     */
                    void SetEnableSync(const uint64_t& _enableSync);

                    /**
                     * 判断参数 EnableSync 是否已赋值
                     * @return EnableSync 是否已赋值
                     * 
                     */
                    bool EnableSyncHasBeenSet() const;

                    /**
                     * 获取<p>Configuration sync to which account appid</p>
                     * @return SyncTo <p>Configuration sync to which account appid</p>
                     * 
                     */
                    std::vector<uint64_t> GetSyncTo() const;

                    /**
                     * 设置<p>Configuration sync to which account appid</p>
                     * @param _syncTo <p>Configuration sync to which account appid</p>
                     * 
                     */
                    void SetSyncTo(const std::vector<uint64_t>& _syncTo);

                    /**
                     * 判断参数 SyncTo 是否已赋值
                     * @return SyncTo 是否已赋值
                     * 
                     */
                    bool SyncToHasBeenSet() const;

                    /**
                     * 获取<p>Tag ID</p>
                     * @return TagIds <p>Tag ID</p>
                     * 
                     */
                    std::vector<uint64_t> GetTagIds() const;

                    /**
                     * 设置<p>Tag ID</p>
                     * @param _tagIds <p>Tag ID</p>
                     * 
                     */
                    void SetTagIds(const std::vector<uint64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Period scanning switch (0-off, 1-on)</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Vulnerability type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     */
                    std::vector<std::string> m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * <p>Vulnerability level</p><p>Enumeration value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     */
                    std::vector<std::string> m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Scanning method (VersionCompare: version comparison, POC: POC detection, VersionComparePOC: version comparison+POC detection)</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

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
                     * <p>Asset scope (0-All assets, 1-Custom assets, 2-Remove asset, 3-Automatic asset match)</p>
                     */
                    int64_t m_assetRange;
                    bool m_assetRangeHasBeenSet;

                    /**
                     * <p>Period scanning type</p><p>Enumeration value:</p><ul><li>1: Daily</li><li>2: Weekly</li><li>3: Per month</li></ul>
                     */
                    uint64_t m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>Scan timeout duration</p><p>Measurement unit: second</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Cycle value</p><p>Value ranges from 1 to 31</p><p>Measurement unit: day of the week or per month</p>
                     */
                    std::vector<uint64_t> m_cycleValue;
                    bool m_cycleValueHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Asset list (instance_id list)</p>
                     */
                    std::vector<std::string> m_assetList;
                    bool m_assetListHasBeenSet;

                    /**
                     * <p>Whether to run the synchronize configuration 0-not allowed, 1-allowed</p>
                     */
                    uint64_t m_allowSync;
                    bool m_allowSyncHasBeenSet;

                    /**
                     * <p>Whether the admin account has enabled the auto sync configuration switch 0-Off, 1-On</p>
                     */
                    uint64_t m_enableSync;
                    bool m_enableSyncHasBeenSet;

                    /**
                     * <p>Configuration sync to which account appid</p>
                     */
                    std::vector<uint64_t> m_syncTo;
                    bool m_syncToHasBeenSet;

                    /**
                     * <p>Tag ID</p>
                     */
                    std::vector<uint64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYVULSCANPERIODICREQUEST_H_
