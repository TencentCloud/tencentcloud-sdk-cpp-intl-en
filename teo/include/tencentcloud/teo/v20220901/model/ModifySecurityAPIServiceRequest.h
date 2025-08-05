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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYAPISERVICEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYAPISERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/APIService.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifySecurityAPIService request structure.
                */
                class ModifySecurityAPIServiceRequest : public AbstractModel
                {
                public:
                    ModifySecurityAPIServiceRequest();
                    ~ModifySecurityAPIServiceRequest() = default;
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
                     * 获取API service list.
                     * @return APIServices API service list.
                     * 
                     */
                    std::vector<APIService> GetAPIServices() const;

                    /**
                     * 设置API service list.
                     * @param _aPIServices API service list.
                     * 
                     */
                    void SetAPIServices(const std::vector<APIService>& _aPIServices);

                    /**
                     * 判断参数 APIServices 是否已赋值
                     * @return APIServices 是否已赋值
                     * 
                     */
                    bool APIServicesHasBeenSet() const;

                private:

                    /**
                     * Zone ID.		
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * API service list.
                     */
                    std::vector<APIService> m_aPIServices;
                    bool m_aPIServicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYAPISERVICEREQUEST_H_
