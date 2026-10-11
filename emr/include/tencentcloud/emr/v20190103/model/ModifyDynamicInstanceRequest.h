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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYDYNAMICINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYDYNAMICINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ModifyDynamicInstanceForm.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyDynamicInstance request structure.
                */
                class ModifyDynamicInstanceRequest : public AbstractModel
                {
                public:
                    ModifyDynamicInstanceRequest();
                    ~ModifyDynamicInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>EMR cluster ID.</p>
                     * @return InstanceId <p>EMR cluster ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>EMR cluster ID.</p>
                     * @param _instanceId <p>EMR cluster ID.</p>
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
                     * 获取<p>Name of the service that supports DynamicInstance.</p>
                     * @return ServiceName <p>Name of the service that supports DynamicInstance.</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>Name of the service that supports DynamicInstance.</p>
                     * @param _serviceName <p>Name of the service that supports DynamicInstance.</p>
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
                     * 获取<p>DynamicInstance type.</p><p>Enumeration values:</p><ul><li>RayCluster: RayCluster type</li></ul>
                     * @return DynamicInstanceType <p>DynamicInstance type.</p><p>Enumeration values:</p><ul><li>RayCluster: RayCluster type</li></ul>
                     * 
                     */
                    std::string GetDynamicInstanceType() const;

                    /**
                     * 设置<p>DynamicInstance type.</p><p>Enumeration values:</p><ul><li>RayCluster: RayCluster type</li></ul>
                     * @param _dynamicInstanceType <p>DynamicInstance type.</p><p>Enumeration values:</p><ul><li>RayCluster: RayCluster type</li></ul>
                     * 
                     */
                    void SetDynamicInstanceType(const std::string& _dynamicInstanceType);

                    /**
                     * 判断参数 DynamicInstanceType 是否已赋值
                     * @return DynamicInstanceType 是否已赋值
                     * 
                     */
                    bool DynamicInstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>DynamicInstance ID.</p>
                     * @return DynamicInstanceId <p>DynamicInstance ID.</p>
                     * 
                     */
                    uint64_t GetDynamicInstanceId() const;

                    /**
                     * 设置<p>DynamicInstance ID.</p>
                     * @param _dynamicInstanceId <p>DynamicInstance ID.</p>
                     * 
                     */
                    void SetDynamicInstanceId(const uint64_t& _dynamicInstanceId);

                    /**
                     * 判断参数 DynamicInstanceId 是否已赋值
                     * @return DynamicInstanceId 是否已赋值
                     * 
                     */
                    bool DynamicInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Updated form configuration (the latest content must be passed for each update field, and it must be complete).</p>
                     * @return DynamicInstanceForm <p>Updated form configuration (the latest content must be passed for each update field, and it must be complete).</p>
                     * 
                     */
                    ModifyDynamicInstanceForm GetDynamicInstanceForm() const;

                    /**
                     * 设置<p>Updated form configuration (the latest content must be passed for each update field, and it must be complete).</p>
                     * @param _dynamicInstanceForm <p>Updated form configuration (the latest content must be passed for each update field, and it must be complete).</p>
                     * 
                     */
                    void SetDynamicInstanceForm(const ModifyDynamicInstanceForm& _dynamicInstanceForm);

                    /**
                     * 判断参数 DynamicInstanceForm 是否已赋值
                     * @return DynamicInstanceForm 是否已赋值
                     * 
                     */
                    bool DynamicInstanceFormHasBeenSet() const;

                    /**
                     * 获取<p>Updates the YAML configuration.</p>
                     * @return DynamicInstanceYaml <p>Updates the YAML configuration.</p>
                     * 
                     */
                    std::string GetDynamicInstanceYaml() const;

                    /**
                     * 设置<p>Updates the YAML configuration.</p>
                     * @param _dynamicInstanceYaml <p>Updates the YAML configuration.</p>
                     * 
                     */
                    void SetDynamicInstanceYaml(const std::string& _dynamicInstanceYaml);

                    /**
                     * 判断参数 DynamicInstanceYaml 是否已赋值
                     * @return DynamicInstanceYaml 是否已赋值
                     * 
                     */
                    bool DynamicInstanceYamlHasBeenSet() const;

                private:

                    /**
                     * <p>EMR cluster ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Name of the service that supports DynamicInstance.</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>DynamicInstance type.</p><p>Enumeration values:</p><ul><li>RayCluster: RayCluster type</li></ul>
                     */
                    std::string m_dynamicInstanceType;
                    bool m_dynamicInstanceTypeHasBeenSet;

                    /**
                     * <p>DynamicInstance ID.</p>
                     */
                    uint64_t m_dynamicInstanceId;
                    bool m_dynamicInstanceIdHasBeenSet;

                    /**
                     * <p>Updated form configuration (the latest content must be passed for each update field, and it must be complete).</p>
                     */
                    ModifyDynamicInstanceForm m_dynamicInstanceForm;
                    bool m_dynamicInstanceFormHasBeenSet;

                    /**
                     * <p>Updates the YAML configuration.</p>
                     */
                    std::string m_dynamicInstanceYaml;
                    bool m_dynamicInstanceYamlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYDYNAMICINSTANCEREQUEST_H_
