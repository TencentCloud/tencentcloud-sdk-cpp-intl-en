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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUNDOVULCOUNTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUNDOVULCOUNTSREQUEST_H_

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
                * DescribeUndoVulCounts request structure.
                */
                class DescribeUndoVulCountsRequest : public AbstractModel
                {
                public:
                    DescribeUndoVulCountsRequest();
                    ~DescribeUndoVulCountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability category. 1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities
                     * @return VulCategory Vulnerability category. 1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities
                     * 
                     */
                    uint64_t GetVulCategory() const;

                    /**
                     * 设置Vulnerability category. 1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities
                     * @param _vulCategory Vulnerability category. 1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities
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
                     * 获取Whether to apply emergency vulnerability detection: YES - yes
                     * @return IfEmergency Whether to apply emergency vulnerability detection: YES - yes
                     * 
                     */
                    std::string GetIfEmergency() const;

                    /**
                     * 设置Whether to apply emergency vulnerability detection: YES - yes
                     * @param _ifEmergency Whether to apply emergency vulnerability detection: YES - yes
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
                     * Vulnerability category. 1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities
                     */
                    uint64_t m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * Whether to apply emergency vulnerability detection: YES - yes
                     */
                    std::string m_ifEmergency;
                    bool m_ifEmergencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUNDOVULCOUNTSREQUEST_H_
