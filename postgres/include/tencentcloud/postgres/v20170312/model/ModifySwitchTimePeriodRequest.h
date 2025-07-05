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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYSWITCHTIMEPERIODREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYSWITCHTIMEPERIODREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifySwitchTimePeriod request structure.
                */
                class ModifySwitchTimePeriodRequest : public AbstractModel
                {
                public:
                    ModifySwitchTimePeriodRequest();
                    ~ModifySwitchTimePeriodRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the instance waiting for a switch
                     * @return DBInstanceId The ID of the instance waiting for a switch
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置The ID of the instance waiting for a switch
                     * @param _dBInstanceId The ID of the instance waiting for a switch
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Valid value: `0` (switch immediately)
                     * @return SwitchTag Valid value: `0` (switch immediately)
                     * 
                     */
                    uint64_t GetSwitchTag() const;

                    /**
                     * 设置Valid value: `0` (switch immediately)
                     * @param _switchTag Valid value: `0` (switch immediately)
                     * 
                     */
                    void SetSwitchTag(const uint64_t& _switchTag);

                    /**
                     * 判断参数 SwitchTag 是否已赋值
                     * @return SwitchTag 是否已赋值
                     * 
                     */
                    bool SwitchTagHasBeenSet() const;

                private:

                    /**
                     * The ID of the instance waiting for a switch
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Valid value: `0` (switch immediately)
                     */
                    uint64_t m_switchTag;
                    bool m_switchTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYSWITCHTIMEPERIODREQUEST_H_
