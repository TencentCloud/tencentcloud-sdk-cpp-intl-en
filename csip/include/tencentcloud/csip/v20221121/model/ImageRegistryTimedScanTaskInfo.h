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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYTIMEDSCANTASKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYTIMEDSCANTASKINFO_H_

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
                * Image repository periodic scan task information
                */
                class ImageRegistryTimedScanTaskInfo : public AbstractModel
                {
                public:
                    ImageRegistryTimedScanTaskInfo();
                    ~ImageRegistryTimedScanTaskInfo() = default;
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
                     * 获取<p>Whether to enable</p>
                     * @return Enable <p>Whether to enable</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>Whether to enable</p>
                     * @param _enable <p>Whether to enable</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

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
                     * 获取<p>Scheduled task scheduling configuration</p>
                     * @return Schedule <p>Scheduled task scheduling configuration</p>
                     * 
                     */
                    ImageScanScheduleConfig GetSchedule() const;

                    /**
                     * 设置<p>Scheduled task scheduling configuration</p>
                     * @param _schedule <p>Scheduled task scheduling configuration</p>
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
                     * 获取<p>Scan target image filtering configuration</p>
                     * @return Target <p>Scan target image filtering configuration</p>
                     * 
                     */
                    ImageScanAssetTarget GetTarget() const;

                    /**
                     * 设置<p>Scan target image filtering configuration</p>
                     * @param _target <p>Scan target image filtering configuration</p>
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
                     * 获取<p>Mirror filter configuration</p>
                     * @return Filter <p>Mirror filter configuration</p>
                     * 
                     */
                    ImageScanRegistryFilter GetFilter() const;

                    /**
                     * 设置<p>Mirror filter configuration</p>
                     * @param _filter <p>Mirror filter configuration</p>
                     * 
                     */
                    void SetFilter(const ImageScanRegistryFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

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
                     * 获取<p>Last scan time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return LastScanTime <p>Last scan time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置<p>Last scan time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _lastScanTime <p>Last scan time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

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
                     * 获取<p>Configuration creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return CreateTime <p>Configuration creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Configuration creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _createTime <p>Configuration creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Configuration update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return UpdateTime <p>Configuration update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Configuration update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _updateTime <p>Configuration update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Task name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Whether to enable</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Scan category</p><p>Enumeration values:</p><ul><li>CVE: vulnerability</li><li>RISK: risk</li><li>VIRUS: Trojan</li></ul>
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>Scheduled task scheduling configuration</p>
                     */
                    ImageScanScheduleConfig m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * <p>Scan target image filtering configuration</p>
                     */
                    ImageScanAssetTarget m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>Mirror filter configuration</p>
                     */
                    ImageScanRegistryFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>Timeout period, in seconds</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Last scan time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

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
                     * <p>Configuration creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Configuration update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYTIMEDSCANTASKINFO_H_
