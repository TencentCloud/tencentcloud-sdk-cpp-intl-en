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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_LISTCONNECTIONSRESPONSE_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_LISTCONNECTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/Connection.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * ListConnections response structure.
                */
                class ListConnectionsResponse : public AbstractModel
                {
                public:
                    ListConnectionsResponse();
                    ~ListConnectionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Connector information
                     * @return Connections Connector information
                     */
                    std::vector<Connection> GetConnections() const;

                    /**
                     * 判断参数 Connections 是否已赋值
                     * @return Connections 是否已赋值
                     */
                    bool ConnectionsHasBeenSet() const;

                    /**
                     * 获取Total number of connectors
                     * @return TotalCount Total number of connectors
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Connector information
                     */
                    std::vector<Connection> m_connections;
                    bool m_connectionsHasBeenSet;

                    /**
                     * Total number of connectors
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_LISTCONNECTIONSRESPONSE_H_
