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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPRECHECKRESULTITEM_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPRECHECKRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Check result for node upgrade
                */
                class InstanceUpgradePreCheckResultItem : public AbstractModel
                {
                public:
                    InstanceUpgradePreCheckResultItem();
                    ~InstanceUpgradePreCheckResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The namespace of the workload
                     * @return Namespace The namespace of the workload
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置The namespace of the workload
                     * @param _namespace The namespace of the workload
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
                     * 获取Workload type
                     * @return WorkLoadKind Workload type
                     * 
                     */
                    std::string GetWorkLoadKind() const;

                    /**
                     * 设置Workload type
                     * @param _workLoadKind Workload type
                     * 
                     */
                    void SetWorkLoadKind(const std::string& _workLoadKind);

                    /**
                     * 判断参数 WorkLoadKind 是否已赋值
                     * @return WorkLoadKind 是否已赋值
                     * 
                     */
                    bool WorkLoadKindHasBeenSet() const;

                    /**
                     * 获取Workload name
                     * @return WorkLoadName Workload name
                     * 
                     */
                    std::string GetWorkLoadName() const;

                    /**
                     * 设置Workload name
                     * @param _workLoadName Workload name
                     * 
                     */
                    void SetWorkLoadName(const std::string& _workLoadName);

                    /**
                     * 判断参数 WorkLoadName 是否已赋值
                     * @return WorkLoadName 是否已赋值
                     * 
                     */
                    bool WorkLoadNameHasBeenSet() const;

                    /**
                     * 获取The number of running pods in the workload before draining the node
                     * @return Before The number of running pods in the workload before draining the node
                     * 
                     */
                    uint64_t GetBefore() const;

                    /**
                     * 设置The number of running pods in the workload before draining the node
                     * @param _before The number of running pods in the workload before draining the node
                     * 
                     */
                    void SetBefore(const uint64_t& _before);

                    /**
                     * 判断参数 Before 是否已赋值
                     * @return Before 是否已赋值
                     * 
                     */
                    bool BeforeHasBeenSet() const;

                    /**
                     * 获取The number of running pods in the workload after draining the node
                     * @return After The number of running pods in the workload after draining the node
                     * 
                     */
                    uint64_t GetAfter() const;

                    /**
                     * 设置The number of running pods in the workload after draining the node
                     * @param _after The number of running pods in the workload after draining the node
                     * 
                     */
                    void SetAfter(const uint64_t& _after);

                    /**
                     * 判断参数 After 是否已赋值
                     * @return After 是否已赋值
                     * 
                     */
                    bool AfterHasBeenSet() const;

                    /**
                     * 获取The pod list of the workload on this node
                     * @return Pods The pod list of the workload on this node
                     * 
                     */
                    std::vector<std::string> GetPods() const;

                    /**
                     * 设置The pod list of the workload on this node
                     * @param _pods The pod list of the workload on this node
                     * 
                     */
                    void SetPods(const std::vector<std::string>& _pods);

                    /**
                     * 判断参数 Pods 是否已赋值
                     * @return Pods 是否已赋值
                     * 
                     */
                    bool PodsHasBeenSet() const;

                private:

                    /**
                     * The namespace of the workload
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Workload type
                     */
                    std::string m_workLoadKind;
                    bool m_workLoadKindHasBeenSet;

                    /**
                     * Workload name
                     */
                    std::string m_workLoadName;
                    bool m_workLoadNameHasBeenSet;

                    /**
                     * The number of running pods in the workload before draining the node
                     */
                    uint64_t m_before;
                    bool m_beforeHasBeenSet;

                    /**
                     * The number of running pods in the workload after draining the node
                     */
                    uint64_t m_after;
                    bool m_afterHasBeenSet;

                    /**
                     * The pod list of the workload on this node
                     */
                    std::vector<std::string> m_pods;
                    bool m_podsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPRECHECKRESULTITEM_H_
