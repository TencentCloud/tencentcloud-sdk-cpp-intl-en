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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETSYSTEMPACKAGELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETSYSTEMPACKAGELISTREQUEST_H_

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
                * ExportAssetSystemPackageList request structure.
                */
                class ExportAssetSystemPackageListRequest : public AbstractModel
                {
                public:
                    ExportAssetSystemPackageListRequest();
                    ~ExportAssetSystemPackageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Host UUID
                     * @return Uuid Host UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
                     * @param _uuid Host UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Host QUUID
                     * @return Quuid Host QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
                     * @param _quuid Host QUUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Filter criteria
<li>Name - String - required: no - package name</li>
<li>StartTime - String - required: no - start time of installation</li>
<li>EndTime - String - required: no - end time of installation</li>
<li>Type- int - required: no - installation package type:
1:rpm
2:dpkg
3:java
4:system</li>
                     * @return Filters Filter criteria
<li>Name - String - required: no - package name</li>
<li>StartTime - String - required: no - start time of installation</li>
<li>EndTime - String - required: no - end time of installation</li>
<li>Type- int - required: no - installation package type:
1:rpm
2:dpkg
3:java
4:system</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Name - String - required: no - package name</li>
<li>StartTime - String - required: no - start time of installation</li>
<li>EndTime - String - required: no - end time of installation</li>
<li>Type- int - required: no - installation package type:
1:rpm
2:dpkg
3:java
4:system</li>
                     * @param _filters Filter criteria
<li>Name - String - required: no - package name</li>
<li>StartTime - String - required: no - start time of installation</li>
<li>EndTime - String - required: no - end time of installation</li>
<li>Type- int - required: no - installation package type:
1:rpm
2:dpkg
3:java
4:system</li>
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
                     * 获取Sorting method: asc for ascending order or desc for descending order
                     * @return Order Sorting method: asc for ascending order or desc for descending order
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: asc for ascending order or desc for descending order
                     * @param _order Sorting method: asc for ascending order or desc for descending order
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
                     * 获取Optional sorting method: [FistTime|InstallTime: installation time]
                     * @return By Optional sorting method: [FistTime|InstallTime: installation time]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Optional sorting method: [FistTime|InstallTime: installation time]
                     * @param _by Optional sorting method: [FistTime|InstallTime: installation time]
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
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Filter criteria
<li>Name - String - required: no - package name</li>
<li>StartTime - String - required: no - start time of installation</li>
<li>EndTime - String - required: no - end time of installation</li>
<li>Type- int - required: no - installation package type:
1:rpm
2:dpkg
3:java
4:system</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting method: asc for ascending order or desc for descending order
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Optional sorting method: [FistTime|InstallTime: installation time]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETSYSTEMPACKAGELISTREQUEST_H_
