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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_KVNAMESPACEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_KVNAMESPACEPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Detailed configuration parameters required when binding a KV namespace to an edge function, used to specify the source of the bound namespace. With this configuration, the edge function can operate the KV namespace of the designated site.
                */
                class KVNamespaceParameters : public AbstractModel
                {
                public:
                    KVNamespaceParameters();
                    ~KVNamespaceParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The site ID belonging to the KV namespace. Specifies the site where the KV namespace resides that should be bound, supporting cross-site binding.
                     * @return ZoneId The site ID belonging to the KV namespace. Specifies the site where the KV namespace resides that should be bound, supporting cross-site binding.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID belonging to the KV namespace. Specifies the site where the KV namespace resides that should be bound, supporting cross-site binding.
                     * @param _zoneId The site ID belonging to the KV namespace. Specifies the site where the KV namespace resides that should be bound, supporting cross-site binding.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取KV namespace name. Specifies the specific namespace that should be bound. You can obtain the list of namespaces under the site through the DescribeKVNamespace API.
                     * @return Namespace KV namespace name. Specifies the specific namespace that should be bound. You can obtain the list of namespaces under the site through the DescribeKVNamespace API.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置KV namespace name. Specifies the specific namespace that should be bound. You can obtain the list of namespaces under the site through the DescribeKVNamespace API.
                     * @param _namespace KV namespace name. Specifies the specific namespace that should be bound. You can obtain the list of namespaces under the site through the DescribeKVNamespace API.
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
                     * The site ID belonging to the KV namespace. Specifies the site where the KV namespace resides that should be bound, supporting cross-site binding.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * KV namespace name. Specifies the specific namespace that should be bound. You can obtain the list of namespaces under the site through the DescribeKVNamespace API.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_KVNAMESPACEPARAMETERS_H_
