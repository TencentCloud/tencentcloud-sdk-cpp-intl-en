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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSERVICETEMPLATEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSERVICETEMPLATEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ServicesInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyServiceTemplateAttribute request structure.
                */
                class ModifyServiceTemplateAttributeRequest : public AbstractModel
                {
                public:
                    ModifyServiceTemplateAttributeRequest();
                    ~ModifyServiceTemplateAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Protocol port template instance ID, such as `ppm-529nwwj8`.
                     * @return ServiceTemplateId Protocol port template instance ID, such as `ppm-529nwwj8`.
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置Protocol port template instance ID, such as `ppm-529nwwj8`.
                     * @param ServiceTemplateId Protocol port template instance ID, such as `ppm-529nwwj8`.
                     */
                    void SetServiceTemplateId(const std::string& _serviceTemplateId);

                    /**
                     * 判断参数 ServiceTemplateId 是否已赋值
                     * @return ServiceTemplateId 是否已赋值
                     */
                    bool ServiceTemplateIdHasBeenSet() const;

                    /**
                     * 获取Protocol port template name.
                     * @return ServiceTemplateName Protocol port template name.
                     */
                    std::string GetServiceTemplateName() const;

                    /**
                     * 设置Protocol port template name.
                     * @param ServiceTemplateName Protocol port template name.
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

                    /**
                     * 获取Protocol port information with remarks. Supported ports include single port, multiple ports, consecutive ports and other ports. Supported protocols include TCP, UDP, ICMP, and GRE.
                     * @return ServicesExtra Protocol port information with remarks. Supported ports include single port, multiple ports, consecutive ports and other ports. Supported protocols include TCP, UDP, ICMP, and GRE.
                     */
                    std::vector<ServicesInfo> GetServicesExtra() const;

                    /**
                     * 设置Protocol port information with remarks. Supported ports include single port, multiple ports, consecutive ports and other ports. Supported protocols include TCP, UDP, ICMP, and GRE.
                     * @param ServicesExtra Protocol port information with remarks. Supported ports include single port, multiple ports, consecutive ports and other ports. Supported protocols include TCP, UDP, ICMP, and GRE.
                     */
                    void SetServicesExtra(const std::vector<ServicesInfo>& _servicesExtra);

                    /**
                     * 判断参数 ServicesExtra 是否已赋值
                     * @return ServicesExtra 是否已赋值
                     */
                    bool ServicesExtraHasBeenSet() const;

                private:

                    /**
                     * Protocol port template instance ID, such as `ppm-529nwwj8`.
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                    /**
                     * Protocol port template name.
                     */
                    std::string m_serviceTemplateName;
                    bool m_serviceTemplateNameHasBeenSet;

                    /**
                     * It supports single port, multiple ports, consecutive ports and all ports. Supported protocols include TCP, UDP, ICMP, and GRE.
                     */
                    std::vector<std::string> m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * Protocol port information with remarks. Supported ports include single port, multiple ports, consecutive ports and other ports. Supported protocols include TCP, UDP, ICMP, and GRE.
                     */
                    std::vector<ServicesInfo> m_servicesExtra;
                    bool m_servicesExtraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSERVICETEMPLATEATTRIBUTEREQUEST_H_
