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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PODLIMITSINSTANCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PODLIMITSINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PodLimitsByType.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * The model information and the maximum supported number of Pods in the VPC-CNI mode
                */
                class PodLimitsInstance : public AbstractModel
                {
                public:
                    PodLimitsInstance();
                    ~PodLimitsInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The availability zone where the model is located
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return Zone The availability zone where the model is located
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The availability zone where the model is located
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _zone The availability zone where the model is located
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取The instance family to which the model belongs
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return InstanceFamily The instance family to which the model belongs
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置The instance family to which the model belongs
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _instanceFamily The instance family to which the model belongs
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取Instance type
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return InstanceType Instance type
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _instanceType Instance type
Note: this field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取The maximum number of Pods in the VPC-CNI mode supported by the model
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return PodLimits The maximum number of Pods in the VPC-CNI mode supported by the model
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    PodLimitsByType GetPodLimits() const;

                    /**
                     * 设置The maximum number of Pods in the VPC-CNI mode supported by the model
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _podLimits The maximum number of Pods in the VPC-CNI mode supported by the model
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPodLimits(const PodLimitsByType& _podLimits);

                    /**
                     * 判断参数 PodLimits 是否已赋值
                     * @return PodLimits 是否已赋值
                     * 
                     */
                    bool PodLimitsHasBeenSet() const;

                private:

                    /**
                     * The availability zone where the model is located
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * The instance family to which the model belongs
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * Instance type
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * The maximum number of Pods in the VPC-CNI mode supported by the model
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    PodLimitsByType m_podLimits;
                    bool m_podLimitsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PODLIMITSINSTANCE_H_
