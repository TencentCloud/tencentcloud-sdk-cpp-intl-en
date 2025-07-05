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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeEnterpriseSecurityGroupRule request structure.
                */
                class DescribeEnterpriseSecurityGroupRuleRequest : public AbstractModel
                {
                public:
                    DescribeEnterpriseSecurityGroupRuleRequest();
                    ~DescribeEnterpriseSecurityGroupRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number of the current page displayed for query by page number.

1 by default.
                     * @return PageNo Page number of the current page displayed for query by page number.

1 by default.
                     * 
                     */
                    std::string GetPageNo() const;

                    /**
                     * 设置Page number of the current page displayed for query by page number.

1 by default.
                     * @param _pageNo Page number of the current page displayed for query by page number.

1 by default.
                     * 
                     */
                    void SetPageNo(const std::string& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取Maximum number of entries per page displayed for query by page number.

Maximum value: 50.
                     * @return PageSize Maximum number of entries per page displayed for query by page number.

Maximum value: 50.
                     * 
                     */
                    std::string GetPageSize() const;

                    /**
                     * 设置Maximum number of entries per page displayed for query by page number.

Maximum value: 50.
                     * @param _pageSize Maximum number of entries per page displayed for query by page number.

Maximum value: 50.
                     * 
                     */
                    void SetPageSize(const std::string& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Source example:
net: IP/CIDR (192.168.0.2)
template: parameter template (ipm-dyodhpby)
instance: asset instance (ins-123456)
resourcegroup: asset group (/all groups/group 1/subgroup 1)
tag: resource tag ({"Key":"tag key","Value":"tag value"})
region: region (ap-gaungzhou)
Wildcards are supported.
                     * @return SourceContent Source example:
net: IP/CIDR (192.168.0.2)
template: parameter template (ipm-dyodhpby)
instance: asset instance (ins-123456)
resourcegroup: asset group (/all groups/group 1/subgroup 1)
tag: resource tag ({"Key":"tag key","Value":"tag value"})
region: region (ap-gaungzhou)
Wildcards are supported.
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置Source example:
net: IP/CIDR (192.168.0.2)
template: parameter template (ipm-dyodhpby)
instance: asset instance (ins-123456)
resourcegroup: asset group (/all groups/group 1/subgroup 1)
tag: resource tag ({"Key":"tag key","Value":"tag value"})
region: region (ap-gaungzhou)
Wildcards are supported.
                     * @param _sourceContent Source example:
net: IP/CIDR (192.168.0.2)
template: parameter template (ipm-dyodhpby)
instance: asset instance (ins-123456)
resourcegroup: asset group (/all groups/group 1/subgroup 1)
tag: resource tag ({"Key":"tag key","Value":"tag value"})
region: region (ap-gaungzhou)
Wildcards are supported.
                     * 
                     */
                    void SetSourceContent(const std::string& _sourceContent);

                    /**
                     * 判断参数 SourceContent 是否已赋值
                     * @return SourceContent 是否已赋值
                     * 
                     */
                    bool SourceContentHasBeenSet() const;

                    /**
                     * 获取Destination example:
net: IP/CIDR (192.168.0.2)
template: parameter template (ipm-dyodhpby)
instance: asset instance (ins-123456)
resourcegroup: asset group (/all groups/group 1/subgroup 1)
tag: resource tag ({"Key":"tag key","Value":"tag value"})
region: region (ap-gaungzhou)
Wildcards are supported.
                     * @return DestContent Destination example:
net: IP/CIDR (192.168.0.2)
template: parameter template (ipm-dyodhpby)
instance: asset instance (ins-123456)
resourcegroup: asset group (/all groups/group 1/subgroup 1)
tag: resource tag ({"Key":"tag key","Value":"tag value"})
region: region (ap-gaungzhou)
Wildcards are supported.
                     * 
                     */
                    std::string GetDestContent() const;

                    /**
                     * 设置Destination example:
net: IP/CIDR (192.168.0.2)
template: parameter template (ipm-dyodhpby)
instance: asset instance (ins-123456)
resourcegroup: asset group (/all groups/group 1/subgroup 1)
tag: resource tag ({"Key":"tag key","Value":"tag value"})
region: region (ap-gaungzhou)
Wildcards are supported.
                     * @param _destContent Destination example:
net: IP/CIDR (192.168.0.2)
template: parameter template (ipm-dyodhpby)
instance: asset instance (ins-123456)
resourcegroup: asset group (/all groups/group 1/subgroup 1)
tag: resource tag ({"Key":"tag key","Value":"tag value"})
region: region (ap-gaungzhou)
Wildcards are supported.
                     * 
                     */
                    void SetDestContent(const std::string& _destContent);

                    /**
                     * 判断参数 DestContent 是否已赋值
                     * @return DestContent 是否已赋值
                     * 
                     */
                    bool DestContentHasBeenSet() const;

                    /**
                     * 获取Rule description. Wildcards are supported.
                     * @return Description Rule description. Wildcards are supported.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description. Wildcards are supported.
                     * @param _description Rule description. Wildcards are supported.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取The action that Cloud Firewall performs on the traffic. Valid values:
accept: allow
drop: deny
                     * @return RuleAction The action that Cloud Firewall performs on the traffic. Valid values:
accept: allow
drop: deny
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置The action that Cloud Firewall performs on the traffic. Valid values:
accept: allow
drop: deny
                     * @param _ruleAction The action that Cloud Firewall performs on the traffic. Valid values:
accept: allow
drop: deny
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取Indicates whether to enable the rules. Default: enable. Valid values:
true: enable; false: disable
                     * @return Enable Indicates whether to enable the rules. Default: enable. Valid values:
true: enable; false: disable
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置Indicates whether to enable the rules. Default: enable. Valid values:
true: enable; false: disable
                     * @param _enable Indicates whether to enable the rules. Default: enable. Valid values:
true: enable; false: disable
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取The port to apply access control rules. Valid values:
-1/-1: all ports
80: port 80
                     * @return Port The port to apply access control rules. Valid values:
-1/-1: all ports
80: port 80
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置The port to apply access control rules. Valid values:
-1/-1: all ports
80: port 80
                     * @param _port The port to apply access control rules. Valid values:
-1/-1: all ports
80: port 80
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Protocol. TCP/UDP/ICMP/ANY
                     * @return Protocol Protocol. TCP/UDP/ICMP/ANY
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. TCP/UDP/ICMP/ANY
                     * @param _protocol Protocol. TCP/UDP/ICMP/ANY
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Parameter template ID of port and protocol type; mutually exclusive with Protocol and Port
                     * @return ServiceTemplateId Parameter template ID of port and protocol type; mutually exclusive with Protocol and Port
                     * 
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置Parameter template ID of port and protocol type; mutually exclusive with Protocol and Port
                     * @param _serviceTemplateId Parameter template ID of port and protocol type; mutually exclusive with Protocol and Port
                     * 
                     */
                    void SetServiceTemplateId(const std::string& _serviceTemplateId);

                    /**
                     * 判断参数 ServiceTemplateId 是否已赋值
                     * @return ServiceTemplateId 是否已赋值
                     * 
                     */
                    bool ServiceTemplateIdHasBeenSet() const;

                private:

                    /**
                     * Page number of the current page displayed for query by page number.

1 by default.
                     */
                    std::string m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Maximum number of entries per page displayed for query by page number.

Maximum value: 50.
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Source example:
net: IP/CIDR (192.168.0.2)
template: parameter template (ipm-dyodhpby)
instance: asset instance (ins-123456)
resourcegroup: asset group (/all groups/group 1/subgroup 1)
tag: resource tag ({"Key":"tag key","Value":"tag value"})
region: region (ap-gaungzhou)
Wildcards are supported.
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * Destination example:
net: IP/CIDR (192.168.0.2)
template: parameter template (ipm-dyodhpby)
instance: asset instance (ins-123456)
resourcegroup: asset group (/all groups/group 1/subgroup 1)
tag: resource tag ({"Key":"tag key","Value":"tag value"})
region: region (ap-gaungzhou)
Wildcards are supported.
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * Rule description. Wildcards are supported.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The action that Cloud Firewall performs on the traffic. Valid values:
accept: allow
drop: deny
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * Indicates whether to enable the rules. Default: enable. Valid values:
true: enable; false: disable
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * The port to apply access control rules. Valid values:
-1/-1: all ports
80: port 80
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Protocol. TCP/UDP/ICMP/ANY
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Parameter template ID of port and protocol type; mutually exclusive with Protocol and Port
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULEREQUEST_H_
