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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCE_H_

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
                * The structure of information of the bandwidth package.
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The bandwidth package resource type, including `Address`, and `LoadBalance`
                     * @return ResourceType The bandwidth package resource type, including `Address`, and `LoadBalance`
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置The bandwidth package resource type, including `Address`, and `LoadBalance`
                     * @param _resourceType The bandwidth package resource type, including `Address`, and `LoadBalance`
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取The bandwidth package ID, such as `eip-xxxx` and `lb-xxxx`.
                     * @return ResourceId The bandwidth package ID, such as `eip-xxxx` and `lb-xxxx`.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置The bandwidth package ID, such as `eip-xxxx` and `lb-xxxx`.
                     * @param _resourceId The bandwidth package ID, such as `eip-xxxx` and `lb-xxxx`.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取The bandwidth package resource IP.
                     * @return AddressIp The bandwidth package resource IP.
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置The bandwidth package resource IP.
                     * @param _addressIp The bandwidth package resource IP.
                     * 
                     */
                    void SetAddressIp(const std::string& _addressIp);

                    /**
                     * 判断参数 AddressIp 是否已赋值
                     * @return AddressIp 是否已赋值
                     * 
                     */
                    bool AddressIpHasBeenSet() const;

                private:

                    /**
                     * The bandwidth package resource type, including `Address`, and `LoadBalance`
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * The bandwidth package ID, such as `eip-xxxx` and `lb-xxxx`.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * The bandwidth package resource IP.
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCE_H_
