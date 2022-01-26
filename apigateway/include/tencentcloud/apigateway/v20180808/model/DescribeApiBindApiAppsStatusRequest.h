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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPIBINDAPIAPPSSTATUSREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPIBINDAPIAPPSSTATUSREQUEST_H_

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
                * DescribeApiBindApiAppsStatus request structure.
                */
                class DescribeApiBindApiAppsStatusRequest : public AbstractModel
                {
                public:
                    DescribeApiBindApiAppsStatusRequest();
                    ~DescribeApiBindApiAppsStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service ID
                     * @return ServiceId Service ID
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service ID
                     * @param ServiceId Service ID
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Array of API IDs
                     * @return ApiIds Array of API IDs
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置Array of API IDs
                     * @param ApiIds Array of API IDs
                     */
                    void SetApiIds(const std::vector<std::string>& _apiIds);

                    /**
                     * 判断参数 ApiIds 是否已赋值
                     * @return ApiIds 是否已赋值
                     */
                    bool ApiIdsHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param Offset Offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter. Valid values: ApiAppId, Environment, KeyWord (match with `name` or ID).
                     * @return Filters Filter. Valid values: ApiAppId, Environment, KeyWord (match with `name` or ID).
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. Valid values: ApiAppId, Environment, KeyWord (match with `name` or ID).
                     * @param Filters Filter. Valid values: ApiAppId, Environment, KeyWord (match with `name` or ID).
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Service ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Array of API IDs
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter. Valid values: ApiAppId, Environment, KeyWord (match with `name` or ID).
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPIBINDAPIAPPSSTATUSREQUEST_H_
