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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_COPYFLEETRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_COPYFLEETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/FleetAttributes.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * CopyFleet response structure.
                */
                class CopyFleetResponse : public AbstractModel
                {
                public:
                    CopyFleetResponse();
                    ~CopyFleetResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Server fleet attributes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return FleetAttributes Server fleet attributes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<FleetAttributes> GetFleetAttributes() const;

                    /**
                     * 判断参数 FleetAttributes 是否已赋值
                     * @return FleetAttributes 是否已赋值
                     * 
                     */
                    bool FleetAttributesHasBeenSet() const;

                    /**
                     * 获取The number of server fleets
                     * @return TotalCount The number of server fleets
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Server fleet attributes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<FleetAttributes> m_fleetAttributes;
                    bool m_fleetAttributesHasBeenSet;

                    /**
                     * The number of server fleets
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_COPYFLEETRESPONSE_H_
