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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEITEMDETECTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEITEMDETECTLISTREQUEST_H_

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
                * ExportBaselineItemDetectList request structure.
                */
                class ExportBaselineItemDetectListRequest : public AbstractModel
                {
                public:
                    ExportBaselineItemDetectListRequest();
                    ~ExportBaselineItemDetectListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>HostId - string - required: no - host ID</li> <li>RuleId - int64 - required: no - rule ID</li> <li>IsPassed - int - required: no - pass or not</li> <li>RiskTier - int - required: no - risk level</li>
                     * @return Filters <li>HostId - string - required: no - host ID</li> <li>RuleId - int64 - required: no - rule ID</li> <li>IsPassed - int - required: no - pass or not</li> <li>RiskTier - int - required: no - risk level</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>HostId - string - required: no - host ID</li> <li>RuleId - int64 - required: no - rule ID</li> <li>IsPassed - int - required: no - pass or not</li> <li>RiskTier - int - required: no - risk level</li>
                     * @param _filters <li>HostId - string - required: no - host ID</li> <li>RuleId - int64 - required: no - rule ID</li> <li>IsPassed - int - required: no - pass or not</li> <li>RiskTier - int - required: no - risk level</li>
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

                    /**
                     * 获取0: show the export interface; 1: export all result events
                     * @return IsExportDetail 0: show the export interface; 1: export all result events
                     * 
                     */
                    int64_t GetIsExportDetail() const;

                    /**
                     * 设置0: show the export interface; 1: export all result events
                     * @param _isExportDetail 0: show the export interface; 1: export all result events
                     * 
                     */
                    void SetIsExportDetail(const int64_t& _isExportDetail);

                    /**
                     * 判断参数 IsExportDetail 是否已赋值
                     * @return IsExportDetail 是否已赋值
                     * 
                     */
                    bool IsExportDetailHasBeenSet() const;

                private:

                    /**
                     * <li>HostId - string - required: no - host ID</li> <li>RuleId - int64 - required: no - rule ID</li> <li>IsPassed - int - required: no - pass or not</li> <li>RiskTier - int - required: no - risk level</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 0: Filtered Result Export; 1: Export All
                     */
                    int64_t m_exportAll;
                    bool m_exportAllHasBeenSet;

                    /**
                     * 0: show the export interface; 1: export all result events
                     */
                    int64_t m_isExportDetail;
                    bool m_isExportDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEITEMDETECTLISTREQUEST_H_
