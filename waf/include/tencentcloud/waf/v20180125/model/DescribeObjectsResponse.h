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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOBJECTSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOBJECTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ClbObject.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeObjects response structure.
                */
                class DescribeObjectsResponse : public AbstractModel
                {
                public:
                    DescribeObjectsResponse();
                    ~DescribeObjectsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Object list
                     * @return ClbObjects Object list
                     * 
                     */
                    std::vector<ClbObject> GetClbObjects() const;

                    /**
                     * 判断参数 ClbObjects 是否已赋值
                     * @return ClbObjects 是否已赋值
                     * 
                     */
                    bool ClbObjectsHasBeenSet() const;

                private:

                    /**
                     * Object list
                     */
                    std::vector<ClbObject> m_clbObjects;
                    bool m_clbObjectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOBJECTSRESPONSE_H_
