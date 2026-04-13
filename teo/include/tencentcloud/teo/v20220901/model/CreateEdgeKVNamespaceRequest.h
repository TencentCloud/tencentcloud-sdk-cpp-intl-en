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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEEDGEKVNAMESPACEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEEDGEKVNAMESPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateEdgeKVNamespace request structure.
                */
                class CreateEdgeKVNamespaceRequest : public AbstractModel
                {
                public:
                    CreateEdgeKVNamespaceRequest();
                    ~CreateEdgeKVNamespaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取Namespace name. Input content with the following restrictions: support input of 1-50 characters, allowed characters are a-z, A-Z, 0-9, -, and - cannot be registered alone or used continuously, cannot be placed at the beginning or the end. Under the same site, ensure the name is unique.
                     * @return Namespace Namespace name. Input content with the following restrictions: support input of 1-50 characters, allowed characters are a-z, A-Z, 0-9, -, and - cannot be registered alone or used continuously, cannot be placed at the beginning or the end. Under the same site, ensure the name is unique.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace name. Input content with the following restrictions: support input of 1-50 characters, allowed characters are a-z, A-Z, 0-9, -, and - cannot be registered alone or used continuously, cannot be placed at the beginning or the end. Under the same site, ensure the name is unique.
                     * @param _namespace Namespace name. Input content with the following restrictions: support input of 1-50 characters, allowed characters are a-z, A-Z, 0-9, -, and - cannot be registered alone or used continuously, cannot be placed at the beginning or the end. Under the same site, ensure the name is unique.
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
                     * 获取Namespace description. Used to describe the purpose or business meaning of a namespace. Supports a maximum of 256 characters.
                     * @return Remark Namespace description. Used to describe the purpose or business meaning of a namespace. Supports a maximum of 256 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Namespace description. Used to describe the purpose or business meaning of a namespace. Supports a maximum of 256 characters.
                     * @param _remark Namespace description. Used to describe the purpose or business meaning of a namespace. Supports a maximum of 256 characters.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Namespace name. Input content with the following restrictions: support input of 1-50 characters, allowed characters are a-z, A-Z, 0-9, -, and - cannot be registered alone or used continuously, cannot be placed at the beginning or the end. Under the same site, ensure the name is unique.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Namespace description. Used to describe the purpose or business meaning of a namespace. Supports a maximum of 256 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEEDGEKVNAMESPACEREQUEST_H_
