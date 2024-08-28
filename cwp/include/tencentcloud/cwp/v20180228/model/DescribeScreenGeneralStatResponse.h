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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENGENERALSTATRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENGENERALSTATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ScreenNameValue.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeScreenGeneralStat response structure.
                */
                class DescribeScreenGeneralStatResponse : public AbstractModel
                {
                public:
                    DescribeScreenGeneralStatResponse();
                    ~DescribeScreenGeneralStatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Value of name: online, shutdown/offline, not installed
Value: indicates the corresponding quantity
                     * @return Machines Value of name: online, shutdown/offline, not installed
Value: indicates the corresponding quantity
                     * 
                     */
                    std::vector<ScreenNameValue> GetMachines() const;

                    /**
                     * 判断参数 Machines 是否已赋值
                     * @return Machines 是否已赋值
                     * 
                     */
                    bool MachinesHasBeenSet() const;

                    /**
                     * 获取Value of name: Ultimate Edition, Pro Edition, Basic Edition
Value: indicates the corresponding number
                     * @return Protection Value of name: Ultimate Edition, Pro Edition, Basic Edition
Value: indicates the corresponding number
                     * 
                     */
                    std::vector<ScreenNameValue> GetProtection() const;

                    /**
                     * 判断参数 Protection 是否已赋值
                     * @return Protection 是否已赋值
                     * 
                     */
                    bool ProtectionHasBeenSet() const;

                private:

                    /**
                     * Value of name: online, shutdown/offline, not installed
Value: indicates the corresponding quantity
                     */
                    std::vector<ScreenNameValue> m_machines;
                    bool m_machinesHasBeenSet;

                    /**
                     * Value of name: Ultimate Edition, Pro Edition, Basic Edition
Value: indicates the corresponding number
                     */
                    std::vector<ScreenNameValue> m_protection;
                    bool m_protectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENGENERALSTATRESPONSE_H_
