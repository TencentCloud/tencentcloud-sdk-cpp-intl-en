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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEHOSTVULEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEHOSTVULEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateHostVulExportJob request structure.
                */
                class CreateHostVulExportJobRequest : public AbstractModel
                {
                public:
                    CreateHostVulExportJobRequest();
                    ~CreateHostVulExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Exported action</p><p>Enumeration value:</p><ul><li>LinuxHostVulRiskList: linux vulnerability risk list</li><li>WebCmsHostVulRiskList: WebCms vulnerability risk list</li><li>AppHostVulRiskList: App vulnerability risk list</li><li>EmergencyHostVulRiskList: Emergency vulnerability risk list</li><li>KBRiskList: Windows kb risk list</li><li>RelateHostList: Associated host list</li><li>WhiteList: Vulnerability allowlist</li></ul>
                     * @return BusinessAction <p>Exported action</p><p>Enumeration value:</p><ul><li>LinuxHostVulRiskList: linux vulnerability risk list</li><li>WebCmsHostVulRiskList: WebCms vulnerability risk list</li><li>AppHostVulRiskList: App vulnerability risk list</li><li>EmergencyHostVulRiskList: Emergency vulnerability risk list</li><li>KBRiskList: Windows kb risk list</li><li>RelateHostList: Associated host list</li><li>WhiteList: Vulnerability allowlist</li></ul>
                     * 
                     */
                    std::string GetBusinessAction() const;

                    /**
                     * 设置<p>Exported action</p><p>Enumeration value:</p><ul><li>LinuxHostVulRiskList: linux vulnerability risk list</li><li>WebCmsHostVulRiskList: WebCms vulnerability risk list</li><li>AppHostVulRiskList: App vulnerability risk list</li><li>EmergencyHostVulRiskList: Emergency vulnerability risk list</li><li>KBRiskList: Windows kb risk list</li><li>RelateHostList: Associated host list</li><li>WhiteList: Vulnerability allowlist</li></ul>
                     * @param _businessAction <p>Exported action</p><p>Enumeration value:</p><ul><li>LinuxHostVulRiskList: linux vulnerability risk list</li><li>WebCmsHostVulRiskList: WebCms vulnerability risk list</li><li>AppHostVulRiskList: App vulnerability risk list</li><li>EmergencyHostVulRiskList: Emergency vulnerability risk list</li><li>KBRiskList: Windows kb risk list</li><li>RelateHostList: Associated host list</li><li>WhiteList: Vulnerability allowlist</li></ul>
                     * 
                     */
                    void SetBusinessAction(const std::string& _businessAction);

                    /**
                     * 判断参数 BusinessAction 是否已赋值
                     * @return BusinessAction 是否已赋值
                     * 
                     */
                    bool BusinessActionHasBeenSet() const;

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
                     * 获取<p>Filter conditions array, multi-condition with each other is AND relationship<br>Supported Filter.Name:<br>KbID: KB risk associated server in the current situation needs to add KB Risk ID<br>VulID: Vulnerability risk associated server in the current situation needs to add vul Risk ID</p>
                     * @return Filters <p>Filter conditions array, multi-condition with each other is AND relationship<br>Supported Filter.Name:<br>KbID: KB risk associated server in the current situation needs to add KB Risk ID<br>VulID: Vulnerability risk associated server in the current situation needs to add vul Risk ID</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Filter conditions array, multi-condition with each other is AND relationship<br>Supported Filter.Name:<br>KbID: KB risk associated server in the current situation needs to add KB Risk ID<br>VulID: Vulnerability risk associated server in the current situation needs to add vul Risk ID</p>
                     * @param _filters <p>Filter conditions array, multi-condition with each other is AND relationship<br>Supported Filter.Name:<br>KbID: KB risk associated server in the current situation needs to add KB Risk ID<br>VulID: Vulnerability risk associated server in the current situation needs to add vul Risk ID</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>Exported action</p><p>Enumeration value:</p><ul><li>LinuxHostVulRiskList: linux vulnerability risk list</li><li>WebCmsHostVulRiskList: WebCms vulnerability risk list</li><li>AppHostVulRiskList: App vulnerability risk list</li><li>EmergencyHostVulRiskList: Emergency vulnerability risk list</li><li>KBRiskList: Windows kb risk list</li><li>RelateHostList: Associated host list</li><li>WhiteList: Vulnerability allowlist</li></ul>
                     */
                    std::string m_businessAction;
                    bool m_businessActionHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Filter conditions array, multi-condition with each other is AND relationship<br>Supported Filter.Name:<br>KbID: KB risk associated server in the current situation needs to add KB Risk ID<br>VulID: Vulnerability risk associated server in the current situation needs to add vul Risk ID</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEHOSTVULEXPORTJOBREQUEST_H_
