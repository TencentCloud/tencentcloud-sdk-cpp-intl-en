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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGEPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Browser Cache TTL configuration parameters
                */
                class MaxAgeParameters : public AbstractModel
                {
                public:
                    MaxAgeParameters();
                    ~MaxAgeParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies whether to follow the origin server cache-control configuration, with the following values:.
<Li>`On`: follow the origin server and ignore the field cachetime;</li>.
<Li>`Off`: do not follow the origin server and apply the field cachetime.</li>.
                     * @return FollowOrigin Specifies whether to follow the origin server cache-control configuration, with the following values:.
<Li>`On`: follow the origin server and ignore the field cachetime;</li>.
<Li>`Off`: do not follow the origin server and apply the field cachetime.</li>.
                     * 
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置Specifies whether to follow the origin server cache-control configuration, with the following values:.
<Li>`On`: follow the origin server and ignore the field cachetime;</li>.
<Li>`Off`: do not follow the origin server and apply the field cachetime.</li>.
                     * @param _followOrigin Specifies whether to follow the origin server cache-control configuration, with the following values:.
<Li>`On`: follow the origin server and ignore the field cachetime;</li>.
<Li>`Off`: do not follow the origin server and apply the field cachetime.</li>.
                     * 
                     */
                    void SetFollowOrigin(const std::string& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     * 
                     */
                    bool FollowOriginHasBeenSet() const;

                    /**
                     * 获取Custom cache time value, unit: seconds. value range: 0-315360000.<br>note: when followorigin is off, it means not following the origin server and using cachetime to set the cache time; otherwise, this field will not take effect.
                     * @return CacheTime Custom cache time value, unit: seconds. value range: 0-315360000.<br>note: when followorigin is off, it means not following the origin server and using cachetime to set the cache time; otherwise, this field will not take effect.
                     * 
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置Custom cache time value, unit: seconds. value range: 0-315360000.<br>note: when followorigin is off, it means not following the origin server and using cachetime to set the cache time; otherwise, this field will not take effect.
                     * @param _cacheTime Custom cache time value, unit: seconds. value range: 0-315360000.<br>note: when followorigin is off, it means not following the origin server and using cachetime to set the cache time; otherwise, this field will not take effect.
                     * 
                     */
                    void SetCacheTime(const int64_t& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                private:

                    /**
                     * Specifies whether to follow the origin server cache-control configuration, with the following values:.
<Li>`On`: follow the origin server and ignore the field cachetime;</li>.
<Li>`Off`: do not follow the origin server and apply the field cachetime.</li>.
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                    /**
                     * Custom cache time value, unit: seconds. value range: 0-315360000.<br>note: when followorigin is off, it means not following the origin server and using cachetime to set the cache time; otherwise, this field will not take effect.
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGEPARAMETERS_H_
