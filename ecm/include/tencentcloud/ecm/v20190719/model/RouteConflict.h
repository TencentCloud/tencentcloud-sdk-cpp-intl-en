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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ROUTECONFLICT_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ROUTECONFLICT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Route.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Route conflict object
                */
                class RouteConflict : public AbstractModel
                {
                public:
                    RouteConflict();
                    ~RouteConflict() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Route table instance ID
                     * @return RouteTableId Route table instance ID
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置Route table instance ID
                     * @param RouteTableId Route table instance ID
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取The conflicting destination ports to be checked
                     * @return DestinationCidrBlock The conflicting destination ports to be checked
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置The conflicting destination ports to be checked
                     * @param DestinationCidrBlock The conflicting destination ports to be checked
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取List of conflicting routing policies
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ConflictSet List of conflicting routing policies
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Route> GetConflictSet() const;

                    /**
                     * 设置List of conflicting routing policies
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ConflictSet List of conflicting routing policies
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConflictSet(const std::vector<Route>& _conflictSet);

                    /**
                     * 判断参数 ConflictSet 是否已赋值
                     * @return ConflictSet 是否已赋值
                     */
                    bool ConflictSetHasBeenSet() const;

                private:

                    /**
                     * Route table instance ID
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * The conflicting destination ports to be checked
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * List of conflicting routing policies
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Route> m_conflictSet;
                    bool m_conflictSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ROUTECONFLICT_H_
