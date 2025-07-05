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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANSTATEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeScanState request structure.
                */
                class DescribeScanStateRequest : public AbstractModel
                {
                public:
                    DescribeScanStateRequest();
                    ~DescribeScanStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module type. Malware (Trojan), Vul (vulnerability), and Baseline are currently available.
                     * @return ModuleType Module type. Malware (Trojan), Vul (vulnerability), and Baseline are currently available.
                     * 
                     */
                    std::string GetModuleType() const;

                    /**
                     * 设置Module type. Malware (Trojan), Vul (vulnerability), and Baseline are currently available.
                     * @param _moduleType Module type. Malware (Trojan), Vul (vulnerability), and Baseline are currently available.
                     * 
                     */
                    void SetModuleType(const std::string& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                    /**
                     * 获取Filter parameters
<li>StrategyId: Baseline policy ID, which is required only if ModuleType is set to Baseline</li>
                     * @return Filters Filter parameters
<li>StrategyId: Baseline policy ID, which is required only if ModuleType is set to Baseline</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter parameters
<li>StrategyId: Baseline policy ID, which is required only if ModuleType is set to Baseline</li>
                     * @param _filters Filter parameters
<li>StrategyId: Baseline policy ID, which is required only if ModuleType is set to Baseline</li>
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
                     * Module type. Malware (Trojan), Vul (vulnerability), and Baseline are currently available.
                     */
                    std::string m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * Filter parameters
<li>StrategyId: Baseline policy ID, which is required only if ModuleType is set to Baseline</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANSTATEREQUEST_H_
