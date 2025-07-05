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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_MODIFYDOMAINCONFIGREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_MODIFYDOMAINCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ModifyDomainConfig request structure.
                */
                class ModifyDomainConfigRequest : public AbstractModel
                {
                public:
                    ModifyDomainConfigRequest();
                    ~ModifyDomainConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The domain name.
                     * @return Domain The domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain name.
                     * @param _domain The domain name.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Name of the configuration parameter.
                     * @return Route Name of the configuration parameter.
                     * 
                     */
                    std::string GetRoute() const;

                    /**
                     * 设置Name of the configuration parameter.
                     * @param _route Name of the configuration parameter.
                     * 
                     */
                    void SetRoute(const std::string& _route);

                    /**
                     * 判断参数 Route 是否已赋值
                     * @return Route 是否已赋值
                     * 
                     */
                    bool RouteHasBeenSet() const;

                    /**
                     * 获取Value of the configuration parameter. This field is serialized to a JSON string {key:value}, where **key** is fixed to `update`.
                     * @return Value Value of the configuration parameter. This field is serialized to a JSON string {key:value}, where **key** is fixed to `update`.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value of the configuration parameter. This field is serialized to a JSON string {key:value}, where **key** is fixed to `update`.
                     * @param _value Value of the configuration parameter. This field is serialized to a JSON string {key:value}, where **key** is fixed to `update`.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * The domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Name of the configuration parameter.
                     */
                    std::string m_route;
                    bool m_routeHasBeenSet;

                    /**
                     * Value of the configuration parameter. This field is serialized to a JSON string {key:value}, where **key** is fixed to `update`.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_MODIFYDOMAINCONFIGREQUEST_H_
