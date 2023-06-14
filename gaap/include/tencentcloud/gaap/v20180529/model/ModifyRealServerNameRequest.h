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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYREALSERVERNAMEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYREALSERVERNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * ModifyRealServerName request structure.
                */
                class ModifyRealServerNameRequest : public AbstractModel
                {
                public:
                    ModifyRealServerNameRequest();
                    ~ModifyRealServerNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Origin server name
                     * @return RealServerName Origin server name
                     * 
                     */
                    std::string GetRealServerName() const;

                    /**
                     * 设置Origin server name
                     * @param _realServerName Origin server name
                     * 
                     */
                    void SetRealServerName(const std::string& _realServerName);

                    /**
                     * 判断参数 RealServerName 是否已赋值
                     * @return RealServerName 是否已赋值
                     * 
                     */
                    bool RealServerNameHasBeenSet() const;

                    /**
                     * 获取Origin server ID
                     * @return RealServerId Origin server ID
                     * 
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置Origin server ID
                     * @param _realServerId Origin server ID
                     * 
                     */
                    void SetRealServerId(const std::string& _realServerId);

                    /**
                     * 判断参数 RealServerId 是否已赋值
                     * @return RealServerId 是否已赋值
                     * 
                     */
                    bool RealServerIdHasBeenSet() const;

                private:

                    /**
                     * Origin server name
                     */
                    std::string m_realServerName;
                    bool m_realServerNameHasBeenSet;

                    /**
                     * Origin server ID
                     */
                    std::string m_realServerId;
                    bool m_realServerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYREALSERVERNAMEREQUEST_H_
