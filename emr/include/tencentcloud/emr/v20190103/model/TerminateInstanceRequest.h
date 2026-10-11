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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * TerminateInstance request structure.
                */
                class TerminateInstanceRequest : public AbstractModel
                {
                public:
                    TerminateInstanceRequest();
                    ~TerminateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>ID of the terminated node. This parameter is reserved and does not need to be configured.</p>
                     * @return ResourceIds <p>ID of the terminated node. This parameter is reserved and does not need to be configured.</p>
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置<p>ID of the terminated node. This parameter is reserved and does not need to be configured.</p>
                     * @param _resourceIds <p>ID of the terminated node. This parameter is reserved and does not need to be configured.</p>
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取<p>The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId takes effect; when the type is ComputeResource, ComputeResourceId is used for identification.</p>
                     * @return ResourceBaseType <p>The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId takes effect; when the type is ComputeResource, ComputeResourceId is used for identification.</p>
                     * 
                     */
                    std::string GetResourceBaseType() const;

                    /**
                     * 设置<p>The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId takes effect; when the type is ComputeResource, ComputeResourceId is used for identification.</p>
                     * @param _resourceBaseType <p>The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId takes effect; when the type is ComputeResource, ComputeResourceId is used for identification.</p>
                     * 
                     */
                    void SetResourceBaseType(const std::string& _resourceBaseType);

                    /**
                     * 判断参数 ResourceBaseType 是否已赋值
                     * @return ResourceBaseType 是否已赋值
                     * 
                     */
                    bool ResourceBaseTypeHasBeenSet() const;

                    /**
                     * 获取<p>Computing resource ID.</p>
                     * @return ComputeResourceId <p>Computing resource ID.</p>
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置<p>Computing resource ID.</p>
                     * @param _computeResourceId <p>Computing resource ID.</p>
                     * 
                     */
                    void SetComputeResourceId(const std::string& _computeResourceId);

                    /**
                     * 判断参数 ComputeResourceId 是否已赋值
                     * @return ComputeResourceId 是否已赋值
                     * 
                     */
                    bool ComputeResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>Retain the TKE cluster associated with the computing resource.</p>
                     * @return RetainTkeCluster <p>Retain the TKE cluster associated with the computing resource.</p>
                     * 
                     */
                    bool GetRetainTkeCluster() const;

                    /**
                     * 设置<p>Retain the TKE cluster associated with the computing resource.</p>
                     * @param _retainTkeCluster <p>Retain the TKE cluster associated with the computing resource.</p>
                     * 
                     */
                    void SetRetainTkeCluster(const bool& _retainTkeCluster);

                    /**
                     * 判断参数 RetainTkeCluster 是否已赋值
                     * @return RetainTkeCluster 是否已赋值
                     * 
                     */
                    bool RetainTkeClusterHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>ID of the terminated node. This parameter is reserved and does not need to be configured.</p>
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * <p>The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId takes effect; when the type is ComputeResource, ComputeResourceId is used for identification.</p>
                     */
                    std::string m_resourceBaseType;
                    bool m_resourceBaseTypeHasBeenSet;

                    /**
                     * <p>Computing resource ID.</p>
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                    /**
                     * <p>Retain the TKE cluster associated with the computing resource.</p>
                     */
                    bool m_retainTkeCluster;
                    bool m_retainTkeClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATEINSTANCEREQUEST_H_
