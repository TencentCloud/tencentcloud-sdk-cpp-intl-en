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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYINSTANCEBASICREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYINSTANCEBASICREQUEST_H_

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
                * ModifyInstanceBasic request structure.
                */
                class ModifyInstanceBasicRequest : public AbstractModel
                {
                public:
                    ModifyInstanceBasicRequest();
                    ~ModifyInstanceBasicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster instance ID.
                     * @return InstanceId Cluster instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID.
                     * @param _instanceId Cluster instance ID.
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
                     * 获取Cluster name.
                     * @return ClusterName Cluster name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name.
                     * @param _clusterName Cluster name.
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Used to label computing resources that need to be modified.
                     * @return ResourceBaseType Used to label computing resources that need to be modified.
                     * 
                     */
                    std::string GetResourceBaseType() const;

                    /**
                     * 设置Used to label computing resources that need to be modified.
                     * @param _resourceBaseType Used to label computing resources that need to be modified.
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
                     * 获取Computing resource ID that needs to be modified, and can be used together with ResourceBaseType.
                     * @return ComputeResourceId Computing resource ID that needs to be modified, and can be used together with ResourceBaseType.
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置Computing resource ID that needs to be modified, and can be used together with ResourceBaseType.
                     * @param _computeResourceId Computing resource ID that needs to be modified, and can be used together with ResourceBaseType.
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
                     * Cluster instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Used to label computing resources that need to be modified.
                     */
                    std::string m_resourceBaseType;
                    bool m_resourceBaseTypeHasBeenSet;

                    /**
                     * Computing resource ID that needs to be modified, and can be used together with ResourceBaseType.
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYINSTANCEBASICREQUEST_H_
