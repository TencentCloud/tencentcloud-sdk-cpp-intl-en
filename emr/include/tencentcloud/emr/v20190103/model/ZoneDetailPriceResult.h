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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ZONEDETAILPRICERESULT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ZONEDETAILPRICERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeDetailPriceResult.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Price details by AZ, used for creating the cluster price list
                */
                class ZoneDetailPriceResult : public AbstractModel
                {
                public:
                    ZoneDetailPriceResult();
                    ~ZoneDetailPriceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AZ ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneId AZ ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置AZ ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneId AZ ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Price details by node
                     * @return NodeDetailPrice Price details by node
                     * 
                     */
                    std::vector<NodeDetailPriceResult> GetNodeDetailPrice() const;

                    /**
                     * 设置Price details by node
                     * @param _nodeDetailPrice Price details by node
                     * 
                     */
                    void SetNodeDetailPrice(const std::vector<NodeDetailPriceResult>& _nodeDetailPrice);

                    /**
                     * 判断参数 NodeDetailPrice 是否已赋值
                     * @return NodeDetailPrice 是否已赋值
                     * 
                     */
                    bool NodeDetailPriceHasBeenSet() const;

                private:

                    /**
                     * AZ ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Price details by node
                     */
                    std::vector<NodeDetailPriceResult> m_nodeDetailPrice;
                    bool m_nodeDetailPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ZONEDETAILPRICERESULT_H_
