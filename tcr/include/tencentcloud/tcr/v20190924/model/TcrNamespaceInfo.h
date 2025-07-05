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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TCRNAMESPACEINFO_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TCRNAMESPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TagSpecification.h>
#include <tencentcloud/tcr/v20190924/model/KeyValueString.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * TCR namespace description
                */
                class TcrNamespaceInfo : public AbstractModel
                {
                public:
                    TcrNamespaceInfo();
                    ~TcrNamespaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Namespace name
                     * @return Name Namespace name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Namespace name
                     * @param _name Namespace name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreationTime Creation time
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Creation time
                     * @param _creationTime Creation time
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取Access level
                     * @return Public Access level
                     * 
                     */
                    bool GetPublic() const;

                    /**
                     * 设置Access level
                     * @param _public Access level
                     * 
                     */
                    void SetPublic(const bool& _public);

                    /**
                     * 判断参数 Public 是否已赋值
                     * @return Public 是否已赋值
                     * 
                     */
                    bool PublicHasBeenSet() const;

                    /**
                     * 获取Namespace ID
                     * @return NamespaceId Namespace ID
                     * 
                     */
                    int64_t GetNamespaceId() const;

                    /**
                     * 设置Namespace ID
                     * @param _namespaceId Namespace ID
                     * 
                     */
                    void SetNamespaceId(const int64_t& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取Cloud tag of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagSpecification Cloud tag of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置Cloud tag of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagSpecification Cloud tag of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagSpecification(const TagSpecification& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取Namespace metadata
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Metadata Namespace metadata
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KeyValueString> GetMetadata() const;

                    /**
                     * 设置Namespace metadata
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metadata Namespace metadata
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetadata(const std::vector<KeyValueString>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * Namespace name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Access level
                     */
                    bool m_public;
                    bool m_publicHasBeenSet;

                    /**
                     * Namespace ID
                     */
                    int64_t m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * Cloud tag of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * Namespace metadata
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KeyValueString> m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TCRNAMESPACEINFO_H_
