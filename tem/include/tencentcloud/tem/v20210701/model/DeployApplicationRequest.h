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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/EsInfo.h>
#include <tencentcloud/tem/v20210701/model/Pair.h>
#include <tencentcloud/tem/v20210701/model/StorageConf.h>
#include <tencentcloud/tem/v20210701/model/StorageMountConf.h>
#include <tencentcloud/tem/v20210701/model/LogOutputConf.h>
#include <tencentcloud/tem/v20210701/model/MountedSettingConf.h>
#include <tencentcloud/tem/v20210701/model/EksService.h>
#include <tencentcloud/tem/v20210701/model/HealthCheckConfig.h>
#include <tencentcloud/tem/v20210701/model/DeployStrategyConf.h>
#include <tencentcloud/tem/v20210701/model/HorizontalAutoscaler.h>
#include <tencentcloud/tem/v20210701/model/CronHorizontalAutoscaler.h>
#include <tencentcloud/tem/v20210701/model/EnablePrometheusConf.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DeployApplication request structure.
                */
                class DeployApplicationRequest : public AbstractModel
                {
                public:
                    DeployApplicationRequest();
                    ~DeployApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return ApplicationId Application ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
                     * @param ApplicationId Application ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Number of initialized pods
                     * @return InitPodNum Number of initialized pods
                     */
                    uint64_t GetInitPodNum() const;

                    /**
                     * 设置Number of initialized pods
                     * @param InitPodNum Number of initialized pods
                     */
                    void SetInitPodNum(const uint64_t& _initPodNum);

                    /**
                     * 判断参数 InitPodNum 是否已赋值
                     * @return InitPodNum 是否已赋值
                     */
                    bool InitPodNumHasBeenSet() const;

                    /**
                     * 获取CPU specification
                     * @return CpuSpec CPU specification
                     */
                    double GetCpuSpec() const;

                    /**
                     * 设置CPU specification
                     * @param CpuSpec CPU specification
                     */
                    void SetCpuSpec(const double& _cpuSpec);

                    /**
                     * 判断参数 CpuSpec 是否已赋值
                     * @return CpuSpec 是否已赋值
                     */
                    bool CpuSpecHasBeenSet() const;

                    /**
                     * 获取Memory specification
                     * @return MemorySpec Memory specification
                     */
                    double GetMemorySpec() const;

                    /**
                     * 设置Memory specification
                     * @param MemorySpec Memory specification
                     */
                    void SetMemorySpec(const double& _memorySpec);

                    /**
                     * 判断参数 MemorySpec 是否已赋值
                     * @return MemorySpec 是否已赋值
                     */
                    bool MemorySpecHasBeenSet() const;

                    /**
                     * 获取Environment ID
                     * @return EnvironmentId Environment ID
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
                     * @param EnvironmentId Environment ID
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Image repository
                     * @return ImgRepo Image repository
                     */
                    std::string GetImgRepo() const;

                    /**
                     * 设置Image repository
                     * @param ImgRepo Image repository
                     */
                    void SetImgRepo(const std::string& _imgRepo);

                    /**
                     * 判断参数 ImgRepo 是否已赋值
                     * @return ImgRepo 是否已赋值
                     */
                    bool ImgRepoHasBeenSet() const;

                    /**
                     * 获取Version description
                     * @return VersionDesc Version description
                     */
                    std::string GetVersionDesc() const;

                    /**
                     * 设置Version description
                     * @param VersionDesc Version description
                     */
                    void SetVersionDesc(const std::string& _versionDesc);

                    /**
                     * 判断参数 VersionDesc 是否已赋值
                     * @return VersionDesc 是否已赋值
                     */
                    bool VersionDescHasBeenSet() const;

                    /**
                     * 获取Launch parameters
                     * @return JvmOpts Launch parameters
                     */
                    std::string GetJvmOpts() const;

                    /**
                     * 设置Launch parameters
                     * @param JvmOpts Launch parameters
                     */
                    void SetJvmOpts(const std::string& _jvmOpts);

                    /**
                     * 判断参数 JvmOpts 是否已赋值
                     * @return JvmOpts 是否已赋值
                     */
                    bool JvmOptsHasBeenSet() const;

                    /**
                     * 获取Auto scaling configuration (This field is disused. Please use `HorizontalAutoscaler` to set the auto scaling policy.)
                     * @return EsInfo Auto scaling configuration (This field is disused. Please use `HorizontalAutoscaler` to set the auto scaling policy.)
                     */
                    EsInfo GetEsInfo() const;

                    /**
                     * 设置Auto scaling configuration (This field is disused. Please use `HorizontalAutoscaler` to set the auto scaling policy.)
                     * @param EsInfo Auto scaling configuration (This field is disused. Please use `HorizontalAutoscaler` to set the auto scaling policy.)
                     */
                    void SetEsInfo(const EsInfo& _esInfo);

                    /**
                     * 判断参数 EsInfo 是否已赋值
                     * @return EsInfo 是否已赋值
                     */
                    bool EsInfoHasBeenSet() const;

                    /**
                     * 获取Environment variable configuration
                     * @return EnvConf Environment variable configuration
                     */
                    std::vector<Pair> GetEnvConf() const;

                    /**
                     * 设置Environment variable configuration
                     * @param EnvConf Environment variable configuration
                     */
                    void SetEnvConf(const std::vector<Pair>& _envConf);

                    /**
                     * 判断参数 EnvConf 是否已赋值
                     * @return EnvConf 是否已赋值
                     */
                    bool EnvConfHasBeenSet() const;

                    /**
                     * 获取Log configuration
                     * @return LogConfs Log configuration
                     */
                    std::vector<std::string> GetLogConfs() const;

                    /**
                     * 设置Log configuration
                     * @param LogConfs Log configuration
                     */
                    void SetLogConfs(const std::vector<std::string>& _logConfs);

                    /**
                     * 判断参数 LogConfs 是否已赋值
                     * @return LogConfs 是否已赋值
                     */
                    bool LogConfsHasBeenSet() const;

                    /**
                     * 获取Data volume configuration
                     * @return StorageConfs Data volume configuration
                     */
                    std::vector<StorageConf> GetStorageConfs() const;

                    /**
                     * 设置Data volume configuration
                     * @param StorageConfs Data volume configuration
                     */
                    void SetStorageConfs(const std::vector<StorageConf>& _storageConfs);

                    /**
                     * 判断参数 StorageConfs 是否已赋值
                     * @return StorageConfs 是否已赋值
                     */
                    bool StorageConfsHasBeenSet() const;

                    /**
                     * 获取Data volume mount configuration
                     * @return StorageMountConfs Data volume mount configuration
                     */
                    std::vector<StorageMountConf> GetStorageMountConfs() const;

                    /**
                     * 设置Data volume mount configuration
                     * @param StorageMountConfs Data volume mount configuration
                     */
                    void SetStorageMountConfs(const std::vector<StorageMountConf>& _storageMountConfs);

                    /**
                     * 判断参数 StorageMountConfs 是否已赋值
                     * @return StorageMountConfs 是否已赋值
                     */
                    bool StorageMountConfsHasBeenSet() const;

                    /**
                     * 获取Deployment type
- JAR: deployment through JAR package
- WAR: deployment through WAR package
- IMAGE: deployment through image
                     * @return DeployMode Deployment type
- JAR: deployment through JAR package
- WAR: deployment through WAR package
- IMAGE: deployment through image
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置Deployment type
- JAR: deployment through JAR package
- WAR: deployment through WAR package
- IMAGE: deployment through image
                     * @param DeployMode Deployment type
- JAR: deployment through JAR package
- WAR: deployment through WAR package
- IMAGE: deployment through image
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取When the deployment type is `IMAGE`, this parameter indicates the image tag
When the deployment type is `JAR` or `WAR`, this parameter indicates the package version number
                     * @return DeployVersion When the deployment type is `IMAGE`, this parameter indicates the image tag
When the deployment type is `JAR` or `WAR`, this parameter indicates the package version number
                     */
                    std::string GetDeployVersion() const;

                    /**
                     * 设置When the deployment type is `IMAGE`, this parameter indicates the image tag
When the deployment type is `JAR` or `WAR`, this parameter indicates the package version number
                     * @param DeployVersion When the deployment type is `IMAGE`, this parameter indicates the image tag
When the deployment type is `JAR` or `WAR`, this parameter indicates the package version number
                     */
                    void SetDeployVersion(const std::string& _deployVersion);

                    /**
                     * 判断参数 DeployVersion 是否已赋值
                     * @return DeployVersion 是否已赋值
                     */
                    bool DeployVersionHasBeenSet() const;

                    /**
                     * 获取Package name, which is required when using JAR or WAR packages for deployment
                     * @return PkgName Package name, which is required when using JAR or WAR packages for deployment
                     */
                    std::string GetPkgName() const;

                    /**
                     * 设置Package name, which is required when using JAR or WAR packages for deployment
                     * @param PkgName Package name, which is required when using JAR or WAR packages for deployment
                     */
                    void SetPkgName(const std::string& _pkgName);

                    /**
                     * 判断参数 PkgName 是否已赋值
                     * @return PkgName 是否已赋值
                     */
                    bool PkgNameHasBeenSet() const;

                    /**
                     * 获取JDK version
- KONA: use KONA JDK
- OPEN: use open JDK
- KONA: use KONA JDK
- OPEN: use open JDK
                     * @return JdkVersion JDK version
- KONA: use KONA JDK
- OPEN: use open JDK
- KONA: use KONA JDK
- OPEN: use open JDK
                     */
                    std::string GetJdkVersion() const;

                    /**
                     * 设置JDK version
- KONA: use KONA JDK
- OPEN: use open JDK
- KONA: use KONA JDK
- OPEN: use open JDK
                     * @param JdkVersion JDK version
- KONA: use KONA JDK
- OPEN: use open JDK
- KONA: use KONA JDK
- OPEN: use open JDK
                     */
                    void SetJdkVersion(const std::string& _jdkVersion);

                    /**
                     * 判断参数 JdkVersion 是否已赋值
                     * @return JdkVersion 是否已赋值
                     */
                    bool JdkVersionHasBeenSet() const;

                    /**
                     * 获取Security group IDs
                     * @return SecurityGroupIds Security group IDs
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group IDs
                     * @param SecurityGroupIds Security group IDs
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Log output configuration
                     * @return LogOutputConf Log output configuration
                     */
                    LogOutputConf GetLogOutputConf() const;

                    /**
                     * 设置Log output configuration
                     * @param LogOutputConf Log output configuration
                     */
                    void SetLogOutputConf(const LogOutputConf& _logOutputConf);

                    /**
                     * 判断参数 LogOutputConf 是否已赋值
                     * @return LogOutputConf 是否已赋值
                     */
                    bool LogOutputConfHasBeenSet() const;

                    /**
                     * 获取Source channel
                     * @return SourceChannel Source channel
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel
                     * @param SourceChannel Source channel
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取Version description
                     * @return Description Version description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Version description
                     * @param Description Version description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Image command
                     * @return ImageCommand Image command
                     */
                    std::string GetImageCommand() const;

                    /**
                     * 设置Image command
                     * @param ImageCommand Image command
                     */
                    void SetImageCommand(const std::string& _imageCommand);

                    /**
                     * 判断参数 ImageCommand 是否已赋值
                     * @return ImageCommand 是否已赋值
                     */
                    bool ImageCommandHasBeenSet() const;

                    /**
                     * 获取Image command parameters
                     * @return ImageArgs Image command parameters
                     */
                    std::vector<std::string> GetImageArgs() const;

                    /**
                     * 设置Image command parameters
                     * @param ImageArgs Image command parameters
                     */
                    void SetImageArgs(const std::vector<std::string>& _imageArgs);

                    /**
                     * 判断参数 ImageArgs 是否已赋值
                     * @return ImageArgs 是否已赋值
                     */
                    bool ImageArgsHasBeenSet() const;

                    /**
                     * 获取Whether to add the registry's default configurations
                     * @return UseRegistryDefaultConfig Whether to add the registry's default configurations
                     */
                    bool GetUseRegistryDefaultConfig() const;

                    /**
                     * 设置Whether to add the registry's default configurations
                     * @param UseRegistryDefaultConfig Whether to add the registry's default configurations
                     */
                    void SetUseRegistryDefaultConfig(const bool& _useRegistryDefaultConfig);

                    /**
                     * 判断参数 UseRegistryDefaultConfig 是否已赋值
                     * @return UseRegistryDefaultConfig 是否已赋值
                     */
                    bool UseRegistryDefaultConfigHasBeenSet() const;

                    /**
                     * 获取Mounting configurations
                     * @return SettingConfs Mounting configurations
                     */
                    std::vector<MountedSettingConf> GetSettingConfs() const;

                    /**
                     * 设置Mounting configurations
                     * @param SettingConfs Mounting configurations
                     */
                    void SetSettingConfs(const std::vector<MountedSettingConf>& _settingConfs);

                    /**
                     * 判断参数 SettingConfs 是否已赋值
                     * @return SettingConfs 是否已赋值
                     */
                    bool SettingConfsHasBeenSet() const;

                    /**
                     * 获取Application access configuration
                     * @return Service Application access configuration
                     */
                    EksService GetService() const;

                    /**
                     * 设置Application access configuration
                     * @param Service Application access configuration
                     */
                    void SetService(const EksService& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取ID of the version that you want to roll back to
                     * @return VersionId ID of the version that you want to roll back to
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置ID of the version that you want to roll back to
                     * @param VersionId ID of the version that you want to roll back to
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取The script to run after startup
                     * @return PostStart The script to run after startup
                     */
                    std::string GetPostStart() const;

                    /**
                     * 设置The script to run after startup
                     * @param PostStart The script to run after startup
                     */
                    void SetPostStart(const std::string& _postStart);

                    /**
                     * 判断参数 PostStart 是否已赋值
                     * @return PostStart 是否已赋值
                     */
                    bool PostStartHasBeenSet() const;

                    /**
                     * 获取The script to run before stop
                     * @return PreStop The script to run before stop
                     */
                    std::string GetPreStop() const;

                    /**
                     * 设置The script to run before stop
                     * @param PreStop The script to run before stop
                     */
                    void SetPreStop(const std::string& _preStop);

                    /**
                     * 判断参数 PreStop 是否已赋值
                     * @return PreStop 是否已赋值
                     */
                    bool PreStopHasBeenSet() const;

                    /**
                     * 获取Configuration of aliveness probe
                     * @return Liveness Configuration of aliveness probe
                     */
                    HealthCheckConfig GetLiveness() const;

                    /**
                     * 设置Configuration of aliveness probe
                     * @param Liveness Configuration of aliveness probe
                     */
                    void SetLiveness(const HealthCheckConfig& _liveness);

                    /**
                     * 判断参数 Liveness 是否已赋值
                     * @return Liveness 是否已赋值
                     */
                    bool LivenessHasBeenSet() const;

                    /**
                     * 获取Configuration of readiness probe
                     * @return Readiness Configuration of readiness probe
                     */
                    HealthCheckConfig GetReadiness() const;

                    /**
                     * 设置Configuration of readiness probe
                     * @param Readiness Configuration of readiness probe
                     */
                    void SetReadiness(const HealthCheckConfig& _readiness);

                    /**
                     * 判断参数 Readiness 是否已赋值
                     * @return Readiness 是否已赋值
                     */
                    bool ReadinessHasBeenSet() const;

                    /**
                     * 获取Configuration of batch release policies
                     * @return DeployStrategyConf Configuration of batch release policies
                     */
                    DeployStrategyConf GetDeployStrategyConf() const;

                    /**
                     * 设置Configuration of batch release policies
                     * @param DeployStrategyConf Configuration of batch release policies
                     */
                    void SetDeployStrategyConf(const DeployStrategyConf& _deployStrategyConf);

                    /**
                     * 判断参数 DeployStrategyConf 是否已赋值
                     * @return DeployStrategyConf 是否已赋值
                     */
                    bool DeployStrategyConfHasBeenSet() const;

                    /**
                     * 获取Auto scaling policy. (Disused. Please use APIs for auto scaling policy combinations)
                     * @return HorizontalAutoscaler Auto scaling policy. (Disused. Please use APIs for auto scaling policy combinations)
                     */
                    std::vector<HorizontalAutoscaler> GetHorizontalAutoscaler() const;

                    /**
                     * 设置Auto scaling policy. (Disused. Please use APIs for auto scaling policy combinations)
                     * @param HorizontalAutoscaler Auto scaling policy. (Disused. Please use APIs for auto scaling policy combinations)
                     */
                    void SetHorizontalAutoscaler(const std::vector<HorizontalAutoscaler>& _horizontalAutoscaler);

                    /**
                     * 判断参数 HorizontalAutoscaler 是否已赋值
                     * @return HorizontalAutoscaler 是否已赋值
                     */
                    bool HorizontalAutoscalerHasBeenSet() const;

                    /**
                     * 获取Scheduled scaling policy (Disused. Please use APIs for auto scaling policy combinations)
                     * @return CronHorizontalAutoscaler Scheduled scaling policy (Disused. Please use APIs for auto scaling policy combinations)
                     */
                    std::vector<CronHorizontalAutoscaler> GetCronHorizontalAutoscaler() const;

                    /**
                     * 设置Scheduled scaling policy (Disused. Please use APIs for auto scaling policy combinations)
                     * @param CronHorizontalAutoscaler Scheduled scaling policy (Disused. Please use APIs for auto scaling policy combinations)
                     */
                    void SetCronHorizontalAutoscaler(const std::vector<CronHorizontalAutoscaler>& _cronHorizontalAutoscaler);

                    /**
                     * 判断参数 CronHorizontalAutoscaler 是否已赋值
                     * @return CronHorizontalAutoscaler 是否已赋值
                     */
                    bool CronHorizontalAutoscalerHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable logging. `1`: enable; `0`: do not enable
                     * @return LogEnable Specifies whether to enable logging. `1`: enable; `0`: do not enable
                     */
                    int64_t GetLogEnable() const;

                    /**
                     * 设置Specifies whether to enable logging. `1`: enable; `0`: do not enable
                     * @param LogEnable Specifies whether to enable logging. `1`: enable; `0`: do not enable
                     */
                    void SetLogEnable(const int64_t& _logEnable);

                    /**
                     * 判断参数 LogEnable 是否已赋值
                     * @return LogEnable 是否已赋值
                     */
                    bool LogEnableHasBeenSet() const;

                    /**
                     * 获取Whether the configuration is modified (except for the image configuration)
                     * @return ConfEdited Whether the configuration is modified (except for the image configuration)
                     */
                    bool GetConfEdited() const;

                    /**
                     * 设置Whether the configuration is modified (except for the image configuration)
                     * @param ConfEdited Whether the configuration is modified (except for the image configuration)
                     */
                    void SetConfEdited(const bool& _confEdited);

                    /**
                     * 判断参数 ConfEdited 是否已赋值
                     * @return ConfEdited 是否已赋值
                     */
                    bool ConfEditedHasBeenSet() const;

                    /**
                     * 获取Whether the application acceleration is enabled 
                     * @return SpeedUp Whether the application acceleration is enabled 
                     */
                    bool GetSpeedUp() const;

                    /**
                     * 设置Whether the application acceleration is enabled 
                     * @param SpeedUp Whether the application acceleration is enabled 
                     */
                    void SetSpeedUp(const bool& _speedUp);

                    /**
                     * 判断参数 SpeedUp 是否已赋值
                     * @return SpeedUp 是否已赋值
                     */
                    bool SpeedUpHasBeenSet() const;

                    /**
                     * 获取Whether to enable probing
                     * @return StartupProbe Whether to enable probing
                     */
                    HealthCheckConfig GetStartupProbe() const;

                    /**
                     * 设置Whether to enable probing
                     * @param StartupProbe Whether to enable probing
                     */
                    void SetStartupProbe(const HealthCheckConfig& _startupProbe);

                    /**
                     * 判断参数 StartupProbe 是否已赋值
                     * @return StartupProbe 是否已赋值
                     */
                    bool StartupProbeHasBeenSet() const;

                    /**
                     * 获取The version of the operating system
If `openjdk` is selected, the value can be: 
- ALPINE
- CENTOS
If `konajdk` is selected, the value can be: 
- ALPINE
- TENCENTOS
                     * @return OsFlavour The version of the operating system
If `openjdk` is selected, the value can be: 
- ALPINE
- CENTOS
If `konajdk` is selected, the value can be: 
- ALPINE
- TENCENTOS
                     */
                    std::string GetOsFlavour() const;

                    /**
                     * 设置The version of the operating system
If `openjdk` is selected, the value can be: 
- ALPINE
- CENTOS
If `konajdk` is selected, the value can be: 
- ALPINE
- TENCENTOS
                     * @param OsFlavour The version of the operating system
If `openjdk` is selected, the value can be: 
- ALPINE
- CENTOS
If `konajdk` is selected, the value can be: 
- ALPINE
- TENCENTOS
                     */
                    void SetOsFlavour(const std::string& _osFlavour);

                    /**
                     * 判断参数 OsFlavour 是否已赋值
                     * @return OsFlavour 是否已赋值
                     */
                    bool OsFlavourHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable Prometheus metric
                     * @return EnablePrometheusConf Specifies whether to enable Prometheus metric
                     */
                    EnablePrometheusConf GetEnablePrometheusConf() const;

                    /**
                     * 设置Specifies whether to enable Prometheus metric
                     * @param EnablePrometheusConf Specifies whether to enable Prometheus metric
                     */
                    void SetEnablePrometheusConf(const EnablePrometheusConf& _enablePrometheusConf);

                    /**
                     * 判断参数 EnablePrometheusConf 是否已赋值
                     * @return EnablePrometheusConf 是否已赋值
                     */
                    bool EnablePrometheusConfHasBeenSet() const;

                    /**
                     * 获取`1`: Enable APM tracing (Skywalking)
`0`: Disable APM tracing
                     * @return EnableTracing `1`: Enable APM tracing (Skywalking)
`0`: Disable APM tracing
                     */
                    int64_t GetEnableTracing() const;

                    /**
                     * 设置`1`: Enable APM tracing (Skywalking)
`0`: Disable APM tracing
                     * @param EnableTracing `1`: Enable APM tracing (Skywalking)
`0`: Disable APM tracing
                     */
                    void SetEnableTracing(const int64_t& _enableTracing);

                    /**
                     * 判断参数 EnableTracing 是否已赋值
                     * @return EnableTracing 是否已赋值
                     */
                    bool EnableTracingHasBeenSet() const;

                    /**
                     * 获取
                     * @return EnableMetrics 
                     */
                    int64_t GetEnableMetrics() const;

                    /**
                     * 设置
                     * @param EnableMetrics 
                     */
                    void SetEnableMetrics(const int64_t& _enableMetrics);

                    /**
                     * 判断参数 EnableMetrics 是否已赋值
                     * @return EnableMetrics 是否已赋值
                     */
                    bool EnableMetricsHasBeenSet() const;

                    /**
                     * 获取
                     * @return TcrInstanceId 
                     */
                    std::string GetTcrInstanceId() const;

                    /**
                     * 设置
                     * @param TcrInstanceId 
                     */
                    void SetTcrInstanceId(const std::string& _tcrInstanceId);

                    /**
                     * 判断参数 TcrInstanceId 是否已赋值
                     * @return TcrInstanceId 是否已赋值
                     */
                    bool TcrInstanceIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return RepoServer 
                     */
                    std::string GetRepoServer() const;

                    /**
                     * 设置
                     * @param RepoServer 
                     */
                    void SetRepoServer(const std::string& _repoServer);

                    /**
                     * 判断参数 RepoServer 是否已赋值
                     * @return RepoServer 是否已赋值
                     */
                    bool RepoServerHasBeenSet() const;

                    /**
                     * 获取
                     * @return RepoType 
                     */
                    int64_t GetRepoType() const;

                    /**
                     * 设置
                     * @param RepoType 
                     */
                    void SetRepoType(const int64_t& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     */
                    bool RepoTypeHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Number of initialized pods
                     */
                    uint64_t m_initPodNum;
                    bool m_initPodNumHasBeenSet;

                    /**
                     * CPU specification
                     */
                    double m_cpuSpec;
                    bool m_cpuSpecHasBeenSet;

                    /**
                     * Memory specification
                     */
                    double m_memorySpec;
                    bool m_memorySpecHasBeenSet;

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Image repository
                     */
                    std::string m_imgRepo;
                    bool m_imgRepoHasBeenSet;

                    /**
                     * Version description
                     */
                    std::string m_versionDesc;
                    bool m_versionDescHasBeenSet;

                    /**
                     * Launch parameters
                     */
                    std::string m_jvmOpts;
                    bool m_jvmOptsHasBeenSet;

                    /**
                     * Auto scaling configuration (This field is disused. Please use `HorizontalAutoscaler` to set the auto scaling policy.)
                     */
                    EsInfo m_esInfo;
                    bool m_esInfoHasBeenSet;

                    /**
                     * Environment variable configuration
                     */
                    std::vector<Pair> m_envConf;
                    bool m_envConfHasBeenSet;

                    /**
                     * Log configuration
                     */
                    std::vector<std::string> m_logConfs;
                    bool m_logConfsHasBeenSet;

                    /**
                     * Data volume configuration
                     */
                    std::vector<StorageConf> m_storageConfs;
                    bool m_storageConfsHasBeenSet;

                    /**
                     * Data volume mount configuration
                     */
                    std::vector<StorageMountConf> m_storageMountConfs;
                    bool m_storageMountConfsHasBeenSet;

                    /**
                     * Deployment type
- JAR: deployment through JAR package
- WAR: deployment through WAR package
- IMAGE: deployment through image
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * When the deployment type is `IMAGE`, this parameter indicates the image tag
When the deployment type is `JAR` or `WAR`, this parameter indicates the package version number
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

                    /**
                     * Package name, which is required when using JAR or WAR packages for deployment
                     */
                    std::string m_pkgName;
                    bool m_pkgNameHasBeenSet;

                    /**
                     * JDK version
- KONA: use KONA JDK
- OPEN: use open JDK
- KONA: use KONA JDK
- OPEN: use open JDK
                     */
                    std::string m_jdkVersion;
                    bool m_jdkVersionHasBeenSet;

                    /**
                     * Security group IDs
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Log output configuration
                     */
                    LogOutputConf m_logOutputConf;
                    bool m_logOutputConfHasBeenSet;

                    /**
                     * Source channel
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * Version description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Image command
                     */
                    std::string m_imageCommand;
                    bool m_imageCommandHasBeenSet;

                    /**
                     * Image command parameters
                     */
                    std::vector<std::string> m_imageArgs;
                    bool m_imageArgsHasBeenSet;

                    /**
                     * Whether to add the registry's default configurations
                     */
                    bool m_useRegistryDefaultConfig;
                    bool m_useRegistryDefaultConfigHasBeenSet;

                    /**
                     * Mounting configurations
                     */
                    std::vector<MountedSettingConf> m_settingConfs;
                    bool m_settingConfsHasBeenSet;

                    /**
                     * Application access configuration
                     */
                    EksService m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * ID of the version that you want to roll back to
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * The script to run after startup
                     */
                    std::string m_postStart;
                    bool m_postStartHasBeenSet;

                    /**
                     * The script to run before stop
                     */
                    std::string m_preStop;
                    bool m_preStopHasBeenSet;

                    /**
                     * Configuration of aliveness probe
                     */
                    HealthCheckConfig m_liveness;
                    bool m_livenessHasBeenSet;

                    /**
                     * Configuration of readiness probe
                     */
                    HealthCheckConfig m_readiness;
                    bool m_readinessHasBeenSet;

                    /**
                     * Configuration of batch release policies
                     */
                    DeployStrategyConf m_deployStrategyConf;
                    bool m_deployStrategyConfHasBeenSet;

                    /**
                     * Auto scaling policy. (Disused. Please use APIs for auto scaling policy combinations)
                     */
                    std::vector<HorizontalAutoscaler> m_horizontalAutoscaler;
                    bool m_horizontalAutoscalerHasBeenSet;

                    /**
                     * Scheduled scaling policy (Disused. Please use APIs for auto scaling policy combinations)
                     */
                    std::vector<CronHorizontalAutoscaler> m_cronHorizontalAutoscaler;
                    bool m_cronHorizontalAutoscalerHasBeenSet;

                    /**
                     * Specifies whether to enable logging. `1`: enable; `0`: do not enable
                     */
                    int64_t m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * Whether the configuration is modified (except for the image configuration)
                     */
                    bool m_confEdited;
                    bool m_confEditedHasBeenSet;

                    /**
                     * Whether the application acceleration is enabled 
                     */
                    bool m_speedUp;
                    bool m_speedUpHasBeenSet;

                    /**
                     * Whether to enable probing
                     */
                    HealthCheckConfig m_startupProbe;
                    bool m_startupProbeHasBeenSet;

                    /**
                     * The version of the operating system
If `openjdk` is selected, the value can be: 
- ALPINE
- CENTOS
If `konajdk` is selected, the value can be: 
- ALPINE
- TENCENTOS
                     */
                    std::string m_osFlavour;
                    bool m_osFlavourHasBeenSet;

                    /**
                     * Specifies whether to enable Prometheus metric
                     */
                    EnablePrometheusConf m_enablePrometheusConf;
                    bool m_enablePrometheusConfHasBeenSet;

                    /**
                     * `1`: Enable APM tracing (Skywalking)
`0`: Disable APM tracing
                     */
                    int64_t m_enableTracing;
                    bool m_enableTracingHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_enableMetrics;
                    bool m_enableMetricsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_tcrInstanceId;
                    bool m_tcrInstanceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_repoServer;
                    bool m_repoServerHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_repoType;
                    bool m_repoTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYAPPLICATIONREQUEST_H_
