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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINEPOLICYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselinePolicy.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyBaselinePolicy request structure.
                */
                class ModifyBaselinePolicyRequest : public AbstractModel
                {
                public:
                    ModifyBaselinePolicyRequest();
                    ~ModifyBaselinePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取None
                     * @return Data None
                     * 
                     */
                    BaselinePolicy GetData() const;

                    /**
                     * 设置None
                     * @param _data None
                     * 
                     */
                    void SetData(const BaselinePolicy& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<li>RuleName - String - required: no - rule name</li>
<li>CategoryId - int64 - required: no - customized filtering: -1 - rule category</li>
<li>RuleType - int - required: no - 0: system default; 1: customized - rule type</li>
                     * @return Filters <li>RuleName - String - required: no - rule name</li>
<li>CategoryId - int64 - required: no - customized filtering: -1 - rule category</li>
<li>RuleType - int - required: no - 0: system default; 1: customized - rule type</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>RuleName - String - required: no - rule name</li>
<li>CategoryId - int64 - required: no - customized filtering: -1 - rule category</li>
<li>RuleType - int - required: no - 0: system default; 1: customized - rule type</li>
                     * @param _filters <li>RuleName - String - required: no - rule name</li>
<li>CategoryId - int64 - required: no - customized filtering: -1 - rule category</li>
<li>RuleType - int - required: no - 0: system default; 1: customized - rule type</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Whether to select all based on the filtering criteria
                     * @return SelectAll Whether to select all based on the filtering criteria
                     * 
                     */
                    int64_t GetSelectAll() const;

                    /**
                     * 设置Whether to select all based on the filtering criteria
                     * @param _selectAll Whether to select all based on the filtering criteria
                     * 
                     */
                    void SetSelectAll(const int64_t& _selectAll);

                    /**
                     * 判断参数 SelectAll 是否已赋值
                     * @return SelectAll 是否已赋值
                     * 
                     */
                    bool SelectAllHasBeenSet() const;

                private:

                    /**
                     * None
                     */
                    BaselinePolicy m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <li>RuleName - String - required: no - rule name</li>
<li>CategoryId - int64 - required: no - customized filtering: -1 - rule category</li>
<li>RuleType - int - required: no - 0: system default; 1: customized - rule type</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Whether to select all based on the filtering criteria
                     */
                    int64_t m_selectAll;
                    bool m_selectAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINEPOLICYREQUEST_H_
