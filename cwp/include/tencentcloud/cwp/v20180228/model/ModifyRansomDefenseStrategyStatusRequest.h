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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRANSOMDEFENSESTRATEGYSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRANSOMDEFENSESTRATEGYSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyRansomDefenseStrategyStatus request structure.
                */
                class ModifyRansomDefenseStrategyStatusRequest : public AbstractModel
                {
                public:
                    ModifyRansomDefenseStrategyStatusRequest();
                    ~ModifyRansomDefenseStrategyStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Apply to all policies: 0 No, 1 Yes.
                     * @return IsAll Apply to all policies: 0 No, 1 Yes.
                     * 
                     */
                    uint64_t GetIsAll() const;

                    /**
                     * 设置Apply to all policies: 0 No, 1 Yes.
                     * @param _isAll Apply to all policies: 0 No, 1 Yes.
                     * 
                     */
                    void SetIsAll(const uint64_t& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                    /**
                     * 获取0 for Off, 1 for On, 9 for Delete
                     * @return Status 0 for Off, 1 for On, 9 for Delete
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0 for Off, 1 for On, 9 for Delete
                     * @param _status 0 for Off, 1 for On, 9 for Delete
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
                     * 获取Policy ID List
                     * @return IdList Policy ID List
                     * 
                     */
                    std::vector<uint64_t> GetIdList() const;

                    /**
                     * 设置Policy ID List
                     * @param _idList Policy ID List
                     * 
                     */
                    void SetIdList(const std::vector<uint64_t>& _idList);

                    /**
                     * 判断参数 IdList 是否已赋值
                     * @return IdList 是否已赋值
                     * 
                     */
                    bool IdListHasBeenSet() const;

                private:

                    /**
                     * Apply to all policies: 0 No, 1 Yes.
                     */
                    uint64_t m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * 0 for Off, 1 for On, 9 for Delete
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Policy ID List
                     */
                    std::vector<uint64_t> m_idList;
                    bool m_idListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRANSOMDEFENSESTRATEGYSTATUSREQUEST_H_
