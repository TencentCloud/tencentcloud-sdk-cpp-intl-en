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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEITEMLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEITEMLISTREQUEST_H_

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
                * ExportBaselineItemList request structure.
                */
                class ExportBaselineItemListRequest : public AbstractModel
                {
                public:
                    ExportBaselineItemListRequest();
                    ~ExportBaselineItemListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>PolicyId - int64 - required: no - policy ID</li>
<li>RuleId - int64 - required: no - rule ID</li>
<li>HostId - string - whether required: no - host ID</li>
<li>HostName - string - required: no - host name</li>
<li>HostIp - string - required: no - host IP</li>
<li>ItemId - String - required: no - detection item ID</li>
<li>ItemName - String - required: no - item name</li>
<li>DetectStatus - int - required: no - detection status [0: not passed|3: passed|5: detecting]</li>
<li>Level - int - Required: No - Risk level</li>
<li>StartTime - string - required: no - start time</li>
<li>EndTime - string - required: no - end time</li>
                     * @return Filters <li>PolicyId - int64 - required: no - policy ID</li>
<li>RuleId - int64 - required: no - rule ID</li>
<li>HostId - string - whether required: no - host ID</li>
<li>HostName - string - required: no - host name</li>
<li>HostIp - string - required: no - host IP</li>
<li>ItemId - String - required: no - detection item ID</li>
<li>ItemName - String - required: no - item name</li>
<li>DetectStatus - int - required: no - detection status [0: not passed|3: passed|5: detecting]</li>
<li>Level - int - Required: No - Risk level</li>
<li>StartTime - string - required: no - start time</li>
<li>EndTime - string - required: no - end time</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>PolicyId - int64 - required: no - policy ID</li>
<li>RuleId - int64 - required: no - rule ID</li>
<li>HostId - string - whether required: no - host ID</li>
<li>HostName - string - required: no - host name</li>
<li>HostIp - string - required: no - host IP</li>
<li>ItemId - String - required: no - detection item ID</li>
<li>ItemName - String - required: no - item name</li>
<li>DetectStatus - int - required: no - detection status [0: not passed|3: passed|5: detecting]</li>
<li>Level - int - Required: No - Risk level</li>
<li>StartTime - string - required: no - start time</li>
<li>EndTime - string - required: no - end time</li>
                     * @param _filters <li>PolicyId - int64 - required: no - policy ID</li>
<li>RuleId - int64 - required: no - rule ID</li>
<li>HostId - string - whether required: no - host ID</li>
<li>HostName - string - required: no - host name</li>
<li>HostIp - string - required: no - host IP</li>
<li>ItemId - String - required: no - detection item ID</li>
<li>ItemName - String - required: no - item name</li>
<li>DetectStatus - int - required: no - detection status [0: not passed|3: passed|5: detecting]</li>
<li>Level - int - Required: No - Risk level</li>
<li>StartTime - string - required: no - start time</li>
<li>EndTime - string - required: no - end time</li>
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
                     * 获取0: Filtered Result Export; 1: Export All
                     * @return ExportAll 0: Filtered Result Export; 1: Export All
                     * 
                     */
                    int64_t GetExportAll() const;

                    /**
                     * 设置0: Filtered Result Export; 1: Export All
                     * @param _exportAll 0: Filtered Result Export; 1: Export All
                     * 
                     */
                    void SetExportAll(const int64_t& _exportAll);

                    /**
                     * 判断参数 ExportAll 是否已赋值
                     * @return ExportAll 是否已赋值
                     * 
                     */
                    bool ExportAllHasBeenSet() const;

                private:

                    /**
                     * <li>PolicyId - int64 - required: no - policy ID</li>
<li>RuleId - int64 - required: no - rule ID</li>
<li>HostId - string - whether required: no - host ID</li>
<li>HostName - string - required: no - host name</li>
<li>HostIp - string - required: no - host IP</li>
<li>ItemId - String - required: no - detection item ID</li>
<li>ItemName - String - required: no - item name</li>
<li>DetectStatus - int - required: no - detection status [0: not passed|3: passed|5: detecting]</li>
<li>Level - int - Required: No - Risk level</li>
<li>StartTime - string - required: no - start time</li>
<li>EndTime - string - required: no - end time</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 0: Filtered Result Export; 1: Export All
                     */
                    int64_t m_exportAll;
                    bool m_exportAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEITEMLISTREQUEST_H_
