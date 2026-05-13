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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYDEVICEIDENTITYREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYDEVICEIDENTITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/PropagatingProperty.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * ModifyDeviceIdentity request structure.
                */
                class ModifyDeviceIdentityRequest : public AbstractModel
                {
                public:
                    ModifyDeviceIdentityRequest();
                    ~ModifyDeviceIdentityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tencent Cloud MQTT instance ID can be obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or the console.
                     * @return InstanceId Tencent Cloud MQTT instance ID can be obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or the console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Tencent Cloud MQTT instance ID can be obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or the console.
                     * @param _instanceId Tencent Cloud MQTT instance ID can be obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or the console.
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
                     * 获取Device ID
                     * @return DeviceId Device ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID
                     * @param _deviceId Device ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取1:ENABLED-Available
2: DISABLED - Unavailable
                     * @return Status 1:ENABLED-Available
2: DISABLED - Unavailable
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置1:ENABLED-Available
2: DISABLED - Unavailable
                     * @param _status 1:ENABLED-Available
2: DISABLED - Unavailable
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
                     * 获取Primary signature key, Base64 encode is required.
                     * @return PrimaryKey Primary signature key, Base64 encode is required.
                     * 
                     */
                    std::string GetPrimaryKey() const;

                    /**
                     * 设置Primary signature key, Base64 encode is required.
                     * @param _primaryKey Primary signature key, Base64 encode is required.
                     * 
                     */
                    void SetPrimaryKey(const std::string& _primaryKey);

                    /**
                     * 判断参数 PrimaryKey 是否已赋值
                     * @return PrimaryKey 是否已赋值
                     * 
                     */
                    bool PrimaryKeyHasBeenSet() const;

                    /**
                     * 获取Secondary signature key, must be Base64 encoded.
                     * @return SecondaryKey Secondary signature key, must be Base64 encoded.
                     * 
                     */
                    std::string GetSecondaryKey() const;

                    /**
                     * 设置Secondary signature key, must be Base64 encoded.
                     * @param _secondaryKey Secondary signature key, must be Base64 encoded.
                     * 
                     */
                    void SetSecondaryKey(const std::string& _secondaryKey);

                    /**
                     * 判断参数 SecondaryKey 是否已赋值
                     * @return SecondaryKey 是否已赋值
                     * 
                     */
                    bool SecondaryKeyHasBeenSet() const;

                    /**
                     * 获取Device id spread attribute setting	
                     * @return PropagatingProperties Device id spread attribute setting	
                     * 
                     */
                    std::vector<PropagatingProperty> GetPropagatingProperties() const;

                    /**
                     * 设置Device id spread attribute setting	
                     * @param _propagatingProperties Device id spread attribute setting	
                     * 
                     */
                    void SetPropagatingProperties(const std::vector<PropagatingProperty>& _propagatingProperties);

                    /**
                     * 判断参数 PropagatingProperties 是否已赋值
                     * @return PropagatingProperties 是否已赋值
                     * 
                     */
                    bool PropagatingPropertiesHasBeenSet() const;

                private:

                    /**
                     * Tencent Cloud MQTT instance ID can be obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or the console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Device ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 1:ENABLED-Available
2: DISABLED - Unavailable
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Primary signature key, Base64 encode is required.
                     */
                    std::string m_primaryKey;
                    bool m_primaryKeyHasBeenSet;

                    /**
                     * Secondary signature key, must be Base64 encoded.
                     */
                    std::string m_secondaryKey;
                    bool m_secondaryKeyHasBeenSet;

                    /**
                     * Device id spread attribute setting	
                     */
                    std::vector<PropagatingProperty> m_propagatingProperties;
                    bool m_propagatingPropertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYDEVICEIDENTITYREQUEST_H_
