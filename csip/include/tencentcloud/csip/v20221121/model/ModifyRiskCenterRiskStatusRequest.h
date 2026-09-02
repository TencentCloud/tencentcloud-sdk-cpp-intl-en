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
                     * 获取Risky Asset Related Data
                     * @return RiskStatusKeys Risky Asset Related Data
                     * 
                     */
                    std::vector<RiskCenterStatusKey> GetRiskStatusKeys() const;

                    /**
                     * 设置Risky Asset Related Data
                     * @param _riskStatusKeys Risky Asset Related Data
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
                     * 获取Disposition status. 1: Handled; 2: Ignored; 3: Cancel disposed; 4: Cancel ignored.
                     * @return Status Disposition status. 1: Handled; 2: Ignored; 3: Cancel disposed; 4: Cancel ignored.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Disposition status. 1: Handled; 2: Ignored; 3: Cancel disposed; 4: Cancel ignored.
                     * @param _status Disposition status. 1: Handled; 2: Ignored; 3: Cancel disposed; 4: Cancel ignored.
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
                     * 获取Risk Type. 0: Port Risk; 1: Vulnerability Risk; 2: Weak Password Risk; 3: Web Sites Content Risk; 4: Configuration Risk; 5: Exposed Risk Service
                     * @return Type Risk Type. 0: Port Risk; 1: Vulnerability Risk; 2: Weak Password Risk; 3: Web Sites Content Risk; 4: Configuration Risk; 5: Exposed Risk Service
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Risk Type. 0: Port Risk; 1: Vulnerability Risk; 2: Weak Password Risk; 3: Web Sites Content Risk; 4: Configuration Risk; 5: Exposed Risk Service
                     * @param _type Risk Type. 0: Port Risk; 1: Vulnerability Risk; 2: Weak Password Risk; 3: Web Sites Content Risk; 4: Configuration Risk; 5: Exposed Risk Service
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * Risky Asset Related Data
                     */
                    std::vector<RiskCenterStatusKey> m_riskStatusKeys;
                    bool m_riskStatusKeysHasBeenSet;

                    /**
                     * Disposition status. 1: Handled; 2: Ignored; 3: Cancel disposed; 4: Cancel ignored.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Risk Type. 0: Port Risk; 1: Vulnerability Risk; 2: Weak Password Risk; 3: Web Sites Content Risk; 4: Configuration Risk; 5: Exposed Risk Service
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRISKCENTERRISKSTATUSREQUEST_H_
