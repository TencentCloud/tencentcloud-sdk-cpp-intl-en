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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Route.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ReplaceRoutes response structure.
                */
                class ReplaceRoutesResponse : public AbstractModel
                {
                public:
                    ReplaceRoutesResponse();
                    ~ReplaceRoutesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Old routing policy
                     * @return OldRouteSet Old routing policy
                     */
                    std::vector<Route> GetOldRouteSet() const;

                    /**
                     * 判断参数 OldRouteSet 是否已赋值
                     * @return OldRouteSet 是否已赋值
                     */
                    bool OldRouteSetHasBeenSet() const;

                    /**
                     * 获取New routing policy
                     * @return NewRouteSet New routing policy
                     */
                    std::vector<Route> GetNewRouteSet() const;

                    /**
                     * 判断参数 NewRouteSet 是否已赋值
                     * @return NewRouteSet 是否已赋值
                     */
                    bool NewRouteSetHasBeenSet() const;

                private:

                    /**
                     * Old routing policy
                     */
                    std::vector<Route> m_oldRouteSet;
                    bool m_oldRouteSetHasBeenSet;

                    /**
                     * New routing policy
                     */
                    std::vector<Route> m_newRouteSet;
                    bool m_newRouteSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTESRESPONSE_H_
