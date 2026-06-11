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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINESREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeMachines request structure.
                */
                class DescribeMachinesRequest : public AbstractModel
                {
                public:
                    DescribeMachinesRequest();
                    ~DescribeMachinesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Machine group ID to query.

-Obtain the machine group ID by searching the machine group list (https://www.tencentcloud.com/document/api/614/56438?from_cn_redirect=1).
                     * @return GroupId Machine group ID to query.

-Obtain the machine group ID by searching the machine group list (https://www.tencentcloud.com/document/api/614/56438?from_cn_redirect=1).
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Machine group ID to query.

-Obtain the machine group ID by searching the machine group list (https://www.tencentcloud.com/document/api/614/56438?from_cn_redirect=1).
                     * @param _groupId Machine group ID to query.

-Obtain the machine group ID by searching the machine group list (https://www.tencentcloud.com/document/api/614/56438?from_cn_redirect=1).
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取ip
-Filter by ip.
-Type: String
-Required: No

instance
-Filter by instance id.
-Type: String
-Required: No

version
- Filter by LogListener version.
-Type: String
-Required: No

status
- Filter by machine status.
-Type: String
-Optional: No.
-Available values: 0: offline, 1: normal

offlineTime
- Filter by machine offline time.
-Type: String
-Optional: No.
-Available values: 0: no offline time, 12: within 12 hours, 24: within a day, 48: within two days, 99: before two days

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * @return Filters ip
-Filter by ip.
-Type: String
-Required: No

instance
-Filter by instance id.
-Type: String
-Required: No

version
- Filter by LogListener version.
-Type: String
-Required: No

status
- Filter by machine status.
-Type: String
-Optional: No.
-Available values: 0: offline, 1: normal

offlineTime
- Filter by machine offline time.
-Type: String
-Optional: No.
-Available values: 0: no offline time, 12: within 12 hours, 24: within a day, 48: within two days, 99: before two days

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置ip
-Filter by ip.
-Type: String
-Required: No

instance
-Filter by instance id.
-Type: String
-Required: No

version
- Filter by LogListener version.
-Type: String
-Required: No

status
- Filter by machine status.
-Type: String
-Optional: No.
-Available values: 0: offline, 1: normal

offlineTime
- Filter by machine offline time.
-Type: String
-Optional: No.
-Available values: 0: no offline time, 12: within 12 hours, 24: within a day, 48: within two days, 99: before two days

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * @param _filters ip
-Filter by ip.
-Type: String
-Required: No

instance
-Filter by instance id.
-Type: String
-Required: No

version
- Filter by LogListener version.
-Type: String
-Required: No

status
- Filter by machine status.
-Type: String
-Optional: No.
-Available values: 0: offline, 1: normal

offlineTime
- Filter by machine offline time.
-Type: String
-Optional: No.
-Available values: 0: no offline time, 12: within 12 hours, 24: within a day, 48: within two days, 99: before two days

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
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
                     * 获取Pagination offset.
                     * @return Offset Pagination offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
                     * @param _offset Pagination offset.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit on the number of entries per page. A maximum of 100 entries are supported.
                     * @return Limit Limit on the number of entries per page. A maximum of 100 entries are supported.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit on the number of entries per page. A maximum of 100 entries are supported.
                     * @param _limit Limit on the number of entries per page. A maximum of 100 entries are supported.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Machine group ID to query.

-Obtain the machine group ID by searching the machine group list (https://www.tencentcloud.com/document/api/614/56438?from_cn_redirect=1).
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * ip
-Filter by ip.
-Type: String
-Required: No

instance
-Filter by instance id.
-Type: String
-Required: No

version
- Filter by LogListener version.
-Type: String
-Required: No

status
- Filter by machine status.
-Type: String
-Optional: No.
-Available values: 0: offline, 1: normal

offlineTime
- Filter by machine offline time.
-Type: String
-Optional: No.
-Available values: 0: no offline time, 12: within 12 hours, 24: within a day, 48: within two days, 99: before two days

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Pagination offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit on the number of entries per page. A maximum of 100 entries are supported.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINESREQUEST_H_
