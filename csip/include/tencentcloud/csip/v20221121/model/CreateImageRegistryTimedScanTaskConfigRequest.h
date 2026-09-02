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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEREGISTRYTIMEDSCANTASKCONFIGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEREGISTRYTIMEDSCANTASKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateImageRegistryTimedScanTaskConfig request structure.
                */
                class CreateImageRegistryTimedScanTaskConfigRequest : public AbstractModel
                {
                public:
                    CreateImageRegistryTimedScanTaskConfigRequest();
                    ~CreateImageRegistryTimedScanTaskConfigRequest() = default;
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
                     * 获取<p>Whether to enable</p><p>Enumeration values:</p><ul><li>true: enable</li><li>false: disable</li></ul>
                     * @return Enable <p>Whether to enable</p><p>Enumeration values:</p><ul><li>true: enable</li><li>false: disable</li></ul>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>Whether to enable</p><p>Enumeration values:</p><ul><li>true: enable</li><li>false: disable</li></ul>
                     * @param _enable <p>Whether to enable</p><p>Enumeration values:</p><ul><li>true: enable</li><li>false: disable</li></ul>
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
                     * 获取<p>Scan category</p><p>Enumeration values:</p><ul><li>VUL: Vulnerability</li><li>VIRUS: Trojan</li><li>RISK: Sensitive information</li></ul>
                     * @return ScanType <p>Scan category</p><p>Enumeration values:</p><ul><li>VUL: Vulnerability</li><li>VIRUS: Trojan</li><li>RISK: Sensitive information</li></ul>
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置<p>Scan category</p><p>Enumeration values:</p><ul><li>VUL: Vulnerability</li><li>VIRUS: Trojan</li><li>RISK: Sensitive information</li></ul>
                     * @param _scanType <p>Scan category</p><p>Enumeration values:</p><ul><li>VUL: Vulnerability</li><li>VIRUS: Trojan</li><li>RISK: Sensitive information</li></ul>
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
                     * 获取<p>Filtering configuration for scan target image</p>
                     * @return Target <p>Filtering configuration for scan target image</p>
                     * 
                     */
                    ImageScanAssetTarget GetTarget() const;

                    /**
                     * 设置<p>Filtering configuration for scan target image</p>
                     * @param _target <p>Filtering configuration for scan target image</p>
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
                     * 获取<p>CreateImageRegistryTimedScanTaskConfig</p>
                     * @return Timeout <p>CreateImageRegistryTimedScanTaskConfig</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>CreateImageRegistryTimedScanTaskConfig</p>
                     * @param _timeout <p>CreateImageRegistryTimedScanTaskConfig</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Task name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Whether to enable</p><p>Enumeration values:</p><ul><li>true: enable</li><li>false: disable</li></ul>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Scan category</p><p>Enumeration values:</p><ul><li>VUL: Vulnerability</li><li>VIRUS: Trojan</li><li>RISK: Sensitive information</li></ul>
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>Scheduled task scheduling configuration</p>
                     */
                    ImageScanScheduleConfig m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * <p>Filtering configuration for scan target image</p>
                     */
                    ImageScanAssetTarget m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>Mirror filter configuration</p>
                     */
                    ImageScanRegistryFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>CreateImageRegistryTimedScanTaskConfig</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEREGISTRYTIMEDSCANTASKCONFIGREQUEST_H_
