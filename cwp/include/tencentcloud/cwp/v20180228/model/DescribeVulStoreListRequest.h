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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULSTORELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULSTORELISTREQUEST_H_

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
                * DescribeVulStoreList request structure.
                */
                class DescribeVulStoreListRequest : public AbstractModel
                {
                public:
                    DescribeVulStoreListRequest();
                    ~DescribeVulStoreListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>VulName- string - required: no - vulnerability name</li>
<li>CveId- string - required: no - cveid</li>
<li>VulCategory- string - required: no - vulnerability category: 1: WEB-CMS vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities</li>
<li>Method- string - required: no - detection method: 0: version comparison; 1: POC detection</li>
<li>SupportDefense - string - required: no - whether the defense is supported: 0: no; 1: yes</li>
<li>FixSwitch - string - required: no - whether automatic fixing is supported: 0: no; 1: yes</li>

                     * @return Filters <li>VulName- string - required: no - vulnerability name</li>
<li>CveId- string - required: no - cveid</li>
<li>VulCategory- string - required: no - vulnerability category: 1: WEB-CMS vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities</li>
<li>Method- string - required: no - detection method: 0: version comparison; 1: POC detection</li>
<li>SupportDefense - string - required: no - whether the defense is supported: 0: no; 1: yes</li>
<li>FixSwitch - string - required: no - whether automatic fixing is supported: 0: no; 1: yes</li>

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>VulName- string - required: no - vulnerability name</li>
<li>CveId- string - required: no - cveid</li>
<li>VulCategory- string - required: no - vulnerability category: 1: WEB-CMS vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities</li>
<li>Method- string - required: no - detection method: 0: version comparison; 1: POC detection</li>
<li>SupportDefense - string - required: no - whether the defense is supported: 0: no; 1: yes</li>
<li>FixSwitch - string - required: no - whether automatic fixing is supported: 0: no; 1: yes</li>

                     * @param _filters <li>VulName- string - required: no - vulnerability name</li>
<li>CveId- string - required: no - cveid</li>
<li>VulCategory- string - required: no - vulnerability category: 1: WEB-CMS vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities</li>
<li>Method- string - required: no - detection method: 0: version comparison; 1: POC detection</li>
<li>SupportDefense - string - required: no - whether the defense is supported: 0: no; 1: yes</li>
<li>FixSwitch - string - required: no - whether automatic fixing is supported: 0: no; 1: yes</li>

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
                     * 获取Limit Entries, 10 by default, up to 100
                     * @return Limit Limit Entries, 10 by default, up to 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit Entries, 10 by default, up to 100
                     * @param _limit Limit Entries, 10 by default, up to 100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset, which is 0 by default.
                     * @return Offset Offset, which is 0 by default.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, which is 0 by default.
                     * @param _offset Offset, which is 0 by default.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

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
                     * 获取Optional sorting columns: [PublishDate].
                     * @return By Optional sorting columns: [PublishDate].
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Optional sorting columns: [PublishDate].
                     * @param _by Optional sorting columns: [PublishDate].
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
                     * <li>VulName- string - required: no - vulnerability name</li>
<li>CveId- string - required: no - cveid</li>
<li>VulCategory- string - required: no - vulnerability category: 1: WEB-CMS vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities</li>
<li>Method- string - required: no - detection method: 0: version comparison; 1: POC detection</li>
<li>SupportDefense - string - required: no - whether the defense is supported: 0: no; 1: yes</li>
<li>FixSwitch - string - required: no - whether automatic fixing is supported: 0: no; 1: yes</li>

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Limit Entries, 10 by default, up to 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which is 0 by default.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting Method: [ASC: Ascending Order, DESC: Descending Order]
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Optional sorting columns: [PublishDate].
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULSTORELISTREQUEST_H_
