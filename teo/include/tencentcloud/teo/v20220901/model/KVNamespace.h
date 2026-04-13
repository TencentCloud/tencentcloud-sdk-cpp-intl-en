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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_KVNAMESPACE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_KVNAMESPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ComponentReference.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * KV namespace information, including namespace basic attribute, capacity utilization and reference relationship. KV namespace is a container for edge function to store key-value pair data. It supports read-write operation in edge function through binding method.
                */
                class KVNamespace : public AbstractModel
                {
                public:
                    KVNamespace();
                    ~KVNamespace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Namespace name. Has uniqueness in the same site.
                     * @return Namespace Namespace name. Has uniqueness in the same site.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace name. Has uniqueness in the same site.
                     * @param _namespace Namespace name. Has uniqueness in the same site.
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
                     * 获取Namespace description. Remark information filled in upon creation, used for explaining the purpose or business meaning of the namespace. Supports a maximum of 256 characters.
                     * @return Remark Namespace description. Remark information filled in upon creation, used for explaining the purpose or business meaning of the namespace. Supports a maximum of 256 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Namespace description. Remark information filled in upon creation, used for explaining the purpose or business meaning of the namespace. Supports a maximum of 256 characters.
                     * @param _remark Namespace description. Remark information filled in upon creation, used for explaining the purpose or business meaning of the namespace. Supports a maximum of 256 characters.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Available capacity of KV storage space in bytes. It indicates the maximum capacity limit of storable data in namespace, defaulting to 1 GB.
                     * @return Capacity Available capacity of KV storage space in bytes. It indicates the maximum capacity limit of storable data in namespace, defaulting to 1 GB.
                     * 
                     */
                    int64_t GetCapacity() const;

                    /**
                     * 设置Available capacity of KV storage space in bytes. It indicates the maximum capacity limit of storable data in namespace, defaulting to 1 GB.
                     * @param _capacity Available capacity of KV storage space in bytes. It indicates the maximum capacity limit of storable data in namespace, defaulting to 1 GB.
                     * 
                     */
                    void SetCapacity(const int64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取KV storage space used capacity in bytes (Byte). It indicates the currently used storage space size of the namespace.
                     * @return CapacityUsed KV storage space used capacity in bytes (Byte). It indicates the currently used storage space size of the namespace.
                     * 
                     */
                    int64_t GetCapacityUsed() const;

                    /**
                     * 设置KV storage space used capacity in bytes (Byte). It indicates the currently used storage space size of the namespace.
                     * @param _capacityUsed KV storage space used capacity in bytes (Byte). It indicates the currently used storage space size of the namespace.
                     * 
                     */
                    void SetCapacityUsed(const int64_t& _capacityUsed);

                    /**
                     * 判断参数 CapacityUsed 是否已赋值
                     * @return CapacityUsed 是否已赋值
                     * 
                     */
                    bool CapacityUsedHasBeenSet() const;

                    /**
                     * 获取List of referenced instances in the namespace. Shows which edge function instances reference the current namespace and the site information referenced. Returns an empty array if not referenced.
                     * @return References List of referenced instances in the namespace. Shows which edge function instances reference the current namespace and the site information referenced. Returns an empty array if not referenced.
                     * 
                     */
                    std::vector<ComponentReference> GetReferences() const;

                    /**
                     * 设置List of referenced instances in the namespace. Shows which edge function instances reference the current namespace and the site information referenced. Returns an empty array if not referenced.
                     * @param _references List of referenced instances in the namespace. Shows which edge function instances reference the current namespace and the site information referenced. Returns an empty array if not referenced.
                     * 
                     */
                    void SetReferences(const std::vector<ComponentReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取The creation time of the namespace follows the ISO 8601 standard in the format YYYY-MM-DDThh:mm:ssZ (UTC time).
                     * @return CreatedOn The creation time of the namespace follows the ISO 8601 standard in the format YYYY-MM-DDThh:mm:ssZ (UTC time).
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置The creation time of the namespace follows the ISO 8601 standard in the format YYYY-MM-DDThh:mm:ssZ (UTC time).
                     * @param _createdOn The creation time of the namespace follows the ISO 8601 standard in the format YYYY-MM-DDThh:mm:ssZ (UTC time).
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取The last modification time of the namespace follows the ISO 8601 standard in the format YYYY-MM-DDThh:mm:ssZ (UTC time).
                     * @return ModifiedOn The last modification time of the namespace follows the ISO 8601 standard in the format YYYY-MM-DDThh:mm:ssZ (UTC time).
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置The last modification time of the namespace follows the ISO 8601 standard in the format YYYY-MM-DDThh:mm:ssZ (UTC time).
                     * @param _modifiedOn The last modification time of the namespace follows the ISO 8601 standard in the format YYYY-MM-DDThh:mm:ssZ (UTC time).
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * Namespace name. Has uniqueness in the same site.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Namespace description. Remark information filled in upon creation, used for explaining the purpose or business meaning of the namespace. Supports a maximum of 256 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Available capacity of KV storage space in bytes. It indicates the maximum capacity limit of storable data in namespace, defaulting to 1 GB.
                     */
                    int64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * KV storage space used capacity in bytes (Byte). It indicates the currently used storage space size of the namespace.
                     */
                    int64_t m_capacityUsed;
                    bool m_capacityUsedHasBeenSet;

                    /**
                     * List of referenced instances in the namespace. Shows which edge function instances reference the current namespace and the site information referenced. Returns an empty array if not referenced.
                     */
                    std::vector<ComponentReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * The creation time of the namespace follows the ISO 8601 standard in the format YYYY-MM-DDThh:mm:ssZ (UTC time).
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * The last modification time of the namespace follows the ISO 8601 standard in the format YYYY-MM-DDThh:mm:ssZ (UTC time).
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_KVNAMESPACE_H_
