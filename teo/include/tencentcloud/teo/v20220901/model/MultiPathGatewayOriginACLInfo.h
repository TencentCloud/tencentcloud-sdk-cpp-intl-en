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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYORIGINACLINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYORIGINACLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/MultiPathGatewayCurrentOriginACL.h>
#include <tencentcloud/teo/v20220901/model/MultiPathGatewayNextOriginACL.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Binding relationship between a multi-channel gateway example instance and the origin-pull IP range, as well as the origin-pull IP range details.
                */
                class MultiPathGatewayOriginACLInfo : public AbstractModel
                {
                public:
                    MultiPathGatewayOriginACLInfo();
                    ~MultiPathGatewayOriginACLInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Currently effective origin-pull IP range.
                     * @return MultiPathGatewayCurrentOriginACL Currently effective origin-pull IP range.
                     * 
                     */
                    MultiPathGatewayCurrentOriginACL GetMultiPathGatewayCurrentOriginACL() const;

                    /**
                     * 设置Currently effective origin-pull IP range.
                     * @param _multiPathGatewayCurrentOriginACL Currently effective origin-pull IP range.
                     * 
                     */
                    void SetMultiPathGatewayCurrentOriginACL(const MultiPathGatewayCurrentOriginACL& _multiPathGatewayCurrentOriginACL);

                    /**
                     * 判断参数 MultiPathGatewayCurrentOriginACL 是否已赋值
                     * @return MultiPathGatewayCurrentOriginACL 是否已赋值
                     * 
                     */
                    bool MultiPathGatewayCurrentOriginACLHasBeenSet() const;

                    /**
                     * 获取When the origin-pull IP range is updated, this field will return the origin-pull IP range that will take effect in the next version, including a contrast with the current origin-pull IP range. If there is no update, this field is empty.
                     * @return MultiPathGatewayNextOriginACL When the origin-pull IP range is updated, this field will return the origin-pull IP range that will take effect in the next version, including a contrast with the current origin-pull IP range. If there is no update, this field is empty.
                     * 
                     */
                    MultiPathGatewayNextOriginACL GetMultiPathGatewayNextOriginACL() const;

                    /**
                     * 设置When the origin-pull IP range is updated, this field will return the origin-pull IP range that will take effect in the next version, including a contrast with the current origin-pull IP range. If there is no update, this field is empty.
                     * @param _multiPathGatewayNextOriginACL When the origin-pull IP range is updated, this field will return the origin-pull IP range that will take effect in the next version, including a contrast with the current origin-pull IP range. If there is no update, this field is empty.
                     * 
                     */
                    void SetMultiPathGatewayNextOriginACL(const MultiPathGatewayNextOriginACL& _multiPathGatewayNextOriginACL);

                    /**
                     * 判断参数 MultiPathGatewayNextOriginACL 是否已赋值
                     * @return MultiPathGatewayNextOriginACL 是否已赋值
                     * 
                     */
                    bool MultiPathGatewayNextOriginACLHasBeenSet() const;

                private:

                    /**
                     * Currently effective origin-pull IP range.
                     */
                    MultiPathGatewayCurrentOriginACL m_multiPathGatewayCurrentOriginACL;
                    bool m_multiPathGatewayCurrentOriginACLHasBeenSet;

                    /**
                     * When the origin-pull IP range is updated, this field will return the origin-pull IP range that will take effect in the next version, including a contrast with the current origin-pull IP range. If there is no update, this field is empty.
                     */
                    MultiPathGatewayNextOriginACL m_multiPathGatewayNextOriginACL;
                    bool m_multiPathGatewayNextOriginACLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYORIGINACLINFO_H_
