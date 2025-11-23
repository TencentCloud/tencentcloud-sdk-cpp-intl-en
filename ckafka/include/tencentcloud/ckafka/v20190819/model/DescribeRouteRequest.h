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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEROUTEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeRoute request structure.
                */
                class DescribeRouteRequest : public AbstractModel
                {
                public:
                    DescribeRouteRequest();
                    ~DescribeRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ckafka cluster instance Id.
                     * @return InstanceId The ckafka cluster instance Id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ckafka cluster instance Id.
                     * @param _instanceId The ckafka cluster instance Id.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Route ID
                     * @return RouteId Route ID
                     * 
                     */
                    int64_t GetRouteId() const;

                    /**
                     * 设置Route ID
                     * @param _routeId Route ID
                     * 
                     */
                    void SetRouteId(const int64_t& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取Specifies whether to display the primary route. when true, the routing list will additionally display the primary route information during instance creation (not affected by InternalFlag or UsedFor parameter filtering).	
                     * @return MainRouteFlag Specifies whether to display the primary route. when true, the routing list will additionally display the primary route information during instance creation (not affected by InternalFlag or UsedFor parameter filtering).	
                     * 
                     */
                    bool GetMainRouteFlag() const;

                    /**
                     * 设置Specifies whether to display the primary route. when true, the routing list will additionally display the primary route information during instance creation (not affected by InternalFlag or UsedFor parameter filtering).	
                     * @param _mainRouteFlag Specifies whether to display the primary route. when true, the routing list will additionally display the primary route information during instance creation (not affected by InternalFlag or UsedFor parameter filtering).	
                     * 
                     */
                    void SetMainRouteFlag(const bool& _mainRouteFlag);

                    /**
                     * 判断参数 MainRouteFlag 是否已赋值
                     * @return MainRouteFlag 是否已赋值
                     * 
                     */
                    bool MainRouteFlagHasBeenSet() const;

                private:

                    /**
                     * The ckafka cluster instance Id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Route ID
                     */
                    int64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * Specifies whether to display the primary route. when true, the routing list will additionally display the primary route information during instance creation (not affected by InternalFlag or UsedFor parameter filtering).	
                     */
                    bool m_mainRouteFlag;
                    bool m_mainRouteFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEROUTEREQUEST_H_
