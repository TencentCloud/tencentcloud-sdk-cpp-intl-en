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
                     * 获取Specifies the serverless cluster id.
                     * @return ClusterId Specifies the serverless cluster id.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Specifies the serverless cluster id.
                     * @param _clusterId Specifies the serverless cluster id.
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
                     * 获取Specifies whether the cluster automatically pauses. valid values for the optional range.
<li>yes</li>
<li>no</li>
                     * @return AutoPause Specifies whether the cluster automatically pauses. valid values for the optional range.
<li>yes</li>
<li>no</li>
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置Specifies whether the cluster automatically pauses. valid values for the optional range.
<li>yes</li>
<li>no</li>
                     * @param _autoPause Specifies whether the cluster automatically pauses. valid values for the optional range.
<li>yes</li>
<li>no</li>
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
                     * 获取Specifies the delay for cluster auto-pause in seconds. the value range is [600,691200]. the default value is 600.
                     * @return AutoPauseDelay Specifies the delay for cluster auto-pause in seconds. the value range is [600,691200]. the default value is 600.
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置Specifies the delay for cluster auto-pause in seconds. the value range is [600,691200]. the default value is 600.
                     * @param _autoPauseDelay Specifies the delay for cluster auto-pause in seconds. the value range is [600,691200]. the default value is 600.
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
                     * 获取The parameter is temporarily unavailable.
                     * @return AutoScaleUpDelay The parameter is temporarily unavailable.
                     * 
                     */
                    int64_t GetAutoScaleUpDelay() const;

                    /**
                     * 设置The parameter is temporarily unavailable.
                     * @param _autoScaleUpDelay The parameter is temporarily unavailable.
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
                     * 获取The parameter is temporarily unavailable.
                     * @return AutoScaleDownDelay The parameter is temporarily unavailable.
                     * 
                     */
                    int64_t GetAutoScaleDownDelay() const;

                    /**
                     * 设置The parameter is temporarily unavailable.
                     * @param _autoScaleDownDelay The parameter is temporarily unavailable.
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
                     * 获取Minimum value of cpu. for the optional range, refer to the API response of DescribeServerlessInstanceSpecs.
                     * @return MinCpu Minimum value of cpu. for the optional range, refer to the API response of DescribeServerlessInstanceSpecs.
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置Minimum value of cpu. for the optional range, refer to the API response of DescribeServerlessInstanceSpecs.
                     * @param _minCpu Minimum value of cpu. for the optional range, refer to the API response of DescribeServerlessInstanceSpecs.
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
                     * 获取Maximum value of cpu, optional range refers to the API response of DescribeServerlessInstanceSpecs.
                     * @return MaxCpu Maximum value of cpu, optional range refers to the API response of DescribeServerlessInstanceSpecs.
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置Maximum value of cpu, optional range refers to the API response of DescribeServerlessInstanceSpecs.
                     * @param _maxCpu Maximum value of cpu, optional range refers to the API response of DescribeServerlessInstanceSpecs.
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
                     * 获取Minimum cpu value of a read-only instance. for valid values, refer to the API response of DescribeServerlessInstanceSpecs.
                     * @return MinRoCpu Minimum cpu value of a read-only instance. for valid values, refer to the API response of DescribeServerlessInstanceSpecs.
                     * 
                     */
                    double GetMinRoCpu() const;

                    /**
                     * 设置Minimum cpu value of a read-only instance. for valid values, refer to the API response of DescribeServerlessInstanceSpecs.
                     * @param _minRoCpu Minimum cpu value of a read-only instance. for valid values, refer to the API response of DescribeServerlessInstanceSpecs.
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
                     * 获取Maximum value of read-only cpu, optional range refer to the API response of DescribeServerlessInstanceSpecs.
                     * @return MaxRoCpu Maximum value of read-only cpu, optional range refer to the API response of DescribeServerlessInstanceSpecs.
                     * 
                     */
                    double GetMaxRoCpu() const;

                    /**
                     * 设置Maximum value of read-only cpu, optional range refer to the API response of DescribeServerlessInstanceSpecs.
                     * @param _maxRoCpu Maximum value of read-only cpu, optional range refer to the API response of DescribeServerlessInstanceSpecs.
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
                     * 获取Specifies the minimum count of read-only nodes.
                     * @return MinRoCount Specifies the minimum count of read-only nodes.
                     * 
                     */
                    int64_t GetMinRoCount() const;

                    /**
                     * 设置Specifies the minimum count of read-only nodes.
                     * @param _minRoCount Specifies the minimum count of read-only nodes.
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
                     * 获取Maximum number of read-only nodes.
                     * @return MaxRoCount Maximum number of read-only nodes.
                     * 
                     */
                    int64_t GetMaxRoCount() const;

                    /**
                     * 设置Maximum number of read-only nodes.
                     * @param _maxRoCount Maximum number of read-only nodes.
                     * 
                     */
                    void SetMaxRoCount(const int64_t& _maxRoCount);

                    /**
                     * 判断参数 MaxRoCount 是否已赋值
                     * @return MaxRoCount 是否已赋值
                     * 
                     */
                    bool MaxRoCountHasBeenSet() const;

                private:

                    /**
                     * Specifies the serverless cluster id.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Specifies whether the cluster automatically pauses. valid values for the optional range.
<li>yes</li>
<li>no</li>
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * Specifies the delay for cluster auto-pause in seconds. the value range is [600,691200]. the default value is 600.
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * The parameter is temporarily unavailable.
                     */
                    int64_t m_autoScaleUpDelay;
                    bool m_autoScaleUpDelayHasBeenSet;

                    /**
                     * The parameter is temporarily unavailable.
                     */
                    int64_t m_autoScaleDownDelay;
                    bool m_autoScaleDownDelayHasBeenSet;

                    /**
                     * Minimum value of cpu. for the optional range, refer to the API response of DescribeServerlessInstanceSpecs.
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * Maximum value of cpu, optional range refers to the API response of DescribeServerlessInstanceSpecs.
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * Minimum cpu value of a read-only instance. for valid values, refer to the API response of DescribeServerlessInstanceSpecs.
                     */
                    double m_minRoCpu;
                    bool m_minRoCpuHasBeenSet;

                    /**
                     * Maximum value of read-only cpu, optional range refer to the API response of DescribeServerlessInstanceSpecs.
                     */
                    double m_maxRoCpu;
                    bool m_maxRoCpuHasBeenSet;

                    /**
                     * Specifies the minimum count of read-only nodes.
                     */
                    int64_t m_minRoCount;
                    bool m_minRoCountHasBeenSet;

                    /**
                     * Maximum number of read-only nodes.
                     */
                    int64_t m_maxRoCount;
                    bool m_maxRoCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSERVERLESSSTRATEGYREQUEST_H_
