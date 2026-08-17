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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEREPLICATOMASTERREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEREPLICATOMASTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ChangeReplicaToMaster request structure.
                */
                class ChangeReplicaToMasterRequest : public AbstractModel
                {
                public:
                    ChangeReplicaToMasterRequest();
                    ~ChangeReplicaToMasterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
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
                     * 获取<p>Replica node group ID. Use the interface <a href="https://www.tencentcloud.com/document/product/239/50312?from_cn_redirect=1">DescribeInstanceZoneInfo</a> to obtain the id information of the multi-AZ replica node group. For a single AZ, no need to configure this parameter.</p>
                     * @return GroupId <p>Replica node group ID. Use the interface <a href="https://www.tencentcloud.com/document/product/239/50312?from_cn_redirect=1">DescribeInstanceZoneInfo</a> to obtain the id information of the multi-AZ replica node group. For a single AZ, no need to configure this parameter.</p>
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>Replica node group ID. Use the interface <a href="https://www.tencentcloud.com/document/product/239/50312?from_cn_redirect=1">DescribeInstanceZoneInfo</a> to obtain the id information of the multi-AZ replica node group. For a single AZ, no need to configure this parameter.</p>
                     * @param _groupId <p>Replica node group ID. Use the interface <a href="https://www.tencentcloud.com/document/product/239/50312?from_cn_redirect=1">DescribeInstanceZoneInfo</a> to obtain the id information of the multi-AZ replica node group. For a single AZ, no need to configure this parameter.</p>
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Emergency mode.</p><p>Enumeration values:</p><ul><li>false: Standard mode (Recommended for security)</li><li>true: Speed mode: (High-risk acceleration) Skip verification, speed up primary node promotion. High-level operation, highly likely to cause a single primary node in abnormal situations.</li></ul><p>Default value: false</p>
                     * @return Emergency <p>Emergency mode.</p><p>Enumeration values:</p><ul><li>false: Standard mode (Recommended for security)</li><li>true: Speed mode: (High-risk acceleration) Skip verification, speed up primary node promotion. High-level operation, highly likely to cause a single primary node in abnormal situations.</li></ul><p>Default value: false</p>
                     * 
                     */
                    bool GetEmergency() const;

                    /**
                     * 设置<p>Emergency mode.</p><p>Enumeration values:</p><ul><li>false: Standard mode (Recommended for security)</li><li>true: Speed mode: (High-risk acceleration) Skip verification, speed up primary node promotion. High-level operation, highly likely to cause a single primary node in abnormal situations.</li></ul><p>Default value: false</p>
                     * @param _emergency <p>Emergency mode.</p><p>Enumeration values:</p><ul><li>false: Standard mode (Recommended for security)</li><li>true: Speed mode: (High-risk acceleration) Skip verification, speed up primary node promotion. High-level operation, highly likely to cause a single primary node in abnormal situations.</li></ul><p>Default value: false</p>
                     * 
                     */
                    void SetEmergency(const bool& _emergency);

                    /**
                     * 判断参数 Emergency 是否已赋值
                     * @return Emergency 是否已赋值
                     * 
                     */
                    bool EmergencyHasBeenSet() const;

                private:

                    /**
                     * <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Replica node group ID. Use the interface <a href="https://www.tencentcloud.com/document/product/239/50312?from_cn_redirect=1">DescribeInstanceZoneInfo</a> to obtain the id information of the multi-AZ replica node group. For a single AZ, no need to configure this parameter.</p>
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>Emergency mode.</p><p>Enumeration values:</p><ul><li>false: Standard mode (Recommended for security)</li><li>true: Speed mode: (High-risk acceleration) Skip verification, speed up primary node promotion. High-level operation, highly likely to cause a single primary node in abnormal situations.</li></ul><p>Default value: false</p>
                     */
                    bool m_emergency;
                    bool m_emergencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEREPLICATOMASTERREQUEST_H_
