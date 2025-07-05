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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_INVOKEREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_INVOKEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Invoke request structure.
                */
                class InvokeRequest : public AbstractModel
                {
                public:
                    InvokeRequest();
                    ~InvokeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Function name
                     * @return FunctionName Function name
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name
                     * @param _functionName Function name
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Fill in `RequestResponse` for synchronized invocations (default and recommended) and `Event` for asychronized invocations. Note that for synchronized invocations, the max timeout period is 300s. Choose asychronized invocations if the required timeout period is longer than 300 seconds. You can also use [InvokeFunction](https://intl.cloud.tencent.com/document/product/583/58400?from_cn_redirect=1) for synchronized invocations. 
                     * @return InvocationType Fill in `RequestResponse` for synchronized invocations (default and recommended) and `Event` for asychronized invocations. Note that for synchronized invocations, the max timeout period is 300s. Choose asychronized invocations if the required timeout period is longer than 300 seconds. You can also use [InvokeFunction](https://intl.cloud.tencent.com/document/product/583/58400?from_cn_redirect=1) for synchronized invocations. 
                     * 
                     */
                    std::string GetInvocationType() const;

                    /**
                     * 设置Fill in `RequestResponse` for synchronized invocations (default and recommended) and `Event` for asychronized invocations. Note that for synchronized invocations, the max timeout period is 300s. Choose asychronized invocations if the required timeout period is longer than 300 seconds. You can also use [InvokeFunction](https://intl.cloud.tencent.com/document/product/583/58400?from_cn_redirect=1) for synchronized invocations. 
                     * @param _invocationType Fill in `RequestResponse` for synchronized invocations (default and recommended) and `Event` for asychronized invocations. Note that for synchronized invocations, the max timeout period is 300s. Choose asychronized invocations if the required timeout period is longer than 300 seconds. You can also use [InvokeFunction](https://intl.cloud.tencent.com/document/product/583/58400?from_cn_redirect=1) for synchronized invocations. 
                     * 
                     */
                    void SetInvocationType(const std::string& _invocationType);

                    /**
                     * 判断参数 InvocationType 是否已赋值
                     * @return InvocationType 是否已赋值
                     * 
                     */
                    bool InvocationTypeHasBeenSet() const;

                    /**
                     * 获取The version or alias of the triggered function. It defaults to $LATEST
                     * @return Qualifier The version or alias of the triggered function. It defaults to $LATEST
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置The version or alias of the triggered function. It defaults to $LATEST
                     * @param _qualifier The version or alias of the triggered function. It defaults to $LATEST
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取Function running parameter, which is in the JSON format. The maximum parameter size is 6 MB for synchronized invocations and 128KB for asynchronized invocations. This field corresponds to [event input parameter](https://intl.cloud.tencent.com/document/product/583/9210?from_cn_redirect=1#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E).
                     * @return ClientContext Function running parameter, which is in the JSON format. The maximum parameter size is 6 MB for synchronized invocations and 128KB for asynchronized invocations. This field corresponds to [event input parameter](https://intl.cloud.tencent.com/document/product/583/9210?from_cn_redirect=1#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E).
                     * 
                     */
                    std::string GetClientContext() const;

                    /**
                     * 设置Function running parameter, which is in the JSON format. The maximum parameter size is 6 MB for synchronized invocations and 128KB for asynchronized invocations. This field corresponds to [event input parameter](https://intl.cloud.tencent.com/document/product/583/9210?from_cn_redirect=1#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E).
                     * @param _clientContext Function running parameter, which is in the JSON format. The maximum parameter size is 6 MB for synchronized invocations and 128KB for asynchronized invocations. This field corresponds to [event input parameter](https://intl.cloud.tencent.com/document/product/583/9210?from_cn_redirect=1#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E).
                     * 
                     */
                    void SetClientContext(const std::string& _clientContext);

                    /**
                     * 判断参数 ClientContext 是否已赋值
                     * @return ClientContext 是否已赋值
                     * 
                     */
                    bool ClientContextHasBeenSet() const;

                    /**
                     * 获取Null for async invocations
                     * @return LogType Null for async invocations
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Null for async invocations
                     * @param _logType Null for async invocations
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Namespace
                     * @return Namespace Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param _namespace Namespace
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Traffic routing config in json format, e.g., {"k":"v"}. Please note that both "k" and "v" must be strings. Up to 1024 bytes allowed.
                     * @return RoutingKey Traffic routing config in json format, e.g., {"k":"v"}. Please note that both "k" and "v" must be strings. Up to 1024 bytes allowed.
                     * 
                     */
                    std::string GetRoutingKey() const;

                    /**
                     * 设置Traffic routing config in json format, e.g., {"k":"v"}. Please note that both "k" and "v" must be strings. Up to 1024 bytes allowed.
                     * @param _routingKey Traffic routing config in json format, e.g., {"k":"v"}. Please note that both "k" and "v" must be strings. Up to 1024 bytes allowed.
                     * 
                     */
                    void SetRoutingKey(const std::string& _routingKey);

                    /**
                     * 判断参数 RoutingKey 是否已赋值
                     * @return RoutingKey 是否已赋值
                     * 
                     */
                    bool RoutingKeyHasBeenSet() const;

                private:

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Fill in `RequestResponse` for synchronized invocations (default and recommended) and `Event` for asychronized invocations. Note that for synchronized invocations, the max timeout period is 300s. Choose asychronized invocations if the required timeout period is longer than 300 seconds. You can also use [InvokeFunction](https://intl.cloud.tencent.com/document/product/583/58400?from_cn_redirect=1) for synchronized invocations. 
                     */
                    std::string m_invocationType;
                    bool m_invocationTypeHasBeenSet;

                    /**
                     * The version or alias of the triggered function. It defaults to $LATEST
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Function running parameter, which is in the JSON format. The maximum parameter size is 6 MB for synchronized invocations and 128KB for asynchronized invocations. This field corresponds to [event input parameter](https://intl.cloud.tencent.com/document/product/583/9210?from_cn_redirect=1#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E).
                     */
                    std::string m_clientContext;
                    bool m_clientContextHasBeenSet;

                    /**
                     * Null for async invocations
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Traffic routing config in json format, e.g., {"k":"v"}. Please note that both "k" and "v" must be strings. Up to 1024 bytes allowed.
                     */
                    std::string m_routingKey;
                    bool m_routingKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_INVOKEREQUEST_H_
