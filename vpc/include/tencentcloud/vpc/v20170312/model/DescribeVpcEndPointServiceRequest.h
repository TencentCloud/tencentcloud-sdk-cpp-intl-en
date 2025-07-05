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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTSERVICEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTSERVICEREQUEST_H_

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
                * DescribeVpcEndPointService request structure.
                */
                class DescribeVpcEndPointServiceRequest : public AbstractModel
                {
                public:
                    DescribeVpcEndPointServiceRequest();
                    ~DescribeVpcEndPointServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filters. `EndPointServiceIds` and `Filters` cannot be both passed in. 
<li>`service-id` - String - Unique endpoint service ID. </li>
<li>`service-name` - String - Endpoint service instance name. </li>
<li>`service-instance-id` - String - Unique backend service ID in the format of `lb-xxx`. </li>
<li>`service-type` - String - Backend PaaS service type. It can be `CLB`, `CDB` or `CRS`. It defaults to `CLB` if not specified. </li>
                     * @return Filters Filters. `EndPointServiceIds` and `Filters` cannot be both passed in. 
<li>`service-id` - String - Unique endpoint service ID. </li>
<li>`service-name` - String - Endpoint service instance name. </li>
<li>`service-instance-id` - String - Unique backend service ID in the format of `lb-xxx`. </li>
<li>`service-type` - String - Backend PaaS service type. It can be `CLB`, `CDB` or `CRS`. It defaults to `CLB` if not specified. </li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters. `EndPointServiceIds` and `Filters` cannot be both passed in. 
<li>`service-id` - String - Unique endpoint service ID. </li>
<li>`service-name` - String - Endpoint service instance name. </li>
<li>`service-instance-id` - String - Unique backend service ID in the format of `lb-xxx`. </li>
<li>`service-type` - String - Backend PaaS service type. It can be `CLB`, `CDB` or `CRS`. It defaults to `CLB` if not specified. </li>
                     * @param _filters Filters. `EndPointServiceIds` and `Filters` cannot be both passed in. 
<li>`service-id` - String - Unique endpoint service ID. </li>
<li>`service-name` - String - Endpoint service instance name. </li>
<li>`service-instance-id` - String - Unique backend service ID in the format of `lb-xxx`. </li>
<li>`service-type` - String - Backend PaaS service type. It can be `CLB`, `CDB` or `CRS`. It defaults to `CLB` if not specified. </li>
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
                     * 获取Number of results per page; default value: 20; maximum value: 100.
                     * @return Limit Number of results per page; default value: 20; maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results per page; default value: 20; maximum value: 100.
                     * @param _limit Number of results per page; default value: 20; maximum value: 100.
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
                     * 获取Endpoint service ID `EndPointServiceIds` and `Filters` cannot be both passed in. 
                     * @return EndPointServiceIds Endpoint service ID `EndPointServiceIds` and `Filters` cannot be both passed in. 
                     * 
                     */
                    std::vector<std::string> GetEndPointServiceIds() const;

                    /**
                     * 设置Endpoint service ID `EndPointServiceIds` and `Filters` cannot be both passed in. 
                     * @param _endPointServiceIds Endpoint service ID `EndPointServiceIds` and `Filters` cannot be both passed in. 
                     * 
                     */
                    void SetEndPointServiceIds(const std::vector<std::string>& _endPointServiceIds);

                    /**
                     * 判断参数 EndPointServiceIds 是否已赋值
                     * @return EndPointServiceIds 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return IsListAuthorizedEndPointService 
                     * 
                     */
                    bool GetIsListAuthorizedEndPointService() const;

                    /**
                     * 设置
                     * @param _isListAuthorizedEndPointService 
                     * 
                     */
                    void SetIsListAuthorizedEndPointService(const bool& _isListAuthorizedEndPointService);

                    /**
                     * 判断参数 IsListAuthorizedEndPointService 是否已赋值
                     * @return IsListAuthorizedEndPointService 是否已赋值
                     * 
                     */
                    bool IsListAuthorizedEndPointServiceHasBeenSet() const;

                private:

                    /**
                     * Filters. `EndPointServiceIds` and `Filters` cannot be both passed in. 
<li>`service-id` - String - Unique endpoint service ID. </li>
<li>`service-name` - String - Endpoint service instance name. </li>
<li>`service-instance-id` - String - Unique backend service ID in the format of `lb-xxx`. </li>
<li>`service-type` - String - Backend PaaS service type. It can be `CLB`, `CDB` or `CRS`. It defaults to `CLB` if not specified. </li>
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
                     * Endpoint service ID `EndPointServiceIds` and `Filters` cannot be both passed in. 
                     */
                    std::vector<std::string> m_endPointServiceIds;
                    bool m_endPointServiceIdsHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isListAuthorizedEndPointService;
                    bool m_isListAuthorizedEndPointServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTSERVICEREQUEST_H_
