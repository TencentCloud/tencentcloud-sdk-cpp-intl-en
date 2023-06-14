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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_INVOKEFUNCTIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_INVOKEFUNCTIONREQUEST_H_

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
                * InvokeFunction request structure.
                */
                class InvokeFunctionRequest : public AbstractModel
                {
                public:
                    InvokeFunctionRequest();
                    ~InvokeFunctionRequest() = default;
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
                     * 获取Version or alias of the function. It defaults to `$DEFAULT`.
                     * @return Qualifier Version or alias of the function. It defaults to `$DEFAULT`.
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Version or alias of the function. It defaults to `$DEFAULT`.
                     * @param _qualifier Version or alias of the function. It defaults to `$DEFAULT`.
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
                     * 获取Function running parameter, which is in the JSON format. Maximum parameter size is 6 MB. This field corresponds to [event input parameter](https://intl.cloud.tencent.com/document/product/583/9210?from_cn_redirect=1#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E).
                     * @return Event Function running parameter, which is in the JSON format. Maximum parameter size is 6 MB. This field corresponds to [event input parameter](https://intl.cloud.tencent.com/document/product/583/9210?from_cn_redirect=1#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E).
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置Function running parameter, which is in the JSON format. Maximum parameter size is 6 MB. This field corresponds to [event input parameter](https://intl.cloud.tencent.com/document/product/583/9210?from_cn_redirect=1#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E).
                     * @param _event Function running parameter, which is in the JSON format. Maximum parameter size is 6 MB. This field corresponds to [event input parameter](https://intl.cloud.tencent.com/document/product/583/9210?from_cn_redirect=1#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E).
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取Valid value: `None` (default) or `Tail`. If the value is `Tail`, `log` in the response will contain the corresponding function execution log (up to 4KB).
                     * @return LogType Valid value: `None` (default) or `Tail`. If the value is `Tail`, `log` in the response will contain the corresponding function execution log (up to 4KB).
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Valid value: `None` (default) or `Tail`. If the value is `Tail`, `log` in the response will contain the corresponding function execution log (up to 4KB).
                     * @param _logType Valid value: `None` (default) or `Tail`. If the value is `Tail`, `log` in the response will contain the corresponding function execution log (up to 4KB).
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
                     * 获取Namespace. `default` is used if it’s left empty.
                     * @return Namespace Namespace. `default` is used if it’s left empty.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace. `default` is used if it’s left empty.
                     * @param _namespace Namespace. `default` is used if it’s left empty.
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
                     * Version or alias of the function. It defaults to `$DEFAULT`.
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Function running parameter, which is in the JSON format. Maximum parameter size is 6 MB. This field corresponds to [event input parameter](https://intl.cloud.tencent.com/document/product/583/9210?from_cn_redirect=1#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E).
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * Valid value: `None` (default) or `Tail`. If the value is `Tail`, `log` in the response will contain the corresponding function execution log (up to 4KB).
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Namespace. `default` is used if it’s left empty.
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

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_INVOKEFUNCTIONREQUEST_H_
