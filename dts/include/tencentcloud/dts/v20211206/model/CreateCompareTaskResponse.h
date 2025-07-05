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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CREATECOMPARETASKRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CREATECOMPARETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * CreateCompareTask response structure.
                */
                class CreateCompareTaskResponse : public AbstractModel
                {
                public:
                    CreateCompareTaskResponse();
                    ~CreateCompareTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Data consistency check task ID in the format of `dts-8yv4w2i1-cmp-37skmii9`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CompareTaskId Data consistency check task ID in the format of `dts-8yv4w2i1-cmp-37skmii9`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     * 
                     */
                    bool CompareTaskIdHasBeenSet() const;

                private:

                    /**
                     * Data consistency check task ID in the format of `dts-8yv4w2i1-cmp-37skmii9`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CREATECOMPARETASKRESPONSE_H_
