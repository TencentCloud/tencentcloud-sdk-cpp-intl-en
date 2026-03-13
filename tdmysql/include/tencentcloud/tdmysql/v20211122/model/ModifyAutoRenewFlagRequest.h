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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ModifyAutoRenewFlag request structure.
                */
                class ModifyAutoRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyAutoRenewFlagRequest();
                    ~ModifyAutoRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance list that needs to be modified.
                     * @return InstanceIds Instance list that needs to be modified.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance list that needs to be modified.
                     * @param _instanceIds Instance list that needs to be modified.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取1 indicates enable automatic renewal, 0 indicates disable automatic renewal.
                     * @return AutoRenewFlag 1 indicates enable automatic renewal, 0 indicates disable automatic renewal.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置1 indicates enable automatic renewal, 0 indicates disable automatic renewal.
                     * @param _autoRenewFlag 1 indicates enable automatic renewal, 0 indicates disable automatic renewal.
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
                     * Instance list that needs to be modified.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 1 indicates enable automatic renewal, 0 indicates disable automatic renewal.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_
