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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEREVERSESHELLWHITELISTDETAILREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEREVERSESHELLWHITELISTDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeReverseShellWhiteListDetail request structure.
                */
                class DescribeReverseShellWhiteListDetailRequest : public AbstractModel
                {
                public:
                    DescribeReverseShellWhiteListDetailRequest();
                    ~DescribeReverseShellWhiteListDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Allowed item ID
                     * @return WhiteListId Allowed item ID
                     * 
                     */
                    std::string GetWhiteListId() const;

                    /**
                     * 设置Allowed item ID
                     * @param _whiteListId Allowed item ID
                     * 
                     */
                    void SetWhiteListId(const std::string& _whiteListId);

                    /**
                     * 判断参数 WhiteListId 是否已赋值
                     * @return WhiteListId 是否已赋值
                     * 
                     */
                    bool WhiteListIdHasBeenSet() const;

                private:

                    /**
                     * Allowed item ID
                     */
                    std::string m_whiteListId;
                    bool m_whiteListIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEREVERSESHELLWHITELISTDETAILREQUEST_H_
