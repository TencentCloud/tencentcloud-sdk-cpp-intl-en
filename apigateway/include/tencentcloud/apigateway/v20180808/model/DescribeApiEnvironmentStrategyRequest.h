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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPIENVIRONMENTSTRATEGYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPIENVIRONMENTSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeApiEnvironmentStrategy request structure.
                */
                class DescribeApiEnvironmentStrategyRequest : public AbstractModel
                {
                public:
                    DescribeApiEnvironmentStrategyRequest();
                    ~DescribeApiEnvironmentStrategyRequest() = default;
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
                     * 获取Environment list.
                     * @return EnvironmentNames Environment list.
                     * 
                     */
                    std::vector<std::string> GetEnvironmentNames() const;

                    /**
                     * 设置Environment list.
                     * @param _environmentNames Environment list.
                     * 
                     */
                    void SetEnvironmentNames(const std::vector<std::string>& _environmentNames);

                    /**
                     * 判断参数 EnvironmentNames 是否已赋值
                     * @return EnvironmentNames 是否已赋值
                     * 
                     */
                    bool EnvironmentNamesHasBeenSet() const;

                    /**
                     * 获取Unique API ID.
                     * @return ApiId Unique API ID.
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置Unique API ID.
                     * @param _apiId Unique API ID.
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. Default value: 20. Maximum value: 100.
                     * @return Limit Number of results to be returned. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: 20. Maximum value: 100.
                     * @param _limit Number of results to be returned. Default value: 20. Maximum value: 100.
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

                private:

                    /**
                     * Unique service ID of API.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Environment list.
                     */
                    std::vector<std::string> m_environmentNames;
                    bool m_environmentNamesHasBeenSet;

                    /**
                     * Unique API ID.
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPIENVIRONMENTSTRATEGYREQUEST_H_
