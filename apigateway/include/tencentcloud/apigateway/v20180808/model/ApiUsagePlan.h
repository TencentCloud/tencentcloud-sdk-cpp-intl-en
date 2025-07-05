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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIUSAGEPLAN_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIUSAGEPLAN_H_

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
                * Details of usage plans bound to API or service
                */
                class ApiUsagePlan : public AbstractModel
                {
                public:
                    ApiUsagePlan();
                    ~ApiUsagePlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceId Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _serviceId Unique service ID.
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
                     * 获取Unique API ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiId Unique API ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置Unique API ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiId Unique API ID.
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
                     * 获取API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiName API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiName API name.
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
                     * 获取API path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Path API path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _path API path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取API method.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Method API method.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置API method.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _method API method.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Unique usage plan ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UsagePlanId Unique usage plan ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUsagePlanId() const;

                    /**
                     * 设置Unique usage plan ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _usagePlanId Unique usage plan ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsagePlanId(const std::string& _usagePlanId);

                    /**
                     * 判断参数 UsagePlanId 是否已赋值
                     * @return UsagePlanId 是否已赋值
                     * 
                     */
                    bool UsagePlanIdHasBeenSet() const;

                    /**
                     * 获取Usage plan name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UsagePlanName Usage plan name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUsagePlanName() const;

                    /**
                     * 设置Usage plan name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _usagePlanName Usage plan name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsagePlanName(const std::string& _usagePlanName);

                    /**
                     * 判断参数 UsagePlanName 是否已赋值
                     * @return UsagePlanName 是否已赋值
                     * 
                     */
                    bool UsagePlanNameHasBeenSet() const;

                    /**
                     * 获取Usage plan description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UsagePlanDesc Usage plan description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUsagePlanDesc() const;

                    /**
                     * 设置Usage plan description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _usagePlanDesc Usage plan description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsagePlanDesc(const std::string& _usagePlanDesc);

                    /**
                     * 判断参数 UsagePlanDesc 是否已赋值
                     * @return UsagePlanDesc 是否已赋值
                     * 
                     */
                    bool UsagePlanDescHasBeenSet() const;

                    /**
                     * 获取Service environment bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Environment Service environment bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置Service environment bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _environment Service environment bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Used quota.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InUseRequestNum Used quota.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetInUseRequestNum() const;

                    /**
                     * 设置Used quota.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _inUseRequestNum Used quota.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInUseRequestNum(const int64_t& _inUseRequestNum);

                    /**
                     * 判断参数 InUseRequestNum 是否已赋值
                     * @return InUseRequestNum 是否已赋值
                     * 
                     */
                    bool InUseRequestNumHasBeenSet() const;

                    /**
                     * 获取Total number of requests allowed. `-1` indicates no limit.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxRequestNum Total number of requests allowed. `-1` indicates no limit.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxRequestNum() const;

                    /**
                     * 设置Total number of requests allowed. `-1` indicates no limit.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxRequestNum Total number of requests allowed. `-1` indicates no limit.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxRequestNum(const int64_t& _maxRequestNum);

                    /**
                     * 判断参数 MaxRequestNum 是否已赋值
                     * @return MaxRequestNum 是否已赋值
                     * 
                     */
                    bool MaxRequestNumHasBeenSet() const;

                    /**
                     * 获取Request QPS upper limit. `-1` indicates no limit.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxRequestNumPreSec Request QPS upper limit. `-1` indicates no limit.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxRequestNumPreSec() const;

                    /**
                     * 设置Request QPS upper limit. `-1` indicates no limit.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxRequestNumPreSec Request QPS upper limit. `-1` indicates no limit.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec);

                    /**
                     * 判断参数 MaxRequestNumPreSec 是否已赋值
                     * @return MaxRequestNumPreSec 是否已赋值
                     * 
                     */
                    bool MaxRequestNumPreSecHasBeenSet() const;

                    /**
                     * 获取Usage plan creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Usage plan creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Usage plan creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createdTime Usage plan creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ModifiedTime Last modified time of usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Last modified time of usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _modifiedTime Last modified time of usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Service name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceName Service name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _serviceName Service name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                private:

                    /**
                     * Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Unique API ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * API path.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API method.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Unique usage plan ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_usagePlanId;
                    bool m_usagePlanIdHasBeenSet;

                    /**
                     * Usage plan name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_usagePlanName;
                    bool m_usagePlanNameHasBeenSet;

                    /**
                     * Usage plan description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_usagePlanDesc;
                    bool m_usagePlanDescHasBeenSet;

                    /**
                     * Service environment bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Used quota.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_inUseRequestNum;
                    bool m_inUseRequestNumHasBeenSet;

                    /**
                     * Total number of requests allowed. `-1` indicates no limit.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxRequestNum;
                    bool m_maxRequestNumHasBeenSet;

                    /**
                     * Request QPS upper limit. `-1` indicates no limit.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxRequestNumPreSec;
                    bool m_maxRequestNumPreSecHasBeenSet;

                    /**
                     * Usage plan creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Last modified time of usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Service name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIUSAGEPLAN_H_
