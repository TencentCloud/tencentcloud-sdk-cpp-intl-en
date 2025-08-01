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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATESPECIFICATION_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATESPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * IP address template
                */
                class AddressTemplateSpecification : public AbstractModel
                {
                public:
                    AddressTemplateSpecification();
                    ~AddressTemplateSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the IP address, such as `ipm-2uw6ujo6`.
                     * @return AddressId The ID of the IP address, such as `ipm-2uw6ujo6`.
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置The ID of the IP address, such as `ipm-2uw6ujo6`.
                     * @param _addressId The ID of the IP address, such as `ipm-2uw6ujo6`.
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取The ID of the IP address group, such as `ipmg-2uw6ujo6`.
                     * @return AddressGroupId The ID of the IP address group, such as `ipmg-2uw6ujo6`.
                     * 
                     */
                    std::string GetAddressGroupId() const;

                    /**
                     * 设置The ID of the IP address group, such as `ipmg-2uw6ujo6`.
                     * @param _addressGroupId The ID of the IP address group, such as `ipmg-2uw6ujo6`.
                     * 
                     */
                    void SetAddressGroupId(const std::string& _addressGroupId);

                    /**
                     * 判断参数 AddressGroupId 是否已赋值
                     * @return AddressGroupId 是否已赋值
                     * 
                     */
                    bool AddressGroupIdHasBeenSet() const;

                private:

                    /**
                     * The ID of the IP address, such as `ipm-2uw6ujo6`.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * The ID of the IP address group, such as `ipmg-2uw6ujo6`.
                     */
                    std::string m_addressGroupId;
                    bool m_addressGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATESPECIFICATION_H_
