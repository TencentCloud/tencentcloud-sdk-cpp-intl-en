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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATESERVICETEMPLATEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATESERVICETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateServiceTemplate request structure.
                */
                class CreateServiceTemplateRequest : public AbstractModel
                {
                public:
                    CreateServiceTemplateRequest();
                    ~CreateServiceTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name of the protocol port
                     * @return ServiceTemplateName Template name of the protocol port
                     */
                    std::string GetServiceTemplateName() const;

                    /**
                     * 设置Template name of the protocol port
                     * @param ServiceTemplateName Template name of the protocol port
                     */
                    void SetServiceTemplateName(const std::string& _serviceTemplateName);

                    /**
                     * 判断参数 ServiceTemplateName 是否已赋值
                     * @return ServiceTemplateName 是否已赋值
                     */
                    bool ServiceTemplateNameHasBeenSet() const;

                    /**
                     * 获取It supports single port, multiple ports, consecutive ports and all ports. Supported protocols include TCP, UDP, ICMP, and GRE.
                     * @return Services It supports single port, multiple ports, consecutive ports and all ports. Supported protocols include TCP, UDP, ICMP, and GRE.
                     */
                    std::vector<std::string> GetServices() const;

                    /**
                     * 设置It supports single port, multiple ports, consecutive ports and all ports. Supported protocols include TCP, UDP, ICMP, and GRE.
                     * @param Services It supports single port, multiple ports, consecutive ports and all ports. Supported protocols include TCP, UDP, ICMP, and GRE.
                     */
                    void SetServices(const std::vector<std::string>& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     */
                    bool ServicesHasBeenSet() const;

                private:

                    /**
                     * Template name of the protocol port
                     */
                    std::string m_serviceTemplateName;
                    bool m_serviceTemplateNameHasBeenSet;

                    /**
                     * It supports single port, multiple ports, consecutive ports and all ports. Supported protocols include TCP, UDP, ICMP, and GRE.
                     */
                    std::vector<std::string> m_services;
                    bool m_servicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATESERVICETEMPLATEREQUEST_H_
