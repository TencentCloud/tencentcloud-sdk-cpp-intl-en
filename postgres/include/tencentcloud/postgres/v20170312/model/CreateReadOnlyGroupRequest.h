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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYGROUPREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateReadOnlyGroup request structure.
                */
                class CreateReadOnlyGroupRequest : public AbstractModel
                {
                public:
                    CreateReadOnlyGroupRequest();
                    ~CreateReadOnlyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Primary instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @return MasterDBInstanceId Primary instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetMasterDBInstanceId() const;

                    /**
                     * 设置Primary instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @param _masterDBInstanceId Primary instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    void SetMasterDBInstanceId(const std::string& _masterDBInstanceId);

                    /**
                     * 判断参数 MasterDBInstanceId 是否已赋值
                     * @return MasterDBInstanceId 是否已赋值
                     * 
                     */
                    bool MasterDBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Read-Only group name. only supports chinese, english, digits, "_", or "-" with length less than 60.
                     * @return Name Read-Only group name. only supports chinese, english, digits, "_", or "-" with length less than 60.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Read-Only group name. only supports chinese, english, digits, "_", or "-" with length less than 60.
                     * @param _name Read-Only group name. only supports chinese, english, digits, "_", or "-" with length less than 60.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Project ID. default value is 0, means it belongs to the default project.
                     * @return ProjectId Project ID. default value is 0, means it belongs to the default project.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID. default value is 0, means it belongs to the default project.
                     * @param _projectId Project ID. default value is 0, means it belongs to the default project.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取VPC ID. note: uses classic networks by default. currently, basic networks are not supported, so this parameter is required.
                     * @return VpcId VPC ID. note: uses classic networks by default. currently, basic networks are not supported, so this parameter is required.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. note: uses classic networks by default. currently, basic networks are not supported, so this parameter is required.
                     * @param _vpcId VPC ID. note: uses classic networks by default. currently, basic networks are not supported, so this parameter is required.
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
                     * 获取Subnet ID. note: uses classic networks by default. currently, basic networks are not supported, so this parameter is required.
                     * @return SubnetId Subnet ID. note: uses classic networks by default. currently, basic networks are not supported, so this parameter is required.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. note: uses classic networks by default. currently, basic networks are not supported, so this parameter is required.
                     * @param _subnetId Subnet ID. note: uses classic networks by default. currently, basic networks are not supported, so this parameter is required.
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
                     * 获取Delay time size switch: 0 for off, 1 for on. this parameter is required.
                     * @return ReplayLagEliminate Delay time size switch: 0 for off, 1 for on. this parameter is required.
                     * 
                     */
                    uint64_t GetReplayLagEliminate() const;

                    /**
                     * 设置Delay time size switch: 0 for off, 1 for on. this parameter is required.
                     * @param _replayLagEliminate Delay time size switch: 0 for off, 1 for on. this parameter is required.
                     * 
                     */
                    void SetReplayLagEliminate(const uint64_t& _replayLagEliminate);

                    /**
                     * 判断参数 ReplayLagEliminate 是否已赋值
                     * @return ReplayLagEliminate 是否已赋值
                     * 
                     */
                    bool ReplayLagEliminateHasBeenSet() const;

                    /**
                     * 获取Delay space size switch: 0 for off, 1 for on. this parameter must match ReplayLagEliminate.
                     * @return ReplayLatencyEliminate Delay space size switch: 0 for off, 1 for on. this parameter must match ReplayLagEliminate.
                     * 
                     */
                    uint64_t GetReplayLatencyEliminate() const;

                    /**
                     * 设置Delay space size switch: 0 for off, 1 for on. this parameter must match ReplayLagEliminate.
                     * @param _replayLatencyEliminate Delay space size switch: 0 for off, 1 for on. this parameter must match ReplayLagEliminate.
                     * 
                     */
                    void SetReplayLatencyEliminate(const uint64_t& _replayLatencyEliminate);

                    /**
                     * 判断参数 ReplayLatencyEliminate 是否已赋值
                     * @return ReplayLatencyEliminate 是否已赋值
                     * 
                     */
                    bool ReplayLatencyEliminateHasBeenSet() const;

                    /**
                     * 获取The size threshold of the delay time, a positive integer with unit: s. this parameter is required when ReplayLagEliminate is 1 and must be set to 0 when ReplayLagEliminate is 0.
                     * @return MaxReplayLag The size threshold of the delay time, a positive integer with unit: s. this parameter is required when ReplayLagEliminate is 1 and must be set to 0 when ReplayLagEliminate is 0.
                     * 
                     */
                    uint64_t GetMaxReplayLag() const;

                    /**
                     * 设置The size threshold of the delay time, a positive integer with unit: s. this parameter is required when ReplayLagEliminate is 1 and must be set to 0 when ReplayLagEliminate is 0.
                     * @param _maxReplayLag The size threshold of the delay time, a positive integer with unit: s. this parameter is required when ReplayLagEliminate is 1 and must be set to 0 when ReplayLagEliminate is 0.
                     * 
                     */
                    void SetMaxReplayLag(const uint64_t& _maxReplayLag);

                    /**
                     * 判断参数 MaxReplayLag 是否已赋值
                     * @return MaxReplayLag 是否已赋值
                     * 
                     */
                    bool MaxReplayLagHasBeenSet() const;

                    /**
                     * 获取Delay threshold for space size, a positive integer in MB. this parameter is required when ReplayLatencyEliminate is 1 and must be set to 0 when ReplayLatencyEliminate is 0.
                     * @return MaxReplayLatency Delay threshold for space size, a positive integer in MB. this parameter is required when ReplayLatencyEliminate is 1 and must be set to 0 when ReplayLatencyEliminate is 0.
                     * 
                     */
                    uint64_t GetMaxReplayLatency() const;

                    /**
                     * 设置Delay threshold for space size, a positive integer in MB. this parameter is required when ReplayLatencyEliminate is 1 and must be set to 0 when ReplayLatencyEliminate is 0.
                     * @param _maxReplayLatency Delay threshold for space size, a positive integer in MB. this parameter is required when ReplayLatencyEliminate is 1 and must be set to 0 when ReplayLatencyEliminate is 0.
                     * 
                     */
                    void SetMaxReplayLatency(const uint64_t& _maxReplayLatency);

                    /**
                     * 判断参数 MaxReplayLatency 是否已赋值
                     * @return MaxReplayLatency 是否已赋值
                     * 
                     */
                    bool MaxReplayLatencyHasBeenSet() const;

                    /**
                     * 获取Specifies the minimum number of instances to retain with delay removal. value range [0,100]. this parameter is required when ReplayLatencyEliminate is 1 and invalid when ReplayLagEliminate is 0.
                     * @return MinDelayEliminateReserve Specifies the minimum number of instances to retain with delay removal. value range [0,100]. this parameter is required when ReplayLatencyEliminate is 1 and invalid when ReplayLagEliminate is 0.
                     * 
                     */
                    uint64_t GetMinDelayEliminateReserve() const;

                    /**
                     * 设置Specifies the minimum number of instances to retain with delay removal. value range [0,100]. this parameter is required when ReplayLatencyEliminate is 1 and invalid when ReplayLagEliminate is 0.
                     * @param _minDelayEliminateReserve Specifies the minimum number of instances to retain with delay removal. value range [0,100]. this parameter is required when ReplayLatencyEliminate is 1 and invalid when ReplayLagEliminate is 0.
                     * 
                     */
                    void SetMinDelayEliminateReserve(const uint64_t& _minDelayEliminateReserve);

                    /**
                     * 判断参数 MinDelayEliminateReserve 是否已赋值
                     * @return MinDelayEliminateReserve 是否已赋值
                     * 
                     */
                    bool MinDelayEliminateReserveHasBeenSet() const;

                    /**
                     * 获取Security group ID
                     * @return SecurityGroupIds Security group ID
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group ID
                     * @param _securityGroupIds Security group ID
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Primary instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_masterDBInstanceId;
                    bool m_masterDBInstanceIdHasBeenSet;

                    /**
                     * Read-Only group name. only supports chinese, english, digits, "_", or "-" with length less than 60.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Project ID. default value is 0, means it belongs to the default project.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * VPC ID. note: uses classic networks by default. currently, basic networks are not supported, so this parameter is required.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID. note: uses classic networks by default. currently, basic networks are not supported, so this parameter is required.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Delay time size switch: 0 for off, 1 for on. this parameter is required.
                     */
                    uint64_t m_replayLagEliminate;
                    bool m_replayLagEliminateHasBeenSet;

                    /**
                     * Delay space size switch: 0 for off, 1 for on. this parameter must match ReplayLagEliminate.
                     */
                    uint64_t m_replayLatencyEliminate;
                    bool m_replayLatencyEliminateHasBeenSet;

                    /**
                     * The size threshold of the delay time, a positive integer with unit: s. this parameter is required when ReplayLagEliminate is 1 and must be set to 0 when ReplayLagEliminate is 0.
                     */
                    uint64_t m_maxReplayLag;
                    bool m_maxReplayLagHasBeenSet;

                    /**
                     * Delay threshold for space size, a positive integer in MB. this parameter is required when ReplayLatencyEliminate is 1 and must be set to 0 when ReplayLatencyEliminate is 0.
                     */
                    uint64_t m_maxReplayLatency;
                    bool m_maxReplayLatencyHasBeenSet;

                    /**
                     * Specifies the minimum number of instances to retain with delay removal. value range [0,100]. this parameter is required when ReplayLatencyEliminate is 1 and invalid when ReplayLagEliminate is 0.
                     */
                    uint64_t m_minDelayEliminateReserve;
                    bool m_minDelayEliminateReserveHasBeenSet;

                    /**
                     * Security group ID
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYGROUPREQUEST_H_
