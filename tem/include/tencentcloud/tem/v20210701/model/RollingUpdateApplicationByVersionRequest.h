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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_ROLLINGUPDATEAPPLICATIONBYVERSIONREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_ROLLINGUPDATEAPPLICATIONBYVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * RollingUpdateApplicationByVersion request structure.
                */
                class RollingUpdateApplicationByVersionRequest : public AbstractModel
                {
                public:
                    RollingUpdateApplicationByVersionRequest();
                    ~RollingUpdateApplicationByVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return ApplicationId Application ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
                     * @param _applicationId Application ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Environment ID
                     * @return EnvironmentId Environment ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
                     * @param _environmentId Environment ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Update version. For image-based deployment, it is the value. For deployment with JAR/WAR files, it is `Version`.
                     * @return DeployVersion Update version. For image-based deployment, it is the value. For deployment with JAR/WAR files, it is `Version`.
                     * 
                     */
                    std::string GetDeployVersion() const;

                    /**
                     * 设置Update version. For image-based deployment, it is the value. For deployment with JAR/WAR files, it is `Version`.
                     * @param _deployVersion Update version. For image-based deployment, it is the value. For deployment with JAR/WAR files, it is `Version`.
                     * 
                     */
                    void SetDeployVersion(const std::string& _deployVersion);

                    /**
                     * 判断参数 DeployVersion 是否已赋值
                     * @return DeployVersion 是否已赋值
                     * 
                     */
                    bool DeployVersionHasBeenSet() const;

                    /**
                     * 获取JAR/WAR package name. It’s only required for deployment with JAR/WAR files.
                     * @return PackageName JAR/WAR package name. It’s only required for deployment with JAR/WAR files.
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置JAR/WAR package name. It’s only required for deployment with JAR/WAR files.
                     * @param _packageName JAR/WAR package name. It’s only required for deployment with JAR/WAR files.
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取Request source. Options: `IntelliJ`, `Coding`
                     * @return From Request source. Options: `IntelliJ`, `Coding`
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Request source. Options: `IntelliJ`, `Coding`
                     * @param _from Request source. Options: `IntelliJ`, `Coding`
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取The deployment policy. Values: `AUTO` (automatically deploy), `BETA` (deploy a small batch first to test the result, and deploy the rest automatically) and `MANUAL` (manually deploy)
                     * @return DeployStrategyType The deployment policy. Values: `AUTO` (automatically deploy), `BETA` (deploy a small batch first to test the result, and deploy the rest automatically) and `MANUAL` (manually deploy)
                     * 
                     */
                    std::string GetDeployStrategyType() const;

                    /**
                     * 设置The deployment policy. Values: `AUTO` (automatically deploy), `BETA` (deploy a small batch first to test the result, and deploy the rest automatically) and `MANUAL` (manually deploy)
                     * @param _deployStrategyType The deployment policy. Values: `AUTO` (automatically deploy), `BETA` (deploy a small batch first to test the result, and deploy the rest automatically) and `MANUAL` (manually deploy)
                     * 
                     */
                    void SetDeployStrategyType(const std::string& _deployStrategyType);

                    /**
                     * 判断参数 DeployStrategyType 是否已赋值
                     * @return DeployStrategyType 是否已赋值
                     * 
                     */
                    bool DeployStrategyTypeHasBeenSet() const;

                    /**
                     * 获取Total number of batches
                     * @return TotalBatchCount Total number of batches
                     * 
                     */
                    int64_t GetTotalBatchCount() const;

                    /**
                     * 设置Total number of batches
                     * @param _totalBatchCount Total number of batches
                     * 
                     */
                    void SetTotalBatchCount(const int64_t& _totalBatchCount);

                    /**
                     * 判断参数 TotalBatchCount 是否已赋值
                     * @return TotalBatchCount 是否已赋值
                     * 
                     */
                    bool TotalBatchCountHasBeenSet() const;

                    /**
                     * 获取Interval between the batches
                     * @return BatchInterval Interval between the batches
                     * 
                     */
                    int64_t GetBatchInterval() const;

                    /**
                     * 设置Interval between the batches
                     * @param _batchInterval Interval between the batches
                     * 
                     */
                    void SetBatchInterval(const int64_t& _batchInterval);

                    /**
                     * 判断参数 BatchInterval 是否已赋值
                     * @return BatchInterval 是否已赋值
                     * 
                     */
                    bool BatchIntervalHasBeenSet() const;

                    /**
                     * 获取Number of instances in a beta batch
                     * @return BetaBatchNum Number of instances in a beta batch
                     * 
                     */
                    int64_t GetBetaBatchNum() const;

                    /**
                     * 设置Number of instances in a beta batch
                     * @param _betaBatchNum Number of instances in a beta batch
                     * 
                     */
                    void SetBetaBatchNum(const int64_t& _betaBatchNum);

                    /**
                     * 判断参数 BetaBatchNum 是否已赋值
                     * @return BetaBatchNum 是否已赋值
                     * 
                     */
                    bool BetaBatchNumHasBeenSet() const;

                    /**
                     * 获取Minimum number of available instances during the deployment
                     * @return MinAvailable Minimum number of available instances during the deployment
                     * 
                     */
                    int64_t GetMinAvailable() const;

                    /**
                     * 设置Minimum number of available instances during the deployment
                     * @param _minAvailable Minimum number of available instances during the deployment
                     * 
                     */
                    void SetMinAvailable(const int64_t& _minAvailable);

                    /**
                     * 判断参数 MinAvailable 是否已赋值
                     * @return MinAvailable 是否已赋值
                     * 
                     */
                    bool MinAvailableHasBeenSet() const;

                    /**
                     * 获取Whether to enable force release
                     * @return Force Whether to enable force release
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置Whether to enable force release
                     * @param _force Whether to enable force release
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Update version. For image-based deployment, it is the value. For deployment with JAR/WAR files, it is `Version`.
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

                    /**
                     * JAR/WAR package name. It’s only required for deployment with JAR/WAR files.
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * Request source. Options: `IntelliJ`, `Coding`
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * The deployment policy. Values: `AUTO` (automatically deploy), `BETA` (deploy a small batch first to test the result, and deploy the rest automatically) and `MANUAL` (manually deploy)
                     */
                    std::string m_deployStrategyType;
                    bool m_deployStrategyTypeHasBeenSet;

                    /**
                     * Total number of batches
                     */
                    int64_t m_totalBatchCount;
                    bool m_totalBatchCountHasBeenSet;

                    /**
                     * Interval between the batches
                     */
                    int64_t m_batchInterval;
                    bool m_batchIntervalHasBeenSet;

                    /**
                     * Number of instances in a beta batch
                     */
                    int64_t m_betaBatchNum;
                    bool m_betaBatchNumHasBeenSet;

                    /**
                     * Minimum number of available instances during the deployment
                     */
                    int64_t m_minAvailable;
                    bool m_minAvailableHasBeenSet;

                    /**
                     * Whether to enable force release
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_ROLLINGUPDATEAPPLICATIONBYVERSIONREQUEST_H_
