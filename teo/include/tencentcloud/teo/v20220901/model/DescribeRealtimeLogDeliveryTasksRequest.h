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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEREALTIMELOGDELIVERYTASKSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEREALTIMELOGDELIVERYTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeRealtimeLogDeliveryTasks request structure.
                */
                class DescribeRealtimeLogDeliveryTasksRequest : public AbstractModel
                {
                public:
                    DescribeRealtimeLogDeliveryTasksRequest();
                    ~DescribeRealtimeLogDeliveryTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The offset of paginated query. Default value: 0.
                     * @return Offset The offset of paginated query. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset of paginated query. Default value: 0.
                     * @param _offset The offset of paginated query. Default value: 0.
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
                     * 获取The limit of paginated query. Default value: 20. Maximum value: 1000.
                     * @return Limit The limit of paginated query. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The limit of paginated query. Default value: 20. Maximum value: 1000.
                     * @param _limit The limit of paginated query. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter conditions. The maximum value for Filters.Values is 20. If this field is not filled in, all the real-time log delivery task information under the current zone-id will be returned. Detailed filter conditions are as follows:
<li>task-id: Filter by real-time log delivery task ID. Fuzzy search is not supported.</li>
<li>task-name: Filter by real-time log delivery task name. Fuzzy search is supported, but only one real-time log delivery task name can be filled in for fuzzy search.</li>
<li>entity-list: Filter by entity corresponding to the real-time log delivery task. Fuzzy search is not supported. Example values: domain.example.com or sid-2s69eb5wcms7.</li>
<li>task-type: Filter by real-time log delivery task type. Fuzzy search is not supported. Optional values:<br>cls: Push to Tencent Cloud CLS;<br>custom_endpoint: Push to a user-defined HTTP(S) address;<br>s3: Push to an AWS S3-compatible bucket address.</li>
                     * @return Filters Filter conditions. The maximum value for Filters.Values is 20. If this field is not filled in, all the real-time log delivery task information under the current zone-id will be returned. Detailed filter conditions are as follows:
<li>task-id: Filter by real-time log delivery task ID. Fuzzy search is not supported.</li>
<li>task-name: Filter by real-time log delivery task name. Fuzzy search is supported, but only one real-time log delivery task name can be filled in for fuzzy search.</li>
<li>entity-list: Filter by entity corresponding to the real-time log delivery task. Fuzzy search is not supported. Example values: domain.example.com or sid-2s69eb5wcms7.</li>
<li>task-type: Filter by real-time log delivery task type. Fuzzy search is not supported. Optional values:<br>cls: Push to Tencent Cloud CLS;<br>custom_endpoint: Push to a user-defined HTTP(S) address;<br>s3: Push to an AWS S3-compatible bucket address.</li>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter conditions. The maximum value for Filters.Values is 20. If this field is not filled in, all the real-time log delivery task information under the current zone-id will be returned. Detailed filter conditions are as follows:
<li>task-id: Filter by real-time log delivery task ID. Fuzzy search is not supported.</li>
<li>task-name: Filter by real-time log delivery task name. Fuzzy search is supported, but only one real-time log delivery task name can be filled in for fuzzy search.</li>
<li>entity-list: Filter by entity corresponding to the real-time log delivery task. Fuzzy search is not supported. Example values: domain.example.com or sid-2s69eb5wcms7.</li>
<li>task-type: Filter by real-time log delivery task type. Fuzzy search is not supported. Optional values:<br>cls: Push to Tencent Cloud CLS;<br>custom_endpoint: Push to a user-defined HTTP(S) address;<br>s3: Push to an AWS S3-compatible bucket address.</li>
                     * @param _filters Filter conditions. The maximum value for Filters.Values is 20. If this field is not filled in, all the real-time log delivery task information under the current zone-id will be returned. Detailed filter conditions are as follows:
<li>task-id: Filter by real-time log delivery task ID. Fuzzy search is not supported.</li>
<li>task-name: Filter by real-time log delivery task name. Fuzzy search is supported, but only one real-time log delivery task name can be filled in for fuzzy search.</li>
<li>entity-list: Filter by entity corresponding to the real-time log delivery task. Fuzzy search is not supported. Example values: domain.example.com or sid-2s69eb5wcms7.</li>
<li>task-type: Filter by real-time log delivery task type. Fuzzy search is not supported. Optional values:<br>cls: Push to Tencent Cloud CLS;<br>custom_endpoint: Push to a user-defined HTTP(S) address;<br>s3: Push to an AWS S3-compatible bucket address.</li>
                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The offset of paginated query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The limit of paginated query. Default value: 20. Maximum value: 1000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter conditions. The maximum value for Filters.Values is 20. If this field is not filled in, all the real-time log delivery task information under the current zone-id will be returned. Detailed filter conditions are as follows:
<li>task-id: Filter by real-time log delivery task ID. Fuzzy search is not supported.</li>
<li>task-name: Filter by real-time log delivery task name. Fuzzy search is supported, but only one real-time log delivery task name can be filled in for fuzzy search.</li>
<li>entity-list: Filter by entity corresponding to the real-time log delivery task. Fuzzy search is not supported. Example values: domain.example.com or sid-2s69eb5wcms7.</li>
<li>task-type: Filter by real-time log delivery task type. Fuzzy search is not supported. Optional values:<br>cls: Push to Tencent Cloud CLS;<br>custom_endpoint: Push to a user-defined HTTP(S) address;<br>s3: Push to an AWS S3-compatible bucket address.</li>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEREALTIMELOGDELIVERYTASKSREQUEST_H_
