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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_TRUSTMALICIOUSREQUESTREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_TRUSTMALICIOUSREQUESTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * TrustMaliciousRequest request structure.
                */
                class TrustMaliciousRequestRequest : public AbstractModel
                {
                public:
                    TrustMaliciousRequestRequest();
                    ~TrustMaliciousRequestRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Malicious request record ID.
                     * @return Id Malicious request record ID.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Malicious request record ID.
                     * @param _id Malicious request record ID.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Malicious request record ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_TRUSTMALICIOUSREQUESTREQUEST_H_
