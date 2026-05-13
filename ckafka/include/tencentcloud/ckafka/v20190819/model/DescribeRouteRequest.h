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
                     * 获取<p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     * @return InstanceId <p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     * @param _instanceId <p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
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
                     * 获取<p>Route Id</p>
                     * @return RouteId <p>Route Id</p>
                     * 
                     */
                    int64_t GetRouteId() const;

                    /**
                     * 设置<p>Route Id</p>
                     * @param _routeId <p>Route Id</p>
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
                     * 获取<p>Whether to display the primary route. If true, the primary route information during instance creation will additionally be displayed on the basis of the original routing list (and will not be affected by parameter filtering such as InternalFlag or UsedFor).</p>
                     * @return MainRouteFlag <p>Whether to display the primary route. If true, the primary route information during instance creation will additionally be displayed on the basis of the original routing list (and will not be affected by parameter filtering such as InternalFlag or UsedFor).</p>
                     * 
                     */
                    bool GetMainRouteFlag() const;

                    /**
                     * 设置<p>Whether to display the primary route. If true, the primary route information during instance creation will additionally be displayed on the basis of the original routing list (and will not be affected by parameter filtering such as InternalFlag or UsedFor).</p>
                     * @param _mainRouteFlag <p>Whether to display the primary route. If true, the primary route information during instance creation will additionally be displayed on the basis of the original routing list (and will not be affected by parameter filtering such as InternalFlag or UsedFor).</p>
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
                     * <p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Route Id</p>
                     */
                    int64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * <p>Whether to display the primary route. If true, the primary route information during instance creation will additionally be displayed on the basis of the original routing list (and will not be affected by parameter filtering such as InternalFlag or UsedFor).</p>
                     */
                    bool m_mainRouteFlag;
                    bool m_mainRouteFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEROUTEREQUEST_H_
