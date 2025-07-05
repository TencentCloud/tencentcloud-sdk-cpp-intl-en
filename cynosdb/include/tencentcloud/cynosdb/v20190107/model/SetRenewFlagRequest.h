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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SETRENEWFLAGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SETRENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * SetRenewFlag request structure.
                */
                class SetRenewFlagRequest : public AbstractModel
                {
                public:
                    SetRenewFlagRequest();
                    ~SetRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the instance to be manipulated
                     * @return ResourceIds ID of the instance to be manipulated
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置ID of the instance to be manipulated
                     * @param _resourceIds ID of the instance to be manipulated
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag. 0: normal renewal, 1: auto-renewal, 2: no renewal.
                     * @return AutoRenewFlag Auto-renewal flag. 0: normal renewal, 1: auto-renewal, 2: no renewal.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. 0: normal renewal, 1: auto-renewal, 2: no renewal.
                     * @param _autoRenewFlag Auto-renewal flag. 0: normal renewal, 1: auto-renewal, 2: no renewal.
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
                     * ID of the instance to be manipulated
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * Auto-renewal flag. 0: normal renewal, 1: auto-renewal, 2: no renewal.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SETRENEWFLAGREQUEST_H_
