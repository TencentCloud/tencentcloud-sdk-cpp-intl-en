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
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name
                     * @param FunctionName Function name
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取The value is `RequestResponse` (synchronous) or `Event` (asynchronous). The default value is synchronous.
                     * @return InvocationType The value is `RequestResponse` (synchronous) or `Event` (asynchronous). The default value is synchronous.
                     */
                    std::string GetInvocationType() const;

                    /**
                     * 设置The value is `RequestResponse` (synchronous) or `Event` (asynchronous). The default value is synchronous.
                     * @param InvocationType The value is `RequestResponse` (synchronous) or `Event` (asynchronous). The default value is synchronous.
                     */
                    void SetInvocationType(const std::string& _invocationType);

                    /**
                     * 判断参数 InvocationType 是否已赋值
                     * @return InvocationType 是否已赋值
                     */
                    bool InvocationTypeHasBeenSet() const;

                    /**
                     * 获取Version number of the triggered function
                     * @return Qualifier Version number of the triggered function
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Version number of the triggered function
                     * @param Qualifier Version number of the triggered function
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取Function running parameter, which is in the JSON format. Maximum parameter size is 1 MB.
                     * @return ClientContext Function running parameter, which is in the JSON format. Maximum parameter size is 1 MB.
                     */
                    std::string GetClientContext() const;

                    /**
                     * 设置Function running parameter, which is in the JSON format. Maximum parameter size is 1 MB.
                     * @param ClientContext Function running parameter, which is in the JSON format. Maximum parameter size is 1 MB.
                     */
                    void SetClientContext(const std::string& _clientContext);

                    /**
                     * 判断参数 ClientContext 是否已赋值
                     * @return ClientContext 是否已赋值
                     */
                    bool ClientContextHasBeenSet() const;

                    /**
                     * 获取If this field is specified for a synchronous invocation, the return value will contain a 4-KB log. The value is `None` (default) or `Tail`. If the value is `Tail`, `logMsg` in the return parameter will contain the corresponding function execution log.
                     * @return LogType If this field is specified for a synchronous invocation, the return value will contain a 4-KB log. The value is `None` (default) or `Tail`. If the value is `Tail`, `logMsg` in the return parameter will contain the corresponding function execution log.
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置If this field is specified for a synchronous invocation, the return value will contain a 4-KB log. The value is `None` (default) or `Tail`. If the value is `Tail`, `logMsg` in the return parameter will contain the corresponding function execution log.
                     * @param LogType If this field is specified for a synchronous invocation, the return value will contain a 4-KB log. The value is `None` (default) or `Tail`. If the value is `Tail`, `logMsg` in the return parameter will contain the corresponding function execution log.
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Namespace
                     * @return Namespace Namespace
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param Namespace Namespace
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Traffic routing config in json format, e.g., {"k":"v"}. Please note that both "k" and "v" must be strings. Up to 1024 bytes allowed.
                     * @return RoutingKey Traffic routing config in json format, e.g., {"k":"v"}. Please note that both "k" and "v" must be strings. Up to 1024 bytes allowed.
                     */
                    std::string GetRoutingKey() const;

                    /**
                     * 设置Traffic routing config in json format, e.g., {"k":"v"}. Please note that both "k" and "v" must be strings. Up to 1024 bytes allowed.
                     * @param RoutingKey Traffic routing config in json format, e.g., {"k":"v"}. Please note that both "k" and "v" must be strings. Up to 1024 bytes allowed.
                     */
                    void SetRoutingKey(const std::string& _routingKey);

                    /**
                     * 判断参数 RoutingKey 是否已赋值
                     * @return RoutingKey 是否已赋值
                     */
                    bool RoutingKeyHasBeenSet() const;

                private:

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * The value is `RequestResponse` (synchronous) or `Event` (asynchronous). The default value is synchronous.
                     */
                    std::string m_invocationType;
                    bool m_invocationTypeHasBeenSet;

                    /**
                     * Version number of the triggered function
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Function running parameter, which is in the JSON format. Maximum parameter size is 1 MB.
                     */
                    std::string m_clientContext;
                    bool m_clientContextHasBeenSet;

                    /**
                     * If this field is specified for a synchronous invocation, the return value will contain a 4-KB log. The value is `None` (default) or `Tail`. If the value is `Tail`, `logMsg` in the return parameter will contain the corresponding function execution log.
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
