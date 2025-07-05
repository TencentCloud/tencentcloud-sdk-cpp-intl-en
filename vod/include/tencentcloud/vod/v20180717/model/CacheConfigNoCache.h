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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CACHECONFIGNOCACHE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CACHECONFIGNOCACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取Path cache does not cache configuration configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * @return Switch Path cache does not cache configuration configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Path cache does not cache configuration configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * @param _switch Path cache does not cache configuration configuration switch, value: <li>on: on; </li> <li>off: off. </li>
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
                     * 获取Always return to the origin site for verification, value: <li>on: on; </li> <li>off: off. </li>
                     * @return Revalidate Always return to the origin site for verification, value: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    std::string GetRevalidate() const;

                    /**
                     * 设置Always return to the origin site for verification, value: <li>on: on; </li> <li>off: off. </li>
                     * @param _revalidate Always return to the origin site for verification, value: <li>on: on; </li> <li>off: off. </li>
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
                     * Path cache does not cache configuration configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Always return to the origin site for verification, value: <li>on: on; </li> <li>off: off. </li>
                     */
                    std::string m_revalidate;
                    bool m_revalidateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CACHECONFIGNOCACHE_H_
