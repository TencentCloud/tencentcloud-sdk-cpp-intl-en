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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ADDNODERESOURCECONFIGREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ADDNODERESOURCECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Resource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * AddNodeResourceConfig request structure.
                */
                class AddNodeResourceConfigRequest : public AbstractModel
                {
                public:
                    AddNodeResourceConfigRequest();
                    ~AddNodeResourceConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster instance ID.
                     * @return InstanceId Cluster instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID.
                     * @param _instanceId Cluster instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Node type: Core, Task, and Router.
                     * @return ResourceType Node type: Core, Task, and Router.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Node type: Core, Task, and Router.
                     * @param _resourceType Node type: Core, Task, and Router.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Resource details.
                     * @return ResourceConfig Resource details.
                     * 
                     */
                    Resource GetResourceConfig() const;

                    /**
                     * 设置Resource details.
                     * @param _resourceConfig Resource details.
                     * 
                     */
                    void SetResourceConfig(const Resource& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取Payment mode.
                     * @return PayMode Payment mode.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Payment mode.
                     * @param _payMode Payment mode.
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Whether default configuration applies, DEFAULT or BACKUP. If it is not specified, the default configuration does not apply.
                     * @return IsDefault Whether default configuration applies, DEFAULT or BACKUP. If it is not specified, the default configuration does not apply.
                     * 
                     */
                    std::string GetIsDefault() const;

                    /**
                     * 设置Whether default configuration applies, DEFAULT or BACKUP. If it is not specified, the default configuration does not apply.
                     * @param _isDefault Whether default configuration applies, DEFAULT or BACKUP. If it is not specified, the default configuration does not apply.
                     * 
                     */
                    void SetIsDefault(const std::string& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Region ID.
                     * @return ZoneId Region ID.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Region ID.
                     * @param _zoneId Region ID.
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取When multiple specifications are added, details of the first specifications are in the ResourceConfig parameter, and those of the second to n-th are in the MultipleResourceConfig parameter.
                     * @return MultipleResourceConfig When multiple specifications are added, details of the first specifications are in the ResourceConfig parameter, and those of the second to n-th are in the MultipleResourceConfig parameter.
                     * 
                     */
                    std::vector<Resource> GetMultipleResourceConfig() const;

                    /**
                     * 设置When multiple specifications are added, details of the first specifications are in the ResourceConfig parameter, and those of the second to n-th are in the MultipleResourceConfig parameter.
                     * @param _multipleResourceConfig When multiple specifications are added, details of the first specifications are in the ResourceConfig parameter, and those of the second to n-th are in the MultipleResourceConfig parameter.
                     * 
                     */
                    void SetMultipleResourceConfig(const std::vector<Resource>& _multipleResourceConfig);

                    /**
                     * 判断参数 MultipleResourceConfig 是否已赋值
                     * @return MultipleResourceConfig 是否已赋值
                     * 
                     */
                    bool MultipleResourceConfigHasBeenSet() const;

                    /**
                     * 获取The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * @return ResourceBaseType The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * 
                     */
                    std::string GetResourceBaseType() const;

                    /**
                     * 设置The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * @param _resourceBaseType The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * 
                     */
                    void SetResourceBaseType(const std::string& _resourceBaseType);

                    /**
                     * 判断参数 ResourceBaseType 是否已赋值
                     * @return ResourceBaseType 是否已赋值
                     * 
                     */
                    bool ResourceBaseTypeHasBeenSet() const;

                    /**
                     * 获取Computing resource ID.
                     * @return ComputeResourceId Computing resource ID.
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置Computing resource ID.
                     * @param _computeResourceId Computing resource ID.
                     * 
                     */
                    void SetComputeResourceId(const std::string& _computeResourceId);

                    /**
                     * 判断参数 ComputeResourceId 是否已赋值
                     * @return ComputeResourceId 是否已赋值
                     * 
                     */
                    bool ComputeResourceIdHasBeenSet() const;

                    /**
                     * 获取Hardware type.
                     * @return HardwareResourceType Hardware type.
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置Hardware type.
                     * @param _hardwareResourceType Hardware type.
                     * 
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     * 
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                private:

                    /**
                     * Cluster instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node type: Core, Task, and Router.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Resource details.
                     */
                    Resource m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * Payment mode.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Whether default configuration applies, DEFAULT or BACKUP. If it is not specified, the default configuration does not apply.
                     */
                    std::string m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Region ID.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * When multiple specifications are added, details of the first specifications are in the ResourceConfig parameter, and those of the second to n-th are in the MultipleResourceConfig parameter.
                     */
                    std::vector<Resource> m_multipleResourceConfig;
                    bool m_multipleResourceConfigHasBeenSet;

                    /**
                     * The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     */
                    std::string m_resourceBaseType;
                    bool m_resourceBaseTypeHasBeenSet;

                    /**
                     * Computing resource ID.
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                    /**
                     * Hardware type.
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ADDNODERESOURCECONFIGREQUEST_H_
