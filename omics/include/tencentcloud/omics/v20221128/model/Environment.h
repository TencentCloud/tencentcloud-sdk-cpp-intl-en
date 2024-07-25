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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENT_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/ResourceIds.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Tencent Healthcare Omics Platform environment details
                */
                class Environment : public AbstractModel
                {
                public:
                    Environment();
                    ~Environment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Environment name
                     * @return Name Environment name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Environment name
                     * @param _name Environment name
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
                     * 获取Environment description information
                     * @return Description Environment description information
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Environment description information
                     * @param _description Environment description information
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
                     * 获取Environment region
                     * @return Region Environment region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Environment region
                     * @param _region Environment region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Environment type. Valid values:
- KUBERNETES: Kubernetes container cluster
- HPC:HPC HCC 
                     * @return Type Environment type. Valid values:
- KUBERNETES: Kubernetes container cluster
- HPC:HPC HCC 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Environment type. Valid values:
- KUBERNETES: Kubernetes container cluster
- HPC:HPC HCC 
                     * @param _type Environment type. Valid values:
- KUBERNETES: Kubernetes container cluster
- HPC:HPC HCC 
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Environment status. Valid values:
- INITIALIZING: Creating
- INITIALIZATION_ERROR: Creation failed
- RUNNING: Running
- ERROR: Exceptional
- DELETING: Deleting
- DELETE_ERROR: Deletion failed.
                     * @return Status Environment status. Valid values:
- INITIALIZING: Creating
- INITIALIZATION_ERROR: Creation failed
- RUNNING: Running
- ERROR: Exceptional
- DELETING: Deleting
- DELETE_ERROR: Deletion failed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Environment status. Valid values:
- INITIALIZING: Creating
- INITIALIZATION_ERROR: Creation failed
- RUNNING: Running
- ERROR: Exceptional
- DELETING: Deleting
- DELETE_ERROR: Deletion failed.
                     * @param _status Environment status. Valid values:
- INITIALIZING: Creating
- INITIALIZATION_ERROR: Creation failed
- RUNNING: Running
- ERROR: Exceptional
- DELETING: Deleting
- DELETE_ERROR: Deletion failed.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether the environment is available. The environment needs to be available before computing runs can be delivered.
                     * @return Available Whether the environment is available. The environment needs to be available before computing runs can be delivered.
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 设置Whether the environment is available. The environment needs to be available before computing runs can be delivered.
                     * @param _available Whether the environment is available. The environment needs to be available before computing runs can be delivered.
                     * 
                     */
                    void SetAvailable(const bool& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取Whether the environment is the default environment.
                     * @return IsDefault Whether the environment is the default environment.
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether the environment is the default environment.
                     * @param _isDefault Whether the environment is the default environment.
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Whether the environment is a managed environment.
                     * @return IsManaged Whether the environment is a managed environment.
                     * 
                     */
                    bool GetIsManaged() const;

                    /**
                     * 设置Whether the environment is a managed environment.
                     * @param _isManaged Whether the environment is a managed environment.
                     * 
                     */
                    void SetIsManaged(const bool& _isManaged);

                    /**
                     * 判断参数 IsManaged 是否已赋值
                     * @return IsManaged 是否已赋值
                     * 
                     */
                    bool IsManagedHasBeenSet() const;

                    /**
                     * 获取Environment information
                     * @return Message Environment information
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Environment information
                     * @param _message Environment information
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Cloud resource ID
                     * @return ResourceIds Cloud resource ID
                     * 
                     */
                    ResourceIds GetResourceIds() const;

                    /**
                     * 设置Cloud resource ID
                     * @param _resourceIds Cloud resource ID
                     * 
                     */
                    void SetResourceIds(const ResourceIds& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取The UUID of the previous workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastWorkflowUuid The UUID of the previous workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastWorkflowUuid() const;

                    /**
                     * 设置The UUID of the previous workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastWorkflowUuid The UUID of the previous workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastWorkflowUuid(const std::string& _lastWorkflowUuid);

                    /**
                     * 判断参数 LastWorkflowUuid 是否已赋值
                     * @return LastWorkflowUuid 是否已赋值
                     * 
                     */
                    bool LastWorkflowUuidHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreationTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _creationTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                private:

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Environment name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Environment description information
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Environment region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Environment type. Valid values:
- KUBERNETES: Kubernetes container cluster
- HPC:HPC HCC 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Environment status. Valid values:
- INITIALIZING: Creating
- INITIALIZATION_ERROR: Creation failed
- RUNNING: Running
- ERROR: Exceptional
- DELETING: Deleting
- DELETE_ERROR: Deletion failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether the environment is available. The environment needs to be available before computing runs can be delivered.
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * Whether the environment is the default environment.
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Whether the environment is a managed environment.
                     */
                    bool m_isManaged;
                    bool m_isManagedHasBeenSet;

                    /**
                     * Environment information
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Cloud resource ID
                     */
                    ResourceIds m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * The UUID of the previous workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastWorkflowUuid;
                    bool m_lastWorkflowUuidHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENT_H_
