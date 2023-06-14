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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACEUSAGE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACEUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Namespace usage information
                */
                class NamespaceUsage : public AbstractModel
                {
                public:
                    NamespaceUsage();
                    ~NamespaceUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Function array
                     * @return Functions Function array
                     * 
                     */
                    std::vector<std::string> GetFunctions() const;

                    /**
                     * 设置Function array
                     * @param _functions Function array
                     * 
                     */
                    void SetFunctions(const std::vector<std::string>& _functions);

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     * 
                     */
                    bool FunctionsHasBeenSet() const;

                    /**
                     * 获取Namespace name
                     * @return Namespace Namespace name
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace name
                     * @param _namespace Namespace name
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
                     * 获取Number of functions in namespace
                     * @return FunctionsCount Number of functions in namespace
                     * 
                     */
                    int64_t GetFunctionsCount() const;

                    /**
                     * 设置Number of functions in namespace
                     * @param _functionsCount Number of functions in namespace
                     * 
                     */
                    void SetFunctionsCount(const int64_t& _functionsCount);

                    /**
                     * 判断参数 FunctionsCount 是否已赋值
                     * @return FunctionsCount 是否已赋值
                     * 
                     */
                    bool FunctionsCountHasBeenSet() const;

                    /**
                     * 获取Total memory quota of the namespace
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TotalConcurrencyMem Total memory quota of the namespace
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalConcurrencyMem() const;

                    /**
                     * 设置Total memory quota of the namespace
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _totalConcurrencyMem Total memory quota of the namespace
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalConcurrencyMem(const int64_t& _totalConcurrencyMem);

                    /**
                     * 判断参数 TotalConcurrencyMem 是否已赋值
                     * @return TotalConcurrencyMem 是否已赋值
                     * 
                     */
                    bool TotalConcurrencyMemHasBeenSet() const;

                    /**
                     * 获取Concurrency usage of the namespace
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TotalAllocatedConcurrencyMem Concurrency usage of the namespace
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalAllocatedConcurrencyMem() const;

                    /**
                     * 设置Concurrency usage of the namespace
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _totalAllocatedConcurrencyMem Concurrency usage of the namespace
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalAllocatedConcurrencyMem(const int64_t& _totalAllocatedConcurrencyMem);

                    /**
                     * 判断参数 TotalAllocatedConcurrencyMem 是否已赋值
                     * @return TotalAllocatedConcurrencyMem 是否已赋值
                     * 
                     */
                    bool TotalAllocatedConcurrencyMemHasBeenSet() const;

                    /**
                     * 获取Provisioned concurrency usage of the namespace
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TotalAllocatedProvisionedMem Provisioned concurrency usage of the namespace
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalAllocatedProvisionedMem() const;

                    /**
                     * 设置Provisioned concurrency usage of the namespace
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _totalAllocatedProvisionedMem Provisioned concurrency usage of the namespace
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalAllocatedProvisionedMem(const int64_t& _totalAllocatedProvisionedMem);

                    /**
                     * 判断参数 TotalAllocatedProvisionedMem 是否已赋值
                     * @return TotalAllocatedProvisionedMem 是否已赋值
                     * 
                     */
                    bool TotalAllocatedProvisionedMemHasBeenSet() const;

                private:

                    /**
                     * Function array
                     */
                    std::vector<std::string> m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * Namespace name
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Number of functions in namespace
                     */
                    int64_t m_functionsCount;
                    bool m_functionsCountHasBeenSet;

                    /**
                     * Total memory quota of the namespace
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalConcurrencyMem;
                    bool m_totalConcurrencyMemHasBeenSet;

                    /**
                     * Concurrency usage of the namespace
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalAllocatedConcurrencyMem;
                    bool m_totalAllocatedConcurrencyMemHasBeenSet;

                    /**
                     * Provisioned concurrency usage of the namespace
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalAllocatedProvisionedMem;
                    bool m_totalAllocatedProvisionedMemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACEUSAGE_H_
