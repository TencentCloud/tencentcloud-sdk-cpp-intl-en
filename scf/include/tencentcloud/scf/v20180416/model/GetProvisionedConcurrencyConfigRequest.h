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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETPROVISIONEDCONCURRENCYCONFIGREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETPROVISIONEDCONCURRENCYCONFIGREQUEST_H_

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
                * GetProvisionedConcurrencyConfig request structure.
                */
                class GetProvisionedConcurrencyConfigRequest : public AbstractModel
                {
                public:
                    GetProvisionedConcurrencyConfigRequest();
                    ~GetProvisionedConcurrencyConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the function for which to get the provisioned concurrency details.
                     * @return FunctionName Name of the function for which to get the provisioned concurrency details.
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Name of the function for which to get the provisioned concurrency details.
                     * @param _functionName Name of the function for which to get the provisioned concurrency details.
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
                     * 获取Function namespace. Default value: default.
                     * @return Namespace Function namespace. Default value: default.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Function namespace. Default value: default.
                     * @param _namespace Function namespace. Default value: default.
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
                     * 获取Function version number. If this parameter is left empty, the provisioned concurrency information of all function versions will be returned.
                     * @return Qualifier Function version number. If this parameter is left empty, the provisioned concurrency information of all function versions will be returned.
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Function version number. If this parameter is left empty, the provisioned concurrency information of all function versions will be returned.
                     * @param _qualifier Function version number. If this parameter is left empty, the provisioned concurrency information of all function versions will be returned.
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                private:

                    /**
                     * Name of the function for which to get the provisioned concurrency details.
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function namespace. Default value: default.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Function version number. If this parameter is left empty, the provisioned concurrency information of all function versions will be returned.
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETPROVISIONEDCONCURRENCYCONFIGREQUEST_H_
