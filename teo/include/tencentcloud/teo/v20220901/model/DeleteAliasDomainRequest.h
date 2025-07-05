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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETEALIASDOMAINREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETEALIASDOMAINREQUEST_H_

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
                * DeleteAliasDomain request structure.
                */
                class DeleteAliasDomainRequest : public AbstractModel
                {
                public:
                    DeleteAliasDomainRequest();
                    ~DeleteAliasDomainRequest() = default;
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
                     * 获取The alias domain name to be deleted. If it is left empty, the delete operation is not performed.
                     * @return AliasNames The alias domain name to be deleted. If it is left empty, the delete operation is not performed.
                     * 
                     */
                    std::vector<std::string> GetAliasNames() const;

                    /**
                     * 设置The alias domain name to be deleted. If it is left empty, the delete operation is not performed.
                     * @param _aliasNames The alias domain name to be deleted. If it is left empty, the delete operation is not performed.
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
                     * The alias domain name to be deleted. If it is left empty, the delete operation is not performed.
                     */
                    std::vector<std::string> m_aliasNames;
                    bool m_aliasNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETEALIASDOMAINREQUEST_H_
