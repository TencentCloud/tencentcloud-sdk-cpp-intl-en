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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDSERVERLESSROINSTANCESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDSERVERLESSROINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyParamItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * AddServerlessRoInstances request structure.
                */
                class AddServerlessRoInstancesRequest : public AbstractModel
                {
                public:
                    AddServerlessRoInstancesRequest();
                    ~AddServerlessRoInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster Id</p>
                     * @return ClusterId <p>Cluster Id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster Id</p>
                     * @param _clusterId <p>Cluster Id</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Minimum specification of the ro instance</p>
                     * @return MinCpu <p>Minimum specification of the ro instance</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>Minimum specification of the ro instance</p>
                     * @param _minCpu <p>Minimum specification of the ro instance</p>
                     * 
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取<p>Maximum specification of ro instance</p>
                     * @return MaxCpu <p>Maximum specification of ro instance</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>Maximum specification of ro instance</p>
                     * @param _maxCpu <p>Maximum specification of ro instance</p>
                     * 
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取<p>ro instance name</p>
                     * @return InstanceName <p>ro instance name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>ro instance name</p>
                     * @param _instanceName <p>ro instance name</p>
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
                     * 获取<p>VPC network ID</p>
                     * @return VpcId <p>VPC network ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC network ID</p>
                     * @param _vpcId <p>VPC network ID</p>
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
                     * 获取<p>Subnet ID. If VpcId is set up, SubnetId is required.</p>
                     * @return SubnetId <p>Subnet ID. If VpcId is set up, SubnetId is required.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID. If VpcId is set up, SubnetId is required.</p>
                     * @param _subnetId <p>Subnet ID. If VpcId is set up, SubnetId is required.</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>Port used when adding new RO groups, value range [0,65535)</p>
                     * @return Port <p>Port used when adding new RO groups, value range [0,65535)</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>Port used when adding new RO groups, value range [0,65535)</p>
                     * @param _port <p>Port used when adding new RO groups, value range [0,65535)</p>
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>Security group ID. You can specify security groups when creating a read-only instance.</p>
                     * @return SecurityGroupIds <p>Security group ID. You can specify security groups when creating a read-only instance.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>Security group ID. You can specify security groups when creating a read-only instance.</p>
                     * @param _securityGroupIds <p>Security group ID. You can specify security groups when creating a read-only instance.</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to automatically pause</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul>
                     * @return AutoPause <p>Whether to automatically pause</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul>
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置<p>Whether to automatically pause</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul>
                     * @param _autoPause <p>Whether to automatically pause</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul>
                     * 
                     */
                    void SetAutoPause(const std::string& _autoPause);

                    /**
                     * 判断参数 AutoPause 是否已赋值
                     * @return AutoPause 是否已赋值
                     * 
                     */
                    bool AutoPauseHasBeenSet() const;

                    /**
                     * 获取<p>Auto-pause time</p><p>Unit: s</p>
                     * @return AutoPauseDelay <p>Auto-pause time</p><p>Unit: s</p>
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置<p>Auto-pause time</p><p>Unit: s</p>
                     * @param _autoPauseDelay <p>Auto-pause time</p><p>Unit: s</p>
                     * 
                     */
                    void SetAutoPauseDelay(const int64_t& _autoPauseDelay);

                    /**
                     * 判断参数 AutoPauseDelay 是否已赋值
                     * @return AutoPauseDelay 是否已赋值
                     * 
                     */
                    bool AutoPauseDelayHasBeenSet() const;

                    /**
                     * 获取<p>Instance parameter</p>
                     * @return InstanceParams <p>Instance parameter</p>
                     * 
                     */
                    std::vector<ModifyParamItem> GetInstanceParams() const;

                    /**
                     * 设置<p>Instance parameter</p>
                     * @param _instanceParams <p>Instance parameter</p>
                     * 
                     */
                    void SetInstanceParams(const std::vector<ModifyParamItem>& _instanceParams);

                    /**
                     * 判断参数 InstanceParams 是否已赋值
                     * @return InstanceParams 是否已赋值
                     * 
                     */
                    bool InstanceParamsHasBeenSet() const;

                    /**
                     * 获取<p>Parameter template</p>
                     * @return ParamTemplateId <p>Parameter template</p>
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置<p>Parameter template</p>
                     * @param _paramTemplateId <p>Parameter template</p>
                     * 
                     */
                    void SetParamTemplateId(const int64_t& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of newly-added read-only instances</p>
                     * @return RoCount <p>Number of newly-added read-only instances</p>
                     * 
                     */
                    int64_t GetRoCount() const;

                    /**
                     * 设置<p>Number of newly-added read-only instances</p>
                     * @param _roCount <p>Number of newly-added read-only instances</p>
                     * 
                     */
                    void SetRoCount(const int64_t& _roCount);

                    /**
                     * 判断参数 RoCount 是否已赋值
                     * @return RoCount 是否已赋值
                     * 
                     */
                    bool RoCountHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster Id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Minimum specification of the ro instance</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>Maximum specification of ro instance</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>ro instance name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>VPC network ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID. If VpcId is set up, SubnetId is required.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Port used when adding new RO groups, value range [0,65535)</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Security group ID. You can specify security groups when creating a read-only instance.</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>Whether to automatically pause</p><p>Enumeration value:</p><ul><li>yes: Yes</li><li>no: No</li></ul>
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * <p>Auto-pause time</p><p>Unit: s</p>
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * <p>Instance parameter</p>
                     */
                    std::vector<ModifyParamItem> m_instanceParams;
                    bool m_instanceParamsHasBeenSet;

                    /**
                     * <p>Parameter template</p>
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>Number of newly-added read-only instances</p>
                     */
                    int64_t m_roCount;
                    bool m_roCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDSERVERLESSROINSTANCESREQUEST_H_
