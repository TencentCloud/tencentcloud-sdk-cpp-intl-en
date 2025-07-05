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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPAPIINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPAPIINFO_H_

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
                * Information of the API bound to the application
                */
                class ApiAppApiInfo : public AbstractModel
                {
                public:
                    ApiAppApiInfo();
                    ~ApiAppApiInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiAppName Application name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiAppName() const;

                    /**
                     * 设置Application name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiAppName Application name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiAppName(const std::string& _apiAppName);

                    /**
                     * 判断参数 ApiAppName 是否已赋值
                     * @return ApiAppName 是否已赋值
                     * 
                     */
                    bool ApiAppNameHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return ApiAppId Application ID
                     * 
                     */
                    std::string GetApiAppId() const;

                    /**
                     * 设置Application ID
                     * @param _apiAppId Application ID
                     * 
                     */
                    void SetApiAppId(const std::string& _apiAppId);

                    /**
                     * 判断参数 ApiAppId 是否已赋值
                     * @return ApiAppId 是否已赋值
                     * 
                     */
                    bool ApiAppIdHasBeenSet() const;

                    /**
                     * 获取API ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiId API ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiId API ID
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiName API name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiName API name
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Service ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceId Service ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _serviceId Service ID
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Binding authorization time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AuthorizedTime Binding authorization time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuthorizedTime() const;

                    /**
                     * 设置Binding authorization time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _authorizedTime Binding authorization time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthorizedTime(const std::string& _authorizedTime);

                    /**
                     * 判断参数 AuthorizedTime 是否已赋值
                     * @return AuthorizedTime 是否已赋值
                     * 
                     */
                    bool AuthorizedTimeHasBeenSet() const;

                    /**
                     * 获取API region
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiRegion API region
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiRegion() const;

                    /**
                     * 设置API region
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiRegion API region
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiRegion(const std::string& _apiRegion);

                    /**
                     * 判断参数 ApiRegion 是否已赋值
                     * @return ApiRegion 是否已赋值
                     * 
                     */
                    bool ApiRegionHasBeenSet() const;

                    /**
                     * 获取Authorized binding environment
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EnvironmentName Authorized binding environment
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Authorized binding environment
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _environmentName Authorized binding environment
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                private:

                    /**
                     * Application name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiAppName;
                    bool m_apiAppNameHasBeenSet;

                    /**
                     * Application ID
                     */
                    std::string m_apiAppId;
                    bool m_apiAppIdHasBeenSet;

                    /**
                     * API ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * Service ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Binding authorization time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authorizedTime;
                    bool m_authorizedTimeHasBeenSet;

                    /**
                     * API region
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiRegion;
                    bool m_apiRegionHasBeenSet;

                    /**
                     * Authorized binding environment
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPAPIINFO_H_
