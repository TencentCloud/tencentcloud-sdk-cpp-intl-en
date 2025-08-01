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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTEDTO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * RouteDTO
                */
                class RouteDTO : public AbstractModel
                {
                public:
                    RouteDTO();
                    ~RouteDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RouteId11 Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RouteId RouteId11 Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRouteId() const;

                    /**
                     * 设置RouteId11 Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _routeId RouteId11 Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRouteId(const int64_t& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                private:

                    /**
                     * RouteId11 Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTEDTO_H_
