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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBINSTANCERESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ModifyDBInstance response structure.
                */
                class ModifyDBInstanceResponse : public AbstractModel
                {
                public:
                    ModifyDBInstanceResponse();
                    ~ModifyDBInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Asynchronous task ID, returned when DryRun=false. You can call the Query Task API with this ID to get task status.</p>
                     * @return FlowId <p>Asynchronous task ID, returned when DryRun=false. You can call the Query Task API with this ID to get task status.</p>
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>Order number, returned in prepaid scenarios</p>
                     * @return DealName <p>Order number, returned in prepaid scenarios</p>
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取<p>Whether to perform in-place configuration changes. Returned when DryRun=true.</p>
                     * @return IsInPlaceModification <p>Whether to perform in-place configuration changes. Returned when DryRun=true.</p>
                     * 
                     */
                    bool GetIsInPlaceModification() const;

                    /**
                     * 判断参数 IsInPlaceModification 是否已赋值
                     * @return IsInPlaceModification 是否已赋值
                     * 
                     */
                    bool IsInPlaceModificationHasBeenSet() const;

                    /**
                     * 获取<p>Whether to perform configuration adjustment. Returned when DryRun=true</p>
                     * @return IsMigrateModification <p>Whether to perform configuration adjustment. Returned when DryRun=true</p>
                     * 
                     */
                    bool GetIsMigrateModification() const;

                    /**
                     * 判断参数 IsMigrateModification 是否已赋值
                     * @return IsMigrateModification 是否已赋值
                     * 
                     */
                    bool IsMigrateModificationHasBeenSet() const;

                    /**
                     * 获取<p>Configuration change plan description. Returned when DryRun=true, describing the sub-process orchestration to be executed</p>
                     * @return ModifyPlan <p>Configuration change plan description. Returned when DryRun=true, describing the sub-process orchestration to be executed</p>
                     * 
                     */
                    std::string GetModifyPlan() const;

                    /**
                     * 判断参数 ModifyPlan 是否已赋值
                     * @return ModifyPlan 是否已赋值
                     * 
                     */
                    bool ModifyPlanHasBeenSet() const;

                private:

                    /**
                     * <p>Asynchronous task ID, returned when DryRun=false. You can call the Query Task API with this ID to get task status.</p>
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>Order number, returned in prepaid scenarios</p>
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * <p>Whether to perform in-place configuration changes. Returned when DryRun=true.</p>
                     */
                    bool m_isInPlaceModification;
                    bool m_isInPlaceModificationHasBeenSet;

                    /**
                     * <p>Whether to perform configuration adjustment. Returned when DryRun=true</p>
                     */
                    bool m_isMigrateModification;
                    bool m_isMigrateModificationHasBeenSet;

                    /**
                     * <p>Configuration change plan description. Returned when DryRun=true, describing the sub-process orchestration to be executed</p>
                     */
                    std::string m_modifyPlan;
                    bool m_modifyPlanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBINSTANCERESPONSE_H_
