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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULTOPREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULTOPREQUEST_H_

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
                * DescribeVulTop request structure.
                */
                class DescribeVulTopRequest : public AbstractModel
                {
                public:
                    DescribeVulTopRequest();
                    ~DescribeVulTopRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Top servers by vulnerability risks. The specific number is in the range of 1 to 100.
                     * @return Top Top servers by vulnerability risks. The specific number is in the range of 1 to 100.
                     * 
                     */
                    uint64_t GetTop() const;

                    /**
                     * 设置Top servers by vulnerability risks. The specific number is in the range of 1 to 100.
                     * @param _top Top servers by vulnerability risks. The specific number is in the range of 1 to 100.
                     * 
                     */
                    void SetTop(const uint64_t& _top);

                    /**
                     * 判断参数 Top 是否已赋值
                     * @return Top 是否已赋值
                     * 
                     */
                    bool TopHasBeenSet() const;

                    /**
                     * 获取1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability; 6: emergency vulnerability. If this parameter is left blank or set to 0, the statistical data of all these types of vulnerabilities is returned.
                     * @return VulCategory 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability; 6: emergency vulnerability. If this parameter is left blank or set to 0, the statistical data of all these types of vulnerabilities is returned.
                     * 
                     */
                    uint64_t GetVulCategory() const;

                    /**
                     * 设置1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability; 6: emergency vulnerability. If this parameter is left blank or set to 0, the statistical data of all these types of vulnerabilities is returned.
                     * @param _vulCategory 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability; 6: emergency vulnerability. If this parameter is left blank or set to 0, the statistical data of all these types of vulnerabilities is returned.
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
                     * 获取Whether to count only focused vulnerabilities. 1: count only focused vulnerabilities; 0: count all vulnerabilities.
                     * @return IsFollowVul Whether to count only focused vulnerabilities. 1: count only focused vulnerabilities; 0: count all vulnerabilities.
                     * 
                     */
                    uint64_t GetIsFollowVul() const;

                    /**
                     * 设置Whether to count only focused vulnerabilities. 1: count only focused vulnerabilities; 0: count all vulnerabilities.
                     * @param _isFollowVul Whether to count only focused vulnerabilities. 1: count only focused vulnerabilities; 0: count all vulnerabilities.
                     * 
                     */
                    void SetIsFollowVul(const uint64_t& _isFollowVul);

                    /**
                     * 判断参数 IsFollowVul 是否已赋值
                     * @return IsFollowVul 是否已赋值
                     * 
                     */
                    bool IsFollowVulHasBeenSet() const;

                private:

                    /**
                     * Top servers by vulnerability risks. The specific number is in the range of 1 to 100.
                     */
                    uint64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability; 6: emergency vulnerability. If this parameter is left blank or set to 0, the statistical data of all these types of vulnerabilities is returned.
                     */
                    uint64_t m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * Whether to count only focused vulnerabilities. 1: count only focused vulnerabilities; 0: count all vulnerabilities.
                     */
                    uint64_t m_isFollowVul;
                    bool m_isFollowVulHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULTOPREQUEST_H_
