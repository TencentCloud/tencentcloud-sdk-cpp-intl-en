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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_SETAUTORENEWFLAGREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_SETAUTORENEWFLAGREQUEST_H_

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
                * SetAutoRenewFlag request structure.
                */
                class SetAutoRenewFlagRequest : public AbstractModel
                {
                public:
                    SetAutoRenewFlagRequest();
                    ~SetAutoRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of instance IDs. Note that currently you cannot manipulate multiple instances at the same time. Only one instance ID can be passed in here.
                     * @return DBInstanceIdSet List of instance IDs. Note that currently you cannot manipulate multiple instances at the same time. Only one instance ID can be passed in here.
                     * 
                     */
                    std::vector<std::string> GetDBInstanceIdSet() const;

                    /**
                     * 设置List of instance IDs. Note that currently you cannot manipulate multiple instances at the same time. Only one instance ID can be passed in here.
                     * @param _dBInstanceIdSet List of instance IDs. Note that currently you cannot manipulate multiple instances at the same time. Only one instance ID can be passed in here.
                     * 
                     */
                    void SetDBInstanceIdSet(const std::vector<std::string>& _dBInstanceIdSet);

                    /**
                     * 判断参数 DBInstanceIdSet 是否已赋值
                     * @return DBInstanceIdSet 是否已赋值
                     * 
                     */
                    bool DBInstanceIdSetHasBeenSet() const;

                    /**
                     * 获取Renewal flag. 0: normal renewal, 1: auto-renewal, 2: no renewal upon expiration
                     * @return AutoRenewFlag Renewal flag. 0: normal renewal, 1: auto-renewal, 2: no renewal upon expiration
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Renewal flag. 0: normal renewal, 1: auto-renewal, 2: no renewal upon expiration
                     * @param _autoRenewFlag Renewal flag. 0: normal renewal, 1: auto-renewal, 2: no renewal upon expiration
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * List of instance IDs. Note that currently you cannot manipulate multiple instances at the same time. Only one instance ID can be passed in here.
                     */
                    std::vector<std::string> m_dBInstanceIdSet;
                    bool m_dBInstanceIdSetHasBeenSet;

                    /**
                     * Renewal flag. 0: normal renewal, 1: auto-renewal, 2: no renewal upon expiration
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SETAUTORENEWFLAGREQUEST_H_
