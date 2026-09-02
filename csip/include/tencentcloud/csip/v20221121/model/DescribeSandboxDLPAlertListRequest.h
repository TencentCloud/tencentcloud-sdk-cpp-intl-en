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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXDLPALERTLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXDLPALERTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSandboxDLPAlertList request structure.
                */
                class DescribeSandboxDLPAlertListRequest : public AbstractModel
                {
                public:
                    DescribeSandboxDLPAlertListRequest();
                    ~DescribeSandboxDLPAlertListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Offset. Default value: 0.</p>
                     * @return Offset <p>Offset. Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. Default value: 0.</p>
                     * @param _offset <p>Offset. Default value: 0.</p>
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
                     * 获取<p>Number of items per page. Default value: 10. Upper limit: 200.</p>
                     * @return Limit <p>Number of items per page. Default value: 10. Upper limit: 200.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items per page. Default value: 10. Upper limit: 200.</p>
                     * @param _limit <p>Number of items per page. Default value: 10. Upper limit: 200.</p>
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
                     * 获取<p>Filter criteria<br>Supported filter items:<br>ID: Query a single item by alarm record ID<br>BelongAssetType: The asset type it belongs to. Available values: HOST / CONTAINER<br>RuleName: Search by hit rule name<br>RuleAction: Hit action. Available values: PASS (allowlist) / BLOCK (BLOCK and alarm) / MONITOR (alarm)<br>InstanceId: Precise filtering by Asset Instance ID (for viewing the alarm list of an asset on the Asset Details Page and other scenarios)<br>InstanceName: Fuzzy search by asset instance name. Multiple values have an "OR" relationship with each other<br>Status: Processing Status. Available values: PENDING (unprocessed) / HANDLED (processed) / IGNORE (ignored) / PASS (allowlisted) / BLOCK (blocked)</p>
                     * @return Filters <p>Filter criteria<br>Supported filter items:<br>ID: Query a single item by alarm record ID<br>BelongAssetType: The asset type it belongs to. Available values: HOST / CONTAINER<br>RuleName: Search by hit rule name<br>RuleAction: Hit action. Available values: PASS (allowlist) / BLOCK (BLOCK and alarm) / MONITOR (alarm)<br>InstanceId: Precise filtering by Asset Instance ID (for viewing the alarm list of an asset on the Asset Details Page and other scenarios)<br>InstanceName: Fuzzy search by asset instance name. Multiple values have an "OR" relationship with each other<br>Status: Processing Status. Available values: PENDING (unprocessed) / HANDLED (processed) / IGNORE (ignored) / PASS (allowlisted) / BLOCK (blocked)</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria<br>Supported filter items:<br>ID: Query a single item by alarm record ID<br>BelongAssetType: The asset type it belongs to. Available values: HOST / CONTAINER<br>RuleName: Search by hit rule name<br>RuleAction: Hit action. Available values: PASS (allowlist) / BLOCK (BLOCK and alarm) / MONITOR (alarm)<br>InstanceId: Precise filtering by Asset Instance ID (for viewing the alarm list of an asset on the Asset Details Page and other scenarios)<br>InstanceName: Fuzzy search by asset instance name. Multiple values have an "OR" relationship with each other<br>Status: Processing Status. Available values: PENDING (unprocessed) / HANDLED (processed) / IGNORE (ignored) / PASS (allowlisted) / BLOCK (blocked)</p>
                     * @param _filters <p>Filter criteria<br>Supported filter items:<br>ID: Query a single item by alarm record ID<br>BelongAssetType: The asset type it belongs to. Available values: HOST / CONTAINER<br>RuleName: Search by hit rule name<br>RuleAction: Hit action. Available values: PASS (allowlist) / BLOCK (BLOCK and alarm) / MONITOR (alarm)<br>InstanceId: Precise filtering by Asset Instance ID (for viewing the alarm list of an asset on the Asset Details Page and other scenarios)<br>InstanceName: Fuzzy search by asset instance name. Multiple values have an "OR" relationship with each other<br>Status: Processing Status. Available values: PENDING (unprocessed) / HANDLED (processed) / IGNORE (ignored) / PASS (allowlisted) / BLOCK (blocked)</p>
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
                     * 获取<p>Group account member id.</p>
                     * @return MemberId <p>Group account member id.</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id.</p>
                     * @param _memberId <p>Group account member id.</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>Offset. Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of items per page. Default value: 10. Upper limit: 200.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Filter criteria<br>Supported filter items:<br>ID: Query a single item by alarm record ID<br>BelongAssetType: The asset type it belongs to. Available values: HOST / CONTAINER<br>RuleName: Search by hit rule name<br>RuleAction: Hit action. Available values: PASS (allowlist) / BLOCK (BLOCK and alarm) / MONITOR (alarm)<br>InstanceId: Precise filtering by Asset Instance ID (for viewing the alarm list of an asset on the Asset Details Page and other scenarios)<br>InstanceName: Fuzzy search by asset instance name. Multiple values have an "OR" relationship with each other<br>Status: Processing Status. Available values: PENDING (unprocessed) / HANDLED (processed) / IGNORE (ignored) / PASS (allowlisted) / BLOCK (blocked)</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Group account member id.</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXDLPALERTLISTREQUEST_H_
