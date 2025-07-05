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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPISERVICEREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPISERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeAPIService request structure.
                */
                class DescribeAPIServiceRequest : public AbstractModel
                {
                public:
                    DescribeAPIServiceRequest();
                    ~DescribeAPIServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Supported services are cos:GetService and cdn:DescribeDomainsConfig.
                     * @return Service Supported services are cos:GetService and cdn:DescribeDomainsConfig.
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置Supported services are cos:GetService and cdn:DescribeDomainsConfig.
                     * @param _service Supported services are cos:GetService and cdn:DescribeDomainsConfig.
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取Request parameters in JSON format.
                     * @return Data Request parameters in JSON format.
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置Request parameters in JSON format.
                     * @param _data Request parameters in JSON format.
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Supported services are cos:GetService and cdn:DescribeDomainsConfig.
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * Request parameters in JSON format.
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPISERVICEREQUEST_H_
