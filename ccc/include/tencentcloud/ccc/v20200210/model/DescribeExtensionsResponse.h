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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONSRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/ExtensionInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeExtensions response structure.
                */
                class DescribeExtensionsResponse : public AbstractModel
                {
                public:
                    DescribeExtensionsResponse();
                    ~DescribeExtensionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total query count.
                     * @return Total Total query count.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Telephone information list.
                     * @return ExtensionList Telephone information list.
                     * 
                     */
                    std::vector<ExtensionInfo> GetExtensionList() const;

                    /**
                     * 判断参数 ExtensionList 是否已赋值
                     * @return ExtensionList 是否已赋值
                     * 
                     */
                    bool ExtensionListHasBeenSet() const;

                private:

                    /**
                     * Total query count.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Telephone information list.
                     */
                    std::vector<ExtensionInfo> m_extensionList;
                    bool m_extensionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONSRESPONSE_H_
