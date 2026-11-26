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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHECONFIGPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHECONFIGPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FollowOrigin.h>
#include <tencentcloud/teo/v20220901/model/NoCache.h>
#include <tencentcloud/teo/v20220901/model/CacheConfigCustomTime.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Node cache TTL config.
                */
                class CacheConfigParameters : public AbstractModel
                {
                public:
                    CacheConfigParameters();
                    ~CacheConfigParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cache configuration follows the origin site. At most one of FollowOrigin, NoCache, and CustomTime can be configured with Switch on.
                     * @return FollowOrigin Cache configuration follows the origin site. At most one of FollowOrigin, NoCache, and CustomTime can be configured with Switch on.
                     * 
                     */
                    FollowOrigin GetFollowOrigin() const;

                    /**
                     * 设置Cache configuration follows the origin site. At most one of FollowOrigin, NoCache, and CustomTime can be configured with Switch on.
                     * @param _followOrigin Cache configuration follows the origin site. At most one of FollowOrigin, NoCache, and CustomTime can be configured with Switch on.
                     * 
                     */
                    void SetFollowOrigin(const FollowOrigin& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     * 
                     */
                    bool FollowOriginHasBeenSet() const;

                    /**
                     * 获取No cache configuration. For FollowOrigin, NoCache, and CustomTime, at most one Switch can be set to on.
                     * @return NoCache No cache configuration. For FollowOrigin, NoCache, and CustomTime, at most one Switch can be set to on.
                     * 
                     */
                    NoCache GetNoCache() const;

                    /**
                     * 设置No cache configuration. For FollowOrigin, NoCache, and CustomTime, at most one Switch can be set to on.
                     * @param _noCache No cache configuration. For FollowOrigin, NoCache, and CustomTime, at most one Switch can be set to on.
                     * 
                     */
                    void SetNoCache(const NoCache& _noCache);

                    /**
                     * 判断参数 NoCache 是否已赋值
                     * @return NoCache 是否已赋值
                     * 
                     */
                    bool NoCacheHasBeenSet() const;

                    /**
                     * 获取Custom cache time configuration. For FollowOrigin, NoCache, and CustomTime, at most one can have Switch set to on.
                     * @return CustomTime Custom cache time configuration. For FollowOrigin, NoCache, and CustomTime, at most one can have Switch set to on.
                     * 
                     */
                    CacheConfigCustomTime GetCustomTime() const;

                    /**
                     * 设置Custom cache time configuration. For FollowOrigin, NoCache, and CustomTime, at most one can have Switch set to on.
                     * @param _customTime Custom cache time configuration. For FollowOrigin, NoCache, and CustomTime, at most one can have Switch set to on.
                     * 
                     */
                    void SetCustomTime(const CacheConfigCustomTime& _customTime);

                    /**
                     * 判断参数 CustomTime 是否已赋值
                     * @return CustomTime 是否已赋值
                     * 
                     */
                    bool CustomTimeHasBeenSet() const;

                private:

                    /**
                     * Cache configuration follows the origin site. At most one of FollowOrigin, NoCache, and CustomTime can be configured with Switch on.
                     */
                    FollowOrigin m_followOrigin;
                    bool m_followOriginHasBeenSet;

                    /**
                     * No cache configuration. For FollowOrigin, NoCache, and CustomTime, at most one Switch can be set to on.
                     */
                    NoCache m_noCache;
                    bool m_noCacheHasBeenSet;

                    /**
                     * Custom cache time configuration. For FollowOrigin, NoCache, and CustomTime, at most one can have Switch set to on.
                     */
                    CacheConfigCustomTime m_customTime;
                    bool m_customTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHECONFIGPARAMETERS_H_
