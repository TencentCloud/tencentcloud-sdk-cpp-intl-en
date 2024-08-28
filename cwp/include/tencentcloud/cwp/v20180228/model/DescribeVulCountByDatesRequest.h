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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULCOUNTBYDATESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULCOUNTBYDATESREQUEST_H_

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
                * DescribeVulCountByDates request structure.
                */
                class DescribeVulCountByDatesRequest : public AbstractModel
                {
                public:
                    DescribeVulCountByDatesRequest();
                    ~DescribeVulCountByDatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of past days for data query. Subtract 1 from the actual number of days and fill in the value.
                     * @return LastDays Number of past days for data query. Subtract 1 from the actual number of days and fill in the value.
                     * 
                     */
                    std::vector<uint64_t> GetLastDays() const;

                    /**
                     * 设置Number of past days for data query. Subtract 1 from the actual number of days and fill in the value.
                     * @param _lastDays Number of past days for data query. Subtract 1 from the actual number of days and fill in the value.
                     * 
                     */
                    void SetLastDays(const std::vector<uint64_t>& _lastDays);

                    /**
                     * 判断参数 LastDays 是否已赋值
                     * @return LastDays 是否已赋值
                     * 
                     */
                    bool LastDaysHasBeenSet() const;

                    /**
                     * 获取Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability.
                     * @return VulCategory Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability.
                     * 
                     */
                    uint64_t GetVulCategory() const;

                    /**
                     * 设置Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability.
                     * @param _vulCategory Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability.
                     * 
                     */
                    void SetVulCategory(const uint64_t& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取Whether the vulnerabilities are emergency vulnerabilities. yes: yes.
                     * @return IfEmergency Whether the vulnerabilities are emergency vulnerabilities. yes: yes.
                     * 
                     */
                    std::string GetIfEmergency() const;

                    /**
                     * 设置Whether the vulnerabilities are emergency vulnerabilities. yes: yes.
                     * @param _ifEmergency Whether the vulnerabilities are emergency vulnerabilities. yes: yes.
                     * 
                     */
                    void SetIfEmergency(const std::string& _ifEmergency);

                    /**
                     * 判断参数 IfEmergency 是否已赋值
                     * @return IfEmergency 是否已赋值
                     * 
                     */
                    bool IfEmergencyHasBeenSet() const;

                private:

                    /**
                     * Number of past days for data query. Subtract 1 from the actual number of days and fill in the value.
                     */
                    std::vector<uint64_t> m_lastDays;
                    bool m_lastDaysHasBeenSet;

                    /**
                     * Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability.
                     */
                    uint64_t m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * Whether the vulnerabilities are emergency vulnerabilities. yes: yes.
                     */
                    std::string m_ifEmergency;
                    bool m_ifEmergencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULCOUNTBYDATESREQUEST_H_
