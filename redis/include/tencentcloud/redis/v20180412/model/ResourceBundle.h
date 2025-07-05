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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_RESOURCEBUNDLE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_RESOURCEBUNDLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Dedicated Redis cluster resource package.
                */
                class ResourceBundle : public AbstractModel
                {
                public:
                    ResourceBundle();
                    ~ResourceBundle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource package name.
                     * @return ResourceBundleName Resource package name.
                     * 
                     */
                    std::string GetResourceBundleName() const;

                    /**
                     * 设置Resource package name.
                     * @param _resourceBundleName Resource package name.
                     * 
                     */
                    void SetResourceBundleName(const std::string& _resourceBundleName);

                    /**
                     * 判断参数 ResourceBundleName 是否已赋值
                     * @return ResourceBundleName 是否已赋值
                     * 
                     */
                    bool ResourceBundleNameHasBeenSet() const;

                    /**
                     * 获取Saleable memory. Unit: GB.
                     * @return AvailableMemory Saleable memory. Unit: GB.
                     * 
                     */
                    int64_t GetAvailableMemory() const;

                    /**
                     * 设置Saleable memory. Unit: GB.
                     * @param _availableMemory Saleable memory. Unit: GB.
                     * 
                     */
                    void SetAvailableMemory(const int64_t& _availableMemory);

                    /**
                     * 判断参数 AvailableMemory 是否已赋值
                     * @return AvailableMemory 是否已赋值
                     * 
                     */
                    bool AvailableMemoryHasBeenSet() const;

                    /**
                     * 获取Number of resource packages.
                     * @return Count Number of resource packages.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of resource packages.
                     * @param _count Number of resource packages.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Resource package name.
                     */
                    std::string m_resourceBundleName;
                    bool m_resourceBundleNameHasBeenSet;

                    /**
                     * Saleable memory. Unit: GB.
                     */
                    int64_t m_availableMemory;
                    bool m_availableMemoryHasBeenSet;

                    /**
                     * Number of resource packages.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_RESOURCEBUNDLE_H_
