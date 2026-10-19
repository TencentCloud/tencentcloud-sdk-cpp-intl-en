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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETECOSPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETECOSPOLICYREQUEST_H_

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
                * DeleteCosPolicy request structure.
                */
                class DeleteCosPolicyRequest : public AbstractModel
                {
                public:
                    DeleteCosPolicyRequest();
                    ~DeleteCosPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Collection of policies to delete
                     * @return PolicyIdSet Collection of policies to delete
                     * 
                     */
                    std::vector<int64_t> GetPolicyIdSet() const;

                    /**
                     * 设置Collection of policies to delete
                     * @param _policyIdSet Collection of policies to delete
                     * 
                     */
                    void SetPolicyIdSet(const std::vector<int64_t>& _policyIdSet);

                    /**
                     * 判断参数 PolicyIdSet 是否已赋值
                     * @return PolicyIdSet 是否已赋值
                     * 
                     */
                    bool PolicyIdSetHasBeenSet() const;

                    /**
                     * 获取Delete all or not
                     * @return IsDeleteAll Delete all or not
                     * 
                     */
                    int64_t GetIsDeleteAll() const;

                    /**
                     * 设置Delete all or not
                     * @param _isDeleteAll Delete all or not
                     * 
                     */
                    void SetIsDeleteAll(const int64_t& _isDeleteAll);

                    /**
                     * 判断参数 IsDeleteAll 是否已赋值
                     * @return IsDeleteAll 是否已赋值
                     * 
                     */
                    bool IsDeleteAllHasBeenSet() const;

                private:

                    /**
                     * Collection of policies to delete
                     */
                    std::vector<int64_t> m_policyIdSet;
                    bool m_policyIdSetHasBeenSet;

                    /**
                     * Delete all or not
                     */
                    int64_t m_isDeleteAll;
                    bool m_isDeleteAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETECOSPOLICYREQUEST_H_
