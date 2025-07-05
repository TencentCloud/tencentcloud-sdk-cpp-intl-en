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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DISABLEORIGINACLREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DISABLEORIGINACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DisableOriginACL request structure.
                */
                class DisableOriginACLRequest : public AbstractModel
                {
                public:
                    DisableOriginACLRequest();
                    ~DisableOriginACLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the site ID.
                     * @return ZoneId Specifies the site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Specifies the site ID.
                     * @param _zoneId Specifies the site ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DISABLEORIGINACLREQUEST_H_
