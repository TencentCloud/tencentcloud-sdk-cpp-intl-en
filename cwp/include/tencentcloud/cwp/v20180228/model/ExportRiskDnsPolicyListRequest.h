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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKDNSPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKDNSPOLICYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * ExportRiskDnsPolicyList request structure.
                */
                class ExportRiskDnsPolicyListRequest : public AbstractModel
                {
                public:
                    ExportRiskDnsPolicyListRequest();
                    ~ExportRiskDnsPolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>PolicyType - int - whether required: no - policy type</li>
<li>PolicyName - string - whether required: no - policy name</li>
<li>Domain - string - Required: No - Domain (first urlencode the domain, then base64)</li>
<li>PolicyAction- int - whether required: no - policy action</li>
<li>IsEnabled - int - whether required: no - whether effective</li>
                     * @return Filters <li>PolicyType - int - whether required: no - policy type</li>
<li>PolicyName - string - whether required: no - policy name</li>
<li>Domain - string - Required: No - Domain (first urlencode the domain, then base64)</li>
<li>PolicyAction- int - whether required: no - policy action</li>
<li>IsEnabled - int - whether required: no - whether effective</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>PolicyType - int - whether required: no - policy type</li>
<li>PolicyName - string - whether required: no - policy name</li>
<li>Domain - string - Required: No - Domain (first urlencode the domain, then base64)</li>
<li>PolicyAction- int - whether required: no - policy action</li>
<li>IsEnabled - int - whether required: no - whether effective</li>
                     * @param _filters <li>PolicyType - int - whether required: no - policy type</li>
<li>PolicyName - string - whether required: no - policy name</li>
<li>Domain - string - Required: No - Domain (first urlencode the domain, then base64)</li>
<li>PolicyAction- int - whether required: no - policy action</li>
<li>IsEnabled - int - whether required: no - whether effective</li>
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
                     * 获取Sorting Method: [ASC: Ascending Order, DESC: Descending Order]
                     * @return Order Sorting Method: [ASC: Ascending Order, DESC: Descending Order]
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting Method: [ASC: Ascending Order, DESC: Descending Order]
                     * @param _order Sorting Method: [ASC: Ascending Order, DESC: Descending Order]
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
                     * 获取Optional sorting column: [PolicyName|HostType]
                     * @return By Optional sorting column: [PolicyName|HostType]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Optional sorting column: [PolicyName|HostType]
                     * @param _by Optional sorting column: [PolicyName|HostType]
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * <li>PolicyType - int - whether required: no - policy type</li>
<li>PolicyName - string - whether required: no - policy name</li>
<li>Domain - string - Required: No - Domain (first urlencode the domain, then base64)</li>
<li>PolicyAction- int - whether required: no - policy action</li>
<li>IsEnabled - int - whether required: no - whether effective</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting Method: [ASC: Ascending Order, DESC: Descending Order]
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Optional sorting column: [PolicyName|HostType]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKDNSPOLICYLISTREQUEST_H_
