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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICEFORAPIAPPREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICEFORAPIAPPREQUEST_H_

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
                * DescribeServiceForApiApp request structure.
                */
                class DescribeServiceForApiAppRequest : public AbstractModel
                {
                public:
                    DescribeServiceForApiAppRequest();
                    ~DescribeServiceForApiAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the service to be queried.
                     * @return ServiceId Unique ID of the service to be queried.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique ID of the service to be queried.
                     * @param _serviceId Unique ID of the service to be queried.
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
                     * 获取Service region.
                     * @return ApiRegion Service region.
                     * 
                     */
                    std::string GetApiRegion() const;

                    /**
                     * 设置Service region.
                     * @param _apiRegion Service region.
                     * 
                     */
                    void SetApiRegion(const std::string& _apiRegion);

                    /**
                     * 判断参数 ApiRegion 是否已赋值
                     * @return ApiRegion 是否已赋值
                     * 
                     */
                    bool ApiRegionHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the service to be queried.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Service region.
                     */
                    std::string m_apiRegion;
                    bool m_apiRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICEFORAPIAPPREQUEST_H_
