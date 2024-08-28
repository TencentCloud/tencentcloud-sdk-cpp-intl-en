/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ScanVul request structure.
                */
                class ScanVulRequest : public AbstractModel
                {
                public:
                    ScanVulRequest();
                    ~ScanVulRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to count only critical vulnerabilities. 1: only critical vulnerabilities; 0: all vulnerabilities.
                     * @return VulLevels Whether to count only critical vulnerabilities. 1: only critical vulnerabilities; 0: all vulnerabilities.
                     * 
                     */
                    std::string GetVulLevels() const;

                    /**
                     * 设置Whether to count only critical vulnerabilities. 1: only critical vulnerabilities; 0: all vulnerabilities.
                     * @param _vulLevels Whether to count only critical vulnerabilities. 1: only critical vulnerabilities; 0: all vulnerabilities.
                     * 
                     */
                    void SetVulLevels(const std::string& _vulLevels);

                    /**
                     * 判断参数 VulLevels 是否已赋值
                     * @return VulLevels 是否已赋值
                     * 
                     */
                    bool VulLevelsHasBeenSet() const;

                    /**
                     * 获取Server type. 1: Pro Edition server; 2: selected server.
                     * @return HostType Server type. 1: Pro Edition server; 2: selected server.
                     * 
                     */
                    uint64_t GetHostType() const;

                    /**
                     * 设置Server type. 1: Pro Edition server; 2: selected server.
                     * @param _hostType Server type. 1: Pro Edition server; 2: selected server.
                     * 
                     */
                    void SetHostType(const uint64_t& _hostType);

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     * 
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability (separate multiple values by commas).
                     * @return VulCategories Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability (separate multiple values by commas).
                     * 
                     */
                    std::string GetVulCategories() const;

                    /**
                     * 设置Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability (separate multiple values by commas).
                     * @param _vulCategories Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability (separate multiple values by commas).
                     * 
                     */
                    void SetVulCategories(const std::string& _vulCategories);

                    /**
                     * 判断参数 VulCategories 是否已赋值
                     * @return VulCategories 是否已赋值
                     * 
                     */
                    bool VulCategoriesHasBeenSet() const;

                    /**
                     * 获取String array of host QUUIDs. This parameter is effective for selected servers.
                     * @return QuuidList String array of host QUUIDs. This parameter is effective for selected servers.
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置String array of host QUUIDs. This parameter is effective for selected servers.
                     * @param _quuidList String array of host QUUIDs. This parameter is effective for selected servers.
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                    /**
                     * 获取Whether it is an emergency vulnerability. 0: no; 1: yes.
                     * @return VulEmergency Whether it is an emergency vulnerability. 0: no; 1: yes.
                     * 
                     */
                    uint64_t GetVulEmergency() const;

                    /**
                     * 设置Whether it is an emergency vulnerability. 0: no; 1: yes.
                     * @param _vulEmergency Whether it is an emergency vulnerability. 0: no; 1: yes.
                     * 
                     */
                    void SetVulEmergency(const uint64_t& _vulEmergency);

                    /**
                     * 判断参数 VulEmergency 是否已赋值
                     * @return VulEmergency 是否已赋值
                     * 
                     */
                    bool VulEmergencyHasBeenSet() const;

                    /**
                     * 获取Scan duration, in seconds. Default duration: 3,600 second.
                     * @return TimeoutPeriod Scan duration, in seconds. Default duration: 3,600 second.
                     * 
                     */
                    uint64_t GetTimeoutPeriod() const;

                    /**
                     * 设置Scan duration, in seconds. Default duration: 3,600 second.
                     * @param _timeoutPeriod Scan duration, in seconds. Default duration: 3,600 second.
                     * 
                     */
                    void SetTimeoutPeriod(const uint64_t& _timeoutPeriod);

                    /**
                     * 判断参数 TimeoutPeriod 是否已赋值
                     * @return TimeoutPeriod 是否已赋值
                     * 
                     */
                    bool TimeoutPeriodHasBeenSet() const;

                    /**
                     * 获取IDs of vulnerabilities to be scanned
                     * @return VulIds IDs of vulnerabilities to be scanned
                     * 
                     */
                    std::vector<uint64_t> GetVulIds() const;

                    /**
                     * 设置IDs of vulnerabilities to be scanned
                     * @param _vulIds IDs of vulnerabilities to be scanned
                     * 
                     */
                    void SetVulIds(const std::vector<uint64_t>& _vulIds);

                    /**
                     * 判断参数 VulIds 是否已赋值
                     * @return VulIds 是否已赋值
                     * 
                     */
                    bool VulIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return ScanMethod 
                     * 
                     */
                    uint64_t GetScanMethod() const;

                    /**
                     * 设置
                     * @param _scanMethod 
                     * 
                     */
                    void SetScanMethod(const uint64_t& _scanMethod);

                    /**
                     * 判断参数 ScanMethod 是否已赋值
                     * @return ScanMethod 是否已赋值
                     * 
                     */
                    bool ScanMethodHasBeenSet() const;

                private:

                    /**
                     * Whether to count only critical vulnerabilities. 1: only critical vulnerabilities; 0: all vulnerabilities.
                     */
                    std::string m_vulLevels;
                    bool m_vulLevelsHasBeenSet;

                    /**
                     * Server type. 1: Pro Edition server; 2: selected server.
                     */
                    uint64_t m_hostType;
                    bool m_hostTypeHasBeenSet;

                    /**
                     * Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability (separate multiple values by commas).
                     */
                    std::string m_vulCategories;
                    bool m_vulCategoriesHasBeenSet;

                    /**
                     * String array of host QUUIDs. This parameter is effective for selected servers.
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                    /**
                     * Whether it is an emergency vulnerability. 0: no; 1: yes.
                     */
                    uint64_t m_vulEmergency;
                    bool m_vulEmergencyHasBeenSet;

                    /**
                     * Scan duration, in seconds. Default duration: 3,600 second.
                     */
                    uint64_t m_timeoutPeriod;
                    bool m_timeoutPeriodHasBeenSet;

                    /**
                     * IDs of vulnerabilities to be scanned
                     */
                    std::vector<uint64_t> m_vulIds;
                    bool m_vulIdsHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_scanMethod;
                    bool m_scanMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULREQUEST_H_
