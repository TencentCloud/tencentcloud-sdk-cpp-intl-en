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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDAPIINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDAPIINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Information of the API bound with the plugin
                */
                class AttachedApiInfo : public AbstractModel
                {
                public:
                    AttachedApiInfo();
                    ~AttachedApiInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the service to which the API belongs
                     * @return ServiceId ID of the service to which the API belongs
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置ID of the service to which the API belongs
                     * @param _serviceId ID of the service to which the API belongs
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
                     * 获取Name of the service to which the API belongs
                     * @return ServiceName Name of the service to which the API belongs
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Name of the service to which the API belongs
                     * @param _serviceName Name of the service to which the API belongs
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
                     * 获取Description of the service to which the API belongs
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceDesc Description of the service to which the API belongs
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceDesc() const;

                    /**
                     * 设置Description of the service to which the API belongs
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _serviceDesc Description of the service to which the API belongs
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceDesc(const std::string& _serviceDesc);

                    /**
                     * 判断参数 ServiceDesc 是否已赋值
                     * @return ServiceDesc 是否已赋值
                     * 
                     */
                    bool ServiceDescHasBeenSet() const;

                    /**
                     * 获取API ID
                     * @return ApiId API ID
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API ID
                     * @param _apiId API ID
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取API name
                     * @return ApiName API name
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API name
                     * @param _apiName API name
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取API description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiDesc API description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiDesc() const;

                    /**
                     * 设置API description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiDesc API description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiDesc(const std::string& _apiDesc);

                    /**
                     * 判断参数 ApiDesc 是否已赋值
                     * @return ApiDesc 是否已赋值
                     * 
                     */
                    bool ApiDescHasBeenSet() const;

                    /**
                     * 获取Environment of the API bound with the plugin
                     * @return Environment Environment of the API bound with the plugin
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置Environment of the API bound with the plugin
                     * @param _environment Environment of the API bound with the plugin
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取Time when the plugin was bound to the API
                     * @return AttachedTime Time when the plugin was bound to the API
                     * 
                     */
                    std::string GetAttachedTime() const;

                    /**
                     * 设置Time when the plugin was bound to the API
                     * @param _attachedTime Time when the plugin was bound to the API
                     * 
                     */
                    void SetAttachedTime(const std::string& _attachedTime);

                    /**
                     * 判断参数 AttachedTime 是否已赋值
                     * @return AttachedTime 是否已赋值
                     * 
                     */
                    bool AttachedTimeHasBeenSet() const;

                private:

                    /**
                     * ID of the service to which the API belongs
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Name of the service to which the API belongs
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Description of the service to which the API belongs
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * API ID
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API name
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * API description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiDesc;
                    bool m_apiDescHasBeenSet;

                    /**
                     * Environment of the API bound with the plugin
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Time when the plugin was bound to the API
                     */
                    std::string m_attachedTime;
                    bool m_attachedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDAPIINFO_H_
