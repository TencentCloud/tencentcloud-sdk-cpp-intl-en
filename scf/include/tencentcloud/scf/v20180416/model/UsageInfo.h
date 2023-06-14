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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_USAGEINFO_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_USAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/NamespaceUsage.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Usage information
                */
                class UsageInfo : public AbstractModel
                {
                public:
                    UsageInfo();
                    ~UsageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of namespaces
                     * @return NamespacesCount Number of namespaces
                     * 
                     */
                    int64_t GetNamespacesCount() const;

                    /**
                     * 设置Number of namespaces
                     * @param _namespacesCount Number of namespaces
                     * 
                     */
                    void SetNamespacesCount(const int64_t& _namespacesCount);

                    /**
                     * 判断参数 NamespacesCount 是否已赋值
                     * @return NamespacesCount 是否已赋值
                     * 
                     */
                    bool NamespacesCountHasBeenSet() const;

                    /**
                     * 获取Namespace details
                     * @return Namespace Namespace details
                     * 
                     */
                    std::vector<NamespaceUsage> GetNamespace() const;

                    /**
                     * 设置Namespace details
                     * @param _namespace Namespace details
                     * 
                     */
                    void SetNamespace(const std::vector<NamespaceUsage>& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Upper limit of user concurrency memory in the current region
                     * @return TotalConcurrencyMem Upper limit of user concurrency memory in the current region
                     * 
                     */
                    int64_t GetTotalConcurrencyMem() const;

                    /**
                     * 设置Upper limit of user concurrency memory in the current region
                     * @param _totalConcurrencyMem Upper limit of user concurrency memory in the current region
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
                     * 获取Quota of configured user concurrency memory in the current region
                     * @return TotalAllocatedConcurrencyMem Quota of configured user concurrency memory in the current region
                     * 
                     */
                    int64_t GetTotalAllocatedConcurrencyMem() const;

                    /**
                     * 设置Quota of configured user concurrency memory in the current region
                     * @param _totalAllocatedConcurrencyMem Quota of configured user concurrency memory in the current region
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
                     * 获取Quota of account concurrency actually configured by user
                     * @return UserConcurrencyMemLimit Quota of account concurrency actually configured by user
                     * 
                     */
                    int64_t GetUserConcurrencyMemLimit() const;

                    /**
                     * 设置Quota of account concurrency actually configured by user
                     * @param _userConcurrencyMemLimit Quota of account concurrency actually configured by user
                     * 
                     */
                    void SetUserConcurrencyMemLimit(const int64_t& _userConcurrencyMemLimit);

                    /**
                     * 判断参数 UserConcurrencyMemLimit 是否已赋值
                     * @return UserConcurrencyMemLimit 是否已赋值
                     * 
                     */
                    bool UserConcurrencyMemLimitHasBeenSet() const;

                private:

                    /**
                     * Number of namespaces
                     */
                    int64_t m_namespacesCount;
                    bool m_namespacesCountHasBeenSet;

                    /**
                     * Namespace details
                     */
                    std::vector<NamespaceUsage> m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Upper limit of user concurrency memory in the current region
                     */
                    int64_t m_totalConcurrencyMem;
                    bool m_totalConcurrencyMemHasBeenSet;

                    /**
                     * Quota of configured user concurrency memory in the current region
                     */
                    int64_t m_totalAllocatedConcurrencyMem;
                    bool m_totalAllocatedConcurrencyMemHasBeenSet;

                    /**
                     * Quota of account concurrency actually configured by user
                     */
                    int64_t m_userConcurrencyMemLimit;
                    bool m_userConcurrencyMemLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_USAGEINFO_H_
