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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDAPIINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDAPIINFO_H_

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
                * Information of the API bound with the upstream
                */
                class BindApiInfo : public AbstractModel
                {
                public:
                    BindApiInfo();
                    ~BindApiInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique API ID.
                     * @return ApiId Unique API ID.
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置Unique API ID.
                     * @param _apiId Unique API ID.
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
                     * 获取Unique ID of the service
                     * @return ServiceId Unique ID of the service
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique ID of the service
                     * @param _serviceId Unique ID of the service
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
                     * 获取API name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ApiName API name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _apiName API name
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Service name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ServiceName Service name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _serviceName Service name
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Bound At
                     * @return BindTime Bound At
                     * 
                     */
                    std::string GetBindTime() const;

                    /**
                     * 设置Bound At
                     * @param _bindTime Bound At
                     * 
                     */
                    void SetBindTime(const std::string& _bindTime);

                    /**
                     * 判断参数 BindTime 是否已赋值
                     * @return BindTime 是否已赋值
                     * 
                     */
                    bool BindTimeHasBeenSet() const;

                private:

                    /**
                     * Unique API ID.
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * Unique ID of the service
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * Service name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Bound At
                     */
                    std::string m_bindTime;
                    bool m_bindTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDAPIINFO_H_
