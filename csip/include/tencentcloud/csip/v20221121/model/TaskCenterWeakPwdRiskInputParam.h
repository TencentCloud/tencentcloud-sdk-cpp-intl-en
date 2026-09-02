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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TASKCENTERWEAKPWDRISKINPUTPARAM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TASKCENTERWEAKPWDRISKINPUTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Weak Password Risk Advanced Configuration
                */
                class TaskCenterWeakPwdRiskInputParam : public AbstractModel
                {
                public:
                    TaskCenterWeakPwdRiskInputParam();
                    ~TaskCenterWeakPwdRiskInputParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Detection Item ID
                     * @return CheckItemId Detection Item ID
                     * 
                     */
                    int64_t GetCheckItemId() const;

                    /**
                     * 设置Detection Item ID
                     * @param _checkItemId Detection Item ID
                     * 
                     */
                    void SetCheckItemId(const int64_t& _checkItemId);

                    /**
                     * 判断参数 CheckItemId 是否已赋值
                     * @return CheckItemId 是否已赋值
                     * 
                     */
                    bool CheckItemIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable. 0-Not to Enable; 1-Enable.
                     * @return Enable Whether to enable. 0-Not to Enable; 1-Enable.
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Whether to enable. 0-Not to Enable; 1-Enable.
                     * @param _enable Whether to enable. 0-Not to Enable; 1-Enable.
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * Detection Item ID
                     */
                    int64_t m_checkItemId;
                    bool m_checkItemIdHasBeenSet;

                    /**
                     * Whether to enable. 0-Not to Enable; 1-Enable.
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKCENTERWEAKPWDRISKINPUTPARAM_H_
