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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXABLEMACHINELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXABLEMACHINELISTREQUEST_H_

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
                * DescribeVulFixableMachineList request structure.
                */
                class DescribeVulFixableMachineListRequest : public AbstractModel
                {
                public:
                    DescribeVulFixableMachineListRequest();
                    ~DescribeVulFixableMachineListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Vulnerability ID list, a maximum of 100</p>
                     * @return VulIds <p>Vulnerability ID list, a maximum of 100</p>
                     * 
                     */
                    std::vector<int64_t> GetVulIds() const;

                    /**
                     * 设置<p>Vulnerability ID list, a maximum of 100</p>
                     * @param _vulIds <p>Vulnerability ID list, a maximum of 100</p>
                     * 
                     */
                    void SetVulIds(const std::vector<int64_t>& _vulIds);

                    /**
                     * 判断参数 VulIds 是否已赋值
                     * @return VulIds 是否已赋值
                     * 
                     */
                    bool VulIdsHasBeenSet() const;

                    /**
                     * 获取<p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     * @return Offset <p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     * @param _offset <p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
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
                     * 获取<p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * @return Limit <p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * @param _limit <p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
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
                     * 获取<p>Filtering Conditions<br>Supported Filter.Name:<br>Keyword - fuzzy matching, search by asset ID, asset name<br>ComponentName - fuzzy matching, search by associated component name<br>InstanceId - exact match, filter by host instance ID<br>MachineName - fuzzy matching, search by host name<br>MachineIp - fuzzy matching, search by host IP<br>OsType - exact match, filter by OS type: linux/windows<br>SupportAutoFix - exact match, filter by whether automatic fixing is supported: 0-unsupported 1-supported<br>Tag - exact match, filter by asset tag<br>AppId - exact match, filter by associated account</p>
                     * @return Filters <p>Filtering Conditions<br>Supported Filter.Name:<br>Keyword - fuzzy matching, search by asset ID, asset name<br>ComponentName - fuzzy matching, search by associated component name<br>InstanceId - exact match, filter by host instance ID<br>MachineName - fuzzy matching, search by host name<br>MachineIp - fuzzy matching, search by host IP<br>OsType - exact match, filter by OS type: linux/windows<br>SupportAutoFix - exact match, filter by whether automatic fixing is supported: 0-unsupported 1-supported<br>Tag - exact match, filter by asset tag<br>AppId - exact match, filter by associated account</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Filtering Conditions<br>Supported Filter.Name:<br>Keyword - fuzzy matching, search by asset ID, asset name<br>ComponentName - fuzzy matching, search by associated component name<br>InstanceId - exact match, filter by host instance ID<br>MachineName - fuzzy matching, search by host name<br>MachineIp - fuzzy matching, search by host IP<br>OsType - exact match, filter by OS type: linux/windows<br>SupportAutoFix - exact match, filter by whether automatic fixing is supported: 0-unsupported 1-supported<br>Tag - exact match, filter by asset tag<br>AppId - exact match, filter by associated account</p>
                     * @param _filters <p>Filtering Conditions<br>Supported Filter.Name:<br>Keyword - fuzzy matching, search by asset ID, asset name<br>ComponentName - fuzzy matching, search by associated component name<br>InstanceId - exact match, filter by host instance ID<br>MachineName - fuzzy matching, search by host name<br>MachineIp - fuzzy matching, search by host IP<br>OsType - exact match, filter by OS type: linux/windows<br>SupportAutoFix - exact match, filter by whether automatic fixing is supported: 0-unsupported 1-supported<br>Tag - exact match, filter by asset tag<br>AppId - exact match, filter by associated account</p>
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
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
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
                     * <p>Vulnerability ID list, a maximum of 100</p>
                     */
                    std::vector<int64_t> m_vulIds;
                    bool m_vulIdsHasBeenSet;

                    /**
                     * <p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Filtering Conditions<br>Supported Filter.Name:<br>Keyword - fuzzy matching, search by asset ID, asset name<br>ComponentName - fuzzy matching, search by associated component name<br>InstanceId - exact match, filter by host instance ID<br>MachineName - fuzzy matching, search by host name<br>MachineIp - fuzzy matching, search by host IP<br>OsType - exact match, filter by OS type: linux/windows<br>SupportAutoFix - exact match, filter by whether automatic fixing is supported: 0-unsupported 1-supported<br>Tag - exact match, filter by asset tag<br>AppId - exact match, filter by associated account</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXABLEMACHINELISTREQUEST_H_
