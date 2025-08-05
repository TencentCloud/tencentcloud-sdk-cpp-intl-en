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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETESECURITYCLIENTATTESTERREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETESECURITYCLIENTATTESTERREQUEST_H_

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
                * DeleteSecurityClientAttester request structure.
                */
                class DeleteSecurityClientAttesterRequest : public AbstractModel
                {
                public:
                    DeleteSecurityClientAttesterRequest();
                    ~DeleteSecurityClientAttesterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取Client authentication option ID.
                     * @return ClientAttesterIds Client authentication option ID.
                     * 
                     */
                    std::vector<std::string> GetClientAttesterIds() const;

                    /**
                     * 设置Client authentication option ID.
                     * @param _clientAttesterIds Client authentication option ID.
                     * 
                     */
                    void SetClientAttesterIds(const std::vector<std::string>& _clientAttesterIds);

                    /**
                     * 判断参数 ClientAttesterIds 是否已赋值
                     * @return ClientAttesterIds 是否已赋值
                     * 
                     */
                    bool ClientAttesterIdsHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Client authentication option ID.
                     */
                    std::vector<std::string> m_clientAttesterIds;
                    bool m_clientAttesterIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETESECURITYCLIENTATTESTERREQUEST_H_
