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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSERVERLESSSTRATEGYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSERVERLESSSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyServerlessStrategy request structure.
                */
                class ModifyServerlessStrategyRequest : public AbstractModel
                {
                public:
                    ModifyServerlessStrategyRequest();
                    ~ModifyServerlessStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>serverless cluster id</p>
                     * @return ClusterId <p>serverless cluster id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>serverless cluster id</p>
                     * @param _clusterId <p>serverless cluster id</p>
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
                     * 获取<p>Whether the cluster auto-pause feature is enabled. Optional range</p><li>yes</li><li>no</li>
                     * @return AutoPause <p>Whether the cluster auto-pause feature is enabled. Optional range</p><li>yes</li><li>no</li>
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置<p>Whether the cluster auto-pause feature is enabled. Optional range</p><li>yes</li><li>no</li>
                     * @param _autoPause <p>Whether the cluster auto-pause feature is enabled. Optional range</p><li>yes</li><li>no</li>
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
                     * 获取<p>Delay of Cluster Auto-Pause in seconds, optional range [600,691200], default 600</p>
                     * @return AutoPauseDelay <p>Delay of Cluster Auto-Pause in seconds, optional range [600,691200], default 600</p>
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置<p>Delay of Cluster Auto-Pause in seconds, optional range [600,691200], default 600</p>
                     * @param _autoPauseDelay <p>Delay of Cluster Auto-Pause in seconds, optional range [600,691200], default 600</p>
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
                     * 获取<p>This parameter is temporarily unavailable</p>
                     * @return AutoScaleUpDelay <p>This parameter is temporarily unavailable</p>
                     * 
                     */
                    int64_t GetAutoScaleUpDelay() const;

                    /**
                     * 设置<p>This parameter is temporarily unavailable</p>
                     * @param _autoScaleUpDelay <p>This parameter is temporarily unavailable</p>
                     * 
                     */
                    void SetAutoScaleUpDelay(const int64_t& _autoScaleUpDelay);

                    /**
                     * 判断参数 AutoScaleUpDelay 是否已赋值
                     * @return AutoScaleUpDelay 是否已赋值
                     * 
                     */
                    bool AutoScaleUpDelayHasBeenSet() const;

                    /**
                     * 获取<p>This parameter is temporarily invalid</p>
                     * @return AutoScaleDownDelay <p>This parameter is temporarily invalid</p>
                     * 
                     */
                    int64_t GetAutoScaleDownDelay() const;

                    /**
                     * 设置<p>This parameter is temporarily invalid</p>
                     * @param _autoScaleDownDelay <p>This parameter is temporarily invalid</p>
                     * 
                     */
                    void SetAutoScaleDownDelay(const int64_t& _autoScaleDownDelay);

                    /**
                     * 判断参数 AutoScaleDownDelay 是否已赋值
                     * @return AutoScaleDownDelay 是否已赋值
                     * 
                     */
                    bool AutoScaleDownDelayHasBeenSet() const;

                    /**
                     * 获取<p>cpu minimum value. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
                     * @return MinCpu <p>cpu minimum value. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>cpu minimum value. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
                     * @param _minCpu <p>cpu minimum value. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
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
                     * 获取<p>Maximum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
                     * @return MaxCpu <p>Maximum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>Maximum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
                     * @param _maxCpu <p>Maximum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
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
                     * 获取<p>Minimum value of read-only instance cpu. For the optional range, refer to the API response of DescribeServerlessInstanceSpecs.</p>
                     * @return MinRoCpu <p>Minimum value of read-only instance cpu. For the optional range, refer to the API response of DescribeServerlessInstanceSpecs.</p>
                     * 
                     */
                    double GetMinRoCpu() const;

                    /**
                     * 设置<p>Minimum value of read-only instance cpu. For the optional range, refer to the API response of DescribeServerlessInstanceSpecs.</p>
                     * @param _minRoCpu <p>Minimum value of read-only instance cpu. For the optional range, refer to the API response of DescribeServerlessInstanceSpecs.</p>
                     * 
                     */
                    void SetMinRoCpu(const double& _minRoCpu);

                    /**
                     * 判断参数 MinRoCpu 是否已赋值
                     * @return MinRoCpu 是否已赋值
                     * 
                     */
                    bool MinRoCpuHasBeenSet() const;

                    /**
                     * 获取<p>Read-only cpu maximum value of the optional range. For reference, see API response of DescribeServerlessInstanceSpecs.</p>
                     * @return MaxRoCpu <p>Read-only cpu maximum value of the optional range. For reference, see API response of DescribeServerlessInstanceSpecs.</p>
                     * 
                     */
                    double GetMaxRoCpu() const;

                    /**
                     * 设置<p>Read-only cpu maximum value of the optional range. For reference, see API response of DescribeServerlessInstanceSpecs.</p>
                     * @param _maxRoCpu <p>Read-only cpu maximum value of the optional range. For reference, see API response of DescribeServerlessInstanceSpecs.</p>
                     * 
                     */
                    void SetMaxRoCpu(const double& _maxRoCpu);

                    /**
                     * 判断参数 MaxRoCpu 是否已赋值
                     * @return MaxRoCpu 是否已赋值
                     * 
                     */
                    bool MaxRoCpuHasBeenSet() const;

                    /**
                     * 获取<p>Minimum count of read-only nodes</p>
                     * @return MinRoCount <p>Minimum count of read-only nodes</p>
                     * 
                     */
                    int64_t GetMinRoCount() const;

                    /**
                     * 设置<p>Minimum count of read-only nodes</p>
                     * @param _minRoCount <p>Minimum count of read-only nodes</p>
                     * 
                     */
                    void SetMinRoCount(const int64_t& _minRoCount);

                    /**
                     * 判断参数 MinRoCount 是否已赋值
                     * @return MinRoCount 是否已赋值
                     * 
                     */
                    bool MinRoCountHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of read-only nodes</p>
                     * @return MaxRoCount <p>Maximum number of read-only nodes</p>
                     * 
                     */
                    int64_t GetMaxRoCount() const;

                    /**
                     * 设置<p>Maximum number of read-only nodes</p>
                     * @param _maxRoCount <p>Maximum number of read-only nodes</p>
                     * 
                     */
                    void SetMaxRoCount(const int64_t& _maxRoCount);

                    /**
                     * 判断参数 MaxRoCount 是否已赋值
                     * @return MaxRoCount 是否已赋值
                     * 
                     */
                    bool MaxRoCountHasBeenSet() const;

                    /**
                     * 获取<p>Whether archiving is enabled. Optional range</p><li>yes</li><li>no</li>Default value: yes</p>
                     * @return AutoArchive <p>Whether archiving is enabled. Optional range</p><li>yes</li><li>no</li>Default value: yes</p>
                     * 
                     */
                    std::string GetAutoArchive() const;

                    /**
                     * 设置<p>Whether archiving is enabled. Optional range</p><li>yes</li><li>no</li>Default value: yes</p>
                     * @param _autoArchive <p>Whether archiving is enabled. Optional range</p><li>yes</li><li>no</li>Default value: yes</p>
                     * 
                     */
                    void SetAutoArchive(const std::string& _autoArchive);

                    /**
                     * 判断参数 AutoArchive 是否已赋值
                     * @return AutoArchive 是否已赋值
                     * 
                     */
                    bool AutoArchiveHasBeenSet() const;

                    /**
                     * 获取<p>Upgrade type. Default value: upgradeImmediate. Available values: upgradeImmediate - immediately complete the modification; upgradeInMaintain - complete the modification during maintenance window.</p>
                     * @return UpgradeType <p>Upgrade type. Default value: upgradeImmediate. Available values: upgradeImmediate - immediately complete the modification; upgradeInMaintain - complete the modification during maintenance window.</p>
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置<p>Upgrade type. Default value: upgradeImmediate. Available values: upgradeImmediate - immediately complete the modification; upgradeInMaintain - complete the modification during maintenance window.</p>
                     * @param _upgradeType <p>Upgrade type. Default value: upgradeImmediate. Available values: upgradeImmediate - immediately complete the modification; upgradeInMaintain - complete the modification during maintenance window.</p>
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取<p>List of security groups to which newly-added read-only instances need to be bound. This only applies to binding security groups to read-only instances generated during the process of this adjustment of policies. Existing instances are not bound.</p>
                     * @return SecurityGroupIdsForNewRo <p>List of security groups to which newly-added read-only instances need to be bound. This only applies to binding security groups to read-only instances generated during the process of this adjustment of policies. Existing instances are not bound.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIdsForNewRo() const;

                    /**
                     * 设置<p>List of security groups to which newly-added read-only instances need to be bound. This only applies to binding security groups to read-only instances generated during the process of this adjustment of policies. Existing instances are not bound.</p>
                     * @param _securityGroupIdsForNewRo <p>List of security groups to which newly-added read-only instances need to be bound. This only applies to binding security groups to read-only instances generated during the process of this adjustment of policies. Existing instances are not bound.</p>
                     * 
                     */
                    void SetSecurityGroupIdsForNewRo(const std::vector<std::string>& _securityGroupIdsForNewRo);

                    /**
                     * 判断参数 SecurityGroupIdsForNewRo 是否已赋值
                     * @return SecurityGroupIdsForNewRo 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsForNewRoHasBeenSet() const;

                private:

                    /**
                     * <p>serverless cluster id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Whether the cluster auto-pause feature is enabled. Optional range</p><li>yes</li><li>no</li>
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * <p>Delay of Cluster Auto-Pause in seconds, optional range [600,691200], default 600</p>
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * <p>This parameter is temporarily unavailable</p>
                     */
                    int64_t m_autoScaleUpDelay;
                    bool m_autoScaleUpDelayHasBeenSet;

                    /**
                     * <p>This parameter is temporarily invalid</p>
                     */
                    int64_t m_autoScaleDownDelay;
                    bool m_autoScaleDownDelayHasBeenSet;

                    /**
                     * <p>cpu minimum value. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>Maximum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs.</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>Minimum value of read-only instance cpu. For the optional range, refer to the API response of DescribeServerlessInstanceSpecs.</p>
                     */
                    double m_minRoCpu;
                    bool m_minRoCpuHasBeenSet;

                    /**
                     * <p>Read-only cpu maximum value of the optional range. For reference, see API response of DescribeServerlessInstanceSpecs.</p>
                     */
                    double m_maxRoCpu;
                    bool m_maxRoCpuHasBeenSet;

                    /**
                     * <p>Minimum count of read-only nodes</p>
                     */
                    int64_t m_minRoCount;
                    bool m_minRoCountHasBeenSet;

                    /**
                     * <p>Maximum number of read-only nodes</p>
                     */
                    int64_t m_maxRoCount;
                    bool m_maxRoCountHasBeenSet;

                    /**
                     * <p>Whether archiving is enabled. Optional range</p><li>yes</li><li>no</li>Default value: yes</p>
                     */
                    std::string m_autoArchive;
                    bool m_autoArchiveHasBeenSet;

                    /**
                     * <p>Upgrade type. Default value: upgradeImmediate. Available values: upgradeImmediate - immediately complete the modification; upgradeInMaintain - complete the modification during maintenance window.</p>
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * <p>List of security groups to which newly-added read-only instances need to be bound. This only applies to binding security groups to read-only instances generated during the process of this adjustment of policies. Existing instances are not bound.</p>
                     */
                    std::vector<std::string> m_securityGroupIdsForNewRo;
                    bool m_securityGroupIdsForNewRoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSERVERLESSSTRATEGYREQUEST_H_
