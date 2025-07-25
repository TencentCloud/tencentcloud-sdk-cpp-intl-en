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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTADDRESSUNSUBSCRIBECONFIGREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTADDRESSUNSUBSCRIBECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListAddressUnsubscribeConfig request structure.
                */
                class ListAddressUnsubscribeConfigRequest : public AbstractModel
                {
                public:
                    ListAddressUnsubscribeConfigRequest();
                    ~ListAddressUnsubscribeConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取specifies the maximum number of entries to retrieve, with a cap of 100.
                     * @return Limit specifies the maximum number of entries to retrieve, with a cap of 100.
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置specifies the maximum number of entries to retrieve, with a cap of 100.
                     * @param _limit specifies the maximum number of entries to retrieve, with a cap of 100.
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * specifies the maximum number of entries to retrieve, with a cap of 100.
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTADDRESSUNSUBSCRIBECONFIGREQUEST_H_
