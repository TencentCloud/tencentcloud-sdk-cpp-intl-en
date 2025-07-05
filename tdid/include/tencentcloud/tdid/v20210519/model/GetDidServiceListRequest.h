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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDSERVICELISTREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDSERVICELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetDidServiceList request structure.
                */
                class GetDidServiceListRequest : public AbstractModel
                {
                public:
                    GetDidServiceListRequest();
                    ~GetDidServiceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`1`: Return results at the network level; `0`: Return results at the service level.
                     * @return Type `1`: Return results at the network level; `0`: Return results at the service level.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置`1`: Return results at the network level; `0`: Return results at the service level.
                     * @param _type `1`: Return results at the network level; `0`: Return results at the service level.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * `1`: Return results at the network level; `0`: Return results at the service level.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDSERVICELISTREQUEST_H_
