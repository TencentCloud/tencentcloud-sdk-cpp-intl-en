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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ROUTEPROMETHEUSDYNAMICAPIREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ROUTEPROMETHEUSDYNAMICAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusStringKeyValuePair.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * RoutePrometheusDynamicAPI request structure.
                */
                class RoutePrometheusDynamicAPIRequest : public AbstractModel
                {
                public:
                    RoutePrometheusDynamicAPIRequest();
                    ~RoutePrometheusDynamicAPIRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Prometheus Instance ID</p>
                     * @return InstanceId <p>Prometheus Instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Prometheus Instance ID</p>
                     * @param _instanceId <p>Prometheus Instance ID</p>
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
                     * 获取<p>HTTP method name GET/POST/PUT/DELETE</p>
                     * @return Method <p>HTTP method name GET/POST/PUT/DELETE</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>HTTP method name GET/POST/PUT/DELETE</p>
                     * @param _method <p>HTTP method name GET/POST/PUT/DELETE</p>
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
                     * 获取<p>HTTP path (including query string)</p>
                     * @return Path <p>HTTP path (including query string)</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>HTTP path (including query string)</p>
                     * @param _path <p>HTTP path (including query string)</p>
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
                     * 获取<p>HTTP request body, any data</p>
                     * @return RequestBody <p>HTTP request body, any data</p>
                     * 
                     */
                    std::string GetRequestBody() const;

                    /**
                     * 设置<p>HTTP request body, any data</p>
                     * @param _requestBody <p>HTTP request body, any data</p>
                     * 
                     */
                    void SetRequestBody(const std::string& _requestBody);

                    /**
                     * 判断参数 RequestBody 是否已赋值
                     * @return RequestBody 是否已赋值
                     * 
                     */
                    bool RequestBodyHasBeenSet() const;

                    /**
                     * 获取<p>HTTP headers</p>
                     * @return Headers <p>HTTP headers</p>
                     * 
                     */
                    std::vector<PrometheusStringKeyValuePair> GetHeaders() const;

                    /**
                     * 设置<p>HTTP headers</p>
                     * @param _headers <p>HTTP headers</p>
                     * 
                     */
                    void SetHeaders(const std::vector<PrometheusStringKeyValuePair>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * <p>Prometheus Instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>HTTP method name GET/POST/PUT/DELETE</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>HTTP path (including query string)</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>HTTP request body, any data</p>
                     */
                    std::string m_requestBody;
                    bool m_requestBodyHasBeenSet;

                    /**
                     * <p>HTTP headers</p>
                     */
                    std::vector<PrometheusStringKeyValuePair> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ROUTEPROMETHEUSDYNAMICAPIREQUEST_H_
