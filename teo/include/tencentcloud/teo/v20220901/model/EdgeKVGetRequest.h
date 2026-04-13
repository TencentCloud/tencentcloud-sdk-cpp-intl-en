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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVGETREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVGETREQUEST_H_

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
                * EdgeKVGet request structure.
                */
                class EdgeKVGetRequest : public AbstractModel
                {
                public:
                    EdgeKVGetRequest();
                    ~EdgeKVGetRequest() = default;
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
                     * 获取Namespace name. You can obtain the list of namespaces under the site through the DescribeEdgeKVNamespaces API.
                     * @return Namespace Namespace name. You can obtain the list of namespaces under the site through the DescribeEdgeKVNamespaces API.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace name. You can obtain the list of namespaces under the site through the DescribeEdgeKVNamespaces API.
                     * @param _namespace Namespace name. You can obtain the list of namespaces under the site through the DescribeEdgeKVNamespaces API.
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
                     * 获取Name list. Maximum array length is 20. Each key cannot be empty, with a length of 1-512 characters. Allowed characters include letters, numbers, hyphens, and underscores. To query a single key, input an array with one element.
                     * @return Keys Name list. Maximum array length is 20. Each key cannot be empty, with a length of 1-512 characters. Allowed characters include letters, numbers, hyphens, and underscores. To query a single key, input an array with one element.
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置Name list. Maximum array length is 20. Each key cannot be empty, with a length of 1-512 characters. Allowed characters include letters, numbers, hyphens, and underscores. To query a single key, input an array with one element.
                     * @param _keys Name list. Maximum array length is 20. Each key cannot be empty, with a length of 1-512 characters. Allowed characters include letters, numbers, hyphens, and underscores. To query a single key, input an array with one element.
                     * 
                     */
                    void SetKeys(const std::vector<std::string>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Namespace name. You can obtain the list of namespaces under the site through the DescribeEdgeKVNamespaces API.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Name list. Maximum array length is 20. Each key cannot be empty, with a length of 1-512 characters. Allowed characters include letters, numbers, hyphens, and underscores. To query a single key, input an array with one element.
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVGETREQUEST_H_
