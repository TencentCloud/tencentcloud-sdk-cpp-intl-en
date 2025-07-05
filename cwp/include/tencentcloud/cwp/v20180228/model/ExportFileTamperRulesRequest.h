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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTFILETAMPERRULESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTFILETAMPERRULESREQUEST_H_

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
                * ExportFileTamperRules request structure.
                */
                class ExportFileTamperRulesRequest : public AbstractModel
                {
                public:
                    ExportFileTamperRulesRequest();
                    ~ExportFileTamperRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria
<li>RuleCategory- string- rule category: 0 = system rule; 1 = user rule</li>
<li>Name - String - Rule name</li>
                     * @return Filters Filter criteria
<li>RuleCategory- string- rule category: 0 = system rule; 1 = user rule</li>
<li>Name - String - Rule name</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>RuleCategory- string- rule category: 0 = system rule; 1 = user rule</li>
<li>Name - String - Rule name</li>
                     * @param _filters Filter criteria
<li>RuleCategory- string- rule category: 0 = system rule; 1 = user rule</li>
<li>Name - String - Rule name</li>
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
                     * Filter criteria
<li>RuleCategory- string- rule category: 0 = system rule; 1 = user rule</li>
<li>Name - String - Rule name</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTFILETAMPERRULESREQUEST_H_
