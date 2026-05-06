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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEWAFPROTECTIONREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEWAFPROTECTIONREQUEST_H_

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
                * DescribeWafProtection request structure.
                */
                class DescribeWafProtectionRequest : public AbstractModel
                {
                public:
                    DescribeWafProtectionRequest();
                    ~DescribeWafProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取gateway ID
                     * @return GatewayId gateway ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置gateway ID
                     * @param _gatewayId gateway ID
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
-Object
                     * @return Type Type of protection resource.
-Global instance
-Service
-Route
-Object
                     * @deprecated
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of protection resource.
-Global instance
-Service
-Route
-Object
                     * @param _type Type of protection resource.
-Global instance
-Service
-Route
-Object
                     * @deprecated
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * @deprecated
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Resource type list for protection supports querying multiple types (Global, Service, Route, Object). If left empty, it defaults to querying the Global type.
                     * @return TypeList Resource type list for protection supports querying multiple types (Global, Service, Route, Object). If left empty, it defaults to querying the Global type.
                     * 
                     */
                    std::vector<std::string> GetTypeList() const;

                    /**
                     * 设置Resource type list for protection supports querying multiple types (Global, Service, Route, Object). If left empty, it defaults to querying the Global type.
                     * @param _typeList Resource type list for protection supports querying multiple types (Global, Service, Route, Object). If left empty, it defaults to querying the Global type.
                     * 
                     */
                    void SetTypeList(const std::vector<std::string>& _typeList);

                    /**
                     * 判断参数 TypeList 是否已赋值
                     * @return TypeList 是否已赋值
                     * 
                     */
                    bool TypeListHasBeenSet() const;

                private:

                    /**
                     * gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Type of protection resource.
-Global instance
-Service
-Route
-Object
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Resource type list for protection supports querying multiple types (Global, Service, Route, Object). If left empty, it defaults to querying the Global type.
                     */
                    std::vector<std::string> m_typeList;
                    bool m_typeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEWAFPROTECTIONREQUEST_H_
