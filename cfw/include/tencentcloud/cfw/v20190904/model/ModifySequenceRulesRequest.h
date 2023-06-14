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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSEQUENCERULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSEQUENCERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SequenceData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifySequenceRules request structure.
                */
                class ModifySequenceRulesRequest : public AbstractModel
                {
                public:
                    ModifySequenceRulesRequest();
                    ~ModifySequenceRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Edge ID value
                     * @return EdgeId Edge ID value
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置Edge ID value
                     * @param _edgeId Edge ID value
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取Modifies data
                     * @return Data Modifies data
                     * 
                     */
                    std::vector<SequenceData> GetData() const;

                    /**
                     * 设置Modifies data
                     * @param _data Modifies data
                     * 
                     */
                    void SetData(const std::vector<SequenceData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取NAT region
                     * @return Area NAT region
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置NAT region
                     * @param _area NAT region
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Direction. 0: outbound; 1: inbound
                     * @return Direction Direction. 0: outbound; 1: inbound
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Direction. 0: outbound; 1: inbound
                     * @param _direction Direction. 0: outbound; 1: inbound
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * Edge ID value
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * Modifies data
                     */
                    std::vector<SequenceData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * NAT region
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Direction. 0: outbound; 1: inbound
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSEQUENCERULESREQUEST_H_
