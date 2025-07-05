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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRISKCENTERRISKSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRISKCENTERRISKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RiskCenterStatusKey.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyRiskCenterRiskStatus request structure.
                */
                class ModifyRiskCenterRiskStatusRequest : public AbstractModel
                {
                public:
                    ModifyRiskCenterRiskStatusRequest();
                    ~ModifyRiskCenterRiskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data of risk assets
                     * @return RiskStatusKeys Data of risk assets
                     * 
                     */
                    std::vector<RiskCenterStatusKey> GetRiskStatusKeys() const;

                    /**
                     * 设置Data of risk assets
                     * @param _riskStatusKeys Data of risk assets
                     * 
                     */
                    void SetRiskStatusKeys(const std::vector<RiskCenterStatusKey>& _riskStatusKeys);

                    /**
                     * 判断参数 RiskStatusKeys 是否已赋值
                     * @return RiskStatusKeys 是否已赋值
                     * 
                     */
                    bool RiskStatusKeysHasBeenSet() const;

                    /**
                     * 获取Specify how you want to change the risk status. `1`: Change to Handled, `2`: Change to Ignored; `3`: Remove from Handled; `4`: Remove from Ignored
                     * @return Status Specify how you want to change the risk status. `1`: Change to Handled, `2`: Change to Ignored; `3`: Remove from Handled; `4`: Remove from Ignored
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Specify how you want to change the risk status. `1`: Change to Handled, `2`: Change to Ignored; `3`: Remove from Handled; `4`: Remove from Ignored
                     * @param _status Specify how you want to change the risk status. `1`: Change to Handled, `2`: Change to Ignored; `3`: Remove from Handled; `4`: Remove from Ignored
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Risk type. `0`: Port risk; `1`: Vulnerability; `2`: Weak password; `3`: Website content risk; `4`: Configuration risk; `5`: Risk services
                     * @return Type Risk type. `0`: Port risk; `1`: Vulnerability; `2`: Weak password; `3`: Website content risk; `4`: Configuration risk; `5`: Risk services
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Risk type. `0`: Port risk; `1`: Vulnerability; `2`: Weak password; `3`: Website content risk; `4`: Configuration risk; `5`: Risk services
                     * @param _type Risk type. `0`: Port risk; `1`: Vulnerability; `2`: Weak password; `3`: Website content risk; `4`: Configuration risk; `5`: Risk services
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Data of risk assets
                     */
                    std::vector<RiskCenterStatusKey> m_riskStatusKeys;
                    bool m_riskStatusKeysHasBeenSet;

                    /**
                     * Specify how you want to change the risk status. `1`: Change to Handled, `2`: Change to Ignored; `3`: Remove from Handled; `4`: Remove from Ignored
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Risk type. `0`: Port risk; `1`: Vulnerability; `2`: Weak password; `3`: Website content risk; `4`: Configuration risk; `5`: Risk services
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRISKCENTERRISKSTATUSREQUEST_H_
