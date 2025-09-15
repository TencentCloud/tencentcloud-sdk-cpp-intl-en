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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_

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
                * ModifyAutoRenewFlag request structure.
                */
                class ModifyAutoRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyAutoRenewFlagRequest();
                    ~ModifyAutoRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return InstanceId Cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _instanceId Cluster ID.
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
                     * 获取Instance ID.
                     * @return ResourceIds Instance ID.
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置Instance ID.
                     * @param _resourceIds Instance ID.
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
                     * 获取NOTIFY_AND_MANUAL_RENEW: Notification of impending expiration, without auto-renewal. NOTIFY_AND_AUTO_RENEW: Notification of impending expiration, with auto-renewal. DISABLE_NOTIFY_AND_MANUAL_RENEW: No notification of impending expiration, without auto-renewal.
                     * @return RenewFlag NOTIFY_AND_MANUAL_RENEW: Notification of impending expiration, without auto-renewal. NOTIFY_AND_AUTO_RENEW: Notification of impending expiration, with auto-renewal. DISABLE_NOTIFY_AND_MANUAL_RENEW: No notification of impending expiration, without auto-renewal.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置NOTIFY_AND_MANUAL_RENEW: Notification of impending expiration, without auto-renewal. NOTIFY_AND_AUTO_RENEW: Notification of impending expiration, with auto-renewal. DISABLE_NOTIFY_AND_MANUAL_RENEW: No notification of impending expiration, without auto-renewal.
                     * @param _renewFlag NOTIFY_AND_MANUAL_RENEW: Notification of impending expiration, without auto-renewal. NOTIFY_AND_AUTO_RENEW: Notification of impending expiration, with auto-renewal. DISABLE_NOTIFY_AND_MANUAL_RENEW: No notification of impending expiration, without auto-renewal.
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

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
                     * Cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * NOTIFY_AND_MANUAL_RENEW: Notification of impending expiration, without auto-renewal. NOTIFY_AND_AUTO_RENEW: Notification of impending expiration, with auto-renewal. DISABLE_NOTIFY_AND_MANUAL_RENEW: No notification of impending expiration, without auto-renewal.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

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

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_
