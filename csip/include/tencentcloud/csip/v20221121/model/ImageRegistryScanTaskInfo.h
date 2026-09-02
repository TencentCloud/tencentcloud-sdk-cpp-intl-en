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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYSCANTASKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYSCANTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ImageScanScheduleConfig.h>
#include <tencentcloud/csip/v20221121/model/ImageScanAssetTarget.h>
#include <tencentcloud/csip/v20221121/model/ImageScanRegistryFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Image repository scan task information
                */
                class ImageRegistryScanTaskInfo : public AbstractModel
                {
                public:
                    ImageRegistryScanTaskInfo();
                    ~ImageRegistryScanTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return Id <p>Task ID.</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _id <p>Task ID.</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Scheduled scan task id.</p>
                     * @return TimedScanConfigId <p>Scheduled scan task id.</p>
                     * 
                     */
                    uint64_t GetTimedScanConfigId() const;

                    /**
                     * 设置<p>Scheduled scan task id.</p>
                     * @param _timedScanConfigId <p>Scheduled scan task id.</p>
                     * 
                     */
                    void SetTimedScanConfigId(const uint64_t& _timedScanConfigId);

                    /**
                     * 判断参数 TimedScanConfigId 是否已赋值
                     * @return TimedScanConfigId 是否已赋值
                     * 
                     */
                    bool TimedScanConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>Automatic matching mode</p><p>Enumeration values:</p><ul><li>BY_CLUSTER: Select by cluster</li><li>LATEST_VERSION: Scan the latest version image only</li><li>LOCAL_IMAGE: Local image</li></ul>
                     * @return AutoMatchMode <p>Automatic matching mode</p><p>Enumeration values:</p><ul><li>BY_CLUSTER: Select by cluster</li><li>LATEST_VERSION: Scan the latest version image only</li><li>LOCAL_IMAGE: Local image</li></ul>
                     * 
                     */
                    std::vector<std::string> GetAutoMatchMode() const;

                    /**
                     * 设置<p>Automatic matching mode</p><p>Enumeration values:</p><ul><li>BY_CLUSTER: Select by cluster</li><li>LATEST_VERSION: Scan the latest version image only</li><li>LOCAL_IMAGE: Local image</li></ul>
                     * @param _autoMatchMode <p>Automatic matching mode</p><p>Enumeration values:</p><ul><li>BY_CLUSTER: Select by cluster</li><li>LATEST_VERSION: Scan the latest version image only</li><li>LOCAL_IMAGE: Local image</li></ul>
                     * 
                     */
                    void SetAutoMatchMode(const std::vector<std::string>& _autoMatchMode);

                    /**
                     * 判断参数 AutoMatchMode 是否已赋值
                     * @return AutoMatchMode 是否已赋值
                     * 
                     */
                    bool AutoMatchModeHasBeenSet() const;

                    /**
                     * 获取<p>Scan asset mode</p><p>Enumeration values:</p><ul><li>ALL: All</li><li>MANUAL: Manual selection</li><li>AUTO_MATCH: Automatic matching</li></ul>
                     * @return ScopeMode <p>Scan asset mode</p><p>Enumeration values:</p><ul><li>ALL: All</li><li>MANUAL: Manual selection</li><li>AUTO_MATCH: Automatic matching</li></ul>
                     * 
                     */
                    std::string GetScopeMode() const;

                    /**
                     * 设置<p>Scan asset mode</p><p>Enumeration values:</p><ul><li>ALL: All</li><li>MANUAL: Manual selection</li><li>AUTO_MATCH: Automatic matching</li></ul>
                     * @param _scopeMode <p>Scan asset mode</p><p>Enumeration values:</p><ul><li>ALL: All</li><li>MANUAL: Manual selection</li><li>AUTO_MATCH: Automatic matching</li></ul>
                     * 
                     */
                    void SetScopeMode(const std::string& _scopeMode);

                    /**
                     * 判断参数 ScopeMode 是否已赋值
                     * @return ScopeMode 是否已赋值
                     * 
                     */
                    bool ScopeModeHasBeenSet() const;

                    /**
                     * 获取<p>Task trigger type</p><p>Enumeration values:</p><ul><li>TIMED: scheduled task</li><li>MANUAL: manual triggering</li></ul>
                     * @return TriggerType <p>Task trigger type</p><p>Enumeration values:</p><ul><li>TIMED: scheduled task</li><li>MANUAL: manual triggering</li></ul>
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>Task trigger type</p><p>Enumeration values:</p><ul><li>TIMED: scheduled task</li><li>MANUAL: manual triggering</li></ul>
                     * @param _triggerType <p>Task trigger type</p><p>Enumeration values:</p><ul><li>TIMED: scheduled task</li><li>MANUAL: manual triggering</li></ul>
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>Scan category</p><p>Enumeration values:</p><ul><li>CVE: vulnerability</li><li>RISK: risk</li><li>VIRUS: Trojan</li></ul>
                     * @return ScanType <p>Scan category</p><p>Enumeration values:</p><ul><li>CVE: vulnerability</li><li>RISK: risk</li><li>VIRUS: Trojan</li></ul>
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置<p>Scan category</p><p>Enumeration values:</p><ul><li>CVE: vulnerability</li><li>RISK: risk</li><li>VIRUS: Trojan</li></ul>
                     * @param _scanType <p>Scan category</p><p>Enumeration values:</p><ul><li>CVE: vulnerability</li><li>RISK: risk</li><li>VIRUS: Trojan</li></ul>
                     * 
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>Image id scanned</p>
                     * @return ImageIds <p>Image id scanned</p>
                     * 
                     */
                    std::vector<uint64_t> GetImageIds() const;

                    /**
                     * 设置<p>Image id scanned</p>
                     * @param _imageIds <p>Image id scanned</p>
                     * 
                     */
                    void SetImageIds(const std::vector<uint64_t>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取<p>Task status</p><p>Enumeration values:</p><ul><li>RUNNING: Executing</li><li>SUCCESS: Task successful</li><li>TIMEOUT: Task timeout</li><li>FAILED: Task failure</li><li>CANCELLED: Canceled</li></ul>
                     * @return Status <p>Task status</p><p>Enumeration values:</p><ul><li>RUNNING: Executing</li><li>SUCCESS: Task successful</li><li>TIMEOUT: Task timeout</li><li>FAILED: Task failure</li><li>CANCELLED: Canceled</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Task status</p><p>Enumeration values:</p><ul><li>RUNNING: Executing</li><li>SUCCESS: Task successful</li><li>TIMEOUT: Task timeout</li><li>FAILED: Task failure</li><li>CANCELLED: Canceled</li></ul>
                     * @param _status <p>Task status</p><p>Enumeration values:</p><ul><li>RUNNING: Executing</li><li>SUCCESS: Task successful</li><li>TIMEOUT: Task timeout</li><li>FAILED: Task failure</li><li>CANCELLED: Canceled</li></ul>
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
                     * 获取<p>Scheduled task associated account name</p>
                     * @return OwnerAccountName <p>Scheduled task associated account name</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>Scheduled task associated account name</p>
                     * @param _ownerAccountName <p>Scheduled task associated account name</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>appid of the account associated with the scheduled task</p>
                     * @return OwnerAppId <p>appid of the account associated with the scheduled task</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>appid of the account associated with the scheduled task</p>
                     * @param _ownerAppId <p>appid of the account associated with the scheduled task</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>uin of the associated account for the scheduled task</p>
                     * @return OwnerUin <p>uin of the associated account for the scheduled task</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>uin of the associated account for the scheduled task</p>
                     * @param _ownerUin <p>uin of the associated account for the scheduled task</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>Scan image count</p>
                     * @return ScanImageCount <p>Scan image count</p>
                     * 
                     */
                    uint64_t GetScanImageCount() const;

                    /**
                     * 设置<p>Scan image count</p>
                     * @param _scanImageCount <p>Scan image count</p>
                     * 
                     */
                    void SetScanImageCount(const uint64_t& _scanImageCount);

                    /**
                     * 判断参数 ScanImageCount 是否已赋值
                     * @return ScanImageCount 是否已赋值
                     * 
                     */
                    bool ScanImageCountHasBeenSet() const;

                    /**
                     * 获取<p>Image count scanned successfully</p>
                     * @return SuccessImageCount <p>Image count scanned successfully</p>
                     * 
                     */
                    uint64_t GetSuccessImageCount() const;

                    /**
                     * 设置<p>Image count scanned successfully</p>
                     * @param _successImageCount <p>Image count scanned successfully</p>
                     * 
                     */
                    void SetSuccessImageCount(const uint64_t& _successImageCount);

                    /**
                     * 判断参数 SuccessImageCount 是否已赋值
                     * @return SuccessImageCount 是否已赋值
                     * 
                     */
                    bool SuccessImageCountHasBeenSet() const;

                    /**
                     * 获取<p>Image count of scan failure</p>
                     * @return FailureImageCount <p>Image count of scan failure</p>
                     * 
                     */
                    uint64_t GetFailureImageCount() const;

                    /**
                     * 设置<p>Image count of scan failure</p>
                     * @param _failureImageCount <p>Image count of scan failure</p>
                     * 
                     */
                    void SetFailureImageCount(const uint64_t& _failureImageCount);

                    /**
                     * 判断参数 FailureImageCount 是否已赋值
                     * @return FailureImageCount 是否已赋值
                     * 
                     */
                    bool FailureImageCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of images ignored by the task</p>
                     * @return IgnoredImageCount <p>Number of images ignored by the task</p>
                     * 
                     */
                    uint64_t GetIgnoredImageCount() const;

                    /**
                     * 设置<p>Number of images ignored by the task</p>
                     * @param _ignoredImageCount <p>Number of images ignored by the task</p>
                     * 
                     */
                    void SetIgnoredImageCount(const uint64_t& _ignoredImageCount);

                    /**
                     * 判断参数 IgnoredImageCount 是否已赋值
                     * @return IgnoredImageCount 是否已赋值
                     * 
                     */
                    bool IgnoredImageCountHasBeenSet() const;

                    /**
                     * 获取<p>Task cancelled image count</p>
                     * @return CancelledImageCount <p>Task cancelled image count</p>
                     * 
                     */
                    uint64_t GetCancelledImageCount() const;

                    /**
                     * 设置<p>Task cancelled image count</p>
                     * @param _cancelledImageCount <p>Task cancelled image count</p>
                     * 
                     */
                    void SetCancelledImageCount(const uint64_t& _cancelledImageCount);

                    /**
                     * 判断参数 CancelledImageCount 是否已赋值
                     * @return CancelledImageCount 是否已赋值
                     * 
                     */
                    bool CancelledImageCountHasBeenSet() const;

                    /**
                     * 获取<p>Scan start time</p><p>Parameter format: hh:mm</p>
                     * @return ScanStartTime <p>Scan start time</p><p>Parameter format: hh:mm</p>
                     * 
                     */
                    std::string GetScanStartTime() const;

                    /**
                     * 设置<p>Scan start time</p><p>Parameter format: hh:mm</p>
                     * @param _scanStartTime <p>Scan start time</p><p>Parameter format: hh:mm</p>
                     * 
                     */
                    void SetScanStartTime(const std::string& _scanStartTime);

                    /**
                     * 判断参数 ScanStartTime 是否已赋值
                     * @return ScanStartTime 是否已赋值
                     * 
                     */
                    bool ScanStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Scan stop time</p><p>Parameter format: hh:mm</p>
                     * @return ScanEndTime <p>Scan stop time</p><p>Parameter format: hh:mm</p>
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 设置<p>Scan stop time</p><p>Parameter format: hh:mm</p>
                     * @param _scanEndTime <p>Scan stop time</p><p>Parameter format: hh:mm</p>
                     * 
                     */
                    void SetScanEndTime(const std::string& _scanEndTime);

                    /**
                     * 判断参数 ScanEndTime 是否已赋值
                     * @return ScanEndTime 是否已赋值
                     * 
                     */
                    bool ScanEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Timeout period, in seconds</p>
                     * @return Timeout <p>Timeout period, in seconds</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>Timeout period, in seconds</p>
                     * @param _timeout <p>Timeout period, in seconds</p>
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
                     * 获取<p>Task cancellation reason</p>
                     * @return CancelReason <p>Task cancellation reason</p>
                     * 
                     */
                    std::string GetCancelReason() const;

                    /**
                     * 设置<p>Task cancellation reason</p>
                     * @param _cancelReason <p>Task cancellation reason</p>
                     * 
                     */
                    void SetCancelReason(const std::string& _cancelReason);

                    /**
                     * 判断参数 CancelReason 是否已赋值
                     * @return CancelReason 是否已赋值
                     * 
                     */
                    bool CancelReasonHasBeenSet() const;

                    /**
                     * 获取<p>Task name</p>
                     * @return Name <p>Task name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Task name</p>
                     * @param _name <p>Task name</p>
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
                     * 获取<p>Scan task scheduling configuration</p>
                     * @return Schedule <p>Scan task scheduling configuration</p>
                     * 
                     */
                    ImageScanScheduleConfig GetSchedule() const;

                    /**
                     * 设置<p>Scan task scheduling configuration</p>
                     * @param _schedule <p>Scan task scheduling configuration</p>
                     * 
                     */
                    void SetSchedule(const ImageScanScheduleConfig& _schedule);

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取<p>Scan task target</p>
                     * @return Target <p>Scan task target</p>
                     * 
                     */
                    ImageScanAssetTarget GetTarget() const;

                    /**
                     * 设置<p>Scan task target</p>
                     * @param _target <p>Scan task target</p>
                     * 
                     */
                    void SetTarget(const ImageScanAssetTarget& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>Scan task filtering configuration</p>
                     * @return Filter <p>Scan task filtering configuration</p>
                     * 
                     */
                    ImageScanRegistryFilter GetFilter() const;

                    /**
                     * 设置<p>Scan task filtering configuration</p>
                     * @param _filter <p>Scan task filtering configuration</p>
                     * 
                     */
                    void SetFilter(const ImageScanRegistryFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Scheduled scan task id.</p>
                     */
                    uint64_t m_timedScanConfigId;
                    bool m_timedScanConfigIdHasBeenSet;

                    /**
                     * <p>Automatic matching mode</p><p>Enumeration values:</p><ul><li>BY_CLUSTER: Select by cluster</li><li>LATEST_VERSION: Scan the latest version image only</li><li>LOCAL_IMAGE: Local image</li></ul>
                     */
                    std::vector<std::string> m_autoMatchMode;
                    bool m_autoMatchModeHasBeenSet;

                    /**
                     * <p>Scan asset mode</p><p>Enumeration values:</p><ul><li>ALL: All</li><li>MANUAL: Manual selection</li><li>AUTO_MATCH: Automatic matching</li></ul>
                     */
                    std::string m_scopeMode;
                    bool m_scopeModeHasBeenSet;

                    /**
                     * <p>Task trigger type</p><p>Enumeration values:</p><ul><li>TIMED: scheduled task</li><li>MANUAL: manual triggering</li></ul>
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Scan category</p><p>Enumeration values:</p><ul><li>CVE: vulnerability</li><li>RISK: risk</li><li>VIRUS: Trojan</li></ul>
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>Image id scanned</p>
                     */
                    std::vector<uint64_t> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * <p>Task status</p><p>Enumeration values:</p><ul><li>RUNNING: Executing</li><li>SUCCESS: Task successful</li><li>TIMEOUT: Task timeout</li><li>FAILED: Task failure</li><li>CANCELLED: Canceled</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Scheduled task associated account name</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>appid of the account associated with the scheduled task</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>uin of the associated account for the scheduled task</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>Scan image count</p>
                     */
                    uint64_t m_scanImageCount;
                    bool m_scanImageCountHasBeenSet;

                    /**
                     * <p>Image count scanned successfully</p>
                     */
                    uint64_t m_successImageCount;
                    bool m_successImageCountHasBeenSet;

                    /**
                     * <p>Image count of scan failure</p>
                     */
                    uint64_t m_failureImageCount;
                    bool m_failureImageCountHasBeenSet;

                    /**
                     * <p>Number of images ignored by the task</p>
                     */
                    uint64_t m_ignoredImageCount;
                    bool m_ignoredImageCountHasBeenSet;

                    /**
                     * <p>Task cancelled image count</p>
                     */
                    uint64_t m_cancelledImageCount;
                    bool m_cancelledImageCountHasBeenSet;

                    /**
                     * <p>Scan start time</p><p>Parameter format: hh:mm</p>
                     */
                    std::string m_scanStartTime;
                    bool m_scanStartTimeHasBeenSet;

                    /**
                     * <p>Scan stop time</p><p>Parameter format: hh:mm</p>
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * <p>Timeout period, in seconds</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Task cancellation reason</p>
                     */
                    std::string m_cancelReason;
                    bool m_cancelReasonHasBeenSet;

                    /**
                     * <p>Task name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Scan task scheduling configuration</p>
                     */
                    ImageScanScheduleConfig m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * <p>Scan task target</p>
                     */
                    ImageScanAssetTarget m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>Scan task filtering configuration</p>
                     */
                    ImageScanRegistryFilter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYSCANTASKINFO_H_
