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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGUPSTREAMINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGUPSTREAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongTarget.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * backend configuration of the service
                */
                class KongUpstreamInfo : public AbstractModel
                {
                public:
                    KongUpstreamInfo();
                    ~KongUpstreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP or domain
                     * @return Host IP or domain
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置IP or domain
                     * @param _host IP or domain
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Service source ID
                     * @return SourceID Service source ID
                     * 
                     */
                    std::string GetSourceID() const;

                    /**
                     * 设置Service source ID
                     * @param _sourceID Service source ID
                     * 
                     */
                    void SetSourceID(const std::string& _sourceID);

                    /**
                     * 判断参数 SourceID 是否已赋值
                     * @return SourceID 是否已赋值
                     * 
                     */
                    bool SourceIDHasBeenSet() const;

                    /**
                     * 获取Namespace
                     * @return Namespace Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param _namespace Namespace
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
                     * 获取Service (registration center or service in Kubernetes) name
                     * @return ServiceName Service (registration center or service in Kubernetes) name
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service (registration center or service in Kubernetes) name
                     * @param _serviceName Service (registration center or service in Kubernetes) name
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取The backend type is IPList when provided by the service
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Targets The backend type is IPList when provided by the service
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KongTarget> GetTargets() const;

                    /**
                     * 设置The backend type is IPList when provided by the service
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targets The backend type is IPList when provided by the service
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargets(const std::vector<KongTarget>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取Service source type
                     * @return SourceType Service source type
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Service source type
                     * @param _sourceType Service source type
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取SCF Function Type
                     * @return ScfType SCF Function Type
                     * 
                     */
                    std::string GetScfType() const;

                    /**
                     * 设置SCF Function Type
                     * @param _scfType SCF Function Type
                     * 
                     */
                    void SetScfType(const std::string& _scfType);

                    /**
                     * 判断参数 ScfType 是否已赋值
                     * @return ScfType 是否已赋值
                     * 
                     */
                    bool ScfTypeHasBeenSet() const;

                    /**
                     * 获取SCF function namespace
                     * @return ScfNamespace SCF function namespace
                     * 
                     */
                    std::string GetScfNamespace() const;

                    /**
                     * 设置SCF function namespace
                     * @param _scfNamespace SCF function namespace
                     * 
                     */
                    void SetScfNamespace(const std::string& _scfNamespace);

                    /**
                     * 判断参数 ScfNamespace 是否已赋值
                     * @return ScfNamespace 是否已赋值
                     * 
                     */
                    bool ScfNamespaceHasBeenSet() const;

                    /**
                     * 获取SCF Function Name
                     * @return ScfLambdaName SCF Function Name
                     * 
                     */
                    std::string GetScfLambdaName() const;

                    /**
                     * 设置SCF Function Name
                     * @param _scfLambdaName SCF Function Name
                     * 
                     */
                    void SetScfLambdaName(const std::string& _scfLambdaName);

                    /**
                     * 判断参数 ScfLambdaName 是否已赋值
                     * @return ScfLambdaName 是否已赋值
                     * 
                     */
                    bool ScfLambdaNameHasBeenSet() const;

                    /**
                     * 获取SCF Function Version
                     * @return ScfLambdaQualifier SCF Function Version
                     * 
                     */
                    std::string GetScfLambdaQualifier() const;

                    /**
                     * 设置SCF Function Version
                     * @param _scfLambdaQualifier SCF Function Version
                     * 
                     */
                    void SetScfLambdaQualifier(const std::string& _scfLambdaQualifier);

                    /**
                     * 判断参数 ScfLambdaQualifier 是否已赋值
                     * @return ScfLambdaQualifier 是否已赋值
                     * 
                     */
                    bool ScfLambdaQualifierHasBeenSet() const;

                    /**
                     * 获取Cold start time, in seconds
                     * @return SlowStart Cold start time, in seconds
                     * 
                     */
                    int64_t GetSlowStart() const;

                    /**
                     * 设置Cold start time, in seconds
                     * @param _slowStart Cold start time, in seconds
                     * 
                     */
                    void SetSlowStart(const int64_t& _slowStart);

                    /**
                     * 判断参数 SlowStart 是否已赋值
                     * @return SlowStart 是否已赋值
                     * 
                     */
                    bool SlowStartHasBeenSet() const;

                    /**
                     * 获取Load balancing algorithm, defaults to round-robin, also supports least-connections, consisten_hashing
                     * @return Algorithm Load balancing algorithm, defaults to round-robin, also supports least-connections, consisten_hashing
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置Load balancing algorithm, defaults to round-robin, also supports least-connections, consisten_hashing
                     * @param _algorithm Load balancing algorithm, defaults to round-robin, also supports least-connections, consisten_hashing
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取Auto scaling group ID of CVM
                     * @return AutoScalingGroupID Auto scaling group ID of CVM
                     * 
                     */
                    std::string GetAutoScalingGroupID() const;

                    /**
                     * 设置Auto scaling group ID of CVM
                     * @param _autoScalingGroupID Auto scaling group ID of CVM
                     * 
                     */
                    void SetAutoScalingGroupID(const std::string& _autoScalingGroupID);

                    /**
                     * 判断参数 AutoScalingGroupID 是否已赋值
                     * @return AutoScalingGroupID 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIDHasBeenSet() const;

                    /**
                     * 获取CVM auto scaling group port
                     * @return AutoScalingCvmPort CVM auto scaling group port
                     * 
                     */
                    uint64_t GetAutoScalingCvmPort() const;

                    /**
                     * 设置CVM auto scaling group port
                     * @param _autoScalingCvmPort CVM auto scaling group port
                     * 
                     */
                    void SetAutoScalingCvmPort(const uint64_t& _autoScalingCvmPort);

                    /**
                     * 判断参数 AutoScalingCvmPort 是否已赋值
                     * @return AutoScalingCvmPort 是否已赋值
                     * 
                     */
                    bool AutoScalingCvmPortHasBeenSet() const;

                    /**
                     * 获取TAT command status of the CVM used in the auto scaling group
                     * @return AutoScalingTatCmdStatus TAT command status of the CVM used in the auto scaling group
                     * 
                     */
                    std::string GetAutoScalingTatCmdStatus() const;

                    /**
                     * 设置TAT command status of the CVM used in the auto scaling group
                     * @param _autoScalingTatCmdStatus TAT command status of the CVM used in the auto scaling group
                     * 
                     */
                    void SetAutoScalingTatCmdStatus(const std::string& _autoScalingTatCmdStatus);

                    /**
                     * 判断参数 AutoScalingTatCmdStatus 是否已赋值
                     * @return AutoScalingTatCmdStatus 是否已赋值
                     * 
                     */
                    bool AutoScalingTatCmdStatusHasBeenSet() const;

                    /**
                     * 获取CVM auto scaling group lifecycle hook status
                     * @return AutoScalingHookStatus CVM auto scaling group lifecycle hook status
                     * 
                     */
                    std::string GetAutoScalingHookStatus() const;

                    /**
                     * 设置CVM auto scaling group lifecycle hook status
                     * @param _autoScalingHookStatus CVM auto scaling group lifecycle hook status
                     * 
                     */
                    void SetAutoScalingHookStatus(const std::string& _autoScalingHookStatus);

                    /**
                     * 判断参数 AutoScalingHookStatus 是否已赋值
                     * @return AutoScalingHookStatus 是否已赋值
                     * 
                     */
                    bool AutoScalingHookStatusHasBeenSet() const;

                    /**
                     * 获取Service source name.
                     * @return SourceName Service source name.
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置Service source name.
                     * @param _sourceName Service source name.
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取Precise service source type. Type passed in when creating a service source.
                     * @return RealSourceType Precise service source type. Type passed in when creating a service source.
                     * 
                     */
                    std::string GetRealSourceType() const;

                    /**
                     * 设置Precise service source type. Type passed in when creating a service source.
                     * @param _realSourceType Precise service source type. Type passed in when creating a service source.
                     * 
                     */
                    void SetRealSourceType(const std::string& _realSourceType);

                    /**
                     * 判断参数 RealSourceType 是否已赋值
                     * @return RealSourceType 是否已赋值
                     * 
                     */
                    bool RealSourceTypeHasBeenSet() const;

                    /**
                     * 获取upstream health status HEALTHY (healthy), UNHEALTHY (abnormal), HEALTHCHECKS_OFF (not enabled), and NONE (health checks not supported)
                     * @return HealthStatus upstream health status HEALTHY (healthy), UNHEALTHY (abnormal), HEALTHCHECKS_OFF (not enabled), and NONE (health checks not supported)
                     * 
                     */
                    std::string GetHealthStatus() const;

                    /**
                     * 设置upstream health status HEALTHY (healthy), UNHEALTHY (abnormal), HEALTHCHECKS_OFF (not enabled), and NONE (health checks not supported)
                     * @param _healthStatus upstream health status HEALTHY (healthy), UNHEALTHY (abnormal), HEALTHCHECKS_OFF (not enabled), and NONE (health checks not supported)
                     * 
                     */
                    void SetHealthStatus(const std::string& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取Whether CAM authentication is enabled for SCF. Enabled by default (true) when left blank.
                     * @return ScfCamAuthEnable Whether CAM authentication is enabled for SCF. Enabled by default (true) when left blank.
                     * 
                     */
                    bool GetScfCamAuthEnable() const;

                    /**
                     * 设置Whether CAM authentication is enabled for SCF. Enabled by default (true) when left blank.
                     * @param _scfCamAuthEnable Whether CAM authentication is enabled for SCF. Enabled by default (true) when left blank.
                     * 
                     */
                    void SetScfCamAuthEnable(const bool& _scfCamAuthEnable);

                    /**
                     * 判断参数 ScfCamAuthEnable 是否已赋值
                     * @return ScfCamAuthEnable 是否已赋值
                     * 
                     */
                    bool ScfCamAuthEnableHasBeenSet() const;

                    /**
                     * 获取Whether Base64 encoding is enabled for SCF, default false
                     * @return ScfIsBase64Encoded Whether Base64 encoding is enabled for SCF, default false
                     * 
                     */
                    bool GetScfIsBase64Encoded() const;

                    /**
                     * 设置Whether Base64 encoding is enabled for SCF, default false
                     * @param _scfIsBase64Encoded Whether Base64 encoding is enabled for SCF, default false
                     * 
                     */
                    void SetScfIsBase64Encoded(const bool& _scfIsBase64Encoded);

                    /**
                     * 判断参数 ScfIsBase64Encoded 是否已赋值
                     * @return ScfIsBase64Encoded 是否已赋值
                     * 
                     */
                    bool ScfIsBase64EncodedHasBeenSet() const;

                    /**
                     * 获取Whether response integration is enabled for the cloud function, default false
                     * @return ScfIsIntegratedResponse Whether response integration is enabled for the cloud function, default false
                     * 
                     */
                    bool GetScfIsIntegratedResponse() const;

                    /**
                     * 设置Whether response integration is enabled for the cloud function, default false
                     * @param _scfIsIntegratedResponse Whether response integration is enabled for the cloud function, default false
                     * 
                     */
                    void SetScfIsIntegratedResponse(const bool& _scfIsIntegratedResponse);

                    /**
                     * 判断参数 ScfIsIntegratedResponse 是否已赋值
                     * @return ScfIsIntegratedResponse 是否已赋值
                     * 
                     */
                    bool ScfIsIntegratedResponseHasBeenSet() const;

                private:

                    /**
                     * IP or domain
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Port.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Service source ID
                     */
                    std::string m_sourceID;
                    bool m_sourceIDHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Service (registration center or service in Kubernetes) name
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * The backend type is IPList when provided by the service
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KongTarget> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * Service source type
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * SCF Function Type
                     */
                    std::string m_scfType;
                    bool m_scfTypeHasBeenSet;

                    /**
                     * SCF function namespace
                     */
                    std::string m_scfNamespace;
                    bool m_scfNamespaceHasBeenSet;

                    /**
                     * SCF Function Name
                     */
                    std::string m_scfLambdaName;
                    bool m_scfLambdaNameHasBeenSet;

                    /**
                     * SCF Function Version
                     */
                    std::string m_scfLambdaQualifier;
                    bool m_scfLambdaQualifierHasBeenSet;

                    /**
                     * Cold start time, in seconds
                     */
                    int64_t m_slowStart;
                    bool m_slowStartHasBeenSet;

                    /**
                     * Load balancing algorithm, defaults to round-robin, also supports least-connections, consisten_hashing
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * Auto scaling group ID of CVM
                     */
                    std::string m_autoScalingGroupID;
                    bool m_autoScalingGroupIDHasBeenSet;

                    /**
                     * CVM auto scaling group port
                     */
                    uint64_t m_autoScalingCvmPort;
                    bool m_autoScalingCvmPortHasBeenSet;

                    /**
                     * TAT command status of the CVM used in the auto scaling group
                     */
                    std::string m_autoScalingTatCmdStatus;
                    bool m_autoScalingTatCmdStatusHasBeenSet;

                    /**
                     * CVM auto scaling group lifecycle hook status
                     */
                    std::string m_autoScalingHookStatus;
                    bool m_autoScalingHookStatusHasBeenSet;

                    /**
                     * Service source name.
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * Precise service source type. Type passed in when creating a service source.
                     */
                    std::string m_realSourceType;
                    bool m_realSourceTypeHasBeenSet;

                    /**
                     * upstream health status HEALTHY (healthy), UNHEALTHY (abnormal), HEALTHCHECKS_OFF (not enabled), and NONE (health checks not supported)
                     */
                    std::string m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * Whether CAM authentication is enabled for SCF. Enabled by default (true) when left blank.
                     */
                    bool m_scfCamAuthEnable;
                    bool m_scfCamAuthEnableHasBeenSet;

                    /**
                     * Whether Base64 encoding is enabled for SCF, default false
                     */
                    bool m_scfIsBase64Encoded;
                    bool m_scfIsBase64EncodedHasBeenSet;

                    /**
                     * Whether response integration is enabled for the cloud function, default false
                     */
                    bool m_scfIsIntegratedResponse;
                    bool m_scfIsIntegratedResponseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGUPSTREAMINFO_H_
