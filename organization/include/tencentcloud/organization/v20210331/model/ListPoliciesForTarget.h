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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICIESFORTARGET_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICIESFORTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Queries the list of SCPs associated with the target.
                */
                class ListPoliciesForTarget : public AbstractModel
                {
                public:
                    ListPoliciesForTarget();
                    ~ListPoliciesForTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy ID
                     * @return StrategyId Policy ID
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置Policy ID
                     * @param _strategyId Policy ID
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Policy name.
                     * @return StrategyName Policy name.
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Policy name.
                     * @param _strategyName Policy name.
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
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
                     * 获取Associated account or node.
                     * @return Uin Associated account or node.
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置Associated account or node.
                     * @param _uin Associated account or node.
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Association type. 1: node association; 2: user association.
                     * @return Type Association type. 1: node association; 2: user association.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Association type. 1: node association; 2: user association.
                     * @param _type Association type. 1: node association; 2: user association.
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
                     * 获取Policy creation time.
                     * @return AddTime Policy creation time.
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Policy creation time.
                     * @param _addTime Policy creation time.
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Policy update time.
                     * @return UpdateTime Policy update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Policy update time.
                     * @param _updateTime Policy update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Department name.
                     * @return Name Department name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Department name.
                     * @param _name Department name.
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
                     * 获取Policy binding time.
                     * @return AttachTime Policy binding time.
                     * 
                     */
                    std::string GetAttachTime() const;

                    /**
                     * 设置Policy binding time.
                     * @param _attachTime Policy binding time.
                     * 
                     */
                    void SetAttachTime(const std::string& _attachTime);

                    /**
                     * 判断参数 AttachTime 是否已赋值
                     * @return AttachTime 是否已赋值
                     * 
                     */
                    bool AttachTimeHasBeenSet() const;

                private:

                    /**
                     * Policy ID
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Policy name.
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Associated account or node.
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Association type. 1: node association; 2: user association.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Policy creation time.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Policy update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Department name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Policy binding time.
                     */
                    std::string m_attachTime;
                    bool m_attachTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICIESFORTARGET_H_
