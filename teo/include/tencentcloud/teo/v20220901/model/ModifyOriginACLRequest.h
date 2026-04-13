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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINACLREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginACLEntity.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyOriginACL request structure.
                */
                class ModifyOriginACLRequest : public AbstractModel
                {
                public:
                    ModifyOriginACLRequest();
                    ~ModifyOriginACLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the site ID.
                     * @return ZoneId Specifies the site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Specifies the site ID.
                     * @param _zoneId Specifies the site ID.
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
                     * 获取Specifies the instance that needs to configurate origin ACLs.
                     * @return OriginACLEntities Specifies the instance that needs to configurate origin ACLs.
                     * 
                     */
                    std::vector<OriginACLEntity> GetOriginACLEntities() const;

                    /**
                     * 设置Specifies the instance that needs to configurate origin ACLs.
                     * @param _originACLEntities Specifies the instance that needs to configurate origin ACLs.
                     * 
                     */
                    void SetOriginACLEntities(const std::vector<OriginACLEntity>& _originACLEntities);

                    /**
                     * 判断参数 OriginACLEntities 是否已赋值
                     * @return OriginACLEntities 是否已赋值
                     * 
                     */
                    bool OriginACLEntitiesHasBeenSet() const;

                    /**
                     * 获取The origin protection back-to-origin ACL control domain remains unchanged by default if left blank. The domain information can be obtained through the DescribeAvailableOriginACLFamily API query.
Valid values are as follows:
<li>gaz: Standard global availability zone control domain;</li>
<li>mlc: Standard Chinese mainland availability zone control domain;</li>
<li>emc: Standard global (exclude Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: Simplify global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplify the global (excluding Chinese mainland) availability zone control domain;</li>
                     * @return OriginACLFamily The origin protection back-to-origin ACL control domain remains unchanged by default if left blank. The domain information can be obtained through the DescribeAvailableOriginACLFamily API query.
Valid values are as follows:
<li>gaz: Standard global availability zone control domain;</li>
<li>mlc: Standard Chinese mainland availability zone control domain;</li>
<li>emc: Standard global (exclude Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: Simplify global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplify the global (excluding Chinese mainland) availability zone control domain;</li>
                     * 
                     */
                    std::string GetOriginACLFamily() const;

                    /**
                     * 设置The origin protection back-to-origin ACL control domain remains unchanged by default if left blank. The domain information can be obtained through the DescribeAvailableOriginACLFamily API query.
Valid values are as follows:
<li>gaz: Standard global availability zone control domain;</li>
<li>mlc: Standard Chinese mainland availability zone control domain;</li>
<li>emc: Standard global (exclude Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: Simplify global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplify the global (excluding Chinese mainland) availability zone control domain;</li>
                     * @param _originACLFamily The origin protection back-to-origin ACL control domain remains unchanged by default if left blank. The domain information can be obtained through the DescribeAvailableOriginACLFamily API query.
Valid values are as follows:
<li>gaz: Standard global availability zone control domain;</li>
<li>mlc: Standard Chinese mainland availability zone control domain;</li>
<li>emc: Standard global (exclude Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: Simplify global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplify the global (excluding Chinese mainland) availability zone control domain;</li>
                     * 
                     */
                    void SetOriginACLFamily(const std::string& _originACLFamily);

                    /**
                     * 判断参数 OriginACLFamily 是否已赋值
                     * @return OriginACLFamily 是否已赋值
                     * 
                     */
                    bool OriginACLFamilyHasBeenSet() const;

                private:

                    /**
                     * Specifies the site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Specifies the instance that needs to configurate origin ACLs.
                     */
                    std::vector<OriginACLEntity> m_originACLEntities;
                    bool m_originACLEntitiesHasBeenSet;

                    /**
                     * The origin protection back-to-origin ACL control domain remains unchanged by default if left blank. The domain information can be obtained through the DescribeAvailableOriginACLFamily API query.
Valid values are as follows:
<li>gaz: Standard global availability zone control domain;</li>
<li>mlc: Standard Chinese mainland availability zone control domain;</li>
<li>emc: Standard global (exclude Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: Simplify global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplify the global (excluding Chinese mainland) availability zone control domain;</li>
                     */
                    std::string m_originACLFamily;
                    bool m_originACLFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINACLREQUEST_H_
