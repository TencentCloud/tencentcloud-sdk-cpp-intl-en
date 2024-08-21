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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BATCHAPPLYACCOUNTBASELINESREQUEST_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BATCHAPPLYACCOUNTBASELINESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/controlcenter/v20230110/model/BaselineConfigItem.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * BatchApplyAccountBaselines request structure.
                */
                class BatchApplyAccountBaselinesRequest : public AbstractModel
                {
                public:
                    BatchApplyAccountBaselinesRequest();
                    ~BatchApplyAccountBaselinesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Member account UIN, which is also the UIN of the account to which the baseline is applied.
                     * @return MemberUinList Member account UIN, which is also the UIN of the account to which the baseline is applied.
                     * 
                     */
                    std::vector<int64_t> GetMemberUinList() const;

                    /**
                     * 设置Member account UIN, which is also the UIN of the account to which the baseline is applied.
                     * @param _memberUinList Member account UIN, which is also the UIN of the account to which the baseline is applied.
                     * 
                     */
                    void SetMemberUinList(const std::vector<int64_t>& _memberUinList);

                    /**
                     * 判断参数 MemberUinList 是否已赋值
                     * @return MemberUinList 是否已赋值
                     * 
                     */
                    bool MemberUinListHasBeenSet() const;

                    /**
                     * 获取List of baseline item configuration information.
                     * @return BaselineConfigItems List of baseline item configuration information.
                     * 
                     */
                    std::vector<BaselineConfigItem> GetBaselineConfigItems() const;

                    /**
                     * 设置List of baseline item configuration information.
                     * @param _baselineConfigItems List of baseline item configuration information.
                     * 
                     */
                    void SetBaselineConfigItems(const std::vector<BaselineConfigItem>& _baselineConfigItems);

                    /**
                     * 判断参数 BaselineConfigItems 是否已赋值
                     * @return BaselineConfigItems 是否已赋值
                     * 
                     */
                    bool BaselineConfigItemsHasBeenSet() const;

                private:

                    /**
                     * Member account UIN, which is also the UIN of the account to which the baseline is applied.
                     */
                    std::vector<int64_t> m_memberUinList;
                    bool m_memberUinListHasBeenSet;

                    /**
                     * List of baseline item configuration information.
                     */
                    std::vector<BaselineConfigItem> m_baselineConfigItems;
                    bool m_baselineConfigItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BATCHAPPLYACCOUNTBASELINESREQUEST_H_
