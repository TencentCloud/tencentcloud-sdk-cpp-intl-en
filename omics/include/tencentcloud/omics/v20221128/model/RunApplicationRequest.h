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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/RunOption.h>
#include <tencentcloud/omics/v20221128/model/NFOption.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * RunApplication request structure.
                */
                class RunApplicationRequest : public AbstractModel
                {
                public:
                    RunApplicationRequest();
                    ~RunApplicationRequest() = default;
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
                     * 获取Run group name
                     * @return Name Run group name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Run group name
                     * @param _name Run group name
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
                     * 获取Delivery environment ID
                     * @return EnvironmentId Delivery environment ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Delivery environment ID
                     * @param _environmentId Delivery environment ID
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
                     * 获取Project ID. (If you leave it blank, the default item in the specified region will be used.)
                     * @return ProjectId Project ID. (If you leave it blank, the default item in the specified region will be used.)
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID. (If you leave it blank, the default item in the specified region will be used.)
                     * @param _projectId Project ID. (If you leave it blank, the default item in the specified region will be used.)
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Run group description
                     * @return Description Run group description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Run group description
                     * @param _description Run group description
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
                     * 获取Run input COS path. (Either InputBase64 or InputCosUri must be selected.)
                     * @return InputCosUri Run input COS path. (Either InputBase64 or InputCosUri must be selected.)
                     * 
                     */
                    std::string GetInputCosUri() const;

                    /**
                     * 设置Run input COS path. (Either InputBase64 or InputCosUri must be selected.)
                     * @param _inputCosUri Run input COS path. (Either InputBase64 or InputCosUri must be selected.)
                     * 
                     */
                    void SetInputCosUri(const std::string& _inputCosUri);

                    /**
                     * 判断参数 InputCosUri 是否已赋值
                     * @return InputCosUri 是否已赋值
                     * 
                     */
                    bool InputCosUriHasBeenSet() const;

                    /**
                     * 获取Run input JSON. Base64 encoding is required. (Either InputBase64 or InputCosUri must be selected.)
                     * @return InputBase64 Run input JSON. Base64 encoding is required. (Either InputBase64 or InputCosUri must be selected.)
                     * 
                     */
                    std::string GetInputBase64() const;

                    /**
                     * 设置Run input JSON. Base64 encoding is required. (Either InputBase64 or InputCosUri must be selected.)
                     * @param _inputBase64 Run input JSON. Base64 encoding is required. (Either InputBase64 or InputCosUri must be selected.)
                     * 
                     */
                    void SetInputBase64(const std::string& _inputBase64);

                    /**
                     * 判断参数 InputBase64 是否已赋值
                     * @return InputBase64 是否已赋值
                     * 
                     */
                    bool InputBase64HasBeenSet() const;

                    /**
                     * 获取Batch deliver table ID. Leaving it blank indicates delivery in singleton mode.
                     * @return TableId Batch deliver table ID. Leaving it blank indicates delivery in singleton mode.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Batch deliver table ID. Leaving it blank indicates delivery in singleton mode.
                     * @param _tableId Batch deliver table ID. Leaving it blank indicates delivery in singleton mode.
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Batch deliver table row UUID. Leaving it blank indicates all rows of the table.
                     * @return TableRowUuids Batch deliver table row UUID. Leaving it blank indicates all rows of the table.
                     * 
                     */
                    std::vector<std::string> GetTableRowUuids() const;

                    /**
                     * 设置Batch deliver table row UUID. Leaving it blank indicates all rows of the table.
                     * @param _tableRowUuids Batch deliver table row UUID. Leaving it blank indicates all rows of the table.
                     * 
                     */
                    void SetTableRowUuids(const std::vector<std::string>& _tableRowUuids);

                    /**
                     * 判断参数 TableRowUuids 是否已赋值
                     * @return TableRowUuids 是否已赋值
                     * 
                     */
                    bool TableRowUuidsHasBeenSet() const;

                    /**
                     * 获取Run cache cleanup time (hours). Leaving it blank or entering 0 indicates no cleanup.
                     * @return CacheClearDelay Run cache cleanup time (hours). Leaving it blank or entering 0 indicates no cleanup.
                     * 
                     */
                    uint64_t GetCacheClearDelay() const;

                    /**
                     * 设置Run cache cleanup time (hours). Leaving it blank or entering 0 indicates no cleanup.
                     * @param _cacheClearDelay Run cache cleanup time (hours). Leaving it blank or entering 0 indicates no cleanup.
                     * 
                     */
                    void SetCacheClearDelay(const uint64_t& _cacheClearDelay);

                    /**
                     * 判断参数 CacheClearDelay 是否已赋值
                     * @return CacheClearDelay 是否已赋值
                     * 
                     */
                    bool CacheClearDelayHasBeenSet() const;

                    /**
                     * 获取Application version ID. Leaving it blank indicates that the latest version is used.
                     * @return ApplicationVersionId Application version ID. Leaving it blank indicates that the latest version is used.
                     * 
                     */
                    std::string GetApplicationVersionId() const;

                    /**
                     * 设置Application version ID. Leaving it blank indicates that the latest version is used.
                     * @param _applicationVersionId Application version ID. Leaving it blank indicates that the latest version is used.
                     * 
                     */
                    void SetApplicationVersionId(const std::string& _applicationVersionId);

                    /**
                     * 判断参数 ApplicationVersionId 是否已赋值
                     * @return ApplicationVersionId 是否已赋值
                     * 
                     */
                    bool ApplicationVersionIdHasBeenSet() const;

                    /**
                     * 获取WDL running option
                     * @return Option WDL running option
                     * 
                     */
                    RunOption GetOption() const;

                    /**
                     * 设置WDL running option
                     * @param _option WDL running option
                     * 
                     */
                    void SetOption(const RunOption& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                    /**
                     * 获取Nextflow running option
                     * @return NFOption Nextflow running option
                     * 
                     */
                    NFOption GetNFOption() const;

                    /**
                     * 设置Nextflow running option
                     * @param _nFOption Nextflow running option
                     * 
                     */
                    void SetNFOption(const NFOption& _nFOption);

                    /**
                     * 判断参数 NFOption 是否已赋值
                     * @return NFOption 是否已赋值
                     * 
                     */
                    bool NFOptionHasBeenSet() const;

                    /**
                     * 获取Working directory. You can fill in the absolute path in the specified volume. If you leave it blank, the default path in the default volume will be used. Currently, only Nextflow is supported.
                     * @return WorkDir Working directory. You can fill in the absolute path in the specified volume. If you leave it blank, the default path in the default volume will be used. Currently, only Nextflow is supported.
                     * 
                     */
                    std::string GetWorkDir() const;

                    /**
                     * 设置Working directory. You can fill in the absolute path in the specified volume. If you leave it blank, the default path in the default volume will be used. Currently, only Nextflow is supported.
                     * @param _workDir Working directory. You can fill in the absolute path in the specified volume. If you leave it blank, the default path in the default volume will be used. Currently, only Nextflow is supported.
                     * 
                     */
                    void SetWorkDir(const std::string& _workDir);

                    /**
                     * 判断参数 WorkDir 是否已赋值
                     * @return WorkDir 是否已赋值
                     * 
                     */
                    bool WorkDirHasBeenSet() const;

                    /**
                     * 获取Access mode. Leaving it blank indicates it is private by default. Valid values:
- PRIVATE: Private application
- PUBLIC: Public application
                     * @return AccessMode Access mode. Leaving it blank indicates it is private by default. Valid values:
- PRIVATE: Private application
- PUBLIC: Public application
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置Access mode. Leaving it blank indicates it is private by default. Valid values:
- PRIVATE: Private application
- PUBLIC: Public application
                     * @param _accessMode Access mode. Leaving it blank indicates it is private by default. Valid values:
- PRIVATE: Private application
- PUBLIC: Public application
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取Volume ID. If you leave it blank, the default volume will be used. Currently, only Nextflow is supported.
                     * @return VolumeIds Volume ID. If you leave it blank, the default volume will be used. Currently, only Nextflow is supported.
                     * 
                     */
                    std::vector<std::string> GetVolumeIds() const;

                    /**
                     * 设置Volume ID. If you leave it blank, the default volume will be used. Currently, only Nextflow is supported.
                     * @param _volumeIds Volume ID. If you leave it blank, the default volume will be used. Currently, only Nextflow is supported.
                     * 
                     */
                    void SetVolumeIds(const std::vector<std::string>& _volumeIds);

                    /**
                     * 判断参数 VolumeIds 是否已赋值
                     * @return VolumeIds 是否已赋值
                     * 
                     */
                    bool VolumeIdsHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Run group name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Delivery environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Project ID. (If you leave it blank, the default item in the specified region will be used.)
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Run group description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Run input COS path. (Either InputBase64 or InputCosUri must be selected.)
                     */
                    std::string m_inputCosUri;
                    bool m_inputCosUriHasBeenSet;

                    /**
                     * Run input JSON. Base64 encoding is required. (Either InputBase64 or InputCosUri must be selected.)
                     */
                    std::string m_inputBase64;
                    bool m_inputBase64HasBeenSet;

                    /**
                     * Batch deliver table ID. Leaving it blank indicates delivery in singleton mode.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Batch deliver table row UUID. Leaving it blank indicates all rows of the table.
                     */
                    std::vector<std::string> m_tableRowUuids;
                    bool m_tableRowUuidsHasBeenSet;

                    /**
                     * Run cache cleanup time (hours). Leaving it blank or entering 0 indicates no cleanup.
                     */
                    uint64_t m_cacheClearDelay;
                    bool m_cacheClearDelayHasBeenSet;

                    /**
                     * Application version ID. Leaving it blank indicates that the latest version is used.
                     */
                    std::string m_applicationVersionId;
                    bool m_applicationVersionIdHasBeenSet;

                    /**
                     * WDL running option
                     */
                    RunOption m_option;
                    bool m_optionHasBeenSet;

                    /**
                     * Nextflow running option
                     */
                    NFOption m_nFOption;
                    bool m_nFOptionHasBeenSet;

                    /**
                     * Working directory. You can fill in the absolute path in the specified volume. If you leave it blank, the default path in the default volume will be used. Currently, only Nextflow is supported.
                     */
                    std::string m_workDir;
                    bool m_workDirHasBeenSet;

                    /**
                     * Access mode. Leaving it blank indicates it is private by default. Valid values:
- PRIVATE: Private application
- PUBLIC: Public application
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * Volume ID. If you leave it blank, the default volume will be used. Currently, only Nextflow is supported.
                     */
                    std::vector<std::string> m_volumeIds;
                    bool m_volumeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNAPPLICATIONREQUEST_H_
