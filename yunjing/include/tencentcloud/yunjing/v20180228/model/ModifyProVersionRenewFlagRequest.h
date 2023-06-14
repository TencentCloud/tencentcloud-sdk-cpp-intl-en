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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYPROVERSIONRENEWFLAGREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYPROVERSIONRENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyProVersionRenewFlag request structure.
                */
                class ModifyProVersionRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyProVersionRenewFlagRequest();
                    ~ModifyProVersionRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Auto-renewal flag. Valid values:
<li>NOTIFY_AND_AUTO_RENEW: notifies of expiration and auto-renews</li>
<li>NOTIFY_AND_MANUAL_RENEW: notifies of expiration but does not auto-renew</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW: does not notify of expiration or auto-renew</li>
                     * @return RenewFlag Auto-renewal flag. Valid values:
<li>NOTIFY_AND_AUTO_RENEW: notifies of expiration and auto-renews</li>
<li>NOTIFY_AND_MANUAL_RENEW: notifies of expiration but does not auto-renew</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW: does not notify of expiration or auto-renew</li>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. Valid values:
<li>NOTIFY_AND_AUTO_RENEW: notifies of expiration and auto-renews</li>
<li>NOTIFY_AND_MANUAL_RENEW: notifies of expiration but does not auto-renew</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW: does not notify of expiration or auto-renew</li>
                     * @param _renewFlag Auto-renewal flag. Valid values:
<li>NOTIFY_AND_AUTO_RENEW: notifies of expiration and auto-renews</li>
<li>NOTIFY_AND_MANUAL_RENEW: notifies of expiration but does not auto-renew</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW: does not notify of expiration or auto-renew</li>
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
                     * 获取Unique server ID, corresponding to `uuid` for CVM or `instanceId` for BM.
                     * @return Quuid Unique server ID, corresponding to `uuid` for CVM or `instanceId` for BM.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Unique server ID, corresponding to `uuid` for CVM or `instanceId` for BM.
                     * @param _quuid Unique server ID, corresponding to `uuid` for CVM or `instanceId` for BM.
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * Auto-renewal flag. Valid values:
<li>NOTIFY_AND_AUTO_RENEW: notifies of expiration and auto-renews</li>
<li>NOTIFY_AND_MANUAL_RENEW: notifies of expiration but does not auto-renew</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW: does not notify of expiration or auto-renew</li>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Unique server ID, corresponding to `uuid` for CVM or `instanceId` for BM.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYPROVERSIONRENEWFLAGREQUEST_H_
