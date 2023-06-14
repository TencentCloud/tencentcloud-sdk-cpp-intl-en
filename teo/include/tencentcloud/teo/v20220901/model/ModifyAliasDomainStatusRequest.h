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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALIASDOMAINSTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALIASDOMAINSTATUSREQUEST_H_

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
                * ModifyAliasDomainStatus request structure.
                */
                class ModifyAliasDomainStatusRequest : public AbstractModel
                {
                public:
                    ModifyAliasDomainStatusRequest();
                    ~ModifyAliasDomainStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param _zoneId The site ID.
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
                     * 获取Status of the alias domain name. Values:
<li>`false`: Enable the alias domain name.</li>
<li>`true`: Disable the alias domain name.</li>
                     * @return Paused Status of the alias domain name. Values:
<li>`false`: Enable the alias domain name.</li>
<li>`true`: Disable the alias domain name.</li>
                     * 
                     */
                    bool GetPaused() const;

                    /**
                     * 设置Status of the alias domain name. Values:
<li>`false`: Enable the alias domain name.</li>
<li>`true`: Disable the alias domain name.</li>
                     * @param _paused Status of the alias domain name. Values:
<li>`false`: Enable the alias domain name.</li>
<li>`true`: Disable the alias domain name.</li>
                     * 
                     */
                    void SetPaused(const bool& _paused);

                    /**
                     * 判断参数 Paused 是否已赋值
                     * @return Paused 是否已赋值
                     * 
                     */
                    bool PausedHasBeenSet() const;

                    /**
                     * 获取The alias domain name you want to modify its status. If it is left empty, the modify operation is not performed.
                     * @return AliasNames The alias domain name you want to modify its status. If it is left empty, the modify operation is not performed.
                     * 
                     */
                    std::vector<std::string> GetAliasNames() const;

                    /**
                     * 设置The alias domain name you want to modify its status. If it is left empty, the modify operation is not performed.
                     * @param _aliasNames The alias domain name you want to modify its status. If it is left empty, the modify operation is not performed.
                     * 
                     */
                    void SetAliasNames(const std::vector<std::string>& _aliasNames);

                    /**
                     * 判断参数 AliasNames 是否已赋值
                     * @return AliasNames 是否已赋值
                     * 
                     */
                    bool AliasNamesHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Status of the alias domain name. Values:
<li>`false`: Enable the alias domain name.</li>
<li>`true`: Disable the alias domain name.</li>
                     */
                    bool m_paused;
                    bool m_pausedHasBeenSet;

                    /**
                     * The alias domain name you want to modify its status. If it is left empty, the modify operation is not performed.
                     */
                    std::vector<std::string> m_aliasNames;
                    bool m_aliasNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALIASDOMAINSTATUSREQUEST_H_
