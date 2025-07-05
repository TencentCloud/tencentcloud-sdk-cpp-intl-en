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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRANSOMDEFENSESTRATEGYLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRANSOMDEFENSESTRATEGYLISTREQUEST_H_

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
                * ExportRansomDefenseStrategyList request structure.
                */
                class ExportRansomDefenseStrategyListRequest : public AbstractModel
                {
                public:
                    ExportRansomDefenseStrategyListRequest();
                    ~ExportRansomDefenseStrategyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria
<li>Ips - String - required: no - query by IP</li>
<li>MachineNames - String - required: no - query by instance name</li>
<li>Names - String - required: no - query by instance name</li>
<li>Dirs - String - Required: No - Bait Directory </li>
<li>Status - String - Required: No - Policy Status: 0 Disabled, 1 Enabled </li>
<li>BackupType - String - Required: No - Backup Mode: 0-Weekly; 1-Daily </li>
                     * @return Filters Filter criteria
<li>Ips - String - required: no - query by IP</li>
<li>MachineNames - String - required: no - query by instance name</li>
<li>Names - String - required: no - query by instance name</li>
<li>Dirs - String - Required: No - Bait Directory </li>
<li>Status - String - Required: No - Policy Status: 0 Disabled, 1 Enabled </li>
<li>BackupType - String - Required: No - Backup Mode: 0-Weekly; 1-Daily </li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Ips - String - required: no - query by IP</li>
<li>MachineNames - String - required: no - query by instance name</li>
<li>Names - String - required: no - query by instance name</li>
<li>Dirs - String - Required: No - Bait Directory </li>
<li>Status - String - Required: No - Policy Status: 0 Disabled, 1 Enabled </li>
<li>BackupType - String - Required: No - Backup Mode: 0-Weekly; 1-Daily </li>
                     * @param _filters Filter criteria
<li>Ips - String - required: no - query by IP</li>
<li>MachineNames - String - required: no - query by instance name</li>
<li>Names - String - required: no - query by instance name</li>
<li>Dirs - String - Required: No - Bait Directory </li>
<li>Status - String - Required: No - Policy Status: 0 Disabled, 1 Enabled </li>
<li>BackupType - String - Required: No - Backup Mode: 0-Weekly; 1-Daily </li>
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
                     * 获取Sorting method: ASC / DESC
                     * @return Order Sorting method: ASC / DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: ASC / DESC
                     * @param _order Sorting method: ASC / DESC
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
                     * 获取Sorting fields, supporting CreateTime and MachineCount
                     * @return By Sorting fields, supporting CreateTime and MachineCount
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting fields, supporting CreateTime and MachineCount
                     * @param _by Sorting fields, supporting CreateTime and MachineCount
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
                     * Filter criteria
<li>Ips - String - required: no - query by IP</li>
<li>MachineNames - String - required: no - query by instance name</li>
<li>Names - String - required: no - query by instance name</li>
<li>Dirs - String - Required: No - Bait Directory </li>
<li>Status - String - Required: No - Policy Status: 0 Disabled, 1 Enabled </li>
<li>BackupType - String - Required: No - Backup Mode: 0-Weekly; 1-Daily </li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting method: ASC / DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting fields, supporting CreateTime and MachineCount
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRANSOMDEFENSESTRATEGYLISTREQUEST_H_
