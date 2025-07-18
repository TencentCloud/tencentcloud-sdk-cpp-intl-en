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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETEHOSTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETEHOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/HostDel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DeleteHost request structure.
                */
                class DeleteHostRequest : public AbstractModel
                {
                public:
                    DeleteHostRequest();
                    ~DeleteHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of domains to be deleted
                     * @return HostsDel List of domains to be deleted
                     * 
                     */
                    std::vector<HostDel> GetHostsDel() const;

                    /**
                     * 设置List of domains to be deleted
                     * @param _hostsDel List of domains to be deleted
                     * 
                     */
                    void SetHostsDel(const std::vector<HostDel>& _hostsDel);

                    /**
                     * 判断参数 HostsDel 是否已赋值
                     * @return HostsDel 是否已赋值
                     * 
                     */
                    bool HostsDelHasBeenSet() const;

                private:

                    /**
                     * List of domains to be deleted
                     */
                    std::vector<HostDel> m_hostsDel;
                    bool m_hostsDelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETEHOSTREQUEST_H_
