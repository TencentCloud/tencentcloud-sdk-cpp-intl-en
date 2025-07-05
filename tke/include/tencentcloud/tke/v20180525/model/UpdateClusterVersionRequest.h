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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPDATECLUSTERVERSIONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPDATECLUSTERVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * UpdateClusterVersion request structure.
                */
                class UpdateClusterVersionRequest : public AbstractModel
                {
                public:
                    UpdateClusterVersionRequest();
                    ~UpdateClusterVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取The version that needs to upgrade to
                     * @return DstVersion The version that needs to upgrade to
                     * 
                     */
                    std::string GetDstVersion() const;

                    /**
                     * 设置The version that needs to upgrade to
                     * @param _dstVersion The version that needs to upgrade to
                     * 
                     */
                    void SetDstVersion(const std::string& _dstVersion);

                    /**
                     * 判断参数 DstVersion 是否已赋值
                     * @return DstVersion 是否已赋值
                     * 
                     */
                    bool DstVersionHasBeenSet() const;

                    /**
                     * 获取Cluster custom parameter
                     * @return ExtraArgs Cluster custom parameter
                     * 
                     */
                    ClusterExtraArgs GetExtraArgs() const;

                    /**
                     * 设置Cluster custom parameter
                     * @param _extraArgs Cluster custom parameter
                     * 
                     */
                    void SetExtraArgs(const ClusterExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     * 
                     */
                    bool ExtraArgsHasBeenSet() const;

                    /**
                     * 获取The maximum tolerable number of unavailable pods
                     * @return MaxNotReadyPercent The maximum tolerable number of unavailable pods
                     * 
                     */
                    double GetMaxNotReadyPercent() const;

                    /**
                     * 设置The maximum tolerable number of unavailable pods
                     * @param _maxNotReadyPercent The maximum tolerable number of unavailable pods
                     * 
                     */
                    void SetMaxNotReadyPercent(const double& _maxNotReadyPercent);

                    /**
                     * 判断参数 MaxNotReadyPercent 是否已赋值
                     * @return MaxNotReadyPercent 是否已赋值
                     * 
                     */
                    bool MaxNotReadyPercentHasBeenSet() const;

                    /**
                     * 获取Whether to skip the precheck
                     * @return SkipPreCheck Whether to skip the precheck
                     * 
                     */
                    bool GetSkipPreCheck() const;

                    /**
                     * 设置Whether to skip the precheck
                     * @param _skipPreCheck Whether to skip the precheck
                     * 
                     */
                    void SetSkipPreCheck(const bool& _skipPreCheck);

                    /**
                     * 判断参数 SkipPreCheck 是否已赋值
                     * @return SkipPreCheck 是否已赋值
                     * 
                     */
                    bool SkipPreCheckHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The version that needs to upgrade to
                     */
                    std::string m_dstVersion;
                    bool m_dstVersionHasBeenSet;

                    /**
                     * Cluster custom parameter
                     */
                    ClusterExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                    /**
                     * The maximum tolerable number of unavailable pods
                     */
                    double m_maxNotReadyPercent;
                    bool m_maxNotReadyPercentHasBeenSet;

                    /**
                     * Whether to skip the precheck
                     */
                    bool m_skipPreCheck;
                    bool m_skipPreCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPDATECLUSTERVERSIONREQUEST_H_
