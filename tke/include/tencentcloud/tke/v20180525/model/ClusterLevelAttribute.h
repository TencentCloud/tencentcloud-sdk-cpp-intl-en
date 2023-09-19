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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERLEVELATTRIBUTE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERLEVELATTRIBUTE_H_

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
                * Information of the managed cluster model
                */
                class ClusterLevelAttribute : public AbstractModel
                {
                public:
                    ClusterLevelAttribute();
                    ~ClusterLevelAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster model
                     * @return Name Cluster model
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Cluster model
                     * @param _name Cluster model
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
                     * 获取Model name
                     * @return Alias Model name
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Model name
                     * @param _alias Model name
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Number of nodes
                     * @return NodeCount Number of nodes
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置Number of nodes
                     * @param _nodeCount Number of nodes
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Number of Pods
                     * @return PodCount Number of Pods
                     * 
                     */
                    uint64_t GetPodCount() const;

                    /**
                     * 设置Number of Pods
                     * @param _podCount Number of Pods
                     * 
                     */
                    void SetPodCount(const uint64_t& _podCount);

                    /**
                     * 判断参数 PodCount 是否已赋值
                     * @return PodCount 是否已赋值
                     * 
                     */
                    bool PodCountHasBeenSet() const;

                    /**
                     * 获取Number of ConfigMap
                     * @return ConfigMapCount Number of ConfigMap
                     * 
                     */
                    uint64_t GetConfigMapCount() const;

                    /**
                     * 设置Number of ConfigMap
                     * @param _configMapCount Number of ConfigMap
                     * 
                     */
                    void SetConfigMapCount(const uint64_t& _configMapCount);

                    /**
                     * 判断参数 ConfigMapCount 是否已赋值
                     * @return ConfigMapCount 是否已赋值
                     * 
                     */
                    bool ConfigMapCountHasBeenSet() const;

                    /**
                     * 获取Number of ReplicaSets
                     * @return RSCount Number of ReplicaSets
                     * 
                     */
                    uint64_t GetRSCount() const;

                    /**
                     * 设置Number of ReplicaSets
                     * @param _rSCount Number of ReplicaSets
                     * 
                     */
                    void SetRSCount(const uint64_t& _rSCount);

                    /**
                     * 判断参数 RSCount 是否已赋值
                     * @return RSCount 是否已赋值
                     * 
                     */
                    bool RSCountHasBeenSet() const;

                    /**
                     * 获取Number of CRDs
                     * @return CRDCount Number of CRDs
                     * 
                     */
                    uint64_t GetCRDCount() const;

                    /**
                     * 设置Number of CRDs
                     * @param _cRDCount Number of CRDs
                     * 
                     */
                    void SetCRDCount(const uint64_t& _cRDCount);

                    /**
                     * 判断参数 CRDCount 是否已赋值
                     * @return CRDCount 是否已赋值
                     * 
                     */
                    bool CRDCountHasBeenSet() const;

                    /**
                     * 获取Whether it is enabled
                     * @return Enable Whether it is enabled
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Whether it is enabled
                     * @param _enable Whether it is enabled
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Number of other resources
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return OtherCount Number of other resources
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetOtherCount() const;

                    /**
                     * 设置Number of other resources
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _otherCount Number of other resources
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOtherCount(const uint64_t& _otherCount);

                    /**
                     * 判断参数 OtherCount 是否已赋值
                     * @return OtherCount 是否已赋值
                     * 
                     */
                    bool OtherCountHasBeenSet() const;

                private:

                    /**
                     * Cluster model
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Model name
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Number of nodes
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Number of Pods
                     */
                    uint64_t m_podCount;
                    bool m_podCountHasBeenSet;

                    /**
                     * Number of ConfigMap
                     */
                    uint64_t m_configMapCount;
                    bool m_configMapCountHasBeenSet;

                    /**
                     * Number of ReplicaSets
                     */
                    uint64_t m_rSCount;
                    bool m_rSCountHasBeenSet;

                    /**
                     * Number of CRDs
                     */
                    uint64_t m_cRDCount;
                    bool m_cRDCountHasBeenSet;

                    /**
                     * Whether it is enabled
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Number of other resources
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_otherCount;
                    bool m_otherCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERLEVELATTRIBUTE_H_
