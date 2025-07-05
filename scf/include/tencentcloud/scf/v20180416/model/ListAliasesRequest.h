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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTALIASESREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTALIASESREQUEST_H_

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
                * ListAliases request structure.
                */
                class ListAliasesRequest : public AbstractModel
                {
                public:
                    ListAliasesRequest();
                    ~ListAliasesRequest() = default;
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
                     * 获取Function namespace
                     * @return Namespace Function namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Function namespace
                     * @param _namespace Function namespace
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
                     * 获取If this parameter is provided, only aliases associated with this function version will be returned.
                     * @return FunctionVersion If this parameter is provided, only aliases associated with this function version will be returned.
                     * 
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 设置If this parameter is provided, only aliases associated with this function version will be returned.
                     * @param _functionVersion If this parameter is provided, only aliases associated with this function version will be returned.
                     * 
                     */
                    void SetFunctionVersion(const std::string& _functionVersion);

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     * 
                     */
                    bool FunctionVersionHasBeenSet() const;

                    /**
                     * 获取Data offset. Default value: 0
                     * @return Offset Data offset. Default value: 0
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置Data offset. Default value: 0
                     * @param _offset Data offset. Default value: 0
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. Default value: 20
                     * @return Limit Number of results to be returned. Default value: 20
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: 20
                     * @param _limit Number of results to be returned. Default value: 20
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * If this parameter is provided, only aliases associated with this function version will be returned.
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * Data offset. Default value: 0
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: 20
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTALIASESREQUEST_H_
