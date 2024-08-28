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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINELISTREQUEST_H_

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
                * ExportBaselineList request structure.
                */
                class ExportBaselineListRequest : public AbstractModel
                {
                public:
                    ExportBaselineListRequest();
                    ~ExportBaselineListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria:
<li>StrategyId- Uint64 - baseline policy ID</li>
<li>Status - Uint64 - event status: 0: failed; 1: ignored; 3: passed; 5: detecting</li>
<li>BaselineName - String - baseline name</li>
<li>AliasName - String - server name/server IP address</li>
<li>Uuid - String - host UUID</li>
                     * @return Filters Filter criteria:
<li>StrategyId- Uint64 - baseline policy ID</li>
<li>Status - Uint64 - event status: 0: failed; 1: ignored; 3: passed; 5: detecting</li>
<li>BaselineName - String - baseline name</li>
<li>AliasName - String - server name/server IP address</li>
<li>Uuid - String - host UUID</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria:
<li>StrategyId- Uint64 - baseline policy ID</li>
<li>Status - Uint64 - event status: 0: failed; 1: ignored; 3: passed; 5: detecting</li>
<li>BaselineName - String - baseline name</li>
<li>AliasName - String - server name/server IP address</li>
<li>Uuid - String - host UUID</li>
                     * @param _filters Filter criteria:
<li>StrategyId- Uint64 - baseline policy ID</li>
<li>Status - Uint64 - event status: 0: failed; 1: ignored; 3: passed; 5: detecting</li>
<li>BaselineName - String - baseline name</li>
<li>AliasName - String - server name/server IP address</li>
<li>Uuid - String - host UUID</li>
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
                     * 获取This parameter has been deprecated.
                     * @return IfDetail This parameter has been deprecated.
                     * 
                     */
                    uint64_t GetIfDetail() const;

                    /**
                     * 设置This parameter has been deprecated.
                     * @param _ifDetail This parameter has been deprecated.
                     * 
                     */
                    void SetIfDetail(const uint64_t& _ifDetail);

                    /**
                     * 判断参数 IfDetail 是否已赋值
                     * @return IfDetail 是否已赋值
                     * 
                     */
                    bool IfDetailHasBeenSet() const;

                private:

                    /**
                     * Filter criteria:
<li>StrategyId- Uint64 - baseline policy ID</li>
<li>Status - Uint64 - event status: 0: failed; 1: ignored; 3: passed; 5: detecting</li>
<li>BaselineName - String - baseline name</li>
<li>AliasName - String - server name/server IP address</li>
<li>Uuid - String - host UUID</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * This parameter has been deprecated.
                     */
                    uint64_t m_ifDetail;
                    bool m_ifDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINELISTREQUEST_H_
