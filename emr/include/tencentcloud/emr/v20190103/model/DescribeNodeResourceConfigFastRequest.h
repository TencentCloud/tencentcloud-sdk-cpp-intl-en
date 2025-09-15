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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODERESOURCECONFIGFASTREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODERESOURCECONFIGFASTREQUEST_H_

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
                * DescribeNodeResourceConfigFast request structure.
                */
                class DescribeNodeResourceConfigFastRequest : public AbstractModel
                {
                public:
                    DescribeNodeResourceConfigFastRequest();
                    ~DescribeNodeResourceConfigFastRequest() = default;
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
                     * 获取Node type, CORE, TASK, ROUTER or ALL.
                     * @return ResourceType Node type, CORE, TASK, ROUTER or ALL.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Node type, CORE, TASK, ROUTER or ALL.
                     * @param _resourceType Node type, CORE, TASK, ROUTER or ALL.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Billing type.
                     * @return PayMode Billing type.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing type.
                     * @param _payMode Billing type.
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Availability zone ID.
                     * @return ZoneId Availability zone ID.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Availability zone ID.
                     * @param _zoneId Availability zone ID.
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * @return ResourceBaseType The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * 
                     */
                    std::string GetResourceBaseType() const;

                    /**
                     * 设置The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * @param _resourceBaseType The type can be ComputeResource, EMR, or a default value. The default value is EMR.
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

                    /**
                     * 获取Hardware type.
                     * @return HardwareResourceType Hardware type.
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置Hardware type.
                     * @param _hardwareResourceType Hardware type.
                     * 
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     * 
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                private:

                    /**
                     * Cluster instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node type, CORE, TASK, ROUTER or ALL.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Billing type.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Availability zone ID.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     */
                    std::string m_resourceBaseType;
                    bool m_resourceBaseTypeHasBeenSet;

                    /**
                     * Computing resource ID.
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                    /**
                     * Hardware type.
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODERESOURCECONFIGFASTREQUEST_H_
