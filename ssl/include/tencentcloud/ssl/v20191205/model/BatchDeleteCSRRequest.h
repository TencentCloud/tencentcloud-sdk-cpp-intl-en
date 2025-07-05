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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_BATCHDELETECSRREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_BATCHDELETECSRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * BatchDeleteCSR request structure.
                */
                class BatchDeleteCSRRequest : public AbstractModel
                {
                public:
                    BatchDeleteCSRRequest();
                    ~BatchDeleteCSRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The IDs of the CSRs to be deleted, 100 IDs at most.
                     * @return CSRIds The IDs of the CSRs to be deleted, 100 IDs at most.
                     * 
                     */
                    std::vector<int64_t> GetCSRIds() const;

                    /**
                     * 设置The IDs of the CSRs to be deleted, 100 IDs at most.
                     * @param _cSRIds The IDs of the CSRs to be deleted, 100 IDs at most.
                     * 
                     */
                    void SetCSRIds(const std::vector<int64_t>& _cSRIds);

                    /**
                     * 判断参数 CSRIds 是否已赋值
                     * @return CSRIds 是否已赋值
                     * 
                     */
                    bool CSRIdsHasBeenSet() const;

                private:

                    /**
                     * The IDs of the CSRs to be deleted, 100 IDs at most.
                     */
                    std::vector<int64_t> m_cSRIds;
                    bool m_cSRIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_BATCHDELETECSRREQUEST_H_
