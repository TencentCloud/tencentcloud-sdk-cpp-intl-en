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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULINFORESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulInfo response structure.
                */
                class DescribeVulInfoResponse : public AbstractModel
                {
                public:
                    DescribeVulInfoResponse();
                    ~DescribeVulInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability category ID.
                     * @return VulId Vulnerability category ID.
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability name.
                     * @return VulName Vulnerability name.
                     */
                    std::string GetVulName() const;

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取Vulnerability level.
                     * @return VulLevel Vulnerability level.
                     */
                    std::string GetVulLevel() const;

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取Vulnerability type.
                     * @return VulType Vulnerability type.
                     */
                    std::string GetVulType() const;

                    /**
                     * 判断参数 VulType 是否已赋值
                     * @return VulType 是否已赋值
                     */
                    bool VulTypeHasBeenSet() const;

                    /**
                     * 获取Vulnerability description.
                     * @return Description Vulnerability description.
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Repair plan.
                     * @return RepairPlan Repair plan.
                     */
                    std::string GetRepairPlan() const;

                    /**
                     * 判断参数 RepairPlan 是否已赋值
                     * @return RepairPlan 是否已赋值
                     */
                    bool RepairPlanHasBeenSet() const;

                    /**
                     * 获取Vulnerability CVE.
                     * @return CveId Vulnerability CVE.
                     */
                    std::string GetCveId() const;

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取Reference link.
                     * @return Reference Reference link.
                     */
                    std::string GetReference() const;

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     */
                    bool ReferenceHasBeenSet() const;

                private:

                    /**
                     * Vulnerability category ID.
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability name.
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Vulnerability level.
                     */
                    std::string m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * Vulnerability type.
                     */
                    std::string m_vulType;
                    bool m_vulTypeHasBeenSet;

                    /**
                     * Vulnerability description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Repair plan.
                     */
                    std::string m_repairPlan;
                    bool m_repairPlanHasBeenSet;

                    /**
                     * Vulnerability CVE.
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * Reference link.
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULINFORESPONSE_H_
