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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATEDYNAMICINSTANCESREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATEDYNAMICINSTANCESREQUEST_H_

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
                * TerminateDynamicInstances request structure.
                */
                class TerminateDynamicInstancesRequest : public AbstractModel
                {
                public:
                    TerminateDynamicInstancesRequest();
                    ~TerminateDynamicInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>EMR cluster ID.</p>
                     * @return InstanceId <p>EMR cluster ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>EMR cluster ID.</p>
                     * @param _instanceId <p>EMR cluster ID.</p>
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
                     * 获取<p>DynamicInstance type.</p><p>Enumeration values:</p><ul><li>RayCluster: RayCluster type</li></ul>
                     * @return DynamicInstanceType <p>DynamicInstance type.</p><p>Enumeration values:</p><ul><li>RayCluster: RayCluster type</li></ul>
                     * 
                     */
                    std::string GetDynamicInstanceType() const;

                    /**
                     * 设置<p>DynamicInstance type.</p><p>Enumeration values:</p><ul><li>RayCluster: RayCluster type</li></ul>
                     * @param _dynamicInstanceType <p>DynamicInstance type.</p><p>Enumeration values:</p><ul><li>RayCluster: RayCluster type</li></ul>
                     * 
                     */
                    void SetDynamicInstanceType(const std::string& _dynamicInstanceType);

                    /**
                     * 判断参数 DynamicInstanceType 是否已赋值
                     * @return DynamicInstanceType 是否已赋值
                     * 
                     */
                    bool DynamicInstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>YAML creation information.</p>
                     * @return DynamicInstanceIds <p>YAML creation information.</p>
                     * 
                     */
                    std::vector<uint64_t> GetDynamicInstanceIds() const;

                    /**
                     * 设置<p>YAML creation information.</p>
                     * @param _dynamicInstanceIds <p>YAML creation information.</p>
                     * 
                     */
                    void SetDynamicInstanceIds(const std::vector<uint64_t>& _dynamicInstanceIds);

                    /**
                     * 判断参数 DynamicInstanceIds 是否已赋值
                     * @return DynamicInstanceIds 是否已赋值
                     * 
                     */
                    bool DynamicInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>EMR cluster ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>DynamicInstance type.</p><p>Enumeration values:</p><ul><li>RayCluster: RayCluster type</li></ul>
                     */
                    std::string m_dynamicInstanceType;
                    bool m_dynamicInstanceTypeHasBeenSet;

                    /**
                     * <p>YAML creation information.</p>
                     */
                    std::vector<uint64_t> m_dynamicInstanceIds;
                    bool m_dynamicInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATEDYNAMICINSTANCESREQUEST_H_
