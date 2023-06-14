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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONEVENTINVOKECONFIGREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONEVENTINVOKECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/AsyncTriggerConfig.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateFunctionEventInvokeConfig request structure.
                */
                class UpdateFunctionEventInvokeConfigRequest : public AbstractModel
                {
                public:
                    UpdateFunctionEventInvokeConfigRequest();
                    ~UpdateFunctionEventInvokeConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Async retry configuration information
                     * @return AsyncTriggerConfig Async retry configuration information
                     * 
                     */
                    AsyncTriggerConfig GetAsyncTriggerConfig() const;

                    /**
                     * 设置Async retry configuration information
                     * @param _asyncTriggerConfig Async retry configuration information
                     * 
                     */
                    void SetAsyncTriggerConfig(const AsyncTriggerConfig& _asyncTriggerConfig);

                    /**
                     * 判断参数 AsyncTriggerConfig 是否已赋值
                     * @return AsyncTriggerConfig 是否已赋值
                     * 
                     */
                    bool AsyncTriggerConfigHasBeenSet() const;

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
                     * 获取Function namespace. Default value: default
                     * @return Namespace Function namespace. Default value: default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Function namespace. Default value: default
                     * @param _namespace Function namespace. Default value: default
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * Async retry configuration information
                     */
                    AsyncTriggerConfig m_asyncTriggerConfig;
                    bool m_asyncTriggerConfigHasBeenSet;

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function namespace. Default value: default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONEVENTINVOKECONFIGREQUEST_H_
