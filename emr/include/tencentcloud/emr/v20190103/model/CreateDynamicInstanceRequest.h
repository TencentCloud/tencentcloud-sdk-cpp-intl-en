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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CREATEDYNAMICINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CREATEDYNAMICINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DynamicInstanceForm.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CreateDynamicInstance request structure.
                */
                class CreateDynamicInstanceRequest : public AbstractModel
                {
                public:
                    CreateDynamicInstanceRequest();
                    ~CreateDynamicInstanceRequest() = default;
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
                     * 获取<p>Form creation information.</p>
                     * @return DynamicInstanceForm <p>Form creation information.</p>
                     * 
                     */
                    DynamicInstanceForm GetDynamicInstanceForm() const;

                    /**
                     * 设置<p>Form creation information.</p>
                     * @param _dynamicInstanceForm <p>Form creation information.</p>
                     * 
                     */
                    void SetDynamicInstanceForm(const DynamicInstanceForm& _dynamicInstanceForm);

                    /**
                     * 判断参数 DynamicInstanceForm 是否已赋值
                     * @return DynamicInstanceForm 是否已赋值
                     * 
                     */
                    bool DynamicInstanceFormHasBeenSet() const;

                    /**
                     * 获取<p>YAML creation information.</p>
                     * @return DynamicInstanceYaml <p>YAML creation information.</p>
                     * 
                     */
                    std::string GetDynamicInstanceYaml() const;

                    /**
                     * 设置<p>YAML creation information.</p>
                     * @param _dynamicInstanceYaml <p>YAML creation information.</p>
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
                     * <p>Form creation information.</p>
                     */
                    DynamicInstanceForm m_dynamicInstanceForm;
                    bool m_dynamicInstanceFormHasBeenSet;

                    /**
                     * <p>YAML creation information.</p>
                     */
                    std::string m_dynamicInstanceYaml;
                    bool m_dynamicInstanceYamlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATEDYNAMICINSTANCEREQUEST_H_
