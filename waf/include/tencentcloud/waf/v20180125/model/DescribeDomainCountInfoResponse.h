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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINCOUNTINFORESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINCOUNTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeDomainCountInfo response structure.
                */
                class DescribeDomainCountInfoResponse : public AbstractModel
                {
                public:
                    DescribeDomainCountInfoResponse();
                    ~DescribeDomainCountInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of domain names
                     * @return AllDomain Total number of domain names
                     * 
                     */
                    uint64_t GetAllDomain() const;

                    /**
                     * 判断参数 AllDomain 是否已赋值
                     * @return AllDomain 是否已赋值
                     * 
                     */
                    bool AllDomainHasBeenSet() const;

                    /**
                     * 获取Last discovery time
                     * @return UpdateTime Last discovery time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Total number of connected domains
                     * @return WafDomainCount Total number of connected domains
                     * 
                     */
                    uint64_t GetWafDomainCount() const;

                    /**
                     * 判断参数 WafDomainCount 是否已赋值
                     * @return WafDomainCount 是否已赋值
                     * 
                     */
                    bool WafDomainCountHasBeenSet() const;

                    /**
                     * 获取Remaining quota
                     * @return LeftDomainCount Remaining quota
                     * 
                     */
                    uint64_t GetLeftDomainCount() const;

                    /**
                     * 判断参数 LeftDomainCount 是否已赋值
                     * @return LeftDomainCount 是否已赋值
                     * 
                     */
                    bool LeftDomainCountHasBeenSet() const;

                    /**
                     * 获取Number of protected domain names
                     * @return OpenWafDomain Number of protected domain names
                     * 
                     */
                    uint64_t GetOpenWafDomain() const;

                    /**
                     * 判断参数 OpenWafDomain 是否已赋值
                     * @return OpenWafDomain 是否已赋值
                     * 
                     */
                    bool OpenWafDomainHasBeenSet() const;

                private:

                    /**
                     * Total number of domain names
                     */
                    uint64_t m_allDomain;
                    bool m_allDomainHasBeenSet;

                    /**
                     * Last discovery time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Total number of connected domains
                     */
                    uint64_t m_wafDomainCount;
                    bool m_wafDomainCountHasBeenSet;

                    /**
                     * Remaining quota
                     */
                    uint64_t m_leftDomainCount;
                    bool m_leftDomainCountHasBeenSet;

                    /**
                     * Number of protected domain names
                     */
                    uint64_t m_openWafDomain;
                    bool m_openWafDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINCOUNTINFORESPONSE_H_
