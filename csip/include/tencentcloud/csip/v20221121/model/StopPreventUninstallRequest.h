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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_STOPPREVENTUNINSTALLREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_STOPPREVENTUNINSTALLREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * StopPreventUninstall request structure.
                */
                class StopPreventUninstallRequest : public AbstractModel
                {
                public:
                    StopPreventUninstallRequest();
                    ~StopPreventUninstallRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Whether to close global. 0: No. 1: Yes</p>
                     * @return StopGlobal <p>Whether to close global. 0: No. 1: Yes</p>
                     * 
                     */
                    uint64_t GetStopGlobal() const;

                    /**
                     * 设置<p>Whether to close global. 0: No. 1: Yes</p>
                     * @param _stopGlobal <p>Whether to close global. 0: No. 1: Yes</p>
                     * 
                     */
                    void SetStopGlobal(const uint64_t& _stopGlobal);

                    /**
                     * 判断参数 StopGlobal 是否已赋值
                     * @return StopGlobal 是否已赋值
                     * 
                     */
                    bool StopGlobalHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>quuid collection that is off when it is not global</p>
                     * @return Quuid <p>quuid collection that is off when it is not global</p>
                     * 
                     */
                    std::vector<std::string> GetQuuid() const;

                    /**
                     * 设置<p>quuid collection that is off when it is not global</p>
                     * @param _quuid <p>quuid collection that is off when it is not global</p>
                     * 
                     */
                    void SetQuuid(const std::vector<std::string>& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to close global. 0: No. 1: Yes</p>
                     */
                    uint64_t m_stopGlobal;
                    bool m_stopGlobalHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>quuid collection that is off when it is not global</p>
                     */
                    std::vector<std::string> m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_STOPPREVENTUNINSTALLREQUEST_H_
