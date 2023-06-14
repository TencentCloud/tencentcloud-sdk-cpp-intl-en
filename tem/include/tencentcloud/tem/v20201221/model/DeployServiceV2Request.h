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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_DEPLOYSERVICEV2REQUEST_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_DEPLOYSERVICEV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20201221/model/EsInfo.h>
#include <tencentcloud/tem/v20201221/model/Pair.h>
#include <tencentcloud/tem/v20201221/model/StorageConf.h>
#include <tencentcloud/tem/v20201221/model/StorageMountConf.h>
#include <tencentcloud/tem/v20201221/model/LogOutputConf.h>
#include <tencentcloud/tem/v20201221/model/PortMapping.h>
#include <tencentcloud/tem/v20201221/model/MountedSettingConf.h>
#include <tencentcloud/tem/v20201221/model/EksService.h>
#include <tencentcloud/tem/v20201221/model/DeployStrategyConf.h>
#include <tencentcloud/tem/v20201221/model/HealthCheckConfig.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * DeployServiceV2 request structure.
                */
                class DeployServiceV2Request : public AbstractModel
                {
                public:
                    DeployServiceV2Request();
                    ~DeployServiceV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service ID
                     * @return ServiceId Service ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service ID
                     * @param _serviceId Service ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Container port
                     * @return ContainerPort Container port
                     * 
                     */
                    uint64_t GetContainerPort() const;

                    /**
                     * 设置Container port
                     * @param _containerPort Container port
                     * 
                     */
                    void SetContainerPort(const uint64_t& _containerPort);

                    /**
                     * 判断参数 ContainerPort 是否已赋值
                     * @return ContainerPort 是否已赋值
                     * 
                     */
                    bool ContainerPortHasBeenSet() const;

                    /**
                     * 获取Number of initialized pods
                     * @return InitPodNum Number of initialized pods
                     * 
                     */
                    uint64_t GetInitPodNum() const;

                    /**
                     * 设置Number of initialized pods
                     * @param _initPodNum Number of initialized pods
                     * 
                     */
                    void SetInitPodNum(const uint64_t& _initPodNum);

                    /**
                     * 判断参数 InitPodNum 是否已赋值
                     * @return InitPodNum 是否已赋值
                     * 
                     */
                    bool InitPodNumHasBeenSet() const;

                    /**
                     * 获取CPU specification
                     * @return CpuSpec CPU specification
                     * 
                     */
                    double GetCpuSpec() const;

                    /**
                     * 设置CPU specification
                     * @param _cpuSpec CPU specification
                     * 
                     */
                    void SetCpuSpec(const double& _cpuSpec);

                    /**
                     * 判断参数 CpuSpec 是否已赋值
                     * @return CpuSpec 是否已赋值
                     * 
                     */
                    bool CpuSpecHasBeenSet() const;

                    /**
                     * 获取Memory specification
                     * @return MemorySpec Memory specification
                     * 
                     */
                    double GetMemorySpec() const;

                    /**
                     * 设置Memory specification
                     * @param _memorySpec Memory specification
                     * 
                     */
                    void SetMemorySpec(const double& _memorySpec);

                    /**
                     * 判断参数 MemorySpec 是否已赋值
                     * @return MemorySpec 是否已赋值
                     * 
                     */
                    bool MemorySpecHasBeenSet() const;

                    /**
                     * 获取Environment ID
                     * @return NamespaceId Environment ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Environment ID
                     * @param _namespaceId Environment ID
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取Image repository
                     * @return ImgRepo Image repository
                     * 
                     */
                    std::string GetImgRepo() const;

                    /**
                     * 设置Image repository
                     * @param _imgRepo Image repository
                     * 
                     */
                    void SetImgRepo(const std::string& _imgRepo);

                    /**
                     * 判断参数 ImgRepo 是否已赋值
                     * @return ImgRepo 是否已赋值
                     * 
                     */
                    bool ImgRepoHasBeenSet() const;

                    /**
                     * 获取Version description
                     * @return VersionDesc Version description
                     * 
                     */
                    std::string GetVersionDesc() const;

                    /**
                     * 设置Version description
                     * @param _versionDesc Version description
                     * 
                     */
                    void SetVersionDesc(const std::string& _versionDesc);

                    /**
                     * 判断参数 VersionDesc 是否已赋值
                     * @return VersionDesc 是否已赋值
                     * 
                     */
                    bool VersionDescHasBeenSet() const;

                    /**
                     * 获取Launch parameters
                     * @return JvmOpts Launch parameters
                     * 
                     */
                    std::string GetJvmOpts() const;

                    /**
                     * 设置Launch parameters
                     * @param _jvmOpts Launch parameters
                     * 
                     */
                    void SetJvmOpts(const std::string& _jvmOpts);

                    /**
                     * 判断参数 JvmOpts 是否已赋值
                     * @return JvmOpts 是否已赋值
                     * 
                     */
                    bool JvmOptsHasBeenSet() const;

                    /**
                     * 获取Auto scaling configuration. If this parameter is left empty, auto scaling will not be enabled
                     * @return EsInfo Auto scaling configuration. If this parameter is left empty, auto scaling will not be enabled
                     * 
                     */
                    EsInfo GetEsInfo() const;

                    /**
                     * 设置Auto scaling configuration. If this parameter is left empty, auto scaling will not be enabled
                     * @param _esInfo Auto scaling configuration. If this parameter is left empty, auto scaling will not be enabled
                     * 
                     */
                    void SetEsInfo(const EsInfo& _esInfo);

                    /**
                     * 判断参数 EsInfo 是否已赋值
                     * @return EsInfo 是否已赋值
                     * 
                     */
                    bool EsInfoHasBeenSet() const;

                    /**
                     * 获取Environment variable configuration
                     * @return EnvConf Environment variable configuration
                     * 
                     */
                    std::vector<Pair> GetEnvConf() const;

                    /**
                     * 设置Environment variable configuration
                     * @param _envConf Environment variable configuration
                     * 
                     */
                    void SetEnvConf(const std::vector<Pair>& _envConf);

                    /**
                     * 判断参数 EnvConf 是否已赋值
                     * @return EnvConf 是否已赋值
                     * 
                     */
                    bool EnvConfHasBeenSet() const;

                    /**
                     * 获取Log configuration
                     * @return LogConfs Log configuration
                     * 
                     */
                    std::vector<std::string> GetLogConfs() const;

                    /**
                     * 设置Log configuration
                     * @param _logConfs Log configuration
                     * 
                     */
                    void SetLogConfs(const std::vector<std::string>& _logConfs);

                    /**
                     * 判断参数 LogConfs 是否已赋值
                     * @return LogConfs 是否已赋值
                     * 
                     */
                    bool LogConfsHasBeenSet() const;

                    /**
                     * 获取Data volume configuration
                     * @return StorageConfs Data volume configuration
                     * 
                     */
                    std::vector<StorageConf> GetStorageConfs() const;

                    /**
                     * 设置Data volume configuration
                     * @param _storageConfs Data volume configuration
                     * 
                     */
                    void SetStorageConfs(const std::vector<StorageConf>& _storageConfs);

                    /**
                     * 判断参数 StorageConfs 是否已赋值
                     * @return StorageConfs 是否已赋值
                     * 
                     */
                    bool StorageConfsHasBeenSet() const;

                    /**
                     * 获取Data volume mount configuration
                     * @return StorageMountConfs Data volume mount configuration
                     * 
                     */
                    std::vector<StorageMountConf> GetStorageMountConfs() const;

                    /**
                     * 设置Data volume mount configuration
                     * @param _storageMountConfs Data volume mount configuration
                     * 
                     */
                    void SetStorageMountConfs(const std::vector<StorageMountConf>& _storageMountConfs);

                    /**
                     * 判断参数 StorageMountConfs 是否已赋值
                     * @return StorageMountConfs 是否已赋值
                     * 
                     */
                    bool StorageMountConfsHasBeenSet() const;

                    /**
                     * 获取Deployment type.
- JAR: deployment through JAR package
- WAR: deployment through WAR package
- IMAGE: deployment through image
                     * @return DeployMode Deployment type.
- JAR: deployment through JAR package
- WAR: deployment through WAR package
- IMAGE: deployment through image
                     * 
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置Deployment type.
- JAR: deployment through JAR package
- WAR: deployment through WAR package
- IMAGE: deployment through image
                     * @param _deployMode Deployment type.
- JAR: deployment through JAR package
- WAR: deployment through WAR package
- IMAGE: deployment through image
                     * 
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取When the deployment type is `IMAGE`, this parameter indicates the image tag.
When the deployment type is `JAR` or `WAR`, this parameter indicates the package version number.
                     * @return DeployVersion When the deployment type is `IMAGE`, this parameter indicates the image tag.
When the deployment type is `JAR` or `WAR`, this parameter indicates the package version number.
                     * 
                     */
                    std::string GetDeployVersion() const;

                    /**
                     * 设置When the deployment type is `IMAGE`, this parameter indicates the image tag.
When the deployment type is `JAR` or `WAR`, this parameter indicates the package version number.
                     * @param _deployVersion When the deployment type is `IMAGE`, this parameter indicates the image tag.
When the deployment type is `JAR` or `WAR`, this parameter indicates the package version number.
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
                     * 获取Package name, which is required when using JAR or WAR packages for deployment.
                     * @return PkgName Package name, which is required when using JAR or WAR packages for deployment.
                     * 
                     */
                    std::string GetPkgName() const;

                    /**
                     * 设置Package name, which is required when using JAR or WAR packages for deployment.
                     * @param _pkgName Package name, which is required when using JAR or WAR packages for deployment.
                     * 
                     */
                    void SetPkgName(const std::string& _pkgName);

                    /**
                     * 判断参数 PkgName 是否已赋值
                     * @return PkgName 是否已赋值
                     * 
                     */
                    bool PkgNameHasBeenSet() const;

                    /**
                     * 获取JDK version.
- KONA: use KONA JDK.
- OPEN: use open JDK.
                     * @return JdkVersion JDK version.
- KONA: use KONA JDK.
- OPEN: use open JDK.
                     * 
                     */
                    std::string GetJdkVersion() const;

                    /**
                     * 设置JDK version.
- KONA: use KONA JDK.
- OPEN: use open JDK.
                     * @param _jdkVersion JDK version.
- KONA: use KONA JDK.
- OPEN: use open JDK.
                     * 
                     */
                    void SetJdkVersion(const std::string& _jdkVersion);

                    /**
                     * 判断参数 JdkVersion 是否已赋值
                     * @return JdkVersion 是否已赋值
                     * 
                     */
                    bool JdkVersionHasBeenSet() const;

                    /**
                     * 获取Security group IDs
                     * @return SecurityGroupIds Security group IDs
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group IDs
                     * @param _securityGroupIds Security group IDs
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
                     * 获取Log output configuration
                     * @return LogOutputConf Log output configuration
                     * 
                     */
                    LogOutputConf GetLogOutputConf() const;

                    /**
                     * 设置Log output configuration
                     * @param _logOutputConf Log output configuration
                     * 
                     */
                    void SetLogOutputConf(const LogOutputConf& _logOutputConf);

                    /**
                     * 判断参数 LogOutputConf 是否已赋值
                     * @return LogOutputConf 是否已赋值
                     * 
                     */
                    bool LogOutputConfHasBeenSet() const;

                    /**
                     * 获取Source channel
                     * @return SourceChannel Source channel
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel
                     * @param _sourceChannel Source channel
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取Version description
                     * @return Description Version description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Version description
                     * @param _description Version description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Image command
                     * @return ImageCommand Image command
                     * 
                     */
                    std::string GetImageCommand() const;

                    /**
                     * 设置Image command
                     * @param _imageCommand Image command
                     * 
                     */
                    void SetImageCommand(const std::string& _imageCommand);

                    /**
                     * 判断参数 ImageCommand 是否已赋值
                     * @return ImageCommand 是否已赋值
                     * 
                     */
                    bool ImageCommandHasBeenSet() const;

                    /**
                     * 获取Image command parameters
                     * @return ImageArgs Image command parameters
                     * 
                     */
                    std::vector<std::string> GetImageArgs() const;

                    /**
                     * 设置Image command parameters
                     * @param _imageArgs Image command parameters
                     * 
                     */
                    void SetImageArgs(const std::vector<std::string>& _imageArgs);

                    /**
                     * 判断参数 ImageArgs 是否已赋值
                     * @return ImageArgs 是否已赋值
                     * 
                     */
                    bool ImageArgsHasBeenSet() const;

                    /**
                     * 获取Service port mapping.
                     * @return PortMappings Service port mapping.
                     * 
                     */
                    std::vector<PortMapping> GetPortMappings() const;

                    /**
                     * 设置Service port mapping.
                     * @param _portMappings Service port mapping.
                     * 
                     */
                    void SetPortMappings(const std::vector<PortMapping>& _portMappings);

                    /**
                     * 判断参数 PortMappings 是否已赋值
                     * @return PortMappings 是否已赋值
                     * 
                     */
                    bool PortMappingsHasBeenSet() const;

                    /**
                     * 获取Whether to add the registry’s default configurations.
                     * @return UseRegistryDefaultConfig Whether to add the registry’s default configurations.
                     * 
                     */
                    bool GetUseRegistryDefaultConfig() const;

                    /**
                     * 设置Whether to add the registry’s default configurations.
                     * @param _useRegistryDefaultConfig Whether to add the registry’s default configurations.
                     * 
                     */
                    void SetUseRegistryDefaultConfig(const bool& _useRegistryDefaultConfig);

                    /**
                     * 判断参数 UseRegistryDefaultConfig 是否已赋值
                     * @return UseRegistryDefaultConfig 是否已赋值
                     * 
                     */
                    bool UseRegistryDefaultConfigHasBeenSet() const;

                    /**
                     * 获取Mounting configurations
                     * @return SettingConfs Mounting configurations
                     * 
                     */
                    std::vector<MountedSettingConf> GetSettingConfs() const;

                    /**
                     * 设置Mounting configurations
                     * @param _settingConfs Mounting configurations
                     * 
                     */
                    void SetSettingConfs(const std::vector<MountedSettingConf>& _settingConfs);

                    /**
                     * 判断参数 SettingConfs 是否已赋值
                     * @return SettingConfs 是否已赋值
                     * 
                     */
                    bool SettingConfsHasBeenSet() const;

                    /**
                     * 获取EKS access configuration
                     * @return EksService EKS access configuration
                     * 
                     */
                    EksService GetEksService() const;

                    /**
                     * 设置EKS access configuration
                     * @param _eksService EKS access configuration
                     * 
                     */
                    void SetEksService(const EksService& _eksService);

                    /**
                     * 判断参数 EksService 是否已赋值
                     * @return EksService 是否已赋值
                     * 
                     */
                    bool EksServiceHasBeenSet() const;

                    /**
                     * 获取ID of the version that you want to roll back to
                     * @return VersionId ID of the version that you want to roll back to
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置ID of the version that you want to roll back to
                     * @param _versionId ID of the version that you want to roll back to
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取The script to run after startup
                     * @return PostStart The script to run after startup
                     * 
                     */
                    std::string GetPostStart() const;

                    /**
                     * 设置The script to run after startup
                     * @param _postStart The script to run after startup
                     * 
                     */
                    void SetPostStart(const std::string& _postStart);

                    /**
                     * 判断参数 PostStart 是否已赋值
                     * @return PostStart 是否已赋值
                     * 
                     */
                    bool PostStartHasBeenSet() const;

                    /**
                     * 获取The script to run before stop
                     * @return PreStop The script to run before stop
                     * 
                     */
                    std::string GetPreStop() const;

                    /**
                     * 设置The script to run before stop
                     * @param _preStop The script to run before stop
                     * 
                     */
                    void SetPreStop(const std::string& _preStop);

                    /**
                     * 判断参数 PreStop 是否已赋值
                     * @return PreStop 是否已赋值
                     * 
                     */
                    bool PreStopHasBeenSet() const;

                    /**
                     * 获取Configuration of 
                     * @return DeployStrategyConf Configuration of 
                     * 
                     */
                    DeployStrategyConf GetDeployStrategyConf() const;

                    /**
                     * 设置Configuration of 
                     * @param _deployStrategyConf Configuration of 
                     * 
                     */
                    void SetDeployStrategyConf(const DeployStrategyConf& _deployStrategyConf);

                    /**
                     * 判断参数 DeployStrategyConf 是否已赋值
                     * @return DeployStrategyConf 是否已赋值
                     * 
                     */
                    bool DeployStrategyConfHasBeenSet() const;

                    /**
                     * 获取Configuration of aliveness probe
                     * @return Liveness Configuration of aliveness probe
                     * 
                     */
                    HealthCheckConfig GetLiveness() const;

                    /**
                     * 设置Configuration of aliveness probe
                     * @param _liveness Configuration of aliveness probe
                     * 
                     */
                    void SetLiveness(const HealthCheckConfig& _liveness);

                    /**
                     * 判断参数 Liveness 是否已赋值
                     * @return Liveness 是否已赋值
                     * 
                     */
                    bool LivenessHasBeenSet() const;

                    /**
                     * 获取Configuration of readiness probe
                     * @return Readiness Configuration of readiness probe
                     * 
                     */
                    HealthCheckConfig GetReadiness() const;

                    /**
                     * 设置Configuration of readiness probe
                     * @param _readiness Configuration of readiness probe
                     * 
                     */
                    void SetReadiness(const HealthCheckConfig& _readiness);

                    /**
                     * 判断参数 Readiness 是否已赋值
                     * @return Readiness 是否已赋值
                     * 
                     */
                    bool ReadinessHasBeenSet() const;

                private:

                    /**
                     * Service ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Container port
                     */
                    uint64_t m_containerPort;
                    bool m_containerPortHasBeenSet;

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
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

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
                     * Auto scaling configuration. If this parameter is left empty, auto scaling will not be enabled
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
                     * Deployment type.
- JAR: deployment through JAR package
- WAR: deployment through WAR package
- IMAGE: deployment through image
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * When the deployment type is `IMAGE`, this parameter indicates the image tag.
When the deployment type is `JAR` or `WAR`, this parameter indicates the package version number.
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

                    /**
                     * Package name, which is required when using JAR or WAR packages for deployment.
                     */
                    std::string m_pkgName;
                    bool m_pkgNameHasBeenSet;

                    /**
                     * JDK version.
- KONA: use KONA JDK.
- OPEN: use open JDK.
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
                     * Service port mapping.
                     */
                    std::vector<PortMapping> m_portMappings;
                    bool m_portMappingsHasBeenSet;

                    /**
                     * Whether to add the registry’s default configurations.
                     */
                    bool m_useRegistryDefaultConfig;
                    bool m_useRegistryDefaultConfigHasBeenSet;

                    /**
                     * Mounting configurations
                     */
                    std::vector<MountedSettingConf> m_settingConfs;
                    bool m_settingConfsHasBeenSet;

                    /**
                     * EKS access configuration
                     */
                    EksService m_eksService;
                    bool m_eksServiceHasBeenSet;

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
                     * Configuration of 
                     */
                    DeployStrategyConf m_deployStrategyConf;
                    bool m_deployStrategyConfHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_DEPLOYSERVICEV2REQUEST_H_
