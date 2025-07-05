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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHEPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FollowOrigin.h>
#include <tencentcloud/teo/v20220901/model/NoCache.h>
#include <tencentcloud/teo/v20220901/model/CustomTime.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Node Cache TTL configuration parameters
                */
                class CacheParameters : public AbstractModel
                {
                public:
                    CacheParameters();
                    ~CacheParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cache follows origin server. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return FollowOrigin Cache follows origin server. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    FollowOrigin GetFollowOrigin() const;

                    /**
                     * 设置Cache follows origin server. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _followOrigin Cache follows origin server. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取No cache. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return NoCache No cache. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    NoCache GetNoCache() const;

                    /**
                     * 设置No cache. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _noCache No cache. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Custom cache time. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return CustomTime Custom cache time. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    CustomTime GetCustomTime() const;

                    /**
                     * 设置Custom cache time. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _customTime Custom cache time. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetCustomTime(const CustomTime& _customTime);

                    /**
                     * 判断参数 CustomTime 是否已赋值
                     * @return CustomTime 是否已赋值
                     * 
                     */
                    bool CustomTimeHasBeenSet() const;

                private:

                    /**
                     * Cache follows origin server. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    FollowOrigin m_followOrigin;
                    bool m_followOriginHasBeenSet;

                    /**
                     * No cache. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    NoCache m_noCache;
                    bool m_noCacheHasBeenSet;

                    /**
                     * Custom cache time. if not specified, this configuration is not set. only one of followorigin, nocache, or customtime can have switch set to on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    CustomTime m_customTime;
                    bool m_customTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEPARAMETERS_H_
