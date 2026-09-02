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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYIMAGEREGISTRYTIMEDSCANTASKCONFIGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYIMAGEREGISTRYTIMEDSCANTASKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ImageScanScheduleConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * BatchModifyImageRegistryTimedScanTaskConfig request structure.
                */
                class BatchModifyImageRegistryTimedScanTaskConfigRequest : public AbstractModel
                {
                public:
                    BatchModifyImageRegistryTimedScanTaskConfigRequest();
                    ~BatchModifyImageRegistryTimedScanTaskConfigRequest() = default;
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
                     * 获取<p>Task ID.</p>
                     * @return Id <p>Task ID.</p>
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _id <p>Task ID.</p>
                     * 
                     */
                    void SetId(const std::vector<uint64_t>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取<p>Scan category</p><p>Enumeration value:</p><ul><li>CVE: Vulnerability</li><li>RISK: Risk</li><li>VIRUS: Trojan</li></ul>
                     * @return ScanType <p>Scan category</p><p>Enumeration value:</p><ul><li>CVE: Vulnerability</li><li>RISK: Risk</li><li>VIRUS: Trojan</li></ul>
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置<p>Scan category</p><p>Enumeration value:</p><ul><li>CVE: Vulnerability</li><li>RISK: Risk</li><li>VIRUS: Trojan</li></ul>
                     * @param _scanType <p>Scan category</p><p>Enumeration value:</p><ul><li>CVE: Vulnerability</li><li>RISK: Risk</li><li>VIRUS: Trojan</li></ul>
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

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Task ID.</p>
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Whether to enable</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Scan category</p><p>Enumeration value:</p><ul><li>CVE: Vulnerability</li><li>RISK: Risk</li><li>VIRUS: Trojan</li></ul>
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>Scheduled task scheduling configuration</p>
                     */
                    ImageScanScheduleConfig m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * <p>Timeout period, in seconds</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYIMAGEREGISTRYTIMEDSCANTASKCONFIGREQUEST_H_
