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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONEDDOSPOLICYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONEDDOSPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeZoneDDoSPolicy request structure.
                */
                class DescribeZoneDDoSPolicyRequest : public AbstractModel
                {
                public:
                    DescribeZoneDDoSPolicyRequest();
                    ~DescribeZoneDDoSPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site (top-level domain name)
                     * @return ZoneId ID of the site (top-level domain name)
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site (top-level domain name)
                     * @param _zoneId ID of the site (top-level domain name)
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * ID of the site (top-level domain name)
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONEDDOSPOLICYREQUEST_H_
