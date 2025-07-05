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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_PUTPROVISIONEDCONCURRENCYCONFIGREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_PUTPROVISIONEDCONCURRENCYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/TriggerAction.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * PutProvisionedConcurrencyConfig request structure.
                */
                class PutProvisionedConcurrencyConfigRequest : public AbstractModel
                {
                public:
                    PutProvisionedConcurrencyConfigRequest();
                    ~PutProvisionedConcurrencyConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the function for which to set the provisioned concurrency
                     * @return FunctionName Name of the function for which to set the provisioned concurrency
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Name of the function for which to set the provisioned concurrency
                     * @param _functionName Name of the function for which to set the provisioned concurrency
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Function version number. Note: the `$LATEST` version does not support provisioned concurrency
                     * @return Qualifier Function version number. Note: the `$LATEST` version does not support provisioned concurrency
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Function version number. Note: the `$LATEST` version does not support provisioned concurrency
                     * @param _qualifier Function version number. Note: the `$LATEST` version does not support provisioned concurrency
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取Provisioned concurrency amount. Note: there is an upper limit for the sum of provisioned concurrency amounts of all versions, which currently is the function's maximum concurrency quota minus 100
                     * @return VersionProvisionedConcurrencyNum Provisioned concurrency amount. Note: there is an upper limit for the sum of provisioned concurrency amounts of all versions, which currently is the function's maximum concurrency quota minus 100
                     * 
                     */
                    uint64_t GetVersionProvisionedConcurrencyNum() const;

                    /**
                     * 设置Provisioned concurrency amount. Note: there is an upper limit for the sum of provisioned concurrency amounts of all versions, which currently is the function's maximum concurrency quota minus 100
                     * @param _versionProvisionedConcurrencyNum Provisioned concurrency amount. Note: there is an upper limit for the sum of provisioned concurrency amounts of all versions, which currently is the function's maximum concurrency quota minus 100
                     * 
                     */
                    void SetVersionProvisionedConcurrencyNum(const uint64_t& _versionProvisionedConcurrencyNum);

                    /**
                     * 判断参数 VersionProvisionedConcurrencyNum 是否已赋值
                     * @return VersionProvisionedConcurrencyNum 是否已赋值
                     * 
                     */
                    bool VersionProvisionedConcurrencyNumHasBeenSet() const;

                    /**
                     * 获取Function namespace. Default value: `default`
                     * @return Namespace Function namespace. Default value: `default`
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Function namespace. Default value: `default`
                     * @param _namespace Function namespace. Default value: `default`
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Scheduled provisioned concurrency scaling action
                     * @return TriggerActions Scheduled provisioned concurrency scaling action
                     * 
                     */
                    std::vector<TriggerAction> GetTriggerActions() const;

                    /**
                     * 设置Scheduled provisioned concurrency scaling action
                     * @param _triggerActions Scheduled provisioned concurrency scaling action
                     * 
                     */
                    void SetTriggerActions(const std::vector<TriggerAction>& _triggerActions);

                    /**
                     * 判断参数 TriggerActions 是否已赋值
                     * @return TriggerActions 是否已赋值
                     * 
                     */
                    bool TriggerActionsHasBeenSet() const;

                    /**
                     * 获取Specifies the provisioned concurrency type.
`Default`: Static provisioned concurrency. 
`ConcurrencyUtilizationTracking`: Scales the concurrency automatically according to the concurrency utilization.
If `ConcurrencyUtilizationTracking` is passed in, 

`TrackingTarget`, `MinCapacity` and `MaxCapacity` are required, and `VersionProvisionedConcurrencyNum` must be `0`. 
                     * @return ProvisionedType Specifies the provisioned concurrency type.
`Default`: Static provisioned concurrency. 
`ConcurrencyUtilizationTracking`: Scales the concurrency automatically according to the concurrency utilization.
If `ConcurrencyUtilizationTracking` is passed in, 

`TrackingTarget`, `MinCapacity` and `MaxCapacity` are required, and `VersionProvisionedConcurrencyNum` must be `0`. 
                     * 
                     */
                    std::string GetProvisionedType() const;

                    /**
                     * 设置Specifies the provisioned concurrency type.
`Default`: Static provisioned concurrency. 
`ConcurrencyUtilizationTracking`: Scales the concurrency automatically according to the concurrency utilization.
If `ConcurrencyUtilizationTracking` is passed in, 

`TrackingTarget`, `MinCapacity` and `MaxCapacity` are required, and `VersionProvisionedConcurrencyNum` must be `0`. 
                     * @param _provisionedType Specifies the provisioned concurrency type.
`Default`: Static provisioned concurrency. 
`ConcurrencyUtilizationTracking`: Scales the concurrency automatically according to the concurrency utilization.
If `ConcurrencyUtilizationTracking` is passed in, 

`TrackingTarget`, `MinCapacity` and `MaxCapacity` are required, and `VersionProvisionedConcurrencyNum` must be `0`. 
                     * 
                     */
                    void SetProvisionedType(const std::string& _provisionedType);

                    /**
                     * 判断参数 ProvisionedType 是否已赋值
                     * @return ProvisionedType 是否已赋值
                     * 
                     */
                    bool ProvisionedTypeHasBeenSet() const;

                    /**
                     * 获取The target concurrency utilization. Range: (0,1) (two decimal places)
                     * @return TrackingTarget The target concurrency utilization. Range: (0,1) (two decimal places)
                     * 
                     */
                    double GetTrackingTarget() const;

                    /**
                     * 设置The target concurrency utilization. Range: (0,1) (two decimal places)
                     * @param _trackingTarget The target concurrency utilization. Range: (0,1) (two decimal places)
                     * 
                     */
                    void SetTrackingTarget(const double& _trackingTarget);

                    /**
                     * 判断参数 TrackingTarget 是否已赋值
                     * @return TrackingTarget 是否已赋值
                     * 
                     */
                    bool TrackingTargetHasBeenSet() const;

                    /**
                     * 获取The minimum number of instances. It can not be smaller than `1`.
                     * @return MinCapacity The minimum number of instances. It can not be smaller than `1`.
                     * 
                     */
                    uint64_t GetMinCapacity() const;

                    /**
                     * 设置The minimum number of instances. It can not be smaller than `1`.
                     * @param _minCapacity The minimum number of instances. It can not be smaller than `1`.
                     * 
                     */
                    void SetMinCapacity(const uint64_t& _minCapacity);

                    /**
                     * 判断参数 MinCapacity 是否已赋值
                     * @return MinCapacity 是否已赋值
                     * 
                     */
                    bool MinCapacityHasBeenSet() const;

                    /**
                     * 获取The maximum number of instances
                     * @return MaxCapacity The maximum number of instances
                     * 
                     */
                    uint64_t GetMaxCapacity() const;

                    /**
                     * 设置The maximum number of instances
                     * @param _maxCapacity The maximum number of instances
                     * 
                     */
                    void SetMaxCapacity(const uint64_t& _maxCapacity);

                    /**
                     * 判断参数 MaxCapacity 是否已赋值
                     * @return MaxCapacity 是否已赋值
                     * 
                     */
                    bool MaxCapacityHasBeenSet() const;

                private:

                    /**
                     * Name of the function for which to set the provisioned concurrency
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function version number. Note: the `$LATEST` version does not support provisioned concurrency
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Provisioned concurrency amount. Note: there is an upper limit for the sum of provisioned concurrency amounts of all versions, which currently is the function's maximum concurrency quota minus 100
                     */
                    uint64_t m_versionProvisionedConcurrencyNum;
                    bool m_versionProvisionedConcurrencyNumHasBeenSet;

                    /**
                     * Function namespace. Default value: `default`
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Scheduled provisioned concurrency scaling action
                     */
                    std::vector<TriggerAction> m_triggerActions;
                    bool m_triggerActionsHasBeenSet;

                    /**
                     * Specifies the provisioned concurrency type.
`Default`: Static provisioned concurrency. 
`ConcurrencyUtilizationTracking`: Scales the concurrency automatically according to the concurrency utilization.
If `ConcurrencyUtilizationTracking` is passed in, 

`TrackingTarget`, `MinCapacity` and `MaxCapacity` are required, and `VersionProvisionedConcurrencyNum` must be `0`. 
                     */
                    std::string m_provisionedType;
                    bool m_provisionedTypeHasBeenSet;

                    /**
                     * The target concurrency utilization. Range: (0,1) (two decimal places)
                     */
                    double m_trackingTarget;
                    bool m_trackingTargetHasBeenSet;

                    /**
                     * The minimum number of instances. It can not be smaller than `1`.
                     */
                    uint64_t m_minCapacity;
                    bool m_minCapacityHasBeenSet;

                    /**
                     * The maximum number of instances
                     */
                    uint64_t m_maxCapacity;
                    bool m_maxCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_PUTPROVISIONEDCONCURRENCYCONFIGREQUEST_H_
