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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYALLOCATIONUNITREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYALLOCATIONUNITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyAllocationUnit request structure.
                */
                class ModifyAllocationUnitRequest : public AbstractModel
                {
                public:
                    ModifyAllocationUnitRequest();
                    ~ModifyAllocationUnitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the modified cost allocation unit.
                     * @return Id ID of the modified cost allocation unit.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置ID of the modified cost allocation unit.
                     * @param _id ID of the modified cost allocation unit.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Modified cost allocation unit name.
                     * @return Name Modified cost allocation unit name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Modified cost allocation unit name.
                     * @param _name Modified cost allocation unit name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Modified cost allocation unit source organization name.
                     * @return SourceName Modified cost allocation unit source organization name.
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置Modified cost allocation unit source organization name.
                     * @param _sourceName Modified cost allocation unit source organization name.
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取Modified allocation unit source organization ID.
                     * @return SourceId Modified allocation unit source organization ID.
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置Modified allocation unit source organization ID.
                     * @param _sourceId Modified allocation unit source organization ID.
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取Cost allocation unit remark description.
                     * @return Remark Cost allocation unit remark description.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Cost allocation unit remark description.
                     * @param _remark Cost allocation unit remark description.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Month, the current month by default if not provided.
                     * @return Month Month, the current month by default if not provided.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Month, the current month by default if not provided.
                     * @param _month Month, the current month by default if not provided.
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                private:

                    /**
                     * ID of the modified cost allocation unit.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Modified cost allocation unit name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Modified cost allocation unit source organization name.
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * Modified allocation unit source organization ID.
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * Cost allocation unit remark description.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Month, the current month by default if not provided.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYALLOCATIONUNITREQUEST_H_
