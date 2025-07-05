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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CIDRFORCCN_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CIDRFORCCN_H_

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
                * Publishes the routing policy of the VPC subnet to CCN
                */
                class CidrForCcn : public AbstractModel
                {
                public:
                    CidrForCcn();
                    ~CidrForCcn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Local CIDR block, including subnet CIDR block and secondary CIDR block
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Cidr Local CIDR block, including subnet CIDR block and secondary CIDR block
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCidr() const;

                    /**
                     * 设置Local CIDR block, including subnet CIDR block and secondary CIDR block
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _cidr Local CIDR block, including subnet CIDR block and secondary CIDR block
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCidr(const std::string& _cidr);

                    /**
                     * 判断参数 Cidr 是否已赋值
                     * @return Cidr 是否已赋值
                     * 
                     */
                    bool CidrHasBeenSet() const;

                    /**
                     * 获取Whether the routing policy of the VPC subnet is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PublishedToVbc Whether the routing policy of the VPC subnet is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetPublishedToVbc() const;

                    /**
                     * 设置Whether the routing policy of the VPC subnet is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _publishedToVbc Whether the routing policy of the VPC subnet is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublishedToVbc(const bool& _publishedToVbc);

                    /**
                     * 判断参数 PublishedToVbc 是否已赋值
                     * @return PublishedToVbc 是否已赋值
                     * 
                     */
                    bool PublishedToVbcHasBeenSet() const;

                private:

                    /**
                     * Local CIDR block, including subnet CIDR block and secondary CIDR block
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cidr;
                    bool m_cidrHasBeenSet;

                    /**
                     * Whether the routing policy of the VPC subnet is published to CCN.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_publishedToVbc;
                    bool m_publishedToVbcHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CIDRFORCCN_H_
