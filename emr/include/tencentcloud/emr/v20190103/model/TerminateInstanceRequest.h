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
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取ID of terminated node. This parameter is reserved and does not need to be configured.
                     * @return ResourceIds ID of terminated node. This parameter is reserved and does not need to be configured.
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置ID of terminated node. This parameter is reserved and does not need to be configured.
                     * @param _resourceIds ID of terminated node. This parameter is reserved and does not need to be configured.
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
                     * 获取The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId is effective. When the type is ComputeResource, ComputeResourceId is used.
                     * @return ResourceBaseType The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId is effective. When the type is ComputeResource, ComputeResourceId is used.
                     * 
                     */
                    std::string GetResourceBaseType() const;

                    /**
                     * 设置The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId is effective. When the type is ComputeResource, ComputeResourceId is used.
                     * @param _resourceBaseType The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId is effective. When the type is ComputeResource, ComputeResourceId is used.
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
                     * 获取Computing resource ID.
                     * @return ComputeResourceId Computing resource ID.
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置Computing resource ID.
                     * @param _computeResourceId Computing resource ID.
                     * 
                     */
                    void SetComputeResourceId(const std::string& _computeResourceId);

                    /**
                     * 判断参数 ComputeResourceId 是否已赋值
                     * @return ComputeResourceId 是否已赋值
                     * 
                     */
                    bool ComputeResourceIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ID of terminated node. This parameter is reserved and does not need to be configured.
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId is effective. When the type is ComputeResource, ComputeResourceId is used.
                     */
                    std::string m_resourceBaseType;
                    bool m_resourceBaseTypeHasBeenSet;

                    /**
                     * Computing resource ID.
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATEINSTANCEREQUEST_H_
