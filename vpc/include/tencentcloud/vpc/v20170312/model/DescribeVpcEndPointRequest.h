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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTREQUEST_H_

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
                * DescribeVpcEndPoint request structure.
                */
                class DescribeVpcEndPointRequest : public AbstractModel
                {
                public:
                    DescribeVpcEndPointRequest();
                    ~DescribeVpcEndPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter condition
<li> end-point-service-id - String - (Filter condition) Endpoint service ID.</li>
<li>end-point-name - String - (Filter condition) Endpoint instance name.</li>
<li> end-point-id - String - (Filter condition) Endpoint instance ID.</li>
<li> vpc-id - String - (Filter condition) VPC instance ID.</li>
                     * @return Filters Filter condition
<li> end-point-service-id - String - (Filter condition) Endpoint service ID.</li>
<li>end-point-name - String - (Filter condition) Endpoint instance name.</li>
<li> end-point-id - String - (Filter condition) Endpoint instance ID.</li>
<li> vpc-id - String - (Filter condition) VPC instance ID.</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition
<li> end-point-service-id - String - (Filter condition) Endpoint service ID.</li>
<li>end-point-name - String - (Filter condition) Endpoint instance name.</li>
<li> end-point-id - String - (Filter condition) Endpoint instance ID.</li>
<li> vpc-id - String - (Filter condition) VPC instance ID.</li>
                     * @param Filters Filter condition
<li> end-point-service-id - String - (Filter condition) Endpoint service ID.</li>
<li>end-point-name - String - (Filter condition) Endpoint instance name.</li>
<li> end-point-id - String - (Filter condition) Endpoint instance ID.</li>
<li> vpc-id - String - (Filter condition) VPC instance ID.</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param Offset Offset. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results per page; default value: 20; maximum value: 100.
                     * @return Limit Number of results per page; default value: 20; maximum value: 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results per page; default value: 20; maximum value: 100.
                     * @param Limit Number of results per page; default value: 20; maximum value: 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Endpoint ID list
                     * @return EndPointId Endpoint ID list
                     */
                    std::vector<std::string> GetEndPointId() const;

                    /**
                     * 设置Endpoint ID list
                     * @param EndPointId Endpoint ID list
                     */
                    void SetEndPointId(const std::vector<std::string>& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     */
                    bool EndPointIdHasBeenSet() const;

                private:

                    /**
                     * Filter condition
<li> end-point-service-id - String - (Filter condition) Endpoint service ID.</li>
<li>end-point-name - String - (Filter condition) Endpoint instance name.</li>
<li> end-point-id - String - (Filter condition) Endpoint instance ID.</li>
<li> vpc-id - String - (Filter condition) VPC instance ID.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results per page; default value: 20; maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Endpoint ID list
                     */
                    std::vector<std::string> m_endPointId;
                    bool m_endPointIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTREQUEST_H_
