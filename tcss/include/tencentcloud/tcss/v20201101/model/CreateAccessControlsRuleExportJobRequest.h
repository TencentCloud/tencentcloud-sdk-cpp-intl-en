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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEACCESSCONTROLSRULEEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEACCESSCONTROLSRULEEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateAccessControlsRuleExportJob request structure.
                */
                class CreateAccessControlsRuleExportJobRequest : public AbstractModel
                {
                public:
                    CreateAccessControlsRuleExportJobRequest();
                    ~CreateAccessControlsRuleExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter conditions
<li>`RuleType` - String  - Optional - Rule type</li>
<li>`Status` - String - Optional - Status</li>
                     * @return Filters Filter conditions
<li>`RuleType` - String  - Optional - Rule type</li>
<li>`Status` - String - Optional - Status</li>
                     * 
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置Filter conditions
<li>`RuleType` - String  - Optional - Rule type</li>
<li>`Status` - String - Optional - Status</li>
                     * @param _filters Filter conditions
<li>`RuleType` - String  - Optional - Rule type</li>
<li>`Status` - String - Optional - Status</li>
                     * 
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting order
                     * @return Order Sorting order
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order
                     * @param _order Sorting order
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Sorting field
                     * @return By Sorting field
                     * 
                     */
                    std::vector<std::string> GetBy() const;

                    /**
                     * 设置Sorting field
                     * @param _by Sorting field
                     * 
                     */
                    void SetBy(const std::vector<std::string>& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Fields to export
                     * @return ExportField Fields to export
                     * 
                     */
                    std::vector<std::string> GetExportField() const;

                    /**
                     * 设置Fields to export
                     * @param _exportField Fields to export
                     * 
                     */
                    void SetExportField(const std::vector<std::string>& _exportField);

                    /**
                     * 判断参数 ExportField 是否已赋值
                     * @return ExportField 是否已赋值
                     * 
                     */
                    bool ExportFieldHasBeenSet() const;

                private:

                    /**
                     * Filter conditions
<li>`RuleType` - String  - Optional - Rule type</li>
<li>`Status` - String - Optional - Status</li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting order
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field
                     */
                    std::vector<std::string> m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Fields to export
                     */
                    std::vector<std::string> m_exportField;
                    bool m_exportFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEACCESSCONTROLSRULEEXPORTJOBREQUEST_H_
