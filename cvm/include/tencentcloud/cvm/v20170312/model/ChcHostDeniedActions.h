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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOSTDENIEDACTIONS_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOSTDENIEDACTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describe details of actions not allowed for a CHC instance
                */
                class ChcHostDeniedActions : public AbstractModel
                {
                public:
                    ChcHostDeniedActions();
                    ~ChcHostDeniedActions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CHC instance ID
                     * @return ChcId CHC instance ID
                     * 
                     */
                    std::string GetChcId() const;

                    /**
                     * 设置CHC instance ID
                     * @param _chcId CHC instance ID
                     * 
                     */
                    void SetChcId(const std::string& _chcId);

                    /**
                     * 判断参数 ChcId 是否已赋值
                     * @return ChcId 是否已赋值
                     * 
                     */
                    bool ChcIdHasBeenSet() const;

                    /**
                     * 获取CHC instance status
                     * @return State CHC instance status
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置CHC instance status
                     * @param _state CHC instance status
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Actions not allowed for the current CHC instance
                     * @return DenyActions Actions not allowed for the current CHC instance
                     * 
                     */
                    std::vector<std::string> GetDenyActions() const;

                    /**
                     * 设置Actions not allowed for the current CHC instance
                     * @param _denyActions Actions not allowed for the current CHC instance
                     * 
                     */
                    void SetDenyActions(const std::vector<std::string>& _denyActions);

                    /**
                     * 判断参数 DenyActions 是否已赋值
                     * @return DenyActions 是否已赋值
                     * 
                     */
                    bool DenyActionsHasBeenSet() const;

                private:

                    /**
                     * CHC instance ID
                     */
                    std::string m_chcId;
                    bool m_chcIdHasBeenSet;

                    /**
                     * CHC instance status
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Actions not allowed for the current CHC instance
                     */
                    std::vector<std::string> m_denyActions;
                    bool m_denyActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOSTDENIEDACTIONS_H_
