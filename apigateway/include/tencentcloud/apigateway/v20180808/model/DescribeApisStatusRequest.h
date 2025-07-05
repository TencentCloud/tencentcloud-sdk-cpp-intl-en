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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPISSTATUSREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPISSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Filter.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeApisStatus request structure.
                */
                class DescribeApisStatusRequest : public AbstractModel
                {
                public:
                    DescribeApisStatusRequest();
                    ~DescribeApisStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique service ID of API.
                     * @return ServiceId Unique service ID of API.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID of API.
                     * @param _serviceId Unique service ID of API.
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100.
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
                     * 获取API filter. Valid values: `ApiId`, `ApiName`, `ApiPath`, `ApiType`, `AuthRelationApiId`, `AuthType`, `ApiBuniessType`, `NotUsagePlanId`, `Environment`, `Tags` (whose values are the list of `$tag_key:tag_value`), `TagKeys` (whose values are the list of tag keys). Note that `NotUsagePlanId` and `Environment` must be used in the same time.
                     * @return Filters API filter. Valid values: `ApiId`, `ApiName`, `ApiPath`, `ApiType`, `AuthRelationApiId`, `AuthType`, `ApiBuniessType`, `NotUsagePlanId`, `Environment`, `Tags` (whose values are the list of `$tag_key:tag_value`), `TagKeys` (whose values are the list of tag keys). Note that `NotUsagePlanId` and `Environment` must be used in the same time.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置API filter. Valid values: `ApiId`, `ApiName`, `ApiPath`, `ApiType`, `AuthRelationApiId`, `AuthType`, `ApiBuniessType`, `NotUsagePlanId`, `Environment`, `Tags` (whose values are the list of `$tag_key:tag_value`), `TagKeys` (whose values are the list of tag keys). Note that `NotUsagePlanId` and `Environment` must be used in the same time.
                     * @param _filters API filter. Valid values: `ApiId`, `ApiName`, `ApiPath`, `ApiType`, `AuthRelationApiId`, `AuthType`, `ApiBuniessType`, `NotUsagePlanId`, `Environment`, `Tags` (whose values are the list of `$tag_key:tag_value`), `TagKeys` (whose values are the list of tag keys). Note that `NotUsagePlanId` and `Environment` must be used in the same time.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Unique service ID of API.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * API filter. Valid values: `ApiId`, `ApiName`, `ApiPath`, `ApiType`, `AuthRelationApiId`, `AuthType`, `ApiBuniessType`, `NotUsagePlanId`, `Environment`, `Tags` (whose values are the list of `$tag_key:tag_value`), `TagKeys` (whose values are the list of tag keys). Note that `NotUsagePlanId` and `Environment` must be used in the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPISSTATUSREQUEST_H_
