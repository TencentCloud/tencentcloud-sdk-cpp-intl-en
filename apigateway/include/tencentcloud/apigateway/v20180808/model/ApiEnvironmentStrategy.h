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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIENVIRONMENTSTRATEGY_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIENVIRONMENTSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/EnvironmentStrategy.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * API environment binding policy
                */
                class ApiEnvironmentStrategy : public AbstractModel
                {
                public:
                    ApiEnvironmentStrategy();
                    ~ApiEnvironmentStrategy() = default;
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
                     * 获取Custom API name.
                     * @return ApiName Custom API name.
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置Custom API name.
                     * @param _apiName Custom API name.
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
                     * 获取API path, such as `/path`.
                     * @return Path API path, such as `/path`.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API path, such as `/path`.
                     * @param _path API path, such as `/path`.
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
                     * 获取API method, such as `GET`.
                     * @return Method API method, such as `GET`.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置API method, such as `GET`.
                     * @param _method API method, such as `GET`.
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
                     * 获取Environment throttling information.
                     * @return EnvironmentStrategySet Environment throttling information.
                     * 
                     */
                    std::vector<EnvironmentStrategy> GetEnvironmentStrategySet() const;

                    /**
                     * 设置Environment throttling information.
                     * @param _environmentStrategySet Environment throttling information.
                     * 
                     */
                    void SetEnvironmentStrategySet(const std::vector<EnvironmentStrategy>& _environmentStrategySet);

                    /**
                     * 判断参数 EnvironmentStrategySet 是否已赋值
                     * @return EnvironmentStrategySet 是否已赋值
                     * 
                     */
                    bool EnvironmentStrategySetHasBeenSet() const;

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
                     * API path, such as `/path`.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API method, such as `GET`.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Environment throttling information.
                     */
                    std::vector<EnvironmentStrategy> m_environmentStrategySet;
                    bool m_environmentStrategySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIENVIRONMENTSTRATEGY_H_
