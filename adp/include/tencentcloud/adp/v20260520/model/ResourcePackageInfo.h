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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_RESOURCEPACKAGEINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_RESOURCEPACKAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Usage information of the billing package
                */
                class ResourcePackageInfo : public AbstractModel
                {
                public:
                    ResourcePackageInfo();
                    ~ResourcePackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Package type</p><p>Enumeration values:</p><ul><li>1: Free edition</li><li>2: Pro edition</li><li>3: Enterprise edition</li></ul>
                     * @return PackageType <p>Package type</p><p>Enumeration values:</p><ul><li>1: Free edition</li><li>2: Pro edition</li><li>3: Enterprise edition</li></ul>
                     * 
                     */
                    uint64_t GetPackageType() const;

                    /**
                     * 设置<p>Package type</p><p>Enumeration values:</p><ul><li>1: Free edition</li><li>2: Pro edition</li><li>3: Enterprise edition</li></ul>
                     * @param _packageType <p>Package type</p><p>Enumeration values:</p><ul><li>1: Free edition</li><li>2: Pro edition</li><li>3: Enterprise edition</li></ul>
                     * 
                     */
                    void SetPackageType(const uint64_t& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取<p>Total resource package quantity</p>
                     * @return ResourceTotal <p>Total resource package quantity</p>
                     * 
                     */
                    int64_t GetResourceTotal() const;

                    /**
                     * 设置<p>Total resource package quantity</p>
                     * @param _resourceTotal <p>Total resource package quantity</p>
                     * 
                     */
                    void SetResourceTotal(const int64_t& _resourceTotal);

                    /**
                     * 判断参数 ResourceTotal 是否已赋值
                     * @return ResourceTotal 是否已赋值
                     * 
                     */
                    bool ResourceTotalHasBeenSet() const;

                    /**
                     * 获取<p>Resource package usage</p>
                     * @return ResourceUsage <p>Resource package usage</p>
                     * 
                     */
                    double GetResourceUsage() const;

                    /**
                     * 设置<p>Resource package usage</p>
                     * @param _resourceUsage <p>Resource package usage</p>
                     * 
                     */
                    void SetResourceUsage(const double& _resourceUsage);

                    /**
                     * 判断参数 ResourceUsage 是否已赋值
                     * @return ResourceUsage 是否已赋值
                     * 
                     */
                    bool ResourceUsageHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge base capacity.</p>
                     * @return KnowledgeCapacity <p>Knowledge base capacity.</p>
                     * 
                     */
                    double GetKnowledgeCapacity() const;

                    /**
                     * 设置<p>Knowledge base capacity.</p>
                     * @param _knowledgeCapacity <p>Knowledge base capacity.</p>
                     * 
                     */
                    void SetKnowledgeCapacity(const double& _knowledgeCapacity);

                    /**
                     * 判断参数 KnowledgeCapacity 是否已赋值
                     * @return KnowledgeCapacity 是否已赋值
                     * 
                     */
                    bool KnowledgeCapacityHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge base amount</p>
                     * @return KnowledgeUsage <p>Knowledge base amount</p>
                     * 
                     */
                    double GetKnowledgeUsage() const;

                    /**
                     * 设置<p>Knowledge base amount</p>
                     * @param _knowledgeUsage <p>Knowledge base amount</p>
                     * 
                     */
                    void SetKnowledgeUsage(const double& _knowledgeUsage);

                    /**
                     * 判断参数 KnowledgeUsage 是否已赋值
                     * @return KnowledgeUsage 是否已赋值
                     * 
                     */
                    bool KnowledgeUsageHasBeenSet() const;

                    /**
                     * 获取<p>Resource pack status</p><p>Enumeration values:</p><ul><li>1: Normal</li><li>3: Expired</li><li>4: About to expire</li></ul>
                     * @return ResourceStatus <p>Resource pack status</p><p>Enumeration values:</p><ul><li>1: Normal</li><li>3: Expired</li><li>4: About to expire</li></ul>
                     * 
                     */
                    uint64_t GetResourceStatus() const;

                    /**
                     * 设置<p>Resource pack status</p><p>Enumeration values:</p><ul><li>1: Normal</li><li>3: Expired</li><li>4: About to expire</li></ul>
                     * @param _resourceStatus <p>Resource pack status</p><p>Enumeration values:</p><ul><li>1: Normal</li><li>3: Expired</li><li>4: About to expire</li></ul>
                     * 
                     */
                    void SetResourceStatus(const uint64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                private:

                    /**
                     * <p>Package type</p><p>Enumeration values:</p><ul><li>1: Free edition</li><li>2: Pro edition</li><li>3: Enterprise edition</li></ul>
                     */
                    uint64_t m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * <p>Total resource package quantity</p>
                     */
                    int64_t m_resourceTotal;
                    bool m_resourceTotalHasBeenSet;

                    /**
                     * <p>Resource package usage</p>
                     */
                    double m_resourceUsage;
                    bool m_resourceUsageHasBeenSet;

                    /**
                     * <p>Knowledge base capacity.</p>
                     */
                    double m_knowledgeCapacity;
                    bool m_knowledgeCapacityHasBeenSet;

                    /**
                     * <p>Knowledge base amount</p>
                     */
                    double m_knowledgeUsage;
                    bool m_knowledgeUsageHasBeenSet;

                    /**
                     * <p>Resource pack status</p><p>Enumeration values:</p><ul><li>1: Normal</li><li>3: Expired</li><li>4: About to expire</li></ul>
                     */
                    uint64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_RESOURCEPACKAGEINFO_H_
