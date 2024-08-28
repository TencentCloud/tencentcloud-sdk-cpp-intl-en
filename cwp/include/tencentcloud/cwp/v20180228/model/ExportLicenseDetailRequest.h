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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTLICENSEDETAILREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTLICENSEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportLicenseDetail request structure.
                */
                class ExportLicenseDetailRequest : public AbstractModel
                {
                public:
                    ExportLicenseDetailRequest();
                    ~ExportLicenseDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Take the intersection when filtering with multiple conditions: LicenseStatus, DeadlineStatus, ResourceId, and Keywords
<li> LicenseType authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription</li>
<li>ResourceId resource ID</li>
                     * @return Filters Take the intersection when filtering with multiple conditions: LicenseStatus, DeadlineStatus, ResourceId, and Keywords
<li> LicenseType authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription</li>
<li>ResourceId resource ID</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Take the intersection when filtering with multiple conditions: LicenseStatus, DeadlineStatus, ResourceId, and Keywords
<li> LicenseType authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription</li>
<li>ResourceId resource ID</li>
                     * @param _filters Take the intersection when filtering with multiple conditions: LicenseStatus, DeadlineStatus, ResourceId, and Keywords
<li> LicenseType authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription</li>
<li>ResourceId resource ID</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Whether to export all authorization details
                     * @return IsHistory Whether to export all authorization details
                     * 
                     */
                    bool GetIsHistory() const;

                    /**
                     * 设置Whether to export all authorization details
                     * @param _isHistory Whether to export all authorization details
                     * 
                     */
                    void SetIsHistory(const bool& _isHistory);

                    /**
                     * 判断参数 IsHistory 是否已赋值
                     * @return IsHistory 是否已赋值
                     * 
                     */
                    bool IsHistoryHasBeenSet() const;

                    /**
                     * 获取Tag filtering; filter by the platform's tag capabilities. In this case, you should pass in the tag key and tag value as an object.
                     * @return Tags Tag filtering; filter by the platform's tag capabilities. In this case, you should pass in the tag key and tag value as an object.
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置Tag filtering; filter by the platform's tag capabilities. In this case, you should pass in the tag key and tag value as an object.
                     * @param _tags Tag filtering; filter by the platform's tag capabilities. In this case, you should pass in the tag key and tag value as an object.
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Export month, this parameter is optional only when IsHistory is active.
                     * @return ExportMonth Export month, this parameter is optional only when IsHistory is active.
                     * 
                     */
                    std::string GetExportMonth() const;

                    /**
                     * 设置Export month, this parameter is optional only when IsHistory is active.
                     * @param _exportMonth Export month, this parameter is optional only when IsHistory is active.
                     * 
                     */
                    void SetExportMonth(const std::string& _exportMonth);

                    /**
                     * 判断参数 ExportMonth 是否已赋值
                     * @return ExportMonth 是否已赋值
                     * 
                     */
                    bool ExportMonthHasBeenSet() const;

                private:

                    /**
                     * Take the intersection when filtering with multiple conditions: LicenseStatus, DeadlineStatus, ResourceId, and Keywords
<li> LicenseType authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription</li>
<li>ResourceId resource ID</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Whether to export all authorization details
                     */
                    bool m_isHistory;
                    bool m_isHistoryHasBeenSet;

                    /**
                     * Tag filtering; filter by the platform's tag capabilities. In this case, you should pass in the tag key and tag value as an object.
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Export month, this parameter is optional only when IsHistory is active.
                     */
                    std::string m_exportMonth;
                    bool m_exportMonthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTLICENSEDETAILREQUEST_H_
