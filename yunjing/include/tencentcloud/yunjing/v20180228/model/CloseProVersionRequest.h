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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_CLOSEPROVERSIONREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_CLOSEPROVERSIONREQUEST_H_

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
                * CloseProVersion request structure.
                */
                class CloseProVersionRequest : public AbstractModel
                {
                public:
                    CloseProVersionRequest();
                    ~CloseProVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Server `Uuid`.
`InstanceId` for BM or `Uuid` for CVM
                     * @return Quuid Server `Uuid`.
`InstanceId` for BM or `Uuid` for CVM
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Server `Uuid`.
`InstanceId` for BM or `Uuid` for CVM
                     * @param _quuid Server `Uuid`.
`InstanceId` for BM or `Uuid` for CVM
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * Server `Uuid`.
`InstanceId` for BM or `Uuid` for CVM
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_CLOSEPROVERSIONREQUEST_H_
