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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_CREATENODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_CREATENODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/Label.h>
#include <tencentcloud/tke/v20220501/model/Taint.h>
#include <tencentcloud/tke/v20220501/model/TagSpecification.h>
#include <tencentcloud/tke/v20220501/model/CreateNativeNodePoolParam.h>
#include <tencentcloud/tke/v20220501/model/Annotation.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * CreateNodePool request structure.
                */
                class CreateNodePoolRequest : public AbstractModel
                {
                public:
                    CreateNodePoolRequest();
                    ~CreateNodePoolRequest() = default;
                    std::string ToJsonString() const;


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
                     * @return Labels Node Labels
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Node Labels
                     * @param _labels Node Labels
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
                     * 获取Node taint
                     * @return Taints Node taint
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置Node taint
                     * @param _taints Node taint
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
                     * 获取Node tags
                     * @return Tags Node tags
                     * 
                     */
                    std::vector<TagSpecification> GetTags() const;

                    /**
                     * 设置Node tags
                     * @param _tags Node tags
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
                     * 获取Whether to enable deletion protection
                     * @return DeletionProtection Whether to enable deletion protection
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置Whether to enable deletion protection
                     * @param _deletionProtection Whether to enable deletion protection
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
                     * 获取Whether the node is unschedulable by default
                     * @return Unschedulable Whether the node is unschedulable by default
                     * 
                     */
                    bool GetUnschedulable() const;

                    /**
                     * 设置Whether the node is unschedulable by default
                     * @param _unschedulable Whether the node is unschedulable by default
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
                     * 获取Native node pool creation parameters
                     * @return Native Native node pool creation parameters
                     * 
                     */
                    CreateNativeNodePoolParam GetNative() const;

                    /**
                     * 设置Native node pool creation parameters
                     * @param _native Native node pool creation parameters
                     * 
                     */
                    void SetNative(const CreateNativeNodePoolParam& _native);

                    /**
                     * 判断参数 Native 是否已赋值
                     * @return Native 是否已赋值
                     * 
                     */
                    bool NativeHasBeenSet() const;

                    /**
                     * 获取Node Annotation List
                     * @return Annotations Node Annotation List
                     * 
                     */
                    std::vector<Annotation> GetAnnotations() const;

                    /**
                     * 设置Node Annotation List
                     * @param _annotations Node Annotation List
                     * 
                     */
                    void SetAnnotations(const std::vector<Annotation>& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Node pool name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Node pool type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Node Labels
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Node taint
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * Node tags
                     */
                    std::vector<TagSpecification> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether to enable deletion protection
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * Whether the node is unschedulable by default
                     */
                    bool m_unschedulable;
                    bool m_unschedulableHasBeenSet;

                    /**
                     * Native node pool creation parameters
                     */
                    CreateNativeNodePoolParam m_native;
                    bool m_nativeHasBeenSet;

                    /**
                     * Node Annotation List
                     */
                    std::vector<Annotation> m_annotations;
                    bool m_annotationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_CREATENODEPOOLREQUEST_H_
