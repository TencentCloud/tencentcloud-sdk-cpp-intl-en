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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPERRULEINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPERRULEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/FileTamperRuleDetail.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeFileTamperRuleInfo response structure.
                */
                class DescribeFileTamperRuleInfoResponse : public AbstractModel
                {
                public:
                    DescribeFileTamperRuleInfoResponse();
                    ~DescribeFileTamperRuleInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule details
                     * @return FileTamperRuleDetail Rule details
                     * 
                     */
                    FileTamperRuleDetail GetFileTamperRuleDetail() const;

                    /**
                     * 判断参数 FileTamperRuleDetail 是否已赋值
                     * @return FileTamperRuleDetail 是否已赋值
                     * 
                     */
                    bool FileTamperRuleDetailHasBeenSet() const;

                private:

                    /**
                     * Rule details
                     */
                    FileTamperRuleDetail m_fileTamperRuleDetail;
                    bool m_fileTamperRuleDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPERRULEINFORESPONSE_H_
