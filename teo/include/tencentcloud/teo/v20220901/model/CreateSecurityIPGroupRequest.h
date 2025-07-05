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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATESECURITYIPGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATESECURITYIPGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateSecurityIPGroup request structure.
                */
                class CreateSecurityIPGroupRequest : public AbstractModel
                {
                public:
                    CreateSecurityIPGroupRequest();
                    ~CreateSecurityIPGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID.
                     * @return ZoneId Site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID.
                     * @param _zoneId Site ID.
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
                     * 获取IP group information.
                     * @return IPGroup IP group information.
                     * 
                     */
                    IPGroup GetIPGroup() const;

                    /**
                     * 设置IP group information.
                     * @param _iPGroup IP group information.
                     * 
                     */
                    void SetIPGroup(const IPGroup& _iPGroup);

                    /**
                     * 判断参数 IPGroup 是否已赋值
                     * @return IPGroup 是否已赋值
                     * 
                     */
                    bool IPGroupHasBeenSet() const;

                private:

                    /**
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * IP group information.
                     */
                    IPGroup m_iPGroup;
                    bool m_iPGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATESECURITYIPGROUPREQUEST_H_
