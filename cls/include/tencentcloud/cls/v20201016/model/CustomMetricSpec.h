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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CUSTOMMETRICSPEC_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CUSTOMMETRICSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Label.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Custom metric collection object.
                */
                class CustomMetricSpec : public AbstractModel
                {
                public:
                    CustomMetricSpec();
                    ~CustomMetricSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Port. Value range: [1,65535].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port Port. Value range: [1,65535].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port. Value range: [1,65535].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port Port. Value range: [1,65535].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Metric address. Verification format: ^/[a-zA-Z0-9-_./]*$.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Path Metric address. Verification format: ^/[a-zA-Z0-9-_./]*$.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Metric address. Verification format: ^/[a-zA-Z0-9-_./]*$.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _path Metric address. Verification format: ^/[a-zA-Z0-9-_./]*$.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Namespace list.
-Supports up to 100.
-Check format of namespace `[a-z0-9]([-a-z0-9]*[a-z0-9])?`. Length cannot exceed 63.
-namespace must be unique
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Namespaces Namespace list.
-Supports up to 100.
-Check format of namespace `[a-z0-9]([-a-z0-9]*[a-z0-9])?`. Length cannot exceed 63.
-namespace must be unique
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 设置Namespace list.
-Supports up to 100.
-Check format of namespace `[a-z0-9]([-a-z0-9]*[a-z0-9])?`. Length cannot exceed 63.
-namespace must be unique
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _namespaces Namespace list.
-Supports up to 100.
-Check format of namespace `[a-z0-9]([-a-z0-9]*[a-z0-9])?`. Length cannot exceed 63.
-namespace must be unique
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNamespaces(const std::vector<std::string>& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     * 
                     */
                    bool NamespacesHasBeenSet() const;

                    /**
                     * 获取Pod tag.
-supports a maximum of 100

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodLabel Pod tag.
-supports a maximum of 100

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Label> GetPodLabel() const;

                    /**
                     * 设置Pod tag.
-supports a maximum of 100

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _podLabel Pod tag.
-supports a maximum of 100

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPodLabel(const std::vector<Label>& _podLabel);

                    /**
                     * 判断参数 PodLabel 是否已赋值
                     * @return PodLabel 是否已赋值
                     * 
                     */
                    bool PodLabelHasBeenSet() const;

                private:

                    /**
                     * Port. Value range: [1,65535].
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Metric address. Verification format: ^/[a-zA-Z0-9-_./]*$.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Namespace list.
-Supports up to 100.
-Check format of namespace `[a-z0-9]([-a-z0-9]*[a-z0-9])?`. Length cannot exceed 63.
-namespace must be unique
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * Pod tag.
-supports a maximum of 100

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Label> m_podLabel;
                    bool m_podLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CUSTOMMETRICSPEC_H_
