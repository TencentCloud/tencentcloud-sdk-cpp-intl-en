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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONPLACEMENTREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONPLACEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeGameServerSessionPlacement request structure.
                */
                class DescribeGameServerSessionPlacementRequest : public AbstractModel
                {
                public:
                    DescribeGameServerSessionPlacementRequest();
                    ~DescribeGameServerSessionPlacementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of game server session placement
                     * @return PlacementId Unique ID of game server session placement
                     * 
                     */
                    std::string GetPlacementId() const;

                    /**
                     * 设置Unique ID of game server session placement
                     * @param _placementId Unique ID of game server session placement
                     * 
                     */
                    void SetPlacementId(const std::string& _placementId);

                    /**
                     * 判断参数 PlacementId 是否已赋值
                     * @return PlacementId 是否已赋值
                     * 
                     */
                    bool PlacementIdHasBeenSet() const;

                private:

                    /**
                     * Unique ID of game server session placement
                     */
                    std::string m_placementId;
                    bool m_placementIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONPLACEMENTREQUEST_H_
