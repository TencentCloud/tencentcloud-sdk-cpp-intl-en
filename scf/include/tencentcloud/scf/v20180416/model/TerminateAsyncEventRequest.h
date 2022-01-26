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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_TERMINATEASYNCEVENTREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_TERMINATEASYNCEVENTREQUEST_H_

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
                * TerminateAsyncEvent request structure.
                */
                class TerminateAsyncEventRequest : public AbstractModel
                {
                public:
                    TerminateAsyncEventRequest();
                    ~TerminateAsyncEventRequest() = default;
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
                     * 获取Terminated invocation request ID
                     * @return InvokeRequestId Terminated invocation request ID
                     */
                    std::string GetInvokeRequestId() const;

                    /**
                     * 设置Terminated invocation request ID
                     * @param InvokeRequestId Terminated invocation request ID
                     */
                    void SetInvokeRequestId(const std::string& _invokeRequestId);

                    /**
                     * 判断参数 InvokeRequestId 是否已赋值
                     * @return InvokeRequestId 是否已赋值
                     */
                    bool InvokeRequestIdHasBeenSet() const;

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
                     * 获取Disused
                     * @return GraceShutdown Disused
                     */
                    bool GetGraceShutdown() const;

                    /**
                     * 设置Disused
                     * @param GraceShutdown Disused
                     */
                    void SetGraceShutdown(const bool& _graceShutdown);

                    /**
                     * 判断参数 GraceShutdown 是否已赋值
                     * @return GraceShutdown 是否已赋值
                     */
                    bool GraceShutdownHasBeenSet() const;

                private:

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Terminated invocation request ID
                     */
                    std::string m_invokeRequestId;
                    bool m_invokeRequestIdHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Disused
                     */
                    bool m_graceShutdown;
                    bool m_graceShutdownHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_TERMINATEASYNCEVENTREQUEST_H_
