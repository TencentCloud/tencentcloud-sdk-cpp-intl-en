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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEROUTEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEROUTEREQUEST_H_

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
                * DeleteRoute request structure.
                */
                class DeleteRouteRequest : public AbstractModel
                {
                public:
                    DeleteRouteRequest();
                    ~DeleteRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique instance ID.
                     * @return InstanceId Unique instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Unique instance ID.
                     * @param InstanceId Unique instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Route ID.
                     * @return RouteId Route ID.
                     */
                    int64_t GetRouteId() const;

                    /**
                     * 设置Route ID.
                     * @param RouteId Route ID.
                     */
                    void SetRouteId(const int64_t& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取AppId of the caller.
                     * @return CallerAppid AppId of the caller.
                     */
                    int64_t GetCallerAppid() const;

                    /**
                     * 设置AppId of the caller.
                     * @param CallerAppid AppId of the caller.
                     */
                    void SetCallerAppid(const int64_t& _callerAppid);

                    /**
                     * 判断参数 CallerAppid 是否已赋值
                     * @return CallerAppid 是否已赋值
                     */
                    bool CallerAppidHasBeenSet() const;

                    /**
                     * 获取The time when a route was deleted.
                     * @return DeleteRouteTime The time when a route was deleted.
                     */
                    std::string GetDeleteRouteTime() const;

                    /**
                     * 设置The time when a route was deleted.
                     * @param DeleteRouteTime The time when a route was deleted.
                     */
                    void SetDeleteRouteTime(const std::string& _deleteRouteTime);

                    /**
                     * 判断参数 DeleteRouteTime 是否已赋值
                     * @return DeleteRouteTime 是否已赋值
                     */
                    bool DeleteRouteTimeHasBeenSet() const;

                private:

                    /**
                     * Unique instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Route ID.
                     */
                    int64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * AppId of the caller.
                     */
                    int64_t m_callerAppid;
                    bool m_callerAppidHasBeenSet;

                    /**
                     * The time when a route was deleted.
                     */
                    std::string m_deleteRouteTime;
                    bool m_deleteRouteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEROUTEREQUEST_H_
