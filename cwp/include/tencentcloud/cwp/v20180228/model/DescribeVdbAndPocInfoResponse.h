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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVDBANDPOCINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVDBANDPOCINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVdbAndPocInfo response structure.
                */
                class DescribeVdbAndPocInfoResponse : public AbstractModel
                {
                public:
                    DescribeVdbAndPocInfoResponse();
                    ~DescribeVdbAndPocInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Virus database update time
                     * @return VdbUpdateTime Virus database update time
                     * 
                     */
                    std::string GetVdbUpdateTime() const;

                    /**
                     * 判断参数 VdbUpdateTime 是否已赋值
                     * @return VdbUpdateTime 是否已赋值
                     * 
                     */
                    bool VdbUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Vulnerability database update time
                     * @return PocUpdateTime Vulnerability database update time
                     * 
                     */
                    std::string GetPocUpdateTime() const;

                    /**
                     * 判断参数 PocUpdateTime 是否已赋值
                     * @return PocUpdateTime 是否已赋值
                     * 
                     */
                    bool PocUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Virus database update time
                     */
                    std::string m_vdbUpdateTime;
                    bool m_vdbUpdateTimeHasBeenSet;

                    /**
                     * Vulnerability database update time
                     */
                    std::string m_pocUpdateTime;
                    bool m_pocUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVDBANDPOCINFORESPONSE_H_
