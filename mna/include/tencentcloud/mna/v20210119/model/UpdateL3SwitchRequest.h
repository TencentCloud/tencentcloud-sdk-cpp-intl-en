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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEL3SWITCHREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEL3SWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * UpdateL3Switch request structure.
                */
                class UpdateL3SwitchRequest : public AbstractModel
                {
                public:
                    UpdateL3SwitchRequest();
                    ~UpdateL3SwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Interconnection rule ID
                     * @return L3ConnId Interconnection rule ID
                     * 
                     */
                    std::string GetL3ConnId() const;

                    /**
                     * 设置Interconnection rule ID
                     * @param _l3ConnId Interconnection rule ID
                     * 
                     */
                    void SetL3ConnId(const std::string& _l3ConnId);

                    /**
                     * 判断参数 L3ConnId 是否已赋值
                     * @return L3ConnId 是否已赋值
                     * 
                     */
                    bool L3ConnIdHasBeenSet() const;

                    /**
                     * 获取Interconnection rule switch
                     * @return Enable Interconnection rule switch
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Interconnection rule switch
                     * @param _enable Interconnection rule switch
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * Interconnection rule ID
                     */
                    std::string m_l3ConnId;
                    bool m_l3ConnIdHasBeenSet;

                    /**
                     * Interconnection rule switch
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEL3SWITCHREQUEST_H_
