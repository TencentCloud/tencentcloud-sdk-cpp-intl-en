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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULOVERVIEW_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULOVERVIEW_H_

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
                * Host Vulnerability Overview
                */
                class HostVulOverview : public AbstractModel
                {
                public:
                    HostVulOverview();
                    ~HostVulOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Number of vulnerabilities that require immediate fix (number of vulnerabilities with VPR rating of URGENT)</p>
                     * @return UrgentRepairCount <p>Number of vulnerabilities that require immediate fix (number of vulnerabilities with VPR rating of URGENT)</p>
                     * 
                     */
                    uint64_t GetUrgentRepairCount() const;

                    /**
                     * 设置<p>Number of vulnerabilities that require immediate fix (number of vulnerabilities with VPR rating of URGENT)</p>
                     * @param _urgentRepairCount <p>Number of vulnerabilities that require immediate fix (number of vulnerabilities with VPR rating of URGENT)</p>
                     * 
                     */
                    void SetUrgentRepairCount(const uint64_t& _urgentRepairCount);

                    /**
                     * 判断参数 UrgentRepairCount 是否已赋值
                     * @return UrgentRepairCount 是否已赋值
                     * 
                     */
                    bool UrgentRepairCountHasBeenSet() const;

                    /**
                     * 获取<p>Hosts with vulnerability protection enabled</p>
                     * @return DefendHostCount <p>Hosts with vulnerability protection enabled</p>
                     * 
                     */
                    uint64_t GetDefendHostCount() const;

                    /**
                     * 设置<p>Hosts with vulnerability protection enabled</p>
                     * @param _defendHostCount <p>Hosts with vulnerability protection enabled</p>
                     * 
                     */
                    void SetDefendHostCount(const uint64_t& _defendHostCount);

                    /**
                     * 判断参数 DefendHostCount 是否已赋值
                     * @return DefendHostCount 是否已赋值
                     * 
                     */
                    bool DefendHostCountHasBeenSet() const;

                    /**
                     * 获取<p>Total hosts</p>
                     * @return TotalHostCount <p>Total hosts</p>
                     * 
                     */
                    uint64_t GetTotalHostCount() const;

                    /**
                     * 设置<p>Total hosts</p>
                     * @param _totalHostCount <p>Total hosts</p>
                     * 
                     */
                    void SetTotalHostCount(const uint64_t& _totalHostCount);

                    /**
                     * 判断参数 TotalHostCount 是否已赋值
                     * @return TotalHostCount 是否已赋值
                     * 
                     */
                    bool TotalHostCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of times vulnerabilities have been fixed</p>
                     * @return FixedVulCount <p>Total number of times vulnerabilities have been fixed</p>
                     * 
                     */
                    uint64_t GetFixedVulCount() const;

                    /**
                     * 设置<p>Total number of times vulnerabilities have been fixed</p>
                     * @param _fixedVulCount <p>Total number of times vulnerabilities have been fixed</p>
                     * 
                     */
                    void SetFixedVulCount(const uint64_t& _fixedVulCount);

                    /**
                     * 判断参数 FixedVulCount 是否已赋值
                     * @return FixedVulCount 是否已赋值
                     * 
                     */
                    bool FixedVulCountHasBeenSet() const;

                    /**
                     * 获取<p>Linux software vulnerability count</p>
                     * @return LinuxVulCount <p>Linux software vulnerability count</p>
                     * 
                     */
                    uint64_t GetLinuxVulCount() const;

                    /**
                     * 设置<p>Linux software vulnerability count</p>
                     * @param _linuxVulCount <p>Linux software vulnerability count</p>
                     * 
                     */
                    void SetLinuxVulCount(const uint64_t& _linuxVulCount);

                    /**
                     * 判断参数 LinuxVulCount 是否已赋值
                     * @return LinuxVulCount 是否已赋值
                     * 
                     */
                    bool LinuxVulCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of Windows system patches</p>
                     * @return WindowVulCount <p>Number of Windows system patches</p>
                     * 
                     */
                    uint64_t GetWindowVulCount() const;

                    /**
                     * 设置<p>Number of Windows system patches</p>
                     * @param _windowVulCount <p>Number of Windows system patches</p>
                     * 
                     */
                    void SetWindowVulCount(const uint64_t& _windowVulCount);

                    /**
                     * 判断参数 WindowVulCount 是否已赋值
                     * @return WindowVulCount 是否已赋值
                     * 
                     */
                    bool WindowVulCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of Web-CMS vulnerabilities</p>
                     * @return WebCMSVulCount <p>Number of Web-CMS vulnerabilities</p>
                     * 
                     */
                    uint64_t GetWebCMSVulCount() const;

                    /**
                     * 设置<p>Number of Web-CMS vulnerabilities</p>
                     * @param _webCMSVulCount <p>Number of Web-CMS vulnerabilities</p>
                     * 
                     */
                    void SetWebCMSVulCount(const uint64_t& _webCMSVulCount);

                    /**
                     * 判断参数 WebCMSVulCount 是否已赋值
                     * @return WebCMSVulCount 是否已赋值
                     * 
                     */
                    bool WebCMSVulCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of application vulnerabilities</p>
                     * @return AppVulCount <p>Number of application vulnerabilities</p>
                     * 
                     */
                    uint64_t GetAppVulCount() const;

                    /**
                     * 设置<p>Number of application vulnerabilities</p>
                     * @param _appVulCount <p>Number of application vulnerabilities</p>
                     * 
                     */
                    void SetAppVulCount(const uint64_t& _appVulCount);

                    /**
                     * 判断参数 AppVulCount 是否已赋值
                     * @return AppVulCount 是否已赋值
                     * 
                     */
                    bool AppVulCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of emergency vulnerabilities</p>
                     * @return EmergencyCount <p>Number of emergency vulnerabilities</p>
                     * 
                     */
                    uint64_t GetEmergencyCount() const;

                    /**
                     * 设置<p>Number of emergency vulnerabilities</p>
                     * @param _emergencyCount <p>Number of emergency vulnerabilities</p>
                     * 
                     */
                    void SetEmergencyCount(const uint64_t& _emergencyCount);

                    /**
                     * 判断参数 EmergencyCount 是否已赋值
                     * @return EmergencyCount 是否已赋值
                     * 
                     */
                    bool EmergencyCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of vulnerability knowledge base</p>
                     * @return VulItemCount <p>Total number of vulnerability knowledge base</p>
                     * 
                     */
                    uint64_t GetVulItemCount() const;

                    /**
                     * 设置<p>Total number of vulnerability knowledge base</p>
                     * @param _vulItemCount <p>Total number of vulnerability knowledge base</p>
                     * 
                     */
                    void SetVulItemCount(const uint64_t& _vulItemCount);

                    /**
                     * 判断参数 VulItemCount 是否已赋值
                     * @return VulItemCount 是否已赋值
                     * 
                     */
                    bool VulItemCountHasBeenSet() const;

                    /**
                     * 获取<p>Latest scan time.</p><p>Parameter format: YYYY-MM-DDTHH:mm:ssZ</p>
                     * @return LatestScanTime <p>Latest scan time.</p><p>Parameter format: YYYY-MM-DDTHH:mm:ssZ</p>
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置<p>Latest scan time.</p><p>Parameter format: YYYY-MM-DDTHH:mm:ssZ</p>
                     * @param _latestScanTime <p>Latest scan time.</p><p>Parameter format: YYYY-MM-DDTHH:mm:ssZ</p>
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
                     * 获取<p>Whether period scanning is enabled</p><p>Enumeration value:</p><ul><li>1: Enabled</li><li>0: Not enabled</li></ul>
                     * @return EnableTimingScan <p>Whether period scanning is enabled</p><p>Enumeration value:</p><ul><li>1: Enabled</li><li>0: Not enabled</li></ul>
                     * 
                     */
                    uint64_t GetEnableTimingScan() const;

                    /**
                     * 设置<p>Whether period scanning is enabled</p><p>Enumeration value:</p><ul><li>1: Enabled</li><li>0: Not enabled</li></ul>
                     * @param _enableTimingScan <p>Whether period scanning is enabled</p><p>Enumeration value:</p><ul><li>1: Enabled</li><li>0: Not enabled</li></ul>
                     * 
                     */
                    void SetEnableTimingScan(const uint64_t& _enableTimingScan);

                    /**
                     * 判断参数 EnableTimingScan 是否已赋值
                     * @return EnableTimingScan 是否已赋值
                     * 
                     */
                    bool EnableTimingScanHasBeenSet() const;

                    /**
                     * 获取<p>Number of critical fixes</p>
                     * @return CriticalRepairCount <p>Number of critical fixes</p>
                     * 
                     */
                    uint64_t GetCriticalRepairCount() const;

                    /**
                     * 设置<p>Number of critical fixes</p>
                     * @param _criticalRepairCount <p>Number of critical fixes</p>
                     * 
                     */
                    void SetCriticalRepairCount(const uint64_t& _criticalRepairCount);

                    /**
                     * 判断参数 CriticalRepairCount 是否已赋值
                     * @return CriticalRepairCount 是否已赋值
                     * 
                     */
                    bool CriticalRepairCountHasBeenSet() const;

                    /**
                     * 获取<p>Critical Linux vulnerability fix count</p>
                     * @return CriticalRepairLinuxVulCount <p>Critical Linux vulnerability fix count</p>
                     * 
                     */
                    uint64_t GetCriticalRepairLinuxVulCount() const;

                    /**
                     * 设置<p>Critical Linux vulnerability fix count</p>
                     * @param _criticalRepairLinuxVulCount <p>Critical Linux vulnerability fix count</p>
                     * 
                     */
                    void SetCriticalRepairLinuxVulCount(const uint64_t& _criticalRepairLinuxVulCount);

                    /**
                     * 判断参数 CriticalRepairLinuxVulCount 是否已赋值
                     * @return CriticalRepairLinuxVulCount 是否已赋值
                     * 
                     */
                    bool CriticalRepairLinuxVulCountHasBeenSet() const;

                    /**
                     * 获取<p>Severe application vulnerability fix count</p>
                     * @return CriticalRepairAppVulCount <p>Severe application vulnerability fix count</p>
                     * 
                     */
                    uint64_t GetCriticalRepairAppVulCount() const;

                    /**
                     * 设置<p>Severe application vulnerability fix count</p>
                     * @param _criticalRepairAppVulCount <p>Severe application vulnerability fix count</p>
                     * 
                     */
                    void SetCriticalRepairAppVulCount(const uint64_t& _criticalRepairAppVulCount);

                    /**
                     * 判断参数 CriticalRepairAppVulCount 是否已赋值
                     * @return CriticalRepairAppVulCount 是否已赋值
                     * 
                     */
                    bool CriticalRepairAppVulCountHasBeenSet() const;

                    /**
                     * 获取<p>Critical fix for Web-CMS vulnerabilities</p>
                     * @return CriticalRepairWebCMSVulCount <p>Critical fix for Web-CMS vulnerabilities</p>
                     * 
                     */
                    uint64_t GetCriticalRepairWebCMSVulCount() const;

                    /**
                     * 设置<p>Critical fix for Web-CMS vulnerabilities</p>
                     * @param _criticalRepairWebCMSVulCount <p>Critical fix for Web-CMS vulnerabilities</p>
                     * 
                     */
                    void SetCriticalRepairWebCMSVulCount(const uint64_t& _criticalRepairWebCMSVulCount);

                    /**
                     * 判断参数 CriticalRepairWebCMSVulCount 是否已赋值
                     * @return CriticalRepairWebCMSVulCount 是否已赋值
                     * 
                     */
                    bool CriticalRepairWebCMSVulCountHasBeenSet() const;

                    /**
                     * 获取<p>Critical fix emergency vulnerability count</p>
                     * @return CriticalRepairEmergencyCount <p>Critical fix emergency vulnerability count</p>
                     * 
                     */
                    uint64_t GetCriticalRepairEmergencyCount() const;

                    /**
                     * 设置<p>Critical fix emergency vulnerability count</p>
                     * @param _criticalRepairEmergencyCount <p>Critical fix emergency vulnerability count</p>
                     * 
                     */
                    void SetCriticalRepairEmergencyCount(const uint64_t& _criticalRepairEmergencyCount);

                    /**
                     * 判断参数 CriticalRepairEmergencyCount 是否已赋值
                     * @return CriticalRepairEmergencyCount 是否已赋值
                     * 
                     */
                    bool CriticalRepairEmergencyCountHasBeenSet() const;

                private:

                    /**
                     * <p>Number of vulnerabilities that require immediate fix (number of vulnerabilities with VPR rating of URGENT)</p>
                     */
                    uint64_t m_urgentRepairCount;
                    bool m_urgentRepairCountHasBeenSet;

                    /**
                     * <p>Hosts with vulnerability protection enabled</p>
                     */
                    uint64_t m_defendHostCount;
                    bool m_defendHostCountHasBeenSet;

                    /**
                     * <p>Total hosts</p>
                     */
                    uint64_t m_totalHostCount;
                    bool m_totalHostCountHasBeenSet;

                    /**
                     * <p>Total number of times vulnerabilities have been fixed</p>
                     */
                    uint64_t m_fixedVulCount;
                    bool m_fixedVulCountHasBeenSet;

                    /**
                     * <p>Linux software vulnerability count</p>
                     */
                    uint64_t m_linuxVulCount;
                    bool m_linuxVulCountHasBeenSet;

                    /**
                     * <p>Number of Windows system patches</p>
                     */
                    uint64_t m_windowVulCount;
                    bool m_windowVulCountHasBeenSet;

                    /**
                     * <p>Number of Web-CMS vulnerabilities</p>
                     */
                    uint64_t m_webCMSVulCount;
                    bool m_webCMSVulCountHasBeenSet;

                    /**
                     * <p>Number of application vulnerabilities</p>
                     */
                    uint64_t m_appVulCount;
                    bool m_appVulCountHasBeenSet;

                    /**
                     * <p>Number of emergency vulnerabilities</p>
                     */
                    uint64_t m_emergencyCount;
                    bool m_emergencyCountHasBeenSet;

                    /**
                     * <p>Total number of vulnerability knowledge base</p>
                     */
                    uint64_t m_vulItemCount;
                    bool m_vulItemCountHasBeenSet;

                    /**
                     * <p>Latest scan time.</p><p>Parameter format: YYYY-MM-DDTHH:mm:ssZ</p>
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * <p>Whether period scanning is enabled</p><p>Enumeration value:</p><ul><li>1: Enabled</li><li>0: Not enabled</li></ul>
                     */
                    uint64_t m_enableTimingScan;
                    bool m_enableTimingScanHasBeenSet;

                    /**
                     * <p>Number of critical fixes</p>
                     */
                    uint64_t m_criticalRepairCount;
                    bool m_criticalRepairCountHasBeenSet;

                    /**
                     * <p>Critical Linux vulnerability fix count</p>
                     */
                    uint64_t m_criticalRepairLinuxVulCount;
                    bool m_criticalRepairLinuxVulCountHasBeenSet;

                    /**
                     * <p>Severe application vulnerability fix count</p>
                     */
                    uint64_t m_criticalRepairAppVulCount;
                    bool m_criticalRepairAppVulCountHasBeenSet;

                    /**
                     * <p>Critical fix for Web-CMS vulnerabilities</p>
                     */
                    uint64_t m_criticalRepairWebCMSVulCount;
                    bool m_criticalRepairWebCMSVulCountHasBeenSet;

                    /**
                     * <p>Critical fix emergency vulnerability count</p>
                     */
                    uint64_t m_criticalRepairEmergencyCount;
                    bool m_criticalRepairEmergencyCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULOVERVIEW_H_
