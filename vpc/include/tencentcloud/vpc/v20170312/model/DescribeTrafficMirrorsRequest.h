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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICMIRRORSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICMIRRORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTrafficMirrors request structure.
                */
                class DescribeTrafficMirrorsRequest : public AbstractModel
                {
                public:
                    DescribeTrafficMirrorsRequest();
                    ~DescribeTrafficMirrorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Collection of traffic mirroring instance IDs.
                     * @return TrafficMirrorIds Collection of traffic mirroring instance IDs.
                     * 
                     */
                    std::vector<std::string> GetTrafficMirrorIds() const;

                    /**
                     * 设置Collection of traffic mirroring instance IDs.
                     * @param _trafficMirrorIds Collection of traffic mirroring instance IDs.
                     * 
                     */
                    void SetTrafficMirrorIds(const std::vector<std::string>& _trafficMirrorIds);

                    /**
                     * 判断参数 TrafficMirrorIds 是否已赋值
                     * @return TrafficMirrorIds 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdsHasBeenSet() const;

                    /**
                     * 获取Traffic mirroring query filtering and adjustment.
vpc-id: VPC instance ID, for example: vpc-f49l6u0z.
traffic-mirror-id: traffic mirroring instance ID.
Traffic-Mirror-Name: traffic mirroring name.
tag-key: filters according to the tag key.
                     * @return Filters Traffic mirroring query filtering and adjustment.
vpc-id: VPC instance ID, for example: vpc-f49l6u0z.
traffic-mirror-id: traffic mirroring instance ID.
Traffic-Mirror-Name: traffic mirroring name.
tag-key: filters according to the tag key.
                     * 
                     */
                    Filter GetFilters() const;

                    /**
                     * 设置Traffic mirroring query filtering and adjustment.
vpc-id: VPC instance ID, for example: vpc-f49l6u0z.
traffic-mirror-id: traffic mirroring instance ID.
Traffic-Mirror-Name: traffic mirroring name.
tag-key: filters according to the tag key.
                     * @param _filters Traffic mirroring query filtering and adjustment.
vpc-id: VPC instance ID, for example: vpc-f49l6u0z.
traffic-mirror-id: traffic mirroring instance ID.
Traffic-Mirror-Name: traffic mirroring name.
tag-key: filters according to the tag key.
                     * 
                     */
                    void SetFilters(const Filter& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Number of returns. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returns. Default value: 20. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returns. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returns. Default value: 20. Maximum value: 100.
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
                     * Collection of traffic mirroring instance IDs.
                     */
                    std::vector<std::string> m_trafficMirrorIds;
                    bool m_trafficMirrorIdsHasBeenSet;

                    /**
                     * Traffic mirroring query filtering and adjustment.
vpc-id: VPC instance ID, for example: vpc-f49l6u0z.
traffic-mirror-id: traffic mirroring instance ID.
Traffic-Mirror-Name: traffic mirroring name.
tag-key: filters according to the tag key.
                     */
                    Filter m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returns. Default value: 20. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICMIRRORSREQUEST_H_
