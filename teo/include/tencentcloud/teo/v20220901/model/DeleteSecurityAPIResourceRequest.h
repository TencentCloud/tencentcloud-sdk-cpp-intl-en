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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETESECURITYAPIRESOURCEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETESECURITYAPIRESOURCEREQUEST_H_

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
                * DeleteSecurityAPIResource request structure.
                */
                class DeleteSecurityAPIResourceRequest : public AbstractModel
                {
                public:
                    DeleteSecurityAPIResourceRequest();
                    ~DeleteSecurityAPIResourceRequest() = default;
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
                     * 获取Specifies the ID list of API resources to be deleted.
                     * @return APIResourceIds Specifies the ID list of API resources to be deleted.
                     * 
                     */
                    std::vector<std::string> GetAPIResourceIds() const;

                    /**
                     * 设置Specifies the ID list of API resources to be deleted.
                     * @param _aPIResourceIds Specifies the ID list of API resources to be deleted.
                     * 
                     */
                    void SetAPIResourceIds(const std::vector<std::string>& _aPIResourceIds);

                    /**
                     * 判断参数 APIResourceIds 是否已赋值
                     * @return APIResourceIds 是否已赋值
                     * 
                     */
                    bool APIResourceIdsHasBeenSet() const;

                private:

                    /**
                     * Zone ID.		
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Specifies the ID list of API resources to be deleted.
                     */
                    std::vector<std::string> m_aPIResourceIds;
                    bool m_aPIResourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETESECURITYAPIRESOURCEREQUEST_H_
