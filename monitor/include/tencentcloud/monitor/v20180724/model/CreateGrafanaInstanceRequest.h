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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANAINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANAINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreateGrafanaInstance request structure.
                */
                class CreateGrafanaInstanceRequest : public AbstractModel
                {
                public:
                    CreateGrafanaInstanceRequest();
                    ~CreateGrafanaInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Array of subnet IDs
                     * @return SubnetIds Array of subnet IDs
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置Array of subnet IDs
                     * @param _subnetIds Array of subnet IDs
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Initial Grafana password
                     * @return GrafanaInitPassword Initial Grafana password
                     * 
                     */
                    std::string GetGrafanaInitPassword() const;

                    /**
                     * 设置Initial Grafana password
                     * @param _grafanaInitPassword Initial Grafana password
                     * 
                     */
                    void SetGrafanaInitPassword(const std::string& _grafanaInitPassword);

                    /**
                     * 判断参数 GrafanaInitPassword 是否已赋值
                     * @return GrafanaInitPassword 是否已赋值
                     * 
                     */
                    bool GrafanaInitPasswordHasBeenSet() const;

                    /**
                     * 获取Whether to enable public network access
                     * @return EnableInternet Whether to enable public network access
                     * 
                     */
                    bool GetEnableInternet() const;

                    /**
                     * 设置Whether to enable public network access
                     * @param _enableInternet Whether to enable public network access
                     * 
                     */
                    void SetEnableInternet(const bool& _enableInternet);

                    /**
                     * 判断参数 EnableInternet 是否已赋值
                     * @return EnableInternet 是否已赋值
                     * 
                     */
                    bool EnableInternetHasBeenSet() const;

                    /**
                     * 获取Tag
                     * @return TagSpecification Tag
                     * 
                     */
                    std::vector<PrometheusTag> GetTagSpecification() const;

                    /**
                     * 设置Tag
                     * @param _tagSpecification Tag
                     * 
                     */
                    void SetTagSpecification(const std::vector<PrometheusTag>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Array of subnet IDs
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Initial Grafana password
                     */
                    std::string m_grafanaInitPassword;
                    bool m_grafanaInitPasswordHasBeenSet;

                    /**
                     * Whether to enable public network access
                     */
                    bool m_enableInternet;
                    bool m_enableInternetHasBeenSet;

                    /**
                     * Tag
                     */
                    std::vector<PrometheusTag> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANAINSTANCEREQUEST_H_
