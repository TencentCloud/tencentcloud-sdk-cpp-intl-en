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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_SERVICEDISCOVERYITEM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_SERVICEDISCOVERYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus scrape configuration information
                */
                class ServiceDiscoveryItem : public AbstractModel
                {
                public:
                    ServiceDiscoveryItem();
                    ~ServiceDiscoveryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scrape configuration name
                     * @return Name Scrape configuration name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Scrape configuration name
                     * @param Name Scrape configuration name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Namespace of the scrape configuration
                     * @return Namespace Namespace of the scrape configuration
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace of the scrape configuration
                     * @param Namespace Namespace of the scrape configuration
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Scrape configuration type: ServiceMonitor/PodMonitor
                     * @return Kind Scrape configuration type: ServiceMonitor/PodMonitor
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Scrape configuration type: ServiceMonitor/PodMonitor
                     * @param Kind Scrape configuration type: ServiceMonitor/PodMonitor
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取Namespace selection method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NamespaceSelector Namespace selection method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNamespaceSelector() const;

                    /**
                     * 设置Namespace selection method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NamespaceSelector Namespace selection method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNamespaceSelector(const std::string& _namespaceSelector);

                    /**
                     * 判断参数 NamespaceSelector 是否已赋值
                     * @return NamespaceSelector 是否已赋值
                     */
                    bool NamespaceSelectorHasBeenSet() const;

                    /**
                     * 获取Label selection method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Selector Label selection method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSelector() const;

                    /**
                     * 设置Label selection method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Selector Label selection method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSelector(const std::string& _selector);

                    /**
                     * 判断参数 Selector 是否已赋值
                     * @return Selector 是否已赋值
                     */
                    bool SelectorHasBeenSet() const;

                    /**
                     * 获取`Endpoints` information (PodMonitor does not have this parameter)
                     * @return Endpoints `Endpoints` information (PodMonitor does not have this parameter)
                     */
                    std::string GetEndpoints() const;

                    /**
                     * 设置`Endpoints` information (PodMonitor does not have this parameter)
                     * @param Endpoints `Endpoints` information (PodMonitor does not have this parameter)
                     */
                    void SetEndpoints(const std::string& _endpoints);

                    /**
                     * 判断参数 Endpoints 是否已赋值
                     * @return Endpoints 是否已赋值
                     */
                    bool EndpointsHasBeenSet() const;

                    /**
                     * 获取Scrape configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Yaml Scrape configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置Scrape configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Yaml Scrape configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     */
                    bool YamlHasBeenSet() const;

                private:

                    /**
                     * Scrape configuration name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Namespace of the scrape configuration
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Scrape configuration type: ServiceMonitor/PodMonitor
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Namespace selection method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespaceSelector;
                    bool m_namespaceSelectorHasBeenSet;

                    /**
                     * Label selection method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_selector;
                    bool m_selectorHasBeenSet;

                    /**
                     * `Endpoints` information (PodMonitor does not have this parameter)
                     */
                    std::string m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * Scrape configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_SERVICEDISCOVERYITEM_H_
