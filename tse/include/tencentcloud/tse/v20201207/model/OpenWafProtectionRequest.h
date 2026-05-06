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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_OPENWAFPROTECTIONREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_OPENWAFPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * OpenWafProtection request structure.
                */
                class OpenWafProtectionRequest : public AbstractModel
                {
                public:
                    OpenWafProtectionRequest();
                    ~OpenWafProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway ID
                     * @return GatewayId Gateway ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway ID
                     * @param _gatewayId Gateway ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Type of protection resource.
-Global instance
-Service
-Route
-Object (not currently supported)
                     * @return Type Type of protection resource.
-Global instance
-Service
-Route
-Object (not currently supported)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of protection resource.
-Global instance
-Service
-Route
-Object (not currently supported)
                     * @param _type Type of protection resource.
-Global instance
-Service
-Route
-Object (not currently supported)
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取When resource type Type is Service or Route, list of passed in services or routes
                     * @return List When resource type Type is Service or Route, list of passed in services or routes
                     * 
                     */
                    std::vector<std::string> GetList() const;

                    /**
                     * 设置When resource type Type is Service or Route, list of passed in services or routes
                     * @param _list When resource type Type is Service or Route, list of passed in services or routes
                     * 
                     */
                    void SetList(const std::vector<std::string>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * Gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Type of protection resource.
-Global instance
-Service
-Route
-Object (not currently supported)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * When resource type Type is Service or Route, list of passed in services or routes
                     */
                    std::vector<std::string> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_OPENWAFPROTECTIONREQUEST_H_
