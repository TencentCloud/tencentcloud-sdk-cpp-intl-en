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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_VPCCIDRBLOCK_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_VPCCIDRBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * VPC subnet information
                */
                class VpcCidrBlock : public AbstractModel
                {
                public:
                    VpcCidrBlock();
                    ~VpcCidrBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CidrId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCidrId() const;

                    /**
                     * 设置Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cidrId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCidrId(const std::string& _cidrId);

                    /**
                     * 判断参数 CidrId 是否已赋值
                     * @return CidrId 是否已赋值
                     * 
                     */
                    bool CidrIdHasBeenSet() const;

                    /**
                     * 获取Subnet IP range
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CidrAddr Subnet IP range
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCidrAddr() const;

                    /**
                     * 设置Subnet IP range
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cidrAddr Subnet IP range
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCidrAddr(const std::string& _cidrAddr);

                    /**
                     * 判断参数 CidrAddr 是否已赋值
                     * @return CidrAddr 是否已赋值
                     * 
                     */
                    bool CidrAddrHasBeenSet() const;

                private:

                    /**
                     * Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cidrId;
                    bool m_cidrIdHasBeenSet;

                    /**
                     * Subnet IP range
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cidrAddr;
                    bool m_cidrAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_VPCCIDRBLOCK_H_
