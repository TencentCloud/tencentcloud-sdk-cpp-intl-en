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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEIPSTRATEGYAPISSTATUSREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEIPSTRATEGYAPISSTATUSREQUEST_H_

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
                * DescribeIPStrategyApisStatus request structure.
                */
                class DescribeIPStrategyApisStatusRequest : public AbstractModel
                {
                public:
                    DescribeIPStrategyApisStatusRequest();
                    ~DescribeIPStrategyApisStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique service ID.
                     * @return ServiceId Unique service ID.
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID.
                     * @param ServiceId Unique service ID.
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Unique policy ID.
                     * @return StrategyId Unique policy ID.
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置Unique policy ID.
                     * @param StrategyId Unique policy ID.
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Policy environment.
                     * @return EnvironmentName Policy environment.
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Policy environment.
                     * @param EnvironmentName Policy environment.
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. Default value: 20. Maximum value: 100.
                     * @return Limit Number of results to be returned. Default value: 20. Maximum value: 100.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: 20. Maximum value: 100.
                     * @param Limit Number of results to be returned. Default value: 20. Maximum value: 100.
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
                     * 获取Filter. Valid values: ApiPath, ApiName, KeyWord (fuzzy search by `Path` and `Name`).
                     * @return Filters Filter. Valid values: ApiPath, ApiName, KeyWord (fuzzy search by `Path` and `Name`).
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. Valid values: ApiPath, ApiName, KeyWord (fuzzy search by `Path` and `Name`).
                     * @param Filters Filter. Valid values: ApiPath, ApiName, KeyWord (fuzzy search by `Path` and `Name`).
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Unique service ID.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Unique policy ID.
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Policy environment.
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter. Valid values: ApiPath, ApiName, KeyWord (fuzzy search by `Path` and `Name`).
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEIPSTRATEGYAPISSTATUSREQUEST_H_
