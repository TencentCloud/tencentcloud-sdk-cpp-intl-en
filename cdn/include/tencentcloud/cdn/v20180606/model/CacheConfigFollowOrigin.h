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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIGFOLLOWORIGIN_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIGFOLLOWORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/HeuristicCache.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Path cache configuration follows the origin server configuration.
                */
                class CacheConfigFollowOrigin : public AbstractModel
                {
                public:
                    CacheConfigFollowOrigin();
                    ~CacheConfigFollowOrigin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to follow the origin configuration for path cache. Values:
`on`: Enable
`off`: Disable
                     * @return Switch Whether to follow the origin configuration for path cache. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to follow the origin configuration for path cache. Values:
`on`: Enable
`off`: Disable
                     * @param _switch Whether to follow the origin configuration for path cache. Values:
`on`: Enable
`off`: Disable
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
                     * 获取Heuristic cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return HeuristicCache Heuristic cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    HeuristicCache GetHeuristicCache() const;

                    /**
                     * 设置Heuristic cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _heuristicCache Heuristic cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHeuristicCache(const HeuristicCache& _heuristicCache);

                    /**
                     * 判断参数 HeuristicCache 是否已赋值
                     * @return HeuristicCache 是否已赋值
                     * 
                     */
                    bool HeuristicCacheHasBeenSet() const;

                    /**
                     * 获取Whether to enable origin server mtime verification after cache expires. valid values: equal, since, none, and null. default value: equal, which validates the origin server file's mtime and length. domains created prior to 2024-09-12 18:00 default to null, with behavior remaining unchanged.
equal: the mtime in the origin server response must match the mtime in the cache. if there is a difference in parameter values, purge the cache.
since: purges cache if the origin server response mtime is larger than the cache mtime.
none: when the cache expires and the file is retrieved from the origin server again to get the mtime and Length, it does not validate the mtime in the origin response. if the origin response carries a Content-Length header, the cache is updated only when the file size changes. if the origin response does not carry a Content-Length header, the cache is updated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginMtimeCheckType Whether to enable origin server mtime verification after cache expires. valid values: equal, since, none, and null. default value: equal, which validates the origin server file's mtime and length. domains created prior to 2024-09-12 18:00 default to null, with behavior remaining unchanged.
equal: the mtime in the origin server response must match the mtime in the cache. if there is a difference in parameter values, purge the cache.
since: purges cache if the origin server response mtime is larger than the cache mtime.
none: when the cache expires and the file is retrieved from the origin server again to get the mtime and Length, it does not validate the mtime in the origin response. if the origin response carries a Content-Length header, the cache is updated only when the file size changes. if the origin response does not carry a Content-Length header, the cache is updated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOriginMtimeCheckType() const;

                    /**
                     * 设置Whether to enable origin server mtime verification after cache expires. valid values: equal, since, none, and null. default value: equal, which validates the origin server file's mtime and length. domains created prior to 2024-09-12 18:00 default to null, with behavior remaining unchanged.
equal: the mtime in the origin server response must match the mtime in the cache. if there is a difference in parameter values, purge the cache.
since: purges cache if the origin server response mtime is larger than the cache mtime.
none: when the cache expires and the file is retrieved from the origin server again to get the mtime and Length, it does not validate the mtime in the origin response. if the origin response carries a Content-Length header, the cache is updated only when the file size changes. if the origin response does not carry a Content-Length header, the cache is updated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _originMtimeCheckType Whether to enable origin server mtime verification after cache expires. valid values: equal, since, none, and null. default value: equal, which validates the origin server file's mtime and length. domains created prior to 2024-09-12 18:00 default to null, with behavior remaining unchanged.
equal: the mtime in the origin server response must match the mtime in the cache. if there is a difference in parameter values, purge the cache.
since: purges cache if the origin server response mtime is larger than the cache mtime.
none: when the cache expires and the file is retrieved from the origin server again to get the mtime and Length, it does not validate the mtime in the origin response. if the origin response carries a Content-Length header, the cache is updated only when the file size changes. if the origin response does not carry a Content-Length header, the cache is updated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOriginMtimeCheckType(const std::string& _originMtimeCheckType);

                    /**
                     * 判断参数 OriginMtimeCheckType 是否已赋值
                     * @return OriginMtimeCheckType 是否已赋值
                     * 
                     */
                    bool OriginMtimeCheckTypeHasBeenSet() const;

                private:

                    /**
                     * Whether to follow the origin configuration for path cache. Values:
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Heuristic cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    HeuristicCache m_heuristicCache;
                    bool m_heuristicCacheHasBeenSet;

                    /**
                     * Whether to enable origin server mtime verification after cache expires. valid values: equal, since, none, and null. default value: equal, which validates the origin server file's mtime and length. domains created prior to 2024-09-12 18:00 default to null, with behavior remaining unchanged.
equal: the mtime in the origin server response must match the mtime in the cache. if there is a difference in parameter values, purge the cache.
since: purges cache if the origin server response mtime is larger than the cache mtime.
none: when the cache expires and the file is retrieved from the origin server again to get the mtime and Length, it does not validate the mtime in the origin response. if the origin response carries a Content-Length header, the cache is updated only when the file size changes. if the origin response does not carry a Content-Length header, the cache is updated.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originMtimeCheckType;
                    bool m_originMtimeCheckTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIGFOLLOWORIGIN_H_
