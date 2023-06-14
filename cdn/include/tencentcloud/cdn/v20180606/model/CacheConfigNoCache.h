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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIGNOCACHE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIGNOCACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Path cache/no cache configuration.
                */
                class CacheConfigNoCache : public AbstractModel
                {
                public:
                    CacheConfigNoCache();
                    ~CacheConfigNoCache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取No-cache configuration switch
`on`: Enable
`off`: Disable
Note: this field may return null, indicating that no valid value is obtained.
                     * @return Switch No-cache configuration switch
`on`: Enable
`off`: Disable
Note: this field may return null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置No-cache configuration switch
`on`: Enable
`off`: Disable
Note: this field may return null, indicating that no valid value is obtained.
                     * @param _switch No-cache configuration switch
`on`: Enable
`off`: Disable
Note: this field may return null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Always forwards to the origin server for verification
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Revalidate Always forwards to the origin server for verification
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRevalidate() const;

                    /**
                     * 设置Always forwards to the origin server for verification
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _revalidate Always forwards to the origin server for verification
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRevalidate(const std::string& _revalidate);

                    /**
                     * 判断参数 Revalidate 是否已赋值
                     * @return Revalidate 是否已赋值
                     * 
                     */
                    bool RevalidateHasBeenSet() const;

                private:

                    /**
                     * No-cache configuration switch
`on`: Enable
`off`: Disable
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Always forwards to the origin server for verification
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_revalidate;
                    bool m_revalidateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIGNOCACHE_H_
