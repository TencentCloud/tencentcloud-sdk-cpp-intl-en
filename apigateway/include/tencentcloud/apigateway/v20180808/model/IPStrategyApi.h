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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGYAPI_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGYAPI_H_

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
                * List of APIs bound to policy
                */
                class IPStrategyApi : public AbstractModel
                {
                public:
                    IPStrategyApi();
                    ~IPStrategyApi() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique API ID.
                     * @return ApiId Unique API ID.
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置Unique API ID.
                     * @param ApiId Unique API ID.
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取Custom API name.
                     * @return ApiName Custom API name.
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置Custom API name.
                     * @param ApiName Custom API name.
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取API type. Valid values: NORMAL (general API), TSF (microservice API).
                     * @return ApiType API type. Valid values: NORMAL (general API), TSF (microservice API).
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置API type. Valid values: NORMAL (general API), TSF (microservice API).
                     * @param ApiType API type. Valid values: NORMAL (general API), TSF (microservice API).
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取API path, such as `/path`.
                     * @return Path API path, such as `/path`.
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API path, such as `/path`.
                     * @param Path API path, such as `/path`.
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取API request method, such as `GET`.
                     * @return Method API request method, such as `GET`.
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置API request method, such as `GET`.
                     * @param Method API request method, such as `GET`.
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Unique ID of another policy bound to API.
                     * @return OtherIPStrategyId Unique ID of another policy bound to API.
                     */
                    std::string GetOtherIPStrategyId() const;

                    /**
                     * 设置Unique ID of another policy bound to API.
                     * @param OtherIPStrategyId Unique ID of another policy bound to API.
                     */
                    void SetOtherIPStrategyId(const std::string& _otherIPStrategyId);

                    /**
                     * 判断参数 OtherIPStrategyId 是否已赋值
                     * @return OtherIPStrategyId 是否已赋值
                     */
                    bool OtherIPStrategyIdHasBeenSet() const;

                    /**
                     * 获取Environment bound to API.
                     * @return OtherEnvironmentName Environment bound to API.
                     */
                    std::string GetOtherEnvironmentName() const;

                    /**
                     * 设置Environment bound to API.
                     * @param OtherEnvironmentName Environment bound to API.
                     */
                    void SetOtherEnvironmentName(const std::string& _otherEnvironmentName);

                    /**
                     * 判断参数 OtherEnvironmentName 是否已赋值
                     * @return OtherEnvironmentName 是否已赋值
                     */
                    bool OtherEnvironmentNameHasBeenSet() const;

                private:

                    /**
                     * Unique API ID.
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * Custom API name.
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * API type. Valid values: NORMAL (general API), TSF (microservice API).
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * API path, such as `/path`.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API request method, such as `GET`.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Unique ID of another policy bound to API.
                     */
                    std::string m_otherIPStrategyId;
                    bool m_otherIPStrategyIdHasBeenSet;

                    /**
                     * Environment bound to API.
                     */
                    std::string m_otherEnvironmentName;
                    bool m_otherEnvironmentNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGYAPI_H_
