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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_TEMSERVICEVERSIONINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_TEMSERVICEVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/EsInfo.h>
#include <tencentcloud/tem/v20210701/model/Pair.h>
#include <tencentcloud/tem/v20210701/model/StorageConf.h>
#include <tencentcloud/tem/v20210701/model/StorageMountConf.h>
#include <tencentcloud/tem/v20210701/model/LogOutputConf.h>
#include <tencentcloud/tem/v20210701/model/EksService.h>
#include <tencentcloud/tem/v20210701/model/MountedSettingConf.h>
#include <tencentcloud/tem/v20210701/model/HealthCheckConfig.h>
#include <tencentcloud/tem/v20210701/model/HorizontalAutoscaler.h>
#include <tencentcloud/tem/v20210701/model/CronHorizontalAutoscaler.h>
#include <tencentcloud/tem/v20210701/model/NodeInfo.h>
#include <tencentcloud/tem/v20210701/model/WorkloadInfo.h>
#include <tencentcloud/tem/v20210701/model/EnablePrometheusConf.h>
#include <tencentcloud/tem/v20210701/model/Autoscaler.h>
#include <tencentcloud/tem/v20210701/model/DeployStrategyConf.h>
#include <tencentcloud/tem/v20210701/model/DescribeRunPodPage.h>
#include <tencentcloud/tem/v20210701/model/Tag.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Version information
                */
                class TemServiceVersionInfo : public AbstractModel
                {
                public:
                    TemServiceVersionInfo();
                    ~TemServiceVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Version ID
                     * @return VersionId Version ID
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置Version ID
                     * @param VersionId Version ID
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     */
                    bool VersionIdHasBeenSet() const;

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
                     * 获取Deployment mode
                     * @return DeployMode Deployment mode
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置Deployment mode
                     * @param DeployMode Deployment mode
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取JDK version
                     * @return JdkVersion JDK version
                     */
                    std::string GetJdkVersion() const;

                    /**
                     * 设置JDK version
                     * @param JdkVersion JDK version
                     */
                    void SetJdkVersion(const std::string& _jdkVersion);

                    /**
                     * 判断参数 JdkVersion 是否已赋值
                     * @return JdkVersion 是否已赋值
                     */
                    bool JdkVersionHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param Description Description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Deployed version
                     * @return DeployVersion Deployed version
                     */
                    std::string GetDeployVersion() const;

                    /**
                     * 设置Deployed version
                     * @param DeployVersion Deployed version
                     */
                    void SetDeployVersion(const std::string& _deployVersion);

                    /**
                     * 判断参数 DeployVersion 是否已赋值
                     * @return DeployVersion 是否已赋值
                     */
                    bool DeployVersionHasBeenSet() const;

                    /**
                     * 获取Publish mode
                     * @return PublishMode Publish mode
                     */
                    std::string GetPublishMode() const;

                    /**
                     * 设置Publish mode
                     * @param PublishMode Publish mode
                     */
                    void SetPublishMode(const std::string& _publishMode);

                    /**
                     * 判断参数 PublishMode 是否已赋值
                     * @return PublishMode 是否已赋值
                     */
                    bool PublishModeHasBeenSet() const;

                    /**
                     * 获取Launch parameter
                     * @return JvmOpts Launch parameter
                     */
                    std::string GetJvmOpts() const;

                    /**
                     * 设置Launch parameter
                     * @param JvmOpts Launch parameter
                     */
                    void SetJvmOpts(const std::string& _jvmOpts);

                    /**
                     * 判断参数 JvmOpts 是否已赋值
                     * @return JvmOpts 是否已赋值
                     */
                    bool JvmOptsHasBeenSet() const;

                    /**
                     * 获取Number of initial pods
                     * @return InitPodNum Number of initial pods
                     */
                    int64_t GetInitPodNum() const;

                    /**
                     * 设置Number of initial pods
                     * @param InitPodNum Number of initial pods
                     */
                    void SetInitPodNum(const int64_t& _initPodNum);

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
                     * 获取Image path
                     * @return ImgRepo Image path
                     */
                    std::string GetImgRepo() const;

                    /**
                     * 设置Image path
                     * @param ImgRepo Image path
                     */
                    void SetImgRepo(const std::string& _imgRepo);

                    /**
                     * 判断参数 ImgRepo 是否已赋值
                     * @return ImgRepo 是否已赋值
                     */
                    bool ImgRepoHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImgName Image name
                     */
                    std::string GetImgName() const;

                    /**
                     * 设置Image name
                     * @param ImgName Image name
                     */
                    void SetImgName(const std::string& _imgName);

                    /**
                     * 判断参数 ImgName 是否已赋值
                     * @return ImgName 是否已赋值
                     */
                    bool ImgNameHasBeenSet() const;

                    /**
                     * 获取Image version
                     * @return ImgVersion Image version
                     */
                    std::string GetImgVersion() const;

                    /**
                     * 设置Image version
                     * @param ImgVersion Image version
                     */
                    void SetImgVersion(const std::string& _imgVersion);

                    /**
                     * 判断参数 ImgVersion 是否已赋值
                     * @return ImgVersion 是否已赋值
                     */
                    bool ImgVersionHasBeenSet() const;

                    /**
                     * 获取Scaling configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EsInfo Scaling configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    EsInfo GetEsInfo() const;

                    /**
                     * 设置Scaling configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EsInfo Scaling configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEsInfo(const EsInfo& _esInfo);

                    /**
                     * 判断参数 EsInfo 是否已赋值
                     * @return EsInfo 是否已赋值
                     */
                    bool EsInfoHasBeenSet() const;

                    /**
                     * 获取Environment configuration
                     * @return EnvConf Environment configuration
                     */
                    std::vector<Pair> GetEnvConf() const;

                    /**
                     * 设置Environment configuration
                     * @param EnvConf Environment configuration
                     */
                    void SetEnvConf(const std::vector<Pair>& _envConf);

                    /**
                     * 判断参数 EnvConf 是否已赋值
                     * @return EnvConf 是否已赋值
                     */
                    bool EnvConfHasBeenSet() const;

                    /**
                     * 获取Storage configuration
                     * @return StorageConfs Storage configuration
                     */
                    std::vector<StorageConf> GetStorageConfs() const;

                    /**
                     * 设置Storage configuration
                     * @param StorageConfs Storage configuration
                     */
                    void SetStorageConfs(const std::vector<StorageConf>& _storageConfs);

                    /**
                     * 判断参数 StorageConfs 是否已赋值
                     * @return StorageConfs 是否已赋值
                     */
                    bool StorageConfsHasBeenSet() const;

                    /**
                     * 获取Running status
                     * @return Status Running status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Running status
                     * @param Status Running status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取VPC
                     * @return Vpc VPC
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置VPC
                     * @param Vpc VPC
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取Subnets
                     * @return SubnetId Subnets
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnets
                     * @param SubnetId Subnets
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateDate Creation time
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置Creation time
                     * @param CreateDate Creation time
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifyDate Modification time
                     */
                    std::string GetModifyDate() const;

                    /**
                     * 设置Modification time
                     * @param ModifyDate Modification time
                     */
                    void SetModifyDate(const std::string& _modifyDate);

                    /**
                     * 判断参数 ModifyDate 是否已赋值
                     * @return ModifyDate 是否已赋值
                     */
                    bool ModifyDateHasBeenSet() const;

                    /**
                     * 获取Mounting configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return StorageMountConfs Mounting configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<StorageMountConf> GetStorageMountConfs() const;

                    /**
                     * 设置Mounting configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param StorageMountConfs Mounting configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetStorageMountConfs(const std::vector<StorageMountConf>& _storageMountConfs);

                    /**
                     * 判断参数 StorageMountConfs 是否已赋值
                     * @return StorageMountConfs 是否已赋值
                     */
                    bool StorageMountConfsHasBeenSet() const;

                    /**
                     * 获取Version name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return VersionName Version name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Version name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param VersionName Version name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取Log output configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LogOutputConf Log output configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    LogOutputConf GetLogOutputConf() const;

                    /**
                     * 设置Log output configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param LogOutputConf Log output configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLogOutputConf(const LogOutputConf& _logOutputConf);

                    /**
                     * 判断参数 LogOutputConf 是否已赋值
                     * @return LogOutputConf 是否已赋值
                     */
                    bool LogOutputConfHasBeenSet() const;

                    /**
                     * 获取Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ApplicationName Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ApplicationName Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Application description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ApplicationDescription Application description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetApplicationDescription() const;

                    /**
                     * 设置Application description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ApplicationDescription Application description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetApplicationDescription(const std::string& _applicationDescription);

                    /**
                     * 判断参数 ApplicationDescription 是否已赋值
                     * @return ApplicationDescription 是否已赋值
                     */
                    bool ApplicationDescriptionHasBeenSet() const;

                    /**
                     * 获取Environment name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EnvironmentName Environment name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param EnvironmentName Environment name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取Environment ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EnvironmentId Environment ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param EnvironmentId Environment ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Public network address
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PublicDomain Public network address
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetPublicDomain() const;

                    /**
                     * 设置Public network address
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param PublicDomain Public network address
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPublicDomain(const std::string& _publicDomain);

                    /**
                     * 判断参数 PublicDomain 是否已赋值
                     * @return PublicDomain 是否已赋值
                     */
                    bool PublicDomainHasBeenSet() const;

                    /**
                     * 获取Whether to enable public network access
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EnablePublicAccess Whether to enable public network access
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetEnablePublicAccess() const;

                    /**
                     * 设置Whether to enable public network access
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param EnablePublicAccess Whether to enable public network access
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEnablePublicAccess(const bool& _enablePublicAccess);

                    /**
                     * 判断参数 EnablePublicAccess 是否已赋值
                     * @return EnablePublicAccess 是否已赋值
                     */
                    bool EnablePublicAccessHasBeenSet() const;

                    /**
                     * 获取Number of current instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CurrentInstances Number of current instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetCurrentInstances() const;

                    /**
                     * 设置Number of current instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CurrentInstances Number of current instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCurrentInstances(const int64_t& _currentInstances);

                    /**
                     * 判断参数 CurrentInstances 是否已赋值
                     * @return CurrentInstances 是否已赋值
                     */
                    bool CurrentInstancesHasBeenSet() const;

                    /**
                     * 获取Number of expected instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ExpectedInstances Number of expected instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetExpectedInstances() const;

                    /**
                     * 设置Number of expected instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ExpectedInstances Number of expected instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetExpectedInstances(const int64_t& _expectedInstances);

                    /**
                     * 判断参数 ExpectedInstances 是否已赋值
                     * @return ExpectedInstances 是否已赋值
                     */
                    bool ExpectedInstancesHasBeenSet() const;

                    /**
                     * 获取Programming Language
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CodingLanguage Programming Language
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCodingLanguage() const;

                    /**
                     * 设置Programming Language
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CodingLanguage Programming Language
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCodingLanguage(const std::string& _codingLanguage);

                    /**
                     * 判断参数 CodingLanguage 是否已赋值
                     * @return CodingLanguage 是否已赋值
                     */
                    bool CodingLanguageHasBeenSet() const;

                    /**
                     * 获取Program package name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PkgName Program package name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetPkgName() const;

                    /**
                     * 设置Program package name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param PkgName Program package name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPkgName(const std::string& _pkgName);

                    /**
                     * 判断参数 PkgName 是否已赋值
                     * @return PkgName 是否已赋值
                     */
                    bool PkgNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable auto scaling
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EsEnable Whether to enable auto scaling
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetEsEnable() const;

                    /**
                     * 设置Whether to enable auto scaling
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param EsEnable Whether to enable auto scaling
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEsEnable(const int64_t& _esEnable);

                    /**
                     * 判断参数 EsEnable 是否已赋值
                     * @return EsEnable 是否已赋值
                     */
                    bool EsEnableHasBeenSet() const;

                    /**
                     * 获取Auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EsStrategy Auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetEsStrategy() const;

                    /**
                     * 设置Auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param EsStrategy Auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEsStrategy(const int64_t& _esStrategy);

                    /**
                     * 判断参数 EsStrategy 是否已赋值
                     * @return EsStrategy 是否已赋值
                     */
                    bool EsStrategyHasBeenSet() const;

                    /**
                     * 获取Image tag
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ImageTag Image tag
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置Image tag
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ImageTag Image tag
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetImageTag(const std::string& _imageTag);

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取Whether to enable logging
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LogEnable Whether to enable logging
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetLogEnable() const;

                    /**
                     * 设置Whether to enable logging
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param LogEnable Whether to enable logging
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLogEnable(const int64_t& _logEnable);

                    /**
                     * 判断参数 LogEnable 是否已赋值
                     * @return LogEnable 是否已赋值
                     */
                    bool LogEnableHasBeenSet() const;

                    /**
                     * 获取Minimum number of instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return MinAliveInstances Minimum number of instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetMinAliveInstances() const;

                    /**
                     * 设置Minimum number of instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param MinAliveInstances Minimum number of instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMinAliveInstances(const std::string& _minAliveInstances);

                    /**
                     * 判断参数 MinAliveInstances 是否已赋值
                     * @return MinAliveInstances 是否已赋值
                     */
                    bool MinAliveInstancesHasBeenSet() const;

                    /**
                     * 获取Security group IDs
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SecurityGroupIds Security group IDs
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group IDs
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param SecurityGroupIds Security group IDs
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Image command
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ImageCommand Image command
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetImageCommand() const;

                    /**
                     * 设置Image command
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ImageCommand Image command
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetImageCommand(const std::string& _imageCommand);

                    /**
                     * 判断参数 ImageCommand 是否已赋值
                     * @return ImageCommand 是否已赋值
                     */
                    bool ImageCommandHasBeenSet() const;

                    /**
                     * 获取Image command parameters
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ImageArgs Image command parameters
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetImageArgs() const;

                    /**
                     * 设置Image command parameters
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ImageArgs Image command parameters
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetImageArgs(const std::vector<std::string>& _imageArgs);

                    /**
                     * 判断参数 ImageArgs 是否已赋值
                     * @return ImageArgs 是否已赋值
                     */
                    bool ImageArgsHasBeenSet() const;

                    /**
                     * 获取Whether to use the default registry configurations
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return UseRegistryDefaultConfig Whether to use the default registry configurations
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetUseRegistryDefaultConfig() const;

                    /**
                     * 设置Whether to use the default registry configurations
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param UseRegistryDefaultConfig Whether to use the default registry configurations
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUseRegistryDefaultConfig(const bool& _useRegistryDefaultConfig);

                    /**
                     * 判断参数 UseRegistryDefaultConfig 是否已赋值
                     * @return UseRegistryDefaultConfig 是否已赋值
                     */
                    bool UseRegistryDefaultConfigHasBeenSet() const;

                    /**
                     * 获取EKS access configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Service EKS access configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    EksService GetService() const;

                    /**
                     * 设置EKS access configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Service EKS access configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetService(const EksService& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取Mounting configurations
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SettingConfs Mounting configurations
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<MountedSettingConf> GetSettingConfs() const;

                    /**
                     * 设置Mounting configurations
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param SettingConfs Mounting configurations
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSettingConfs(const std::vector<MountedSettingConf>& _settingConfs);

                    /**
                     * 判断参数 SettingConfs 是否已赋值
                     * @return SettingConfs 是否已赋值
                     */
                    bool SettingConfsHasBeenSet() const;

                    /**
                     * 获取Log path information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LogConfs Log path information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetLogConfs() const;

                    /**
                     * 设置Log path information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param LogConfs Log path information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLogConfs(const std::vector<std::string>& _logConfs);

                    /**
                     * 判断参数 LogConfs 是否已赋值
                     * @return LogConfs 是否已赋值
                     */
                    bool LogConfsHasBeenSet() const;

                    /**
                     * 获取The script to execute right after the startup
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PostStart The script to execute right after the startup
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetPostStart() const;

                    /**
                     * 设置The script to execute right after the startup
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param PostStart The script to execute right after the startup
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPostStart(const std::string& _postStart);

                    /**
                     * 判断参数 PostStart 是否已赋值
                     * @return PostStart 是否已赋值
                     */
                    bool PostStartHasBeenSet() const;

                    /**
                     * 获取The script to run before stop
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PreStop The script to run before stop
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetPreStop() const;

                    /**
                     * 设置The script to run before stop
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param PreStop The script to run before stop
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPreStop(const std::string& _preStop);

                    /**
                     * 判断参数 PreStop 是否已赋值
                     * @return PreStop 是否已赋值
                     */
                    bool PreStopHasBeenSet() const;

                    /**
                     * 获取Configuration of aliveness probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Liveness Configuration of aliveness probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    HealthCheckConfig GetLiveness() const;

                    /**
                     * 设置Configuration of aliveness probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Liveness Configuration of aliveness probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLiveness(const HealthCheckConfig& _liveness);

                    /**
                     * 判断参数 Liveness 是否已赋值
                     * @return Liveness 是否已赋值
                     */
                    bool LivenessHasBeenSet() const;

                    /**
                     * 获取Configuration of readiness probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Readiness Configuration of readiness probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    HealthCheckConfig GetReadiness() const;

                    /**
                     * 设置Configuration of readiness probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Readiness Configuration of readiness probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetReadiness(const HealthCheckConfig& _readiness);

                    /**
                     * 判断参数 Readiness 是否已赋值
                     * @return Readiness 是否已赋值
                     */
                    bool ReadinessHasBeenSet() const;

                    /**
                     * 获取Auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return HorizontalAutoscaler Auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<HorizontalAutoscaler> GetHorizontalAutoscaler() const;

                    /**
                     * 设置Auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param HorizontalAutoscaler Auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetHorizontalAutoscaler(const std::vector<HorizontalAutoscaler>& _horizontalAutoscaler);

                    /**
                     * 判断参数 HorizontalAutoscaler 是否已赋值
                     * @return HorizontalAutoscaler 是否已赋值
                     */
                    bool HorizontalAutoscalerHasBeenSet() const;

                    /**
                     * 获取Scheduled auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CronHorizontalAutoscaler Scheduled auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<CronHorizontalAutoscaler> GetCronHorizontalAutoscaler() const;

                    /**
                     * 设置Scheduled auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CronHorizontalAutoscaler Scheduled auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCronHorizontalAutoscaler(const std::vector<CronHorizontalAutoscaler>& _cronHorizontalAutoscaler);

                    /**
                     * 判断参数 CronHorizontalAutoscaler 是否已赋值
                     * @return CronHorizontalAutoscaler 是否已赋值
                     */
                    bool CronHorizontalAutoscalerHasBeenSet() const;

                    /**
                     * 获取Availability zone of the application
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Zones Availability zone of the application
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Availability zone of the application
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Zones Availability zone of the application
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取The latest deployment time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LastDeployDate The latest deployment time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLastDeployDate() const;

                    /**
                     * 设置The latest deployment time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param LastDeployDate The latest deployment time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLastDeployDate(const std::string& _lastDeployDate);

                    /**
                     * 判断参数 LastDeployDate 是否已赋值
                     * @return LastDeployDate 是否已赋值
                     */
                    bool LastDeployDateHasBeenSet() const;

                    /**
                     * 获取The latest successful deployment time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LastDeploySuccessDate The latest successful deployment time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLastDeploySuccessDate() const;

                    /**
                     * 设置The latest successful deployment time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param LastDeploySuccessDate The latest successful deployment time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLastDeploySuccessDate(const std::string& _lastDeploySuccessDate);

                    /**
                     * 判断参数 LastDeploySuccessDate 是否已赋值
                     * @return LastDeploySuccessDate 是否已赋值
                     */
                    bool LastDeploySuccessDateHasBeenSet() const;

                    /**
                     * 获取Information of the node whether the application is deployed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return NodeInfos Information of the node whether the application is deployed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeInfo> GetNodeInfos() const;

                    /**
                     * 设置Information of the node whether the application is deployed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param NodeInfos Information of the node whether the application is deployed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetNodeInfos(const std::vector<NodeInfo>& _nodeInfos);

                    /**
                     * 判断参数 NodeInfos 是否已赋值
                     * @return NodeInfos 是否已赋值
                     */
                    bool NodeInfosHasBeenSet() const;

                    /**
                     * 获取Image type. Values: `0` (Demo image), `1` (Normal image)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ImageType Image type. Values: `0` (Demo image), `1` (Normal image)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetImageType() const;

                    /**
                     * 设置Image type. Values: `0` (Demo image), `1` (Normal image)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ImageType Image type. Values: `0` (Demo image), `1` (Normal image)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetImageType(const int64_t& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取Whether to 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EnableTracing Whether to 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetEnableTracing() const;

                    /**
                     * 设置Whether to 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param EnableTracing Whether to 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEnableTracing(const uint64_t& _enableTracing);

                    /**
                     * 判断参数 EnableTracing 是否已赋值
                     * @return EnableTracing 是否已赋值
                     */
                    bool EnableTracingHasBeenSet() const;

                    /**
                     * 获取(Disused) Whether to enable linkage tracing and report. It only takes effect when EnableTracing = `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableTracingReport (Disused) Whether to enable linkage tracing and report. It only takes effect when EnableTracing = `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetEnableTracingReport() const;

                    /**
                     * 设置(Disused) Whether to enable linkage tracing and report. It only takes effect when EnableTracing = `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EnableTracingReport (Disused) Whether to enable linkage tracing and report. It only takes effect when EnableTracing = `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnableTracingReport(const uint64_t& _enableTracingReport);

                    /**
                     * 判断参数 EnableTracingReport 是否已赋值
                     * @return EnableTracingReport 是否已赋值
                     */
                    bool EnableTracingReportHasBeenSet() const;

                    /**
                     * 获取Image type. `0`: Individual image; `1`: Enterprise image; `2`: Public image
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RepoType Image type. `0`: Individual image; `1`: Enterprise image; `2`: Public image
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetRepoType() const;

                    /**
                     * 设置Image type. `0`: Individual image; `1`: Enterprise image; `2`: Public image
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param RepoType Image type. `0`: Individual image; `1`: Enterprise image; `2`: Public image
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRepoType(const uint64_t& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取Status of batch deployment: `batch_updating`, `batch_updating_waiting_confirm`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return BatchDeployStatus Status of batch deployment: `batch_updating`, `batch_updating_waiting_confirm`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetBatchDeployStatus() const;

                    /**
                     * 设置Status of batch deployment: `batch_updating`, `batch_updating_waiting_confirm`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param BatchDeployStatus Status of batch deployment: `batch_updating`, `batch_updating_waiting_confirm`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetBatchDeployStatus(const std::string& _batchDeployStatus);

                    /**
                     * 判断参数 BatchDeployStatus 是否已赋值
                     * @return BatchDeployStatus 是否已赋值
                     */
                    bool BatchDeployStatusHasBeenSet() const;

                    /**
                     * 获取APM instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ApmInstanceId APM instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetApmInstanceId() const;

                    /**
                     * 设置APM instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ApmInstanceId APM instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetApmInstanceId(const std::string& _apmInstanceId);

                    /**
                     * 判断参数 ApmInstanceId 是否已赋值
                     * @return ApmInstanceId 是否已赋值
                     */
                    bool ApmInstanceIdHasBeenSet() const;

                    /**
                     * 获取Workload information 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return WorkloadInfo Workload information 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    WorkloadInfo GetWorkloadInfo() const;

                    /**
                     * 设置Workload information 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param WorkloadInfo Workload information 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetWorkloadInfo(const WorkloadInfo& _workloadInfo);

                    /**
                     * 判断参数 WorkloadInfo 是否已赋值
                     * @return WorkloadInfo 是否已赋值
                     */
                    bool WorkloadInfoHasBeenSet() const;

                    /**
                     * 获取Whether to enable application acceleration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SpeedUp Whether to enable application acceleration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetSpeedUp() const;

                    /**
                     * 设置Whether to enable application acceleration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param SpeedUp Whether to enable application acceleration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSpeedUp(const bool& _speedUp);

                    /**
                     * 判断参数 SpeedUp 是否已赋值
                     * @return SpeedUp 是否已赋值
                     */
                    bool SpeedUpHasBeenSet() const;

                    /**
                     * 获取Configuration of the startup probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return StartupProbe Configuration of the startup probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    HealthCheckConfig GetStartupProbe() const;

                    /**
                     * 设置Configuration of the startup probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param StartupProbe Configuration of the startup probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetStartupProbe(const HealthCheckConfig& _startupProbe);

                    /**
                     * 判断参数 StartupProbe 是否已赋值
                     * @return StartupProbe 是否已赋值
                     */
                    bool StartupProbeHasBeenSet() const;

                    /**
                     * 获取OS version. Values:
- ALPINE
- CENTOS
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return OsFlavour OS version. Values:
- ALPINE
- CENTOS
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetOsFlavour() const;

                    /**
                     * 设置OS version. Values:
- ALPINE
- CENTOS
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param OsFlavour OS version. Values:
- ALPINE
- CENTOS
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetOsFlavour(const std::string& _osFlavour);

                    /**
                     * 判断参数 OsFlavour 是否已赋值
                     * @return OsFlavour 是否已赋值
                     */
                    bool OsFlavourHasBeenSet() const;

                    /**
                     * 获取Image repository server
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RepoServer Image repository server
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetRepoServer() const;

                    /**
                     * 设置Image repository server
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param RepoServer Image repository server
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRepoServer(const std::string& _repoServer);

                    /**
                     * 判断参数 RepoServer 是否已赋值
                     * @return RepoServer 是否已赋值
                     */
                    bool RepoServerHasBeenSet() const;

                    /**
                     * 获取Whether the application is being deployed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return UnderDeploying Whether the application is being deployed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetUnderDeploying() const;

                    /**
                     * 设置Whether the application is being deployed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param UnderDeploying Whether the application is being deployed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUnderDeploying(const bool& _underDeploying);

                    /**
                     * 判断参数 UnderDeploying 是否已赋值
                     * @return UnderDeploying 是否已赋值
                     */
                    bool UnderDeployingHasBeenSet() const;

                    /**
                     * 获取Whether to enable application metric monitoring 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnablePrometheusConf Whether to enable application metric monitoring 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    EnablePrometheusConf GetEnablePrometheusConf() const;

                    /**
                     * 设置Whether to enable application metric monitoring 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EnablePrometheusConf Whether to enable application metric monitoring 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnablePrometheusConf(const EnablePrometheusConf& _enablePrometheusConf);

                    /**
                     * 判断参数 EnablePrometheusConf 是否已赋值
                     * @return EnablePrometheusConf 是否已赋值
                     */
                    bool EnablePrometheusConfHasBeenSet() const;

                    /**
                     * 获取Whether it’s stopped manually
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return StoppedManually Whether it’s stopped manually
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetStoppedManually() const;

                    /**
                     * 设置Whether it’s stopped manually
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param StoppedManually Whether it’s stopped manually
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetStoppedManually(const bool& _stoppedManually);

                    /**
                     * 判断参数 StoppedManually 是否已赋值
                     * @return StoppedManually 是否已赋值
                     */
                    bool StoppedManuallyHasBeenSet() const;

                    /**
                     * 获取TCR instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TcrInstanceId TCR instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetTcrInstanceId() const;

                    /**
                     * 设置TCR instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param TcrInstanceId TCR instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTcrInstanceId(const std::string& _tcrInstanceId);

                    /**
                     * 判断参数 TcrInstanceId 是否已赋值
                     * @return TcrInstanceId 是否已赋值
                     */
                    bool TcrInstanceIdHasBeenSet() const;

                    /**
                     * 获取`1`: Automatically enable metrics collection (open-telemetry)
`0`: Disable metrics collection
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableMetrics `1`: Automatically enable metrics collection (open-telemetry)
`0`: Disable metrics collection
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetEnableMetrics() const;

                    /**
                     * 设置`1`: Automatically enable metrics collection (open-telemetry)
`0`: Disable metrics collection
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EnableMetrics `1`: Automatically enable metrics collection (open-telemetry)
`0`: Disable metrics collection
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnableMetrics(const int64_t& _enableMetrics);

                    /**
                     * 判断参数 EnableMetrics 是否已赋值
                     * @return EnableMetrics 是否已赋值
                     */
                    bool EnableMetricsHasBeenSet() const;

                    /**
                     * 获取User AppId
Note: This field may return `null`, indicating that no valid value was found.
                     * @return AppId User AppId
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User AppId
Note: This field may return `null`, indicating that no valid value was found.
                     * @param AppId User AppId
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Sub Account UIN
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SubAccountUin Sub Account UIN
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置Sub Account UIN
Note: This field may return `null`, indicating that no valid value was found.
                     * @param SubAccountUin Sub Account UIN
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取User UIN
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Uin User UIN
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Uin User UIN
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Region
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Region Region
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Region Region
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Application group ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @return GroupId Application group ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Application group ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @param GroupId Application group ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable registry
Note: This field may return `null`, indicating that no valid value was found.
                     * @return EnableRegistry Whether to enable registry
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t GetEnableRegistry() const;

                    /**
                     * 设置Whether to enable registry
Note: This field may return `null`, indicating that no valid value was found.
                     * @param EnableRegistry Whether to enable registry
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetEnableRegistry(const int64_t& _enableRegistry);

                    /**
                     * 判断参数 EnableRegistry 是否已赋值
                     * @return EnableRegistry 是否已赋值
                     */
                    bool EnableRegistryHasBeenSet() const;

                    /**
                     * 获取Array of scaling rules
Note: This field may return `null`, indicating that no valid value was found.
                     * @return AutoscalerList Array of scaling rules
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Autoscaler> GetAutoscalerList() const;

                    /**
                     * 设置Array of scaling rules
Note: This field may return `null`, indicating that no valid value was found.
                     * @param AutoscalerList Array of scaling rules
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetAutoscalerList(const std::vector<Autoscaler>& _autoscalerList);

                    /**
                     * 判断参数 AutoscalerList 是否已赋值
                     * @return AutoscalerList 是否已赋值
                     */
                    bool AutoscalerListHasBeenSet() const;

                    /**
                     * 获取Modifier
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Modifier Modifier
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetModifier() const;

                    /**
                     * 设置Modifier
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Modifier Modifier
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetModifier(const std::string& _modifier);

                    /**
                     * 判断参数 Modifier 是否已赋值
                     * @return Modifier 是否已赋值
                     */
                    bool ModifierHasBeenSet() const;

                    /**
                     * 获取Creator
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Creator Creator
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Creator Creator
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Deployment strategy
Note: This field may return `null`, indicating that no valid value was found.
                     * @return DeployStrategyConf Deployment strategy
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    DeployStrategyConf GetDeployStrategyConf() const;

                    /**
                     * 设置Deployment strategy
Note: This field may return `null`, indicating that no valid value was found.
                     * @param DeployStrategyConf Deployment strategy
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetDeployStrategyConf(const DeployStrategyConf& _deployStrategyConf);

                    /**
                     * 判断参数 DeployStrategyConf 是否已赋值
                     * @return DeployStrategyConf 是否已赋值
                     */
                    bool DeployStrategyConfHasBeenSet() const;

                    /**
                     * 获取List of pods
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PodList List of pods
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    DescribeRunPodPage GetPodList() const;

                    /**
                     * 设置List of pods
Note: This field may return `null`, indicating that no valid value was found.
                     * @param PodList List of pods
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetPodList(const DescribeRunPodPage& _podList);

                    /**
                     * 判断参数 PodList 是否已赋值
                     * @return PodList 是否已赋值
                     */
                    bool PodListHasBeenSet() const;

                    /**
                     * 获取Whether the configuration has been changed during deployment
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ConfEdited Whether the configuration has been changed during deployment
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    bool GetConfEdited() const;

                    /**
                     * 设置Whether the configuration has been changed during deployment
Note: This field may return `null`, indicating that no valid value was found.
                     * @param ConfEdited Whether the configuration has been changed during deployment
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetConfEdited(const bool& _confEdited);

                    /**
                     * 判断参数 ConfEdited 是否已赋值
                     * @return ConfEdited 是否已赋值
                     */
                    bool ConfEditedHasBeenSet() const;

                    /**
                     * 获取Tag
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Tags Tag
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Tags Tag
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Version ID
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Deployment mode
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * JDK version
                     */
                    std::string m_jdkVersion;
                    bool m_jdkVersionHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Deployed version
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

                    /**
                     * Publish mode
                     */
                    std::string m_publishMode;
                    bool m_publishModeHasBeenSet;

                    /**
                     * Launch parameter
                     */
                    std::string m_jvmOpts;
                    bool m_jvmOptsHasBeenSet;

                    /**
                     * Number of initial pods
                     */
                    int64_t m_initPodNum;
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
                     * Image path
                     */
                    std::string m_imgRepo;
                    bool m_imgRepoHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imgName;
                    bool m_imgNameHasBeenSet;

                    /**
                     * Image version
                     */
                    std::string m_imgVersion;
                    bool m_imgVersionHasBeenSet;

                    /**
                     * Scaling configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    EsInfo m_esInfo;
                    bool m_esInfoHasBeenSet;

                    /**
                     * Environment configuration
                     */
                    std::vector<Pair> m_envConf;
                    bool m_envConfHasBeenSet;

                    /**
                     * Storage configuration
                     */
                    std::vector<StorageConf> m_storageConfs;
                    bool m_storageConfsHasBeenSet;

                    /**
                     * Running status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * VPC
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * Subnets
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyDate;
                    bool m_modifyDateHasBeenSet;

                    /**
                     * Mounting configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<StorageMountConf> m_storageMountConfs;
                    bool m_storageMountConfsHasBeenSet;

                    /**
                     * Version name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * Log output configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    LogOutputConf m_logOutputConf;
                    bool m_logOutputConfHasBeenSet;

                    /**
                     * Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Application description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationDescription;
                    bool m_applicationDescriptionHasBeenSet;

                    /**
                     * Environment name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * Environment ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Public network address
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_publicDomain;
                    bool m_publicDomainHasBeenSet;

                    /**
                     * Whether to enable public network access
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_enablePublicAccess;
                    bool m_enablePublicAccessHasBeenSet;

                    /**
                     * Number of current instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_currentInstances;
                    bool m_currentInstancesHasBeenSet;

                    /**
                     * Number of expected instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_expectedInstances;
                    bool m_expectedInstancesHasBeenSet;

                    /**
                     * Programming Language
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_codingLanguage;
                    bool m_codingLanguageHasBeenSet;

                    /**
                     * Program package name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_pkgName;
                    bool m_pkgNameHasBeenSet;

                    /**
                     * Whether to enable auto scaling
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_esEnable;
                    bool m_esEnableHasBeenSet;

                    /**
                     * Auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_esStrategy;
                    bool m_esStrategyHasBeenSet;

                    /**
                     * Image tag
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * Whether to enable logging
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * Minimum number of instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_minAliveInstances;
                    bool m_minAliveInstancesHasBeenSet;

                    /**
                     * Security group IDs
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Image command
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_imageCommand;
                    bool m_imageCommandHasBeenSet;

                    /**
                     * Image command parameters
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_imageArgs;
                    bool m_imageArgsHasBeenSet;

                    /**
                     * Whether to use the default registry configurations
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_useRegistryDefaultConfig;
                    bool m_useRegistryDefaultConfigHasBeenSet;

                    /**
                     * EKS access configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    EksService m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * Mounting configurations
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<MountedSettingConf> m_settingConfs;
                    bool m_settingConfsHasBeenSet;

                    /**
                     * Log path information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_logConfs;
                    bool m_logConfsHasBeenSet;

                    /**
                     * The script to execute right after the startup
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_postStart;
                    bool m_postStartHasBeenSet;

                    /**
                     * The script to run before stop
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_preStop;
                    bool m_preStopHasBeenSet;

                    /**
                     * Configuration of aliveness probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    HealthCheckConfig m_liveness;
                    bool m_livenessHasBeenSet;

                    /**
                     * Configuration of readiness probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    HealthCheckConfig m_readiness;
                    bool m_readinessHasBeenSet;

                    /**
                     * Auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<HorizontalAutoscaler> m_horizontalAutoscaler;
                    bool m_horizontalAutoscalerHasBeenSet;

                    /**
                     * Scheduled auto scaling policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<CronHorizontalAutoscaler> m_cronHorizontalAutoscaler;
                    bool m_cronHorizontalAutoscalerHasBeenSet;

                    /**
                     * Availability zone of the application
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * The latest deployment time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_lastDeployDate;
                    bool m_lastDeployDateHasBeenSet;

                    /**
                     * The latest successful deployment time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_lastDeploySuccessDate;
                    bool m_lastDeploySuccessDateHasBeenSet;

                    /**
                     * Information of the node whether the application is deployed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeInfo> m_nodeInfos;
                    bool m_nodeInfosHasBeenSet;

                    /**
                     * Image type. Values: `0` (Demo image), `1` (Normal image)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * Whether to 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_enableTracing;
                    bool m_enableTracingHasBeenSet;

                    /**
                     * (Disused) Whether to enable linkage tracing and report. It only takes effect when EnableTracing = `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_enableTracingReport;
                    bool m_enableTracingReportHasBeenSet;

                    /**
                     * Image type. `0`: Individual image; `1`: Enterprise image; `2`: Public image
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * Status of batch deployment: `batch_updating`, `batch_updating_waiting_confirm`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_batchDeployStatus;
                    bool m_batchDeployStatusHasBeenSet;

                    /**
                     * APM instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_apmInstanceId;
                    bool m_apmInstanceIdHasBeenSet;

                    /**
                     * Workload information 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    WorkloadInfo m_workloadInfo;
                    bool m_workloadInfoHasBeenSet;

                    /**
                     * Whether to enable application acceleration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_speedUp;
                    bool m_speedUpHasBeenSet;

                    /**
                     * Configuration of the startup probe
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    HealthCheckConfig m_startupProbe;
                    bool m_startupProbeHasBeenSet;

                    /**
                     * OS version. Values:
- ALPINE
- CENTOS
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_osFlavour;
                    bool m_osFlavourHasBeenSet;

                    /**
                     * Image repository server
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_repoServer;
                    bool m_repoServerHasBeenSet;

                    /**
                     * Whether the application is being deployed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_underDeploying;
                    bool m_underDeployingHasBeenSet;

                    /**
                     * Whether to enable application metric monitoring 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    EnablePrometheusConf m_enablePrometheusConf;
                    bool m_enablePrometheusConfHasBeenSet;

                    /**
                     * Whether it’s stopped manually
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_stoppedManually;
                    bool m_stoppedManuallyHasBeenSet;

                    /**
                     * TCR instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_tcrInstanceId;
                    bool m_tcrInstanceIdHasBeenSet;

                    /**
                     * `1`: Automatically enable metrics collection (open-telemetry)
`0`: Disable metrics collection
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_enableMetrics;
                    bool m_enableMetricsHasBeenSet;

                    /**
                     * User AppId
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Sub Account UIN
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * User UIN
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Region
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Application group ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Whether to enable registry
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_enableRegistry;
                    bool m_enableRegistryHasBeenSet;

                    /**
                     * Array of scaling rules
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Autoscaler> m_autoscalerList;
                    bool m_autoscalerListHasBeenSet;

                    /**
                     * Modifier
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_modifier;
                    bool m_modifierHasBeenSet;

                    /**
                     * Creator
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Deployment strategy
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    DeployStrategyConf m_deployStrategyConf;
                    bool m_deployStrategyConfHasBeenSet;

                    /**
                     * List of pods
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    DescribeRunPodPage m_podList;
                    bool m_podListHasBeenSet;

                    /**
                     * Whether the configuration has been changed during deployment
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    bool m_confEdited;
                    bool m_confEditedHasBeenSet;

                    /**
                     * Tag
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_TEMSERVICEVERSIONINFO_H_
