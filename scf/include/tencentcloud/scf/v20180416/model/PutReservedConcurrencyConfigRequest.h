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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_PUTRESERVEDCONCURRENCYCONFIGREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_PUTRESERVEDCONCURRENCYCONFIGREQUEST_H_

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
                * PutReservedConcurrencyConfig request structure.
                */
                class PutReservedConcurrencyConfigRequest : public AbstractModel
                {
                public:
                    PutReservedConcurrencyConfigRequest();
                    ~PutReservedConcurrencyConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the function of which you want to configure the reserved quota
                     * @return FunctionName Specifies the function of which you want to configure the reserved quota
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Specifies the function of which you want to configure the reserved quota
                     * @param _functionName Specifies the function of which you want to configure the reserved quota
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
                     * 获取Reserved memory quota of the function. Note: the upper limit for the total reserved quota of the function is the user's total concurrency memory minus 12800
                     * @return ReservedConcurrencyMem Reserved memory quota of the function. Note: the upper limit for the total reserved quota of the function is the user's total concurrency memory minus 12800
                     * 
                     */
                    uint64_t GetReservedConcurrencyMem() const;

                    /**
                     * 设置Reserved memory quota of the function. Note: the upper limit for the total reserved quota of the function is the user's total concurrency memory minus 12800
                     * @param _reservedConcurrencyMem Reserved memory quota of the function. Note: the upper limit for the total reserved quota of the function is the user's total concurrency memory minus 12800
                     * 
                     */
                    void SetReservedConcurrencyMem(const uint64_t& _reservedConcurrencyMem);

                    /**
                     * 判断参数 ReservedConcurrencyMem 是否已赋值
                     * @return ReservedConcurrencyMem 是否已赋值
                     * 
                     */
                    bool ReservedConcurrencyMemHasBeenSet() const;

                    /**
                     * 获取Function namespace. Default value: `default`
                     * @return Namespace Function namespace. Default value: `default`
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Function namespace. Default value: `default`
                     * @param _namespace Function namespace. Default value: `default`
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
                     * Specifies the function of which you want to configure the reserved quota
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Reserved memory quota of the function. Note: the upper limit for the total reserved quota of the function is the user's total concurrency memory minus 12800
                     */
                    uint64_t m_reservedConcurrencyMem;
                    bool m_reservedConcurrencyMemHasBeenSet;

                    /**
                     * Function namespace. Default value: `default`
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_PUTRESERVEDCONCURRENCYCONFIGREQUEST_H_
