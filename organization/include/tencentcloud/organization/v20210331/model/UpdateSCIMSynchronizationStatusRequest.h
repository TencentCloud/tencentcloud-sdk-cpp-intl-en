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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATESCIMSYNCHRONIZATIONSTATUSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATESCIMSYNCHRONIZATIONSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * UpdateSCIMSynchronizationStatus request structure.
                */
                class UpdateSCIMSynchronizationStatusRequest : public AbstractModel
                {
                public:
                    UpdateSCIMSynchronizationStatusRequest();
                    ~UpdateSCIMSynchronizationStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     * @return ZoneId Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     * @param _zoneId Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取SCIM synchronization status. Enabled: enabled. Disabled: disabled.
                     * @return SCIMSynchronizationStatus SCIM synchronization status. Enabled: enabled. Disabled: disabled.
                     * 
                     */
                    std::string GetSCIMSynchronizationStatus() const;

                    /**
                     * 设置SCIM synchronization status. Enabled: enabled. Disabled: disabled.
                     * @param _sCIMSynchronizationStatus SCIM synchronization status. Enabled: enabled. Disabled: disabled.
                     * 
                     */
                    void SetSCIMSynchronizationStatus(const std::string& _sCIMSynchronizationStatus);

                    /**
                     * 判断参数 SCIMSynchronizationStatus 是否已赋值
                     * @return SCIMSynchronizationStatus 是否已赋值
                     * 
                     */
                    bool SCIMSynchronizationStatusHasBeenSet() const;

                private:

                    /**
                     * Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * SCIM synchronization status. Enabled: enabled. Disabled: disabled.
                     */
                    std::string m_sCIMSynchronizationStatus;
                    bool m_sCIMSynchronizationStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATESCIMSYNCHRONIZATIONSTATUSREQUEST_H_
