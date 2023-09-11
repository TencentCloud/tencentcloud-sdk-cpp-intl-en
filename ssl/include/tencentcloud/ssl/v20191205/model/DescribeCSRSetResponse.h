/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRSETRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRSETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CSRItem.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCSRSet response structure.
                */
                class DescribeCSRSetResponse : public AbstractModel
                {
                public:
                    DescribeCSRSetResponse();
                    ~DescribeCSRSetResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of CSRs.	
                     * @return Total The total number of CSRs.	
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取The list of CSRs.
                     * @return Set The list of CSRs.
                     * 
                     */
                    std::vector<CSRItem> GetSet() const;

                    /**
                     * 判断参数 Set 是否已赋值
                     * @return Set 是否已赋值
                     * 
                     */
                    bool SetHasBeenSet() const;

                private:

                    /**
                     * The total number of CSRs.	
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * The list of CSRs.
                     */
                    std::vector<CSRItem> m_set;
                    bool m_setHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRSETRESPONSE_H_
