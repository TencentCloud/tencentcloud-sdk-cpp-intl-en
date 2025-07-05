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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTINSTANCE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Information of instance associated with the snapshot policy
                */
                class SnapshotInstance : public AbstractModel
                {
                public:
                    SnapshotInstance();
                    ~SnapshotInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the instance.
                     * @return InstanceId ID of the instance.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance.
                     * @param _instanceId ID of the instance.
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
                     * 获取Type of associated resource. Values: `securitygroup`
                     * @return InstanceType Type of associated resource. Values: `securitygroup`
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Type of associated resource. Values: `securitygroup`
                     * @param _instanceType Type of associated resource. Values: `securitygroup`
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance region
                     * @return InstanceRegion Instance region
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置Instance region
                     * @param _instanceRegion Instance region
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取Snapshot policy IDs
                     * @return SnapshotPolicyId Snapshot policy IDs
                     * 
                     */
                    std::string GetSnapshotPolicyId() const;

                    /**
                     * 设置Snapshot policy IDs
                     * @param _snapshotPolicyId Snapshot policy IDs
                     * 
                     */
                    void SetSnapshotPolicyId(const std::string& _snapshotPolicyId);

                    /**
                     * 判断参数 SnapshotPolicyId 是否已赋值
                     * @return SnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool SnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取The instance name.
                     * @return InstanceName The instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置The instance name.
                     * @param _instanceName The instance name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * ID of the instance.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Type of associated resource. Values: `securitygroup`
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance region
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * Snapshot policy IDs
                     */
                    std::string m_snapshotPolicyId;
                    bool m_snapshotPolicyIdHasBeenSet;

                    /**
                     * The instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTINSTANCE_H_
