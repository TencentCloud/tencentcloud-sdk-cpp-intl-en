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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULCOUNTBYDATESRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULCOUNTBYDATESRESPONSE_H_

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
                * DescribeVulCountByDates response structure.
                */
                class DescribeVulCountByDatesResponse : public AbstractModel
                {
                public:
                    DescribeVulCountByDatesResponse();
                    ~DescribeVulCountByDatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Obtain the number of vulnerabilities for corresponding days in batch
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulCount Obtain the number of vulnerabilities for corresponding days in batch
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetVulCount() const;

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                    /**
                     * 获取Obtain the number of hosts for corresponding days in batch
                     * @return HostCount Obtain the number of hosts for corresponding days in batch
                     * 
                     */
                    std::vector<uint64_t> GetHostCount() const;

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                private:

                    /**
                     * Obtain the number of vulnerabilities for corresponding days in batch
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * Obtain the number of hosts for corresponding days in batch
                     */
                    std::vector<uint64_t> m_hostCount;
                    bool m_hostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULCOUNTBYDATESRESPONSE_H_
