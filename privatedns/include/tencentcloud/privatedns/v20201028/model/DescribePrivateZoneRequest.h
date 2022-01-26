/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEPRIVATEZONEREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEPRIVATEZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribePrivateZone request structure.
                */
                class DescribePrivateZoneRequest : public AbstractModel
                {
                public:
                    DescribePrivateZoneRequest();
                    ~DescribePrivateZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name, which must be in the format of standard TLD
                     * @return ZoneId Domain name, which must be in the format of standard TLD
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Domain name, which must be in the format of standard TLD
                     * @param ZoneId Domain name, which must be in the format of standard TLD
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * Domain name, which must be in the format of standard TLD
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEPRIVATEZONEREQUEST_H_
