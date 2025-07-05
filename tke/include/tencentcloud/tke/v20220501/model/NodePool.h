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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_NODEPOOL_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_NODEPOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/TagSpecification.h>
#include <tencentcloud/tke/v20220501/model/Taint.h>
#include <tencentcloud/tke/v20220501/model/Label.h>
#include <tencentcloud/tke/v20220501/model/NativeNodePoolInfo.h>
#include <tencentcloud/tke/v20220501/model/Annotation.h>
#include <tencentcloud/tke/v20220501/model/SuperNodePoolInfo.h>
#include <tencentcloud/tke/v20220501/model/RegularNodePoolInfo.h>
#include <tencentcloud/tke/v20220501/model/ExternalNodePoolInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Node pool information
                */
                class NodePool : public AbstractModel
                {
                public:
                    NodePool();
                    ~NodePool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Node pool ID
                     * @return NodePoolId Node pool ID
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置Node pool ID
                     * @param _nodePoolId Node pool ID
                     * 
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     * 
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取Node tags
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Tags Node tags
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<TagSpecification> GetTags() const;

                    /**
                     * 设置Node tags
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _tags Node tags
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<TagSpecification>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Node taint

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Taints Node taint

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置Node taint

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _taints Node taint

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     * 
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取Whether to enable deletion protection
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DeletionProtection Whether to enable deletion protection
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置Whether to enable deletion protection
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _deletionProtection Whether to enable deletion protection
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取Whether the node is unschedulable
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Unschedulable Whether the node is unschedulable
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetUnschedulable() const;

                    /**
                     * 设置Whether the node is unschedulable
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _unschedulable Whether the node is unschedulable
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUnschedulable(const bool& _unschedulable);

                    /**
                     * 判断参数 Unschedulable 是否已赋值
                     * @return Unschedulable 是否已赋值
                     * 
                     */
                    bool UnschedulableHasBeenSet() const;

                    /**
                     * 获取Node pool type
                     * @return Type Node pool type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Node pool type
                     * @param _type Node pool type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Node Labels
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Labels Node Labels
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Node Labels
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _labels Node Labels
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Node pool status
                     * @return LifeState Node pool status
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置Node pool status
                     * @param _lifeState Node pool status
                     * 
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedAt Creation time
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time
                     * @param _createdAt Creation time
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Node pool name
                     * @return Name Node pool name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Node pool name
                     * @param _name Node pool name
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
                     * 获取Native node pool parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Native Native node pool parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    NativeNodePoolInfo GetNative() const;

                    /**
                     * 设置Native node pool parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _native Native node pool parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNative(const NativeNodePoolInfo& _native);

                    /**
                     * 判断参数 Native 是否已赋值
                     * @return Native 是否已赋值
                     * 
                     */
                    bool NativeHasBeenSet() const;

                    /**
                     * 获取Node annotation list

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Annotations Node annotation list

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Annotation> GetAnnotations() const;

                    /**
                     * 设置Node annotation list

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _annotations Node annotation list

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAnnotations(const std::vector<Annotation>& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取Super node pool parameter, which has a value only when Type equals Super
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Super Super node pool parameter, which has a value only when Type equals Super
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    SuperNodePoolInfo GetSuper() const;

                    /**
                     * 设置Super node pool parameter, which has a value only when Type equals Super
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _super Super node pool parameter, which has a value only when Type equals Super
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSuper(const SuperNodePoolInfo& _super);

                    /**
                     * 判断参数 Super 是否已赋值
                     * @return Super 是否已赋值
                     * 
                     */
                    bool SuperHasBeenSet() const;

                    /**
                     * 获取General node pool parameter, which has a value only when Type equals Regular
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Regular General node pool parameter, which has a value only when Type equals Regular
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    RegularNodePoolInfo GetRegular() const;

                    /**
                     * 设置General node pool parameter, which has a value only when Type equals Regular
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _regular General node pool parameter, which has a value only when Type equals Regular
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegular(const RegularNodePoolInfo& _regular);

                    /**
                     * 判断参数 Regular 是否已赋值
                     * @return Regular 是否已赋值
                     * 
                     */
                    bool RegularHasBeenSet() const;

                    /**
                     * 获取Third-party node pool parameter, which has a value only when Type equals External
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return External Third-party node pool parameter, which has a value only when Type equals External
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    ExternalNodePoolInfo GetExternal() const;

                    /**
                     * 设置Third-party node pool parameter, which has a value only when Type equals External
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _external Third-party node pool parameter, which has a value only when Type equals External
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExternal(const ExternalNodePoolInfo& _external);

                    /**
                     * 判断参数 External 是否已赋值
                     * @return External 是否已赋值
                     * 
                     */
                    bool ExternalHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Node pool ID
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * Node tags
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<TagSpecification> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Node taint

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * Whether to enable deletion protection
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * Whether the node is unschedulable
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    bool m_unschedulable;
                    bool m_unschedulableHasBeenSet;

                    /**
                     * Node pool type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Node Labels
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Node pool status
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Node pool name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Native node pool parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    NativeNodePoolInfo m_native;
                    bool m_nativeHasBeenSet;

                    /**
                     * Node annotation list

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<Annotation> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * Super node pool parameter, which has a value only when Type equals Super
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    SuperNodePoolInfo m_super;
                    bool m_superHasBeenSet;

                    /**
                     * General node pool parameter, which has a value only when Type equals Regular
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    RegularNodePoolInfo m_regular;
                    bool m_regularHasBeenSet;

                    /**
                     * Third-party node pool parameter, which has a value only when Type equals External
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    ExternalNodePoolInfo m_external;
                    bool m_externalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_NODEPOOL_H_
