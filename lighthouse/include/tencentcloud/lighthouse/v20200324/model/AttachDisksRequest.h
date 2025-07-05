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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ATTACHDISKSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ATTACHDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * AttachDisks request structure.
                */
                class AttachDisksRequest : public AbstractModel
                {
                public:
                    AttachDisksRequest();
                    ~AttachDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of cloud disk IDs.
                     * @return DiskIds List of cloud disk IDs.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置List of cloud disk IDs.
                     * @param _diskIds List of cloud disk IDs.
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

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
                     * 获取Specify whether to renew an instance automatically when it expires. Values: 

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically; `NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew; `DISABLE_NOTIFY_AND_MANUAL_RENEW`: Do not trigger the notification and do not renew.

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     * @return RenewFlag Specify whether to renew an instance automatically when it expires. Values: 

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically; `NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew; `DISABLE_NOTIFY_AND_MANUAL_RENEW`: Do not trigger the notification and do not renew.

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Specify whether to renew an instance automatically when it expires. Values: 

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically; `NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew; `DISABLE_NOTIFY_AND_MANUAL_RENEW`: Do not trigger the notification and do not renew.

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     * @param _renewFlag Specify whether to renew an instance automatically when it expires. Values: 

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically; `NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew; `DISABLE_NOTIFY_AND_MANUAL_RENEW`: Do not trigger the notification and do not renew.

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * List of cloud disk IDs.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specify whether to renew an instance automatically when it expires. Values: 

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically; `NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew; `DISABLE_NOTIFY_AND_MANUAL_RENEW`: Do not trigger the notification and do not renew.

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ATTACHDISKSREQUEST_H_
