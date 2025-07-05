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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TASKADVANCECFG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TASKADVANCECFG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TaskCenterVulRiskInputParam.h>
#include <tencentcloud/csip/v20221121/model/TaskCenterWeakPwdRiskInputParam.h>
#include <tencentcloud/csip/v20221121/model/TaskCenterCFGRiskInputParam.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Advanced task configuration
                */
                class TaskAdvanceCFG : public AbstractModel
                {
                public:
                    TaskAdvanceCFG();
                    ~TaskAdvanceCFG() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Advanced vulnerability scan configuration
                     * @return VulRisk Advanced vulnerability scan configuration
                     * 
                     */
                    std::vector<TaskCenterVulRiskInputParam> GetVulRisk() const;

                    /**
                     * 设置Advanced vulnerability scan configuration
                     * @param _vulRisk Advanced vulnerability scan configuration
                     * 
                     */
                    void SetVulRisk(const std::vector<TaskCenterVulRiskInputParam>& _vulRisk);

                    /**
                     * 判断参数 VulRisk 是否已赋值
                     * @return VulRisk 是否已赋值
                     * 
                     */
                    bool VulRiskHasBeenSet() const;

                    /**
                     * 获取Advanced weak password check configuration
                     * @return WeakPwdRisk Advanced weak password check configuration
                     * 
                     */
                    std::vector<TaskCenterWeakPwdRiskInputParam> GetWeakPwdRisk() const;

                    /**
                     * 设置Advanced weak password check configuration
                     * @param _weakPwdRisk Advanced weak password check configuration
                     * 
                     */
                    void SetWeakPwdRisk(const std::vector<TaskCenterWeakPwdRiskInputParam>& _weakPwdRisk);

                    /**
                     * 判断参数 WeakPwdRisk 是否已赋值
                     * @return WeakPwdRisk 是否已赋值
                     * 
                     */
                    bool WeakPwdRiskHasBeenSet() const;

                    /**
                     * 获取Advanced configuration risk scan configuration
                     * @return CFGRisk Advanced configuration risk scan configuration
                     * 
                     */
                    std::vector<TaskCenterCFGRiskInputParam> GetCFGRisk() const;

                    /**
                     * 设置Advanced configuration risk scan configuration
                     * @param _cFGRisk Advanced configuration risk scan configuration
                     * 
                     */
                    void SetCFGRisk(const std::vector<TaskCenterCFGRiskInputParam>& _cFGRisk);

                    /**
                     * 判断参数 CFGRisk 是否已赋值
                     * @return CFGRisk 是否已赋值
                     * 
                     */
                    bool CFGRiskHasBeenSet() const;

                private:

                    /**
                     * Advanced vulnerability scan configuration
                     */
                    std::vector<TaskCenterVulRiskInputParam> m_vulRisk;
                    bool m_vulRiskHasBeenSet;

                    /**
                     * Advanced weak password check configuration
                     */
                    std::vector<TaskCenterWeakPwdRiskInputParam> m_weakPwdRisk;
                    bool m_weakPwdRiskHasBeenSet;

                    /**
                     * Advanced configuration risk scan configuration
                     */
                    std::vector<TaskCenterCFGRiskInputParam> m_cFGRisk;
                    bool m_cFGRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKADVANCECFG_H_
