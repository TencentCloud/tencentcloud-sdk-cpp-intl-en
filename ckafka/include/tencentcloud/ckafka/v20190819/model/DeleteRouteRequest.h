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
                     * 获取ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     * @return InstanceId ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     * @param _instanceId ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
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
                     * 获取Route id, obtain through the API [DescribeRoute](https://www.tencentcloud.com/document/product/597/45484?from_cn_redirect=1).
                     * @return RouteId Route id, obtain through the API [DescribeRoute](https://www.tencentcloud.com/document/product/597/45484?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetRouteId() const;

                    /**
                     * 设置Route id, obtain through the API [DescribeRoute](https://www.tencentcloud.com/document/product/597/45484?from_cn_redirect=1).
                     * @param _routeId Route id, obtain through the API [DescribeRoute](https://www.tencentcloud.com/document/product/597/45484?from_cn_redirect=1).
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
                     * 获取AppId of the caller.
                     * @return CallerAppid AppId of the caller.
                     * 
                     */
                    int64_t GetCallerAppid() const;

                    /**
                     * 设置AppId of the caller.
                     * @param _callerAppid AppId of the caller.
                     * 
                     */
                    void SetCallerAppid(const int64_t& _callerAppid);

                    /**
                     * 判断参数 CallerAppid 是否已赋值
                     * @return CallerAppid 是否已赋值
                     * 
                     */
                    bool CallerAppidHasBeenSet() const;

                    /**
                     * 获取Sets the scheduled deletion time for routes. only public network routes support scheduled deletion. available for any time within the next 24 hours.
                     * @return DeleteRouteTime Sets the scheduled deletion time for routes. only public network routes support scheduled deletion. available for any time within the next 24 hours.
                     * 
                     */
                    std::string GetDeleteRouteTime() const;

                    /**
                     * 设置Sets the scheduled deletion time for routes. only public network routes support scheduled deletion. available for any time within the next 24 hours.
                     * @param _deleteRouteTime Sets the scheduled deletion time for routes. only public network routes support scheduled deletion. available for any time within the next 24 hours.
                     * 
                     */
                    void SetDeleteRouteTime(const std::string& _deleteRouteTime);

                    /**
                     * 判断参数 DeleteRouteTime 是否已赋值
                     * @return DeleteRouteTime 是否已赋值
                     * 
                     */
                    bool DeleteRouteTimeHasBeenSet() const;

                private:

                    /**
                     * ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Route id, obtain through the API [DescribeRoute](https://www.tencentcloud.com/document/product/597/45484?from_cn_redirect=1).
                     */
                    int64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * AppId of the caller.
                     */
                    int64_t m_callerAppid;
                    bool m_callerAppidHasBeenSet;

                    /**
                     * Sets the scheduled deletion time for routes. only public network routes support scheduled deletion. available for any time within the next 24 hours.
                     */
                    std::string m_deleteRouteTime;
                    bool m_deleteRouteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEROUTEREQUEST_H_
