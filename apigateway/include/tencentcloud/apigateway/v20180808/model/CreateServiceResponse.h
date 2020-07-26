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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATESERVICERESPONSE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATESERVICERESPONSE_H_

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
                * CreateService response structure.
                */
                class CreateServiceResponse : public AbstractModel
                {
                public:
                    CreateServiceResponse();
                    ~CreateServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Unique service ID.
                     * @return ServiceId Unique service ID.
                     */
                    std::string GetServiceId() const;

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Custom service name.
                     * @return ServiceName Custom service name.
                     */
                    std::string GetServiceName() const;

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Custom service description.
                     * @return ServiceDesc Custom service description.
                     */
                    std::string GetServiceDesc() const;

                    /**
                     * 判断参数 ServiceDesc 是否已赋值
                     * @return ServiceDesc 是否已赋值
                     */
                    bool ServiceDescHasBeenSet() const;

                    /**
                     * 获取Default public network domain name.
                     * @return OuterSubDomain Default public network domain name.
                     */
                    std::string GetOuterSubDomain() const;

                    /**
                     * 判断参数 OuterSubDomain 是否已赋值
                     * @return OuterSubDomain 是否已赋值
                     */
                    bool OuterSubDomainHasBeenSet() const;

                    /**
                     * 获取Default private network domain name of VPC
                     * @return InnerSubDomain Default private network domain name of VPC
                     */
                    std::string GetInnerSubDomain() const;

                    /**
                     * 判断参数 InnerSubDomain 是否已赋值
                     * @return InnerSubDomain 是否已赋值
                     */
                    bool InnerSubDomainHasBeenSet() const;

                    /**
                     * 获取Service creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     * @return CreatedTime Service creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Network type list. INNER: private network access; OUTER: public network access.
                     * @return NetTypes Network type list. INNER: private network access; OUTER: public network access.
                     */
                    std::vector<std::string> GetNetTypes() const;

                    /**
                     * 判断参数 NetTypes 是否已赋值
                     * @return NetTypes 是否已赋值
                     */
                    bool NetTypesHasBeenSet() const;

                    /**
                     * 获取IP version number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IpVersion IP version number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     */
                    bool IpVersionHasBeenSet() const;

                private:

                    /**
                     * Unique service ID.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Custom service name.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Custom service description.
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * Default public network domain name.
                     */
                    std::string m_outerSubDomain;
                    bool m_outerSubDomainHasBeenSet;

                    /**
                     * Default private network domain name of VPC
                     */
                    std::string m_innerSubDomain;
                    bool m_innerSubDomainHasBeenSet;

                    /**
                     * Service creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Network type list. INNER: private network access; OUTER: public network access.
                     */
                    std::vector<std::string> m_netTypes;
                    bool m_netTypesHasBeenSet;

                    /**
                     * IP version number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATESERVICERESPONSE_H_
