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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CACHECONFIGCACHE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CACHECONFIGCACHE_H_

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
                * 
                */
                class CacheConfigCache : public AbstractModel
                {
                public:
                    CacheConfigCache();
                    ~CacheConfigCache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Switch 
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置
                     * @param _switch 
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
                     * 获取
                     * @return CacheTime 
                     * 
                     */
                    uint64_t GetCacheTime() const;

                    /**
                     * 设置
                     * @param _cacheTime 
                     * 
                     */
                    void SetCacheTime(const uint64_t& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return CompareMaxAge 
                     * 
                     */
                    std::string GetCompareMaxAge() const;

                    /**
                     * 设置
                     * @param _compareMaxAge 
                     * 
                     */
                    void SetCompareMaxAge(const std::string& _compareMaxAge);

                    /**
                     * 判断参数 CompareMaxAge 是否已赋值
                     * @return CompareMaxAge 是否已赋值
                     * 
                     */
                    bool CompareMaxAgeHasBeenSet() const;

                    /**
                     * 获取
                     * @return IgnoreCacheControl 
                     * 
                     */
                    std::string GetIgnoreCacheControl() const;

                    /**
                     * 设置
                     * @param _ignoreCacheControl 
                     * 
                     */
                    void SetIgnoreCacheControl(const std::string& _ignoreCacheControl);

                    /**
                     * 判断参数 IgnoreCacheControl 是否已赋值
                     * @return IgnoreCacheControl 是否已赋值
                     * 
                     */
                    bool IgnoreCacheControlHasBeenSet() const;

                    /**
                     * 获取
                     * @return IgnoreSetCookie 
                     * 
                     */
                    std::string GetIgnoreSetCookie() const;

                    /**
                     * 设置
                     * @param _ignoreSetCookie 
                     * 
                     */
                    void SetIgnoreSetCookie(const std::string& _ignoreSetCookie);

                    /**
                     * 判断参数 IgnoreSetCookie 是否已赋值
                     * @return IgnoreSetCookie 是否已赋值
                     * 
                     */
                    bool IgnoreSetCookieHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_compareMaxAge;
                    bool m_compareMaxAgeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_ignoreCacheControl;
                    bool m_ignoreCacheControlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_ignoreSetCookie;
                    bool m_ignoreSetCookieHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CACHECONFIGCACHE_H_
