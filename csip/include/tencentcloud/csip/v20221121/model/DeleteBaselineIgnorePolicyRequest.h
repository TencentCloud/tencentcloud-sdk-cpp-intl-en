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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEBASELINEIGNOREPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEBASELINEIGNOREPOLICYREQUEST_H_

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
                * DeleteBaselineIgnorePolicy request structure.
                */
                class DeleteBaselineIgnorePolicyRequest : public AbstractModel
                {
                public:
                    DeleteBaselineIgnorePolicyRequest();
                    ~DeleteBaselineIgnorePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the ignored policy record to delete.</p>
                     * @return ID <p>ID of the ignored policy record to delete.</p>
                     * 
                     */
                    std::vector<uint64_t> GetID() const;

                    /**
                     * 设置<p>ID of the ignored policy record to delete.</p>
                     * @param _iD <p>ID of the ignored policy record to delete.</p>
                     * 
                     */
                    void SetID(const std::vector<uint64_t>& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

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

                private:

                    /**
                     * <p>ID of the ignored policy record to delete.</p>
                     */
                    std::vector<uint64_t> m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEBASELINEIGNOREPOLICYREQUEST_H_
