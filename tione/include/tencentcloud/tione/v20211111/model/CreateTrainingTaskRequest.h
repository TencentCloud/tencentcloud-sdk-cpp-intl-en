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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGTASKREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ResourceConfigInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/StartCmdInfo.h>
#include <tencentcloud/tione/v20211111/model/DataConfig.h>
#include <tencentcloud/tione/v20211111/model/LogConfig.h>
#include <tencentcloud/tione/v20211111/model/EncodedStartCmdInfo.h>
#include <tencentcloud/tione/v20211111/model/CodeRepoConfig.h>
#include <tencentcloud/tione/v20211111/model/ExposeNetworkConfig.h>
#include <tencentcloud/tione/v20211111/model/EnvVar.h>
#include <tencentcloud/tione/v20211111/model/TrainToolConfig.h>
#include <tencentcloud/tione/v20211111/model/ResourceSupplyAttribute.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateTrainingTask request structure.
                */
                class CreateTrainingTaskRequest : public AbstractModel
                {
                public:
                    CreateTrainingTaskRequest();
                    ~CreateTrainingTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Training task name. The name cannot exceed 60 characters in length, and can contain only Chinese characters, letters, digits, underscores (_), and hyphens (-). It must start with a Chinese character, letter, or digit.
                     * @return Name Training task name. The name cannot exceed 60 characters in length, and can contain only Chinese characters, letters, digits, underscores (_), and hyphens (-). It must start with a Chinese character, letter, or digit.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Training task name. The name cannot exceed 60 characters in length, and can contain only Chinese characters, letters, digits, underscores (_), and hyphens (-). It must start with a Chinese character, letter, or digit.
                     * @param _name Training task name. The name cannot exceed 60 characters in length, and can contain only Chinese characters, letters, digits, underscores (_), and hyphens (-). It must start with a Chinese character, letter, or digit.
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
                     * 获取Billing mode. For example, PREPAID indicates yearly/monthly subscription (resource group).
POSTPAID_BY_HOUR indicates pay-as-you-go mode.
                     * @return ChargeType Billing mode. For example, PREPAID indicates yearly/monthly subscription (resource group).
POSTPAID_BY_HOUR indicates pay-as-you-go mode.
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Billing mode. For example, PREPAID indicates yearly/monthly subscription (resource group).
POSTPAID_BY_HOUR indicates pay-as-you-go mode.
                     * @param _chargeType Billing mode. For example, PREPAID indicates yearly/monthly subscription (resource group).
POSTPAID_BY_HOUR indicates pay-as-you-go mode.
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Resource configuration. Specify the CVM instance specification ID and number of nodes. The API for querying the CVM instance specification ID is DescribeBillingSpecsPrice. For example, [{"Role":"WORKER", "InstanceType": "TI.S.MEDIUM.POST", "InstanceNum": 1}].
                     * @return ResourceConfigInfos Resource configuration. Specify the CVM instance specification ID and number of nodes. The API for querying the CVM instance specification ID is DescribeBillingSpecsPrice. For example, [{"Role":"WORKER", "InstanceType": "TI.S.MEDIUM.POST", "InstanceNum": 1}].
                     * 
                     */
                    std::vector<ResourceConfigInfo> GetResourceConfigInfos() const;

                    /**
                     * 设置Resource configuration. Specify the CVM instance specification ID and number of nodes. The API for querying the CVM instance specification ID is DescribeBillingSpecsPrice. For example, [{"Role":"WORKER", "InstanceType": "TI.S.MEDIUM.POST", "InstanceNum": 1}].
                     * @param _resourceConfigInfos Resource configuration. Specify the CVM instance specification ID and number of nodes. The API for querying the CVM instance specification ID is DescribeBillingSpecsPrice. For example, [{"Role":"WORKER", "InstanceType": "TI.S.MEDIUM.POST", "InstanceNum": 1}].
                     * 
                     */
                    void SetResourceConfigInfos(const std::vector<ResourceConfigInfo>& _resourceConfigInfos);

                    /**
                     * 判断参数 ResourceConfigInfos 是否已赋值
                     * @return ResourceConfigInfos 是否已赋值
                     * 
                     */
                    bool ResourceConfigInfosHasBeenSet() const;

                    /**
                     * 获取TI Workspace ID. Used solely for the "Workspace" allowlist feature. To use this feature, please contact a TI administrator to enable allowlisting.
                     * @return TiProjectId TI Workspace ID. Used solely for the "Workspace" allowlist feature. To use this feature, please contact a TI administrator to enable allowlisting.
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置TI Workspace ID. Used solely for the "Workspace" allowlist feature. To use this feature, please contact a TI administrator to enable allowlisting.
                     * @param _tiProjectId TI Workspace ID. Used solely for the "Workspace" allowlist feature. To use this feature, please contact a TI administrator to enable allowlisting.
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取Training framework name, which can be queried via the DescribeTrainingFrameworks API. For example, SPARK, PYSPARK, TENSORFLOW, and PYTORCH.
                     * @return FrameworkName Training framework name, which can be queried via the DescribeTrainingFrameworks API. For example, SPARK, PYSPARK, TENSORFLOW, and PYTORCH.
                     * 
                     */
                    std::string GetFrameworkName() const;

                    /**
                     * 设置Training framework name, which can be queried via the DescribeTrainingFrameworks API. For example, SPARK, PYSPARK, TENSORFLOW, and PYTORCH.
                     * @param _frameworkName Training framework name, which can be queried via the DescribeTrainingFrameworks API. For example, SPARK, PYSPARK, TENSORFLOW, and PYTORCH.
                     * 
                     */
                    void SetFrameworkName(const std::string& _frameworkName);

                    /**
                     * 判断参数 FrameworkName 是否已赋值
                     * @return FrameworkName 是否已赋值
                     * 
                     */
                    bool FrameworkNameHasBeenSet() const;

                    /**
                     * 获取Training framework version, which can be queried via the DescribeTrainingFrameworks API. For example, 1.15 and 1.9.
                     * @return FrameworkVersion Training framework version, which can be queried via the DescribeTrainingFrameworks API. For example, 1.15 and 1.9.
                     * 
                     */
                    std::string GetFrameworkVersion() const;

                    /**
                     * 设置Training framework version, which can be queried via the DescribeTrainingFrameworks API. For example, 1.15 and 1.9.
                     * @param _frameworkVersion Training framework version, which can be queried via the DescribeTrainingFrameworks API. For example, 1.15 and 1.9.
                     * 
                     */
                    void SetFrameworkVersion(const std::string& _frameworkVersion);

                    /**
                     * 判断参数 FrameworkVersion 是否已赋值
                     * @return FrameworkVersion 是否已赋值
                     * 
                     */
                    bool FrameworkVersionHasBeenSet() const;

                    /**
                     * 获取Training framework environment, which can be queried via the DescribeTrainingFrameworks API. For example, tf1.15-py3.7-cpu and torch1.9-py3.8-cuda11.1-gpu.
                     * @return FrameworkEnvironment Training framework environment, which can be queried via the DescribeTrainingFrameworks API. For example, tf1.15-py3.7-cpu and torch1.9-py3.8-cuda11.1-gpu.
                     * 
                     */
                    std::string GetFrameworkEnvironment() const;

                    /**
                     * 设置Training framework environment, which can be queried via the DescribeTrainingFrameworks API. For example, tf1.15-py3.7-cpu and torch1.9-py3.8-cuda11.1-gpu.
                     * @param _frameworkEnvironment Training framework environment, which can be queried via the DescribeTrainingFrameworks API. For example, tf1.15-py3.7-cpu and torch1.9-py3.8-cuda11.1-gpu.
                     * 
                     */
                    void SetFrameworkEnvironment(const std::string& _frameworkEnvironment);

                    /**
                     * 判断参数 FrameworkEnvironment 是否已赋值
                     * @return FrameworkEnvironment 是否已赋值
                     * 
                     */
                    bool FrameworkEnvironmentHasBeenSet() const;

                    /**
                     * 获取ID of the prepaid dedicated resource group, which can be queried via the DescribeBillingResourceGroups API.
                     * @return ResourceGroupId ID of the prepaid dedicated resource group, which can be queried via the DescribeBillingResourceGroups API.
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置ID of the prepaid dedicated resource group, which can be queried via the DescribeBillingResourceGroups API.
                     * @param _resourceGroupId ID of the prepaid dedicated resource group, which can be queried via the DescribeBillingResourceGroups API.
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取Tag configuration.
                     * @return Tags Tag configuration.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag configuration.
                     * @param _tags Tag configuration.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Custom image information.
                     * @return ImageInfo Custom image information.
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置Custom image information.
                     * @param _imageInfo Custom image information.
                     * 
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取COS code package path.
                     * @return CodePackagePath COS code package path.
                     * 
                     */
                    CosPathInfo GetCodePackagePath() const;

                    /**
                     * 设置COS code package path.
                     * @param _codePackagePath COS code package path.
                     * 
                     */
                    void SetCodePackagePath(const CosPathInfo& _codePackagePath);

                    /**
                     * 判断参数 CodePackagePath 是否已赋值
                     * @return CodePackagePath 是否已赋值
                     * 
                     */
                    bool CodePackagePathHasBeenSet() const;

                    /**
                     * 获取Task startup command. Specify this parameter based on the task training mode. If the configuration fails due to special characters, use the EncodedStartCmdInfo parameter instead.
                     * @return StartCmdInfo Task startup command. Specify this parameter based on the task training mode. If the configuration fails due to special characters, use the EncodedStartCmdInfo parameter instead.
                     * 
                     */
                    StartCmdInfo GetStartCmdInfo() const;

                    /**
                     * 设置Task startup command. Specify this parameter based on the task training mode. If the configuration fails due to special characters, use the EncodedStartCmdInfo parameter instead.
                     * @param _startCmdInfo Task startup command. Specify this parameter based on the task training mode. If the configuration fails due to special characters, use the EncodedStartCmdInfo parameter instead.
                     * 
                     */
                    void SetStartCmdInfo(const StartCmdInfo& _startCmdInfo);

                    /**
                     * 判断参数 StartCmdInfo 是否已赋值
                     * @return StartCmdInfo 是否已赋值
                     * 
                     */
                    bool StartCmdInfoHasBeenSet() const;

                    /**
                     * 获取Training mode, which can be queried via the DescribeTrainingFrameworks API. For example, PS_WORKER, DDP, MPI, and HOROVOD.
                     * @return TrainingMode Training mode, which can be queried via the DescribeTrainingFrameworks API. For example, PS_WORKER, DDP, MPI, and HOROVOD.
                     * 
                     */
                    std::string GetTrainingMode() const;

                    /**
                     * 设置Training mode, which can be queried via the DescribeTrainingFrameworks API. For example, PS_WORKER, DDP, MPI, and HOROVOD.
                     * @param _trainingMode Training mode, which can be queried via the DescribeTrainingFrameworks API. For example, PS_WORKER, DDP, MPI, and HOROVOD.
                     * 
                     */
                    void SetTrainingMode(const std::string& _trainingMode);

                    /**
                     * 判断参数 TrainingMode 是否已赋值
                     * @return TrainingMode 是否已赋值
                     * 
                     */
                    bool TrainingModeHasBeenSet() const;

                    /**
                     * 获取Data configurations. This parameter depends on the DataSource field. The maximum number of configurations is 10.
                     * @return DataConfigs Data configurations. This parameter depends on the DataSource field. The maximum number of configurations is 10.
                     * 
                     */
                    std::vector<DataConfig> GetDataConfigs() const;

                    /**
                     * 设置Data configurations. This parameter depends on the DataSource field. The maximum number of configurations is 10.
                     * @param _dataConfigs Data configurations. This parameter depends on the DataSource field. The maximum number of configurations is 10.
                     * 
                     */
                    void SetDataConfigs(const std::vector<DataConfig>& _dataConfigs);

                    /**
                     * 判断参数 DataConfigs 是否已赋值
                     * @return DataConfigs 是否已赋值
                     * 
                     */
                    bool DataConfigsHasBeenSet() const;

                    /**
                     * 获取VPC Id
                     * @return VpcId VPC Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC Id
                     * @param _vpcId VPC Id
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
                     * 获取Subnet ID.
                     * @return SubnetId Subnet ID.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID.
                     * @param _subnetId Subnet ID.
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
                     * 获取COS training output path.
                     * @return Output COS training output path.
                     * 
                     */
                    CosPathInfo GetOutput() const;

                    /**
                     * 设置COS training output path.
                     * @param _output COS training output path.
                     * 
                     */
                    void SetOutput(const CosPathInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取CLS logging configuration.
                     * @return LogConfig CLS logging configuration.
                     * 
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置CLS logging configuration.
                     * @param _logConfig CLS logging configuration.
                     * 
                     */
                    void SetLogConfig(const LogConfig& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     * 
                     */
                    bool LogConfigHasBeenSet() const;

                    /**
                     * 获取Tuning parameters. The value of this parameter cannot exceed 2048 characters in length.
                     * @return TuningParameters Tuning parameters. The value of this parameter cannot exceed 2048 characters in length.
                     * 
                     */
                    std::string GetTuningParameters() const;

                    /**
                     * 设置Tuning parameters. The value of this parameter cannot exceed 2048 characters in length.
                     * @param _tuningParameters Tuning parameters. The value of this parameter cannot exceed 2048 characters in length.
                     * 
                     */
                    void SetTuningParameters(const std::string& _tuningParameters);

                    /**
                     * 判断参数 TuningParameters 是否已赋值
                     * @return TuningParameters 是否已赋值
                     * 
                     */
                    bool TuningParametersHasBeenSet() const;

                    /**
                     * 获取Indicates whether to report logs.
                     * @return LogEnable Indicates whether to report logs.
                     * 
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置Indicates whether to report logs.
                     * @param _logEnable Indicates whether to report logs.
                     * 
                     */
                    void SetLogEnable(const bool& _logEnable);

                    /**
                     * 判断参数 LogEnable 是否已赋值
                     * @return LogEnable 是否已赋值
                     * 
                     */
                    bool LogEnableHasBeenSet() const;

                    /**
                     * 获取Remarks. The value of this parameter cannot exceed 1024 characters.
                     * @return Remark Remarks. The value of this parameter cannot exceed 1024 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks. The value of this parameter cannot exceed 1024 characters.
                     * @param _remark Remarks. The value of this parameter cannot exceed 1024 characters.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Data source. For example, DATASET, COS, CFS, CFSTurbo, HDFS, and GooseFSx.
                     * @return DataSource Data source. For example, DATASET, COS, CFS, CFSTurbo, HDFS, and GooseFSx.
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置Data source. For example, DATASET, COS, CFS, CFSTurbo, HDFS, and GooseFSx.
                     * @param _dataSource Data source. For example, DATASET, COS, CFS, CFSTurbo, HDFS, and GooseFSx.
                     * 
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取Callback URL. This parameter is used for the asynchronous callback to create, start, or stop training tasks. For the callback format and content, see [[TI-ONE API Callback Description]](https://www.tencentcloud.com/document/product/851/84292?from_cn_redirect=1).
                     * @return CallbackUrl Callback URL. This parameter is used for the asynchronous callback to create, start, or stop training tasks. For the callback format and content, see [[TI-ONE API Callback Description]](https://www.tencentcloud.com/document/product/851/84292?from_cn_redirect=1).
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置Callback URL. This parameter is used for the asynchronous callback to create, start, or stop training tasks. For the callback format and content, see [[TI-ONE API Callback Description]](https://www.tencentcloud.com/document/product/851/84292?from_cn_redirect=1).
                     * @param _callbackUrl Callback URL. This parameter is used for the asynchronous callback to create, start, or stop training tasks. For the callback format and content, see [[TI-ONE API Callback Description]](https://www.tencentcloud.com/document/product/851/84292?from_cn_redirect=1).
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取Encoded task startup command. If StartCmdInfo is also configured, only this parameter takes effect.
                     * @return EncodedStartCmdInfo Encoded task startup command. If StartCmdInfo is also configured, only this parameter takes effect.
                     * 
                     */
                    EncodedStartCmdInfo GetEncodedStartCmdInfo() const;

                    /**
                     * 设置Encoded task startup command. If StartCmdInfo is also configured, only this parameter takes effect.
                     * @param _encodedStartCmdInfo Encoded task startup command. If StartCmdInfo is also configured, only this parameter takes effect.
                     * 
                     */
                    void SetEncodedStartCmdInfo(const EncodedStartCmdInfo& _encodedStartCmdInfo);

                    /**
                     * 判断参数 EncodedStartCmdInfo 是否已赋值
                     * @return EncodedStartCmdInfo 是否已赋值
                     * 
                     */
                    bool EncodedStartCmdInfoHasBeenSet() const;

                    /**
                     * 获取Code repository configuration.
                     * @return CodeRepos Code repository configuration.
                     * 
                     */
                    std::vector<CodeRepoConfig> GetCodeRepos() const;

                    /**
                     * 设置Code repository configuration.
                     * @param _codeRepos Code repository configuration.
                     * 
                     */
                    void SetCodeRepos(const std::vector<CodeRepoConfig>& _codeRepos);

                    /**
                     * 判断参数 CodeRepos 是否已赋值
                     * @return CodeRepos 是否已赋值
                     * 
                     */
                    bool CodeReposHasBeenSet() const;

                    /**
                     * 获取Network exposure configuration.
                     * @return ExposeNetworkConfig Network exposure configuration.
                     * 
                     */
                    ExposeNetworkConfig GetExposeNetworkConfig() const;

                    /**
                     * 设置Network exposure configuration.
                     * @param _exposeNetworkConfig Network exposure configuration.
                     * 
                     */
                    void SetExposeNetworkConfig(const ExposeNetworkConfig& _exposeNetworkConfig);

                    /**
                     * 判断参数 ExposeNetworkConfig 是否已赋值
                     * @return ExposeNetworkConfig 是否已赋值
                     * 
                     */
                    bool ExposeNetworkConfigHasBeenSet() const;

                    /**
                     * 获取Environment Variables.
                     * @return Envs Environment Variables.
                     * 
                     */
                    std::vector<EnvVar> GetEnvs() const;

                    /**
                     * 设置Environment Variables.
                     * @param _envs Environment Variables.
                     * 
                     */
                    void SetEnvs(const std::vector<EnvVar>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                    /**
                     * 获取Train tool configuration.
                     * @return TrainToolConfig Train tool configuration.
                     * 
                     */
                    TrainToolConfig GetTrainToolConfig() const;

                    /**
                     * 设置Train tool configuration.
                     * @param _trainToolConfig Train tool configuration.
                     * 
                     */
                    void SetTrainToolConfig(const TrainToolConfig& _trainToolConfig);

                    /**
                     * 判断参数 TrainToolConfig 是否已赋值
                     * @return TrainToolConfig 是否已赋值
                     * 
                     */
                    bool TrainToolConfigHasBeenSet() const;

                    /**
                     * 获取Training Diagnostic Tool Configuration.
                     * @return ResourceSupplyAttribute Training Diagnostic Tool Configuration.
                     * 
                     */
                    ResourceSupplyAttribute GetResourceSupplyAttribute() const;

                    /**
                     * 设置Training Diagnostic Tool Configuration.
                     * @param _resourceSupplyAttribute Training Diagnostic Tool Configuration.
                     * 
                     */
                    void SetResourceSupplyAttribute(const ResourceSupplyAttribute& _resourceSupplyAttribute);

                    /**
                     * 判断参数 ResourceSupplyAttribute 是否已赋值
                     * @return ResourceSupplyAttribute 是否已赋值
                     * 
                     */
                    bool ResourceSupplyAttributeHasBeenSet() const;

                    /**
                     * 获取Queue ID.
                     * @return Queues Queue ID.
                     * 
                     */
                    std::vector<std::string> GetQueues() const;

                    /**
                     * 设置Queue ID.
                     * @param _queues Queue ID.
                     * 
                     */
                    void SetQueues(const std::vector<std::string>& _queues);

                    /**
                     * 判断参数 Queues 是否已赋值
                     * @return Queues 是否已赋值
                     * 
                     */
                    bool QueuesHasBeenSet() const;

                private:

                    /**
                     * Training task name. The name cannot exceed 60 characters in length, and can contain only Chinese characters, letters, digits, underscores (_), and hyphens (-). It must start with a Chinese character, letter, or digit.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Billing mode. For example, PREPAID indicates yearly/monthly subscription (resource group).
POSTPAID_BY_HOUR indicates pay-as-you-go mode.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Resource configuration. Specify the CVM instance specification ID and number of nodes. The API for querying the CVM instance specification ID is DescribeBillingSpecsPrice. For example, [{"Role":"WORKER", "InstanceType": "TI.S.MEDIUM.POST", "InstanceNum": 1}].
                     */
                    std::vector<ResourceConfigInfo> m_resourceConfigInfos;
                    bool m_resourceConfigInfosHasBeenSet;

                    /**
                     * TI Workspace ID. Used solely for the "Workspace" allowlist feature. To use this feature, please contact a TI administrator to enable allowlisting.
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * Training framework name, which can be queried via the DescribeTrainingFrameworks API. For example, SPARK, PYSPARK, TENSORFLOW, and PYTORCH.
                     */
                    std::string m_frameworkName;
                    bool m_frameworkNameHasBeenSet;

                    /**
                     * Training framework version, which can be queried via the DescribeTrainingFrameworks API. For example, 1.15 and 1.9.
                     */
                    std::string m_frameworkVersion;
                    bool m_frameworkVersionHasBeenSet;

                    /**
                     * Training framework environment, which can be queried via the DescribeTrainingFrameworks API. For example, tf1.15-py3.7-cpu and torch1.9-py3.8-cuda11.1-gpu.
                     */
                    std::string m_frameworkEnvironment;
                    bool m_frameworkEnvironmentHasBeenSet;

                    /**
                     * ID of the prepaid dedicated resource group, which can be queried via the DescribeBillingResourceGroups API.
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * Tag configuration.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Custom image information.
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * COS code package path.
                     */
                    CosPathInfo m_codePackagePath;
                    bool m_codePackagePathHasBeenSet;

                    /**
                     * Task startup command. Specify this parameter based on the task training mode. If the configuration fails due to special characters, use the EncodedStartCmdInfo parameter instead.
                     */
                    StartCmdInfo m_startCmdInfo;
                    bool m_startCmdInfoHasBeenSet;

                    /**
                     * Training mode, which can be queried via the DescribeTrainingFrameworks API. For example, PS_WORKER, DDP, MPI, and HOROVOD.
                     */
                    std::string m_trainingMode;
                    bool m_trainingModeHasBeenSet;

                    /**
                     * Data configurations. This parameter depends on the DataSource field. The maximum number of configurations is 10.
                     */
                    std::vector<DataConfig> m_dataConfigs;
                    bool m_dataConfigsHasBeenSet;

                    /**
                     * VPC Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * COS training output path.
                     */
                    CosPathInfo m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * CLS logging configuration.
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * Tuning parameters. The value of this parameter cannot exceed 2048 characters in length.
                     */
                    std::string m_tuningParameters;
                    bool m_tuningParametersHasBeenSet;

                    /**
                     * Indicates whether to report logs.
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * Remarks. The value of this parameter cannot exceed 1024 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Data source. For example, DATASET, COS, CFS, CFSTurbo, HDFS, and GooseFSx.
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * Callback URL. This parameter is used for the asynchronous callback to create, start, or stop training tasks. For the callback format and content, see [[TI-ONE API Callback Description]](https://www.tencentcloud.com/document/product/851/84292?from_cn_redirect=1).
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * Encoded task startup command. If StartCmdInfo is also configured, only this parameter takes effect.
                     */
                    EncodedStartCmdInfo m_encodedStartCmdInfo;
                    bool m_encodedStartCmdInfoHasBeenSet;

                    /**
                     * Code repository configuration.
                     */
                    std::vector<CodeRepoConfig> m_codeRepos;
                    bool m_codeReposHasBeenSet;

                    /**
                     * Network exposure configuration.
                     */
                    ExposeNetworkConfig m_exposeNetworkConfig;
                    bool m_exposeNetworkConfigHasBeenSet;

                    /**
                     * Environment Variables.
                     */
                    std::vector<EnvVar> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * Train tool configuration.
                     */
                    TrainToolConfig m_trainToolConfig;
                    bool m_trainToolConfigHasBeenSet;

                    /**
                     * Training Diagnostic Tool Configuration.
                     */
                    ResourceSupplyAttribute m_resourceSupplyAttribute;
                    bool m_resourceSupplyAttributeHasBeenSet;

                    /**
                     * Queue ID.
                     */
                    std::vector<std::string> m_queues;
                    bool m_queuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGTASKREQUEST_H_
