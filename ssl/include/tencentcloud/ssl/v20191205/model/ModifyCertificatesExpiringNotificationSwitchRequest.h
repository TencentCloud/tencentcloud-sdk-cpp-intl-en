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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATESEXPIRINGNOTIFICATIONSWITCHREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATESEXPIRINGNOTIFICATIONSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * ModifyCertificatesExpiringNotificationSwitch request structure.
                */
                class ModifyCertificatesExpiringNotificationSwitchRequest : public AbstractModel
                {
                public:
                    ModifyCertificatesExpiringNotificationSwitchRequest();
                    ~ModifyCertificatesExpiringNotificationSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Certificate ID list. maximum of 50.
                     * @return CertificateIds Certificate ID list. maximum of 50.
                     * 
                     */
                    std::vector<std::string> GetCertificateIds() const;

                    /**
                     * 设置Certificate ID list. maximum of 50.
                     * @param _certificateIds Certificate ID list. maximum of 50.
                     * 
                     */
                    void SetCertificateIds(const std::vector<std::string>& _certificateIds);

                    /**
                     * 判断参数 CertificateIds 是否已赋值
                     * @return CertificateIds 是否已赋值
                     * 
                     */
                    bool CertificateIdsHasBeenSet() const;

                    /**
                     * 获取0: do not ignore notifications. 1: ignore notifications.
                     * @return SwitchStatus 0: do not ignore notifications. 1: ignore notifications.
                     * 
                     */
                    uint64_t GetSwitchStatus() const;

                    /**
                     * 设置0: do not ignore notifications. 1: ignore notifications.
                     * @param _switchStatus 0: do not ignore notifications. 1: ignore notifications.
                     * 
                     */
                    void SetSwitchStatus(const uint64_t& _switchStatus);

                    /**
                     * 判断参数 SwitchStatus 是否已赋值
                     * @return SwitchStatus 是否已赋值
                     * 
                     */
                    bool SwitchStatusHasBeenSet() const;

                private:

                    /**
                     * Certificate ID list. maximum of 50.
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * 0: do not ignore notifications. 1: ignore notifications.
                     */
                    uint64_t m_switchStatus;
                    bool m_switchStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATESEXPIRINGNOTIFICATIONSWITCHREQUEST_H_
